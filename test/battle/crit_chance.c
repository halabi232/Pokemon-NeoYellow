#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(B_CRIT_CHANCE >= GEN_7);
}

SINGLE_BATTLE_TEST("Side effected by Lucky Chant blocks critical hits")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_LUCKY_CHANT].effect == EFFECT_LUCKY_CHANT);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_LUCKY_CHANT); MOVE(player, MOVE_TACKLE, criticalHit: TRUE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        NOT MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Battle Armor and Shell Armor block critical hits")
{
    u32 species;
    u32 ability;

    PARAMETRIZE { species = SPECIES_KINGLER; ability = ABILITY_SHELL_ARMOR; }
    PARAMETRIZE { species = SPECIES_ARMALDO; ability = ABILITY_BATTLE_ARMOR; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, criticalHit: TRUE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        NOT MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Flag ignoresTargetAbility ignores Battle Armor and Shell Armor")
{
    u32 species;
    u32 ability;

    PARAMETRIZE { species = SPECIES_KINGLER; ability = ABILITY_SHELL_ARMOR; }
    PARAMETRIZE { species = SPECIES_ARMALDO; ability = ABILITY_BATTLE_ARMOR; }

    GIVEN {
        ASSUME(gBattleMoves[MOVE_SUNSTEEL_STRIKE].ignoresTargetAbility == TRUE);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_SUNSTEEL_STRIKE, criticalHit: TRUE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUNSTEEL_STRIKE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Mold Breaker, Teravolt and Turboblaze ignore Battle Armor and Shell Armor")
{
    u32 j;
    static const u32 pokemonPlayer[][2] =
    {
        {SPECIES_PINSIR, ABILITY_MOLD_BREAKER},
        {SPECIES_ZEKROM, ABILITY_TERAVOLT},
        {SPECIES_KYUREM_WHITE,  ABILITY_TURBOBLAZE},
    };

    u32 speciesPlayer;
    u32 abilityPlayer;
    u32 speciesOpponent;
    u32 abilityOpponent;

    for (j = 0; j < ARRAY_COUNT(pokemonPlayer); j++)
    {
        PARAMETRIZE {
            speciesPlayer = pokemonPlayer[j][0];
            abilityPlayer = pokemonPlayer[j][1];
            speciesOpponent = SPECIES_KINGLER;
            abilityOpponent = ABILITY_SHELL_ARMOR;
        }

        PARAMETRIZE {
            speciesPlayer = pokemonPlayer[j][0];
            abilityPlayer = pokemonPlayer[j][1];
            speciesOpponent = SPECIES_ARMALDO;
            abilityOpponent = ABILITY_BATTLE_ARMOR;
        }
    }

    GIVEN {
        PLAYER(speciesPlayer) { Ability(abilityPlayer); }
        OPPONENT(speciesOpponent) { Ability(abilityOpponent); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, criticalHit: TRUE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("User effected by Laser Focus causes moves to result in a critical hit")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_LASER_FOCUS].effect == EFFECT_LASER_FOCUS);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_LASER_FOCUS); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_LASER_FOCUS, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("If the target is poisoned the ability Merciless causes a move to result in a critical hit")
{
    GIVEN {
        PLAYER(SPECIES_MAREANIE) { Ability(ABILITY_MERCILESS); }
        OPPONENT(SPECIES_WOBBUFFET) { Status1(STATUS1_POISON); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Focus Energy increases the user's critical hit ratio by two stage")
{
    PASSES_RANDOMLY(1, 2, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(gBattleMoves[MOVE_FOCUS_ENERGY].effect == EFFECT_FOCUS_ENERGY);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_FOCUS_ENERGY); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FOCUS_ENERGY, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Flag highCritRatio increases the critical hit ratio by one stage")
{
    PASSES_RANDOMLY(1, 8, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(gBattleMoves[MOVE_SLASH].highCritRatio == TRUE);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SLASH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SLASH, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Super Luck increases the critical hit ratio by one stage")
{
    PASSES_RANDOMLY(1, 8, RNG_CRITICAL_HIT);
    GIVEN {
        PLAYER(SPECIES_TOGEPI) { Ability(ABILITY_SUPER_LUCK); };
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Scope Lens increases the critical hit ratio by one stage")
{
    PASSES_RANDOMLY(1, 8, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(gItems[ITEM_SCOPE_LENS].holdEffect == HOLD_EFFECT_SCOPE_LENS);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_SCOPE_LENS); };
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Flag highCritRatio, Super Luck and Scope Lens cause the move to result in a critical hit")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_SLASH].highCritRatio == TRUE);
        ASSUME(gItems[ITEM_SCOPE_LENS].holdEffect == HOLD_EFFECT_SCOPE_LENS);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_SUPER_LUCK); Item(ITEM_SCOPE_LENS); };
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SLASH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SLASH, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Signature items Leek and Lucky Punch increase the critical hit ratio by 2 stages")
{
    u32 species;
    u32 item;

    ASSUME(B_CRIT_CHANCE >= GEN_7);
    PASSES_RANDOMLY(1, 2, RNG_CRITICAL_HIT);

    PARAMETRIZE { species = SPECIES_FARFETCHD; item = ITEM_STICK; }
    PARAMETRIZE { species = SPECIES_FARFETCHD_GALARIAN; item = ITEM_STICK; }
    PARAMETRIZE { species = SPECIES_SIRFETCHD; item = ITEM_STICK; }
    PARAMETRIZE { species = SPECIES_CHANSEY; item = ITEM_LUCKY_PUNCH; }

    GIVEN {
        ASSUME(gItems[ITEM_STICK].holdEffect == HOLD_EFFECT_LEEK);
        ASSUME(gItems[ITEM_LUCKY_PUNCH].holdEffect == HOLD_EFFECT_LUCKY_PUNCH);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(species) { Item(item); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Dire Hit increases a battler's critical hit chance by 2 stages")
{
    PASSES_RANDOMLY(1, 2, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(gItems[ITEM_DIRE_HIT].battleUsage == EFFECT_ITEM_SET_FOCUS_ENERGY);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { USE_ITEM(player, ITEM_DIRE_HIT, partyIndex: 0); }
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FOCUS_ENERGY, player);
        MESSAGE("Wobbuffet used Dire Hit to get pumped!");
        MESSAGE("Wobbuffet used Scratch!");
        MESSAGE("A critical hit!");
    }
}
