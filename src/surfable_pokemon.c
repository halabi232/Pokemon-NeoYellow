#include "global.h"
#include "event_object_movement.h"
#include "field_effect.h"
#include "field_effect_helpers.h"
#include "field_player_avatar.h"
#include "main.h"
#include "party_menu.h"
#include "sprite.h"
#include "constants/moves.h"
#include "constants/species.h"

extern const struct OamData gEventObjectBaseOam_32x32;
extern const struct OamData gEventObjectBaseOam_64x64;
extern const struct SpriteTemplate *const gFieldEffectObjectTemplatePointers[];

extern void sub_81556B0(struct EventObject *eventObject, struct Sprite *sprite);
extern void sub_81556E8(struct EventObject *eventObject, struct Sprite *sprite);

static void CreateOverlaySprite(void);
static void UpdateSurfMonOverlay(struct Sprite *sprite);

struct RideablePokemon
{
    u16 species;
    u8 trainerPose;
};

#include "data/field_event_obj/surfable_pokemon.h"
#include "data/field_event_obj/surfable_pokemon_graphics.h"
#include "data/field_event_obj/surfable_pokemon_pic_tables.h"
#include "data/field_event_obj/surfable_pokemon_templates.h"

static EWRAM_DATA u16 sCurrentSurfMon = {0};

static u16 GetSurfMonSpecies(void)
{
    u8 i;

    for (i = 0; i < 6; i++)
    {
        if (pokemon_has_move(&gPlayerParty[i], MOVE_SURF))
        {
            u16 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES);
            return species;
        }
    }
    return 0xFFFF;
}

static u16 GetSurfablePokemonSprite(void)
{
    u8 i;
    u16 mon = GetSurfMonSpecies();

    for (i = 0; i < ARRAY_COUNT(gSurfablePokemon); i++)
    {
        if (mon == gSurfablePokemon[i].species)
            return i;
    }
    return 0xFFFF;
}

static void LoadSurfOverworldPalette(void)
{
    u8 i;

    for (i = 0; i < 6; i++)
        if (pokemon_has_move(&gPlayerParty[i], MOVE_SURF))
            break;

    if (IsMonShiny(&gPlayerParty[i]) == TRUE)
        LoadSpritePalette(&sSurfablePokemonShinyPalettes[sCurrentSurfMon]);
    else
        LoadSpritePalette(&sSurfablePokemonPalettes[sCurrentSurfMon]);
}

u32 CreateSurfablePokemonSprite(void)
{
    u8 spriteId;
    struct Sprite *sprite;

    sub_80930E0((s16 *)&gFieldEffectArguments[0], (s16 *)&gFieldEffectArguments[1], 8, 8);

    sCurrentSurfMon = GetSurfablePokemonSprite();
    if (sCurrentSurfMon != 0xFFFF)
    {
        LoadSurfOverworldPalette();
        spriteId = CreateSpriteAtEnd(&gSurfablePokemonOverworldSprites[sCurrentSurfMon], gFieldEffectArguments[0], gFieldEffectArguments[1], 0x96);
        if (gSurfablePokemonOverlaySprites[sCurrentSurfMon].tileTag == 0xFFFF)
        {
            CreateOverlaySprite();
        }
    }
    else
    { // Create surf blob
        LoadFieldEffectPalette(7);
        spriteId = CreateSpriteAtEnd(gFieldEffectObjectTemplatePointers[7], gFieldEffectArguments[0], gFieldEffectArguments[1], 0x96);
    }

    if (spriteId != MAX_SPRITES)
    {
        sprite = &gSprites[spriteId];
        sprite->coordOffsetEnabled = TRUE;
        sprite->data[2] = gFieldEffectArguments[2];
        sprite->data[3] = -1;
        sprite->data[6] = -1;
        sprite->data[7] = -1;
    }
    FieldEffectActiveListRemove(FLDEFF_SURF_BLOB);
    return spriteId;
}

static void CreateOverlaySprite(void)
{
    u8 overlaySprite;
    struct Sprite *sprite;

    overlaySprite = CreateSpriteAtEnd(&gSurfablePokemonOverlaySprites[sCurrentSurfMon], gFieldEffectArguments[0], gFieldEffectArguments[1], 0x96);

    if (overlaySprite != MAX_SPRITES)
    {
        sprite = &gSprites[overlaySprite];
        sprite->coordOffsetEnabled = TRUE;
        sprite->data[2] = gFieldEffectArguments[2];
        sprite->data[3] = -1;
        sprite->data[6] = -1;
        sprite->data[7] = -1;
        sprite->oam.priority = 1;
    }
    sub_81555AC(overlaySprite, 1);
}

static void UpdateSurfMonOverlay(struct Sprite *sprite)
{
    struct EventObject *eventObject;
    struct Sprite *linkedSprite;

    eventObject = &gEventObjects[gPlayerAvatar.eventObjectId];
    linkedSprite = &gSprites[eventObject->spriteId];

    sub_81556B0(eventObject, sprite);
    sub_81556E8(eventObject, sprite);

    if (linkedSprite->animNum < 20)
    {
        sprite->pos1.x = linkedSprite->pos1.x;
        sprite->pos1.y = linkedSprite->pos1.y + 8;
        sprite->pos2.y = linkedSprite->pos2.y;
    }
    if (!(gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_SURFING))
        DestroySprite(sprite);
}
