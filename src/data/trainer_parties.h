//#define generic_spread              ((const u8[6]){ hp, atk, def, spatk, spdef, speed}
#define EVEN_SPREAD                   ((const u8[6]){  85,  85,  85,  85,  85,  85})
      
//2 Major Stats Spreads                               hp  atk  def spatk spdef speed
#define HP_ATK_SPREAD                 ((const u8[6]){ 252, 252,   6,   0,   0,   0})
#define HP_DEF_SPREAD                 ((const u8[6]){ 252,   0, 252,   0,   6,   0})
#define HP_SPATK_SPREAD               ((const u8[6]){ 252,   0,   0, 252,   6,   0})
#define HP_SPDEF_SPREAD               ((const u8[6]){ 252,   0,   6,   0, 252,   0})
#define HP_SPEED_SPREAD               ((const u8[6]){ 252,   0,   6,   0,   0, 252})
#define ATK_DEF_SPREAD                ((const u8[6]){   6, 252, 252,   0,   0,   0})
#define ATK_SPATK_SPREAD              ((const u8[6]){   0, 252,   0, 252,   0,   0})
#define ATK_SPDEF_SPREAD              ((const u8[6]){   6, 252,   0,   0, 252,   0})
#define ATK_SPEED_SPREAD              ((const u8[6]){   6, 252,   0,   0,   0, 252})
#define DEF_SPATK_SPREAD              ((const u8[6]){   6,   0, 252, 252,   6,   0})
#define DEF_SPDEF_SPREAD              ((const u8[6]){   6,   0, 252,   0, 252,   0})
#define DEF_SPEED_SPREAD              ((const u8[6]){   6,   0, 252,   0,   0, 252})
#define SPATK_SPDEF_SPREAD            ((const u8[6]){   6,   0,   6, 252, 252,   0})
#define SPATK_SPEED_SPREAD            ((const u8[6]){   6,   0,   0, 252,   0, 252})
#define SPDEF_SPEED_SPREAD            ((const u8[6]){   6,   0,   0,   0, 252, 252})
      
//3 Stats Spreads - HP Highest                        hp  atk  def spatk spdef speed
#define HP_ATK_DEF_SPREAD             ((const u8[6]){ 254, 128,   0,   0,   0,   0})
#define HP_ATK_SPATK_SPREAD           ((const u8[6]){ 254, 128,   0,   0,   0,   0})
#define HP_ATK_SPDEF_SPREAD           ((const u8[6]){ 254, 128,   0,   0,   0,   0})
#define HP_ATK_SPEED_SPREAD           ((const u8[6]){ 254, 128,   0,   0,   0,   0})
#define HP_DEF_SPATK_SPREAD           ((const u8[6]){ 254,   0, 128, 128,   0,   0})
#define HP_DEF_SPDEF_SPREAD           ((const u8[6]){ 254,   0, 128,   0, 128,   0})
#define HP_DEF_SPEED_SPREAD           ((const u8[6]){ 254,   0, 128,   0,   0, 128})
#define HP_SPATK_SPDEF_SPREAD         ((const u8[6]){ 254,   0,   0, 128, 128,   0})
#define HP_SPATK_SPEED_SPREAD         ((const u8[6]){ 254,   0,   0, 128,   0, 128})
#define HP_SPDEF_SPEED_SPREAD         ((const u8[6]){ 254,   0,   0,   0, 128, 128})
      
//3 Stats Spreads - Atk Highest                       hp  atk  def spatk spdef speed
#define ATK_HP_DEF_SPREAD             ((const u8[6]){ 128, 254,   0,   0,   0,   0})
#define ATK_HP_SPATK_SPREAD           ((const u8[6]){ 128, 254,   0,   0,   0,   0})
#define ATK_HP_SPDEF_SPREAD           ((const u8[6]){ 128, 254,   0,   0,   0,   0})
#define ATK_HP_SPEED_SPREAD           ((const u8[6]){ 128, 254,   0,   0,   0,   0})
#define ATK_DEF_SPATK_SPREAD          ((const u8[6]){   0, 254, 128,   0,   0,   0})
#define ATK_DEF_SPDEF_SPREAD          ((const u8[6]){   0, 254, 128,   0,   0,   0})
#define ATK_DEF_SPEED_SPREAD          ((const u8[6]){   0, 254, 128,   0,   0,   0})
#define ATK_SPATK_SPDEF_SPREAD        ((const u8[6]){   0, 254,   0, 128,   0,   0})
#define ATK_SPATK_SPEED_SPREAD        ((const u8[6]){   0, 254,   0, 128,   0,   0})
#define ATK_SPDEF_SPEED_SPREAD        ((const u8[6]){   0, 254,   0,   0, 128, 128})
      
//3 Stats Spreads - Def Highest                       hp  atk  def spatk spdef speed
#define DEF_HP_ATK_SPREAD             ((const u8[6]){ 128,   0, 254,   0,   0,   0})   
#define DEF_HP_SPATK_SPREAD           ((const u8[6]){ 128,   0, 254,   0,   0,   0})
#define DEF_HP_SPDEF_SPREAD           ((const u8[6]){ 128,   0, 254,   0,   0,   0})
#define DEF_HP_SPEED_SPREAD           ((const u8[6]){ 128,   0, 254,   0,   0,   0})
#define DEF_ATK_SPATK_SPREAD          ((const u8[6]){   0, 128, 254,   0,   0,   0})
#define DEF_ATK_SPDEF_SPREAD          ((const u8[6]){   0, 128, 254,   0,   0,   0})
#define DEF_ATK_SPEED_SPREAD          ((const u8[6]){   0, 128, 254,   0,   0,   0})
#define DEF_SPATK_SPDEF_SPREAD        ((const u8[6]){   0,   0, 254, 128,   0,   0})
#define DEF_SPATK_SPEED_SPREAD        ((const u8[6]){   0,   0, 254, 128,   0,   0})
#define DEF_SPDEF_SPEED_SPREAD        ((const u8[6]){   0,   0, 254,   0, 128, 128})
      
//3 Stats Spreads - Spatk Highest                     hp  atk  def spatk spdef speed
#define SPATK_HP_ATK_SPREAD           ((const u8[6]){ 128,   0,   0, 254,   0,   0})
#define SPATK_HP_DEF_SPREAD           ((const u8[6]){ 128,   0,   0, 254,   0,   0})
#define SPATK_HP_SPDEF_SPREAD         ((const u8[6]){ 128,   0,   0, 254,   0,   0})
#define SPATK_HP_SPEED_SPREAD         ((const u8[6]){ 128,   0,   0, 254,   0,   0})
#define SPATK_ATK_DEF_SPREAD          ((const u8[6]){   0, 128,   0, 254,   0,   0})
#define SPATK_ATK_SPDEF_SPREAD        ((const u8[6]){   0, 128,   0, 254,   0,   0})
#define SPATK_ATK_SPEED_SPREAD        ((const u8[6]){   0, 128,   0, 254,   0,   0})
#define SPATK_DEF_SPDEF_SPREAD        ((const u8[6]){   0,   0, 128, 254,   0,   0})
#define SPATK_DEF_SPEED_SPREAD        ((const u8[6]){   0,   0, 128, 254,   0,   0})
#define SPATK_SPDEF_SPEED_SPREAD      ((const u8[6]){   0,   0,   0, 254, 128, 128})
      
//3 Stats Spreads - Spdef Highest                     hp  atk  def spatk spdef speed
#define SPDEF_HP_ATK_SPREAD           ((const u8[6]){ 128,   0,   0,   0, 254,   0})
#define SPDEF_HP_DEF_SPREAD           ((const u8[6]){ 128,   0,   0,   0, 254,   0})
#define SPDEF_HP_SPATK_SPREAD         ((const u8[6]){ 128,   0,   0,   0, 254,   0})
#define SPDEF_HP_SPEED_SPREAD         ((const u8[6]){ 128,   0,   0,   0, 254,   0})
#define SPDEF_ATK_DEF_SPREAD          ((const u8[6]){   0, 128,   0,   0, 254,   0})
#define SPDEF_ATK_SPATK_SPREAD        ((const u8[6]){   0, 128,   0,   0, 254,   0})
#define SPDEF_ATK_SPEED_SPREAD        ((const u8[6]){   0, 128,   0,   0, 254,   0})
#define SPDEF_DEF_SPATK_SPREAD        ((const u8[6]){   0,   0, 128,   0, 254,   0})
#define SPDEF_DEF_SPEED_SPREAD        ((const u8[6]){   0,   0, 128,   0, 254,   0})
#define SPDEF_SPATK_SPEED_SPREAD      ((const u8[6]){   0,   0,   0, 128, 254, 128})
      
//3 Stats Spreads - Speed Highest                     hp  atk  def spatk spdef speed
#define SPEED_HP_ATK_SPREAD           ((const u8[6]){ 128,   0,   0,   0,   0, 254})
#define SPEED_HP_DEF_SPREAD           ((const u8[6]){ 128,   0,   0,   0,   0, 254})
#define SPEED_HP_SPATK_SPREAD         ((const u8[6]){ 128,   0,   0,   0,   0, 254})
#define SPEED_HP_SPDEF_SPREAD         ((const u8[6]){ 128,   0,   0,   0,   0, 254})
#define SPEED_ATK_DEF_SPREAD          ((const u8[6]){   0, 128,   0,   0,   0, 254})
#define SPEED_ATK_SPATK_SPREAD        ((const u8[6]){   0, 128,   0,   0,   0, 254})
#define SPEED_ATK_SPDEF_SPREAD        ((const u8[6]){   0, 128,   0,   0,   0, 254})
#define SPEED_SPATK_DEF_SPREAD        ((const u8[6]){   0,   0, 128,   0,   0, 254})
#define SPEED_SPATK_SPDEF_SPREAD      ((const u8[6]){   0,   0, 128,   0,   0, 254})
#define SPEED_SPDEF_DEF_SPREAD        ((const u8[6]){   0,   0,   0, 128, 128, 254})

//4 Stats Even Spreads                                hp  atk  def spatk spdef speed
#define HP_ATK_DEF_SPATK_SPREAD       ((const u8[6]){ 127, 127, 127, 127,   0,   0})
#define HP_ATK_DEF_SPDEF_SPREAD       ((const u8[6]){ 127, 127, 127,   0, 127,   0})
#define HP_ATK_DEF_SPEED_SPREAD       ((const u8[6]){ 127, 127, 127,   0,   0, 127})
#define HP_ATK_SPATK_SPDEF_SPREAD     ((const u8[6]){ 127, 127,   0, 127, 127,   0})
#define HP_ATK_SPATK_SPEED_SPREAD     ((const u8[6]){ 127, 127,   0, 127,   0, 127})
#define HP_ATK_SPDEF_SPEED_SPREAD     ((const u8[6]){ 127, 127,   0,   0, 127, 127})
#define HP_DEF_SPATK_SPDEF_SPREAD     ((const u8[6]){ 127,   0, 127, 127, 127,   0})
#define HP_DEF_SPATK_SPEED_SPREAD     ((const u8[6]){ 127,   0, 127, 127,   0, 127})
#define HP_DEF_SPDEF_SPEED_SPREAD     ((const u8[6]){ 127,   0, 127,   0, 127, 127})
#define HP_SPATK_SPDEF_SPEED_SPREAD   ((const u8[6]){ 127,   0,   0, 127, 127, 127})    
#define ATK_DEF_SPATK_SPDEF_SPREAD    ((const u8[6]){   0, 127, 127, 127, 127,   0})
#define ATK_DEF_SPATK_SPEED_SPREAD    ((const u8[6]){   0, 127, 127, 127,   0, 127})
#define ATK_DEF_SPDEF_SPEED_SPREAD    ((const u8[6]){   0, 127, 127,   0, 127, 127})
#define ATK_SPATK_SPDEF_SPEED_SPREAD  ((const u8[6]){   0, 127,   0, 127, 127, 127})
#define DEF_SPATK_SPDEF_SPEED_SPREAD  ((const u8[6]){   0,   0, 127, 127, 127, 127})



//Emerald
static const struct TrainerMon sParty_Steven[] = {
    {
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
    .lvl = 77,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_SPIKES, MOVE_STEEL_WING}
    },
    {
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
    .lvl = 75,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
    .lvl = 76,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_EARTHQUAKE, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW}
    },
    {
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
    .lvl = 76,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
    .lvl = 76,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
    .lvl = 78,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_SHADOW_BALL}
    }
};

//Frontier Brains
static const struct TrainerMon sParty_Anabel[] = {
    {
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Tucker[] = {
    {
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Spenser[] = {
    {
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Greta[] = {
    {
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Noland[] = {
    {
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Lucy[] = {
    {
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Brandon[] = {
    {
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

//Elite Four
static const struct TrainerMon sParty_EliteFourLorelei[] = {
    
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPDEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .lvl = 76,
        .species = SPECIES_DEWGONG,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_HAIL, MOVE_SAFEGUARD},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .lvl = 77,
        .species = SPECIES_CLOYSTER,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SPIKES, MOVE_PROTECT, MOVE_HAIL, MOVE_DIVE},
    },

    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPDEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .lvl = 76,
        .species = SPECIES_JYNX,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ICE_PUNCH, MOVE_DOUBLE_SLAP, MOVE_LOVELY_KISS, MOVE_ATTRACT},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 77,
        .species = SPECIES_SLOWBRO,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_AMNESIA, MOVE_YAWN},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPDEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .lvl = 75,
        .species = SPECIES_LAPRAS,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_CONFUSE_RAY, MOVE_ICE_BEAM, MOVE_SURF, MOVE_BODY_SLAM},
    },
        {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 76,
        .species = SPECIES_GLACEON,
        .heldItem = ITEM_NONE,
        .ability = 1,
        .moves = {MOVE_HYPER_VOICE, MOVE_SHADOW_BALL, MOVE_SIGNAL_BEAM, MOVE_FROST_BREATH},
    },
};

static const struct TrainerMon sParty_EliteFourBruno[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .lvl = 76,
        .species = SPECIES_ONIX,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_IRON_TAIL, MOVE_ROAR},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 75,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SKY_UPPERCUT, MOVE_MACH_PUNCH, MOVE_ROCK_TOMB, MOVE_COUNTER},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 77,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_MEGA_KICK, MOVE_FORESIGHT, MOVE_BRICK_BREAK, MOVE_FACADE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .lvl = 76,
        .species = SPECIES_STEELIX,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_SAND_TOMB},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 75,
        .species = SPECIES_POLIWRATH,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_WATERFALL, MOVE_BODY_SLAM, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_ATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
        .lvl = 76,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_CROSS_CHOP, MOVE_BULK_UP, MOVE_SCARY_FACE, MOVE_ROCK_TOMB},
    },
};

static const struct TrainerMon sParty_EliteFourAgatha[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 77,
        .species = SPECIES_GENGAR,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_TOXIC, MOVE_DOUBLE_TEAM},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 77,
        .species = SPECIES_CROBAT,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_CONFUSE_RAY, MOVE_POISON_FANG, MOVE_AIR_CUTTER, MOVE_BITE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 76,
        .species = SPECIES_HAUNTER,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_CURSE, MOVE_MEAN_LOOK},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 77,
        .species = SPECIES_ARBOK,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SCREECH, MOVE_IRON_TAIL, MOVE_BITE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .lvl = 76,
        .species = SPECIES_WEEZING,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_EXPLOSION},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 78,
        .species = SPECIES_GENGAR,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_HYPNOSIS, MOVE_NIGHTMARE},
    },
};

static const struct TrainerMon sParty_EliteFourLance[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 78,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPER_BEAM, MOVE_DRAGON_RAGE, MOVE_TWISTER, MOVE_BITE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 78,
        .species = SPECIES_DRAGONAIR,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPER_BEAM, MOVE_SAFEGUARD, MOVE_DRAGON_RAGE, MOVE_OUTRAGE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 79,
        .species = SPECIES_DRAGONITE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPER_BEAM, MOVE_SAFEGUARD, MOVE_THUNDER_WAVE, MOVE_OUTRAGE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 78,
        .species = SPECIES_AERODACTYL,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPER_BEAM, MOVE_ANCIENT_POWER, MOVE_WING_ATTACK, MOVE_SCARY_FACE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 81,
        .species = SPECIES_DRAGONITE,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_HYPER_BEAM, MOVE_SAFEGUARD, MOVE_OUTRAGE, MOVE_WING_ATTACK},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 81,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_FLARE_BLITZ, MOVE_DRAGON_CLAW, MOVE_DRAGON_DANCE, MOVE_ROOST},
    },
};

//Elite Four Postgame
static const struct TrainerMon sParty_EliteFourLoreleiPostgame[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_ATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_DEWGONG,
        .heldItem = ITEM_CHOICE_BAND,
        .moves = {MOVE_AQUA_JET, MOVE_ICE_SHARD, MOVE_WATERFALL, MOVE_IRON_TAIL},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_ATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_CLOYSTER,
        .heldItem = ITEM_WHITE_HERB,
        .ability = 1,
        .moves = {MOVE_SHELL_SMASH, MOVE_SPIKE_CANNON, MOVE_ROCK_BLAST, MOVE_ICICLE_SPEAR},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_SLOWBRO,
        .heldItem = ITEM_SLOWBRONITE,
        .moves = {MOVE_SLACK_OFF, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_SURF},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_JYNX,
        .heldItem = ITEM_CHOICE_SPECS,
        .moves = {MOVE_FREEZE_DRY, MOVE_PSYCHIC, MOVE_BLIZZARD, MOVE_SHADOW_BALL},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_GLACEON,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = 1,
        .moves = {MOVE_HYPER_VOICE, MOVE_SHADOW_BALL, MOVE_SIGNAL_BEAM, MOVE_FROST_BREATH},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 98,
        .species = SPECIES_LAPRAS,
        .heldItem = ITEM_ASSAULT_VEST,
        .moves = {MOVE_BLIZZARD, MOVE_DRAGON_PULSE, MOVE_HYDRO_PUMP, MOVE_THUNDER},
    },
};

static const struct TrainerMon sParty_EliteFourBrunoPostgame[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .lvl = 95,
        .species = SPECIES_ANNIHILAPE,
        .heldItem = ITEM_EXPERT_BELT,
        .moves = {MOVE_SHADOW_PUNCH, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_DRAIN_PUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_HITMONCHAN,
        .ability = 1,
        .heldItem = ITEM_PROTECTIVE_PADS,
        .moves = {MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FEINT},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 95,
        .species = SPECIES_HITMONLEE,
        .ability = 1,
        .heldItem = ITEM_CHOICE_BAND,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_FEINT, MOVE_ROCK_SLIDE, MOVE_POISON_JAB},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_ATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
        .lvl = 95,
        .species = SPECIES_STEELIX,
        .heldItem = ITEM_STEELIXITE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CURSE, MOVE_HEAVY_SLAM},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_POLIWRATH,
        .heldItem = ITEM_ASSAULT_VEST,
        .moves = {MOVE_WATERFALL, MOVE_BODY_SLAM, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 98,
        .species = SPECIES_MACHAMP,
        .ability = 0,
        .heldItem = ITEM_FLAME_ORB,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH},
    },
};

static const struct TrainerMon sParty_EliteFourAgathaPostgame[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .lvl = 95,
        .species = SPECIES_ARBOK,
        .heldItem = ITEM_BLACK_SLUDGE,
        .moves = {MOVE_GLARE, MOVE_CRUNCH, MOVE_POISON_JAB, MOVE_COIL},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_GENGAR,
        .heldItem = ITEM_GENGARITE,
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_SLUDGE_BOMB, MOVE_TAUNT},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 95,
        .species = SPECIES_CROBAT,
        .heldItem = ITEM_BLACK_SLUDGE,
        .moves = {MOVE_AIR_SLASH, MOVE_CRUNCH, MOVE_POISON_FANG, MOVE_ROOST},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .lvl = 95,
        .species = SPECIES_WEEZING,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_EXPLOSION},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 98,
        .species = SPECIES_GENGAR,
        .heldItem = ITEM_CHOICE_SPECS,
        .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_ENERGY_BALL, MOVE_DAZZLING_GLEAM},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .lvl = 95,
        .species = SPECIES_UMBREON,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_MOONLIGHT, MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_SAND_ATTACK},
    },
};

static const struct TrainerMon sParty_EliteFourLancePostgame[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_WATERFALL, MOVE_IRON_TAIL, MOVE_DRAGON_DANCE, MOVE_OUTRAGE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_KINGDRA,
        .heldItem = ITEM_DAMP_ROCK,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_PULSE, MOVE_RAIN_DANCE, MOVE_BLIZZARD},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_CHARIZARDITE_X,
        .moves = {MOVE_FLARE_BLITZ, MOVE_DRAGON_CLAW, MOVE_DRAGON_DANCE, MOVE_ROOST},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 95,
        .species = SPECIES_AERODACTYL,
        .heldItem = ITEM_ASSAULT_VEST,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM, MOVE_CRUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_DRAGONITE,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_OUTRAGE, MOVE_DUAL_WINGBEAT, MOVE_ROOST, MOVE_DRAGON_DANCE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 98,
        .species = SPECIES_DRAGONITE,
        .ability = 2,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_DRAGON_DANCE, MOVE_FLY, MOVE_EARTHQUAKE, MOVE_EXTREME_SPEED},
    },
};

//Secret Battle
static const struct TrainerMon sParty_SecretBattleOak[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 100,
        .species = SPECIES_DITTO,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 100,
        .species = SPECIES_TAUROS,
        .heldItem = ITEM_LIFE_ORB,
        .ability = 2,
        .moves = {MOVE_HEADBUTT, MOVE_ROCK_SLIDE, MOVE_ZEN_HEADBUTT, MOVE_IRON_TAIL},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .lvl = 100,
        .species = SPECIES_CHANSEY,
        .heldItem = ITEM_EVIOLITE,
        .moves = {MOVE_SOFT_BOILED, MOVE_FIRE_BLAST, MOVE_SEISMIC_TOSS, MOVE_TOXIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 100,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_HOWL, MOVE_EXTREME_SPEED, MOVE_FLAMETHROWER, MOVE_CRUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_QUIET),
        .lvl = 100,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_LUM_BERRY,
        .moves = {MOVE_SLEEP_POWDER, MOVE_SOLAR_BEAM, MOVE_LEECH_SEED, MOVE_SUBSTITUTE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .lvl = 100,
        .species = SPECIES_RHYDON,
        .heldItem = ITEM_EVIOLITE,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_ROCK_BLAST},
    },
};

//Rival Battles
static const struct TrainerMon sParty_RivalFirstBattle[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), 
    .lvl = 5,
    .species = SPECIES_RIVAL_EEVEE,
    }
};

static const struct TrainerMon sParty_RivalOptionalBattle[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
    .lvl = 13,
    .species = SPECIES_PIDGEY,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), 
    .lvl = 14,
    .species = SPECIES_RIVAL_EEVEE,
    }
};

static const struct TrainerMon sParty_RivalCeruleanCity[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), 
    .lvl = 23,
    .species = SPECIES_PIDGEY,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), 
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), 
    .lvl = 25,
    .species = SPECIES_RATTATA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), 
    .lvl = 27,
    .species = SPECIES_RIVAL_EEVEE,
    .moves = {MOVE_SAND_ATTACK, MOVE_TACKLE, MOVE_QUICK_ATTACK}
    }
};

static const struct TrainerMon sParty_RivalSSAnne[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = EVEN_SPREAD,
    .lvl = 31,
    .species = SPECIES_PIDGEOTTO,
    .heldItem = ITEM_NONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = EVEN_SPREAD,
    .lvl = 32,
    .species = SPECIES_RATTATA,
    .heldItem = ITEM_NONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = EVEN_SPREAD,
    .lvl = 32,
    .species = SPECIES_SANDSHREW,
    .heldItem = ITEM_NONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = EVEN_SPREAD,
    .lvl = 35,
    .species = SPECIES_RIVAL_EEVEE,
    .heldItem = ITEM_NUGGET,
    }
};

static const struct TrainerMon sParty_RivalPokemonTowerJolteon[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .lvl = 45,
    .species = SPECIES_PIDGEOTTO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FEATHER_DANCE, MOVE_TAILWIND, MOVE_ROOST, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 43,
    .species = SPECIES_VULPIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_QUICK_ATTACK, MOVE_ROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_ATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 42,
    .species = SPECIES_SHELLDER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHELL_SMASH, MOVE_WITHDRAW, MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = EVEN_SPREAD,
    .lvl = 40,
    .species = SPECIES_SANDSHREW,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_SAND_ATTACK, MOVE_SLASH, MOVE_DIG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 44,
    .species = SPECIES_RIVAL_EEVEE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_QUICK_ATTACK, MOVE_DOUBLE_EDGE, MOVE_SAND_ATTACK, MOVE_SWIFT}
    }
};

static const struct TrainerMon sParty_RivalPokemonTowerFlareon[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .lvl = 45,
    .species = SPECIES_PIDGEOTTO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FEATHER_DANCE, MOVE_TAILWIND, MOVE_ROOST, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_ATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 42,
    .species = SPECIES_SHELLDER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHELL_SMASH, MOVE_WITHDRAW, MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 42,
    .species = SPECIES_MAGNEMITE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHOCK_WAVE, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_FLASH_CANNON}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = EVEN_SPREAD,
    .lvl = 40,
    .species = SPECIES_SANDSHREW,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_SAND_ATTACK, MOVE_SLASH, MOVE_DIG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 44,
    .species = SPECIES_RIVAL_EEVEE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_QUICK_ATTACK, MOVE_DOUBLE_EDGE, MOVE_SAND_ATTACK, MOVE_SWIFT}
    }
};

static const struct TrainerMon sParty_RivalPokemonTowerVaporeon[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .lvl = 45,
    .species = SPECIES_PIDGEOTTO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FEATHER_DANCE, MOVE_TAILWIND, MOVE_ROOST, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 43,
    .species = SPECIES_VULPIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_QUICK_ATTACK, MOVE_ROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 42,
    .species = SPECIES_MAGNEMITE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHOCK_WAVE, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_FLASH_CANNON}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = EVEN_SPREAD,
    .lvl = 40,
    .species = SPECIES_SANDSHREW,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_SAND_ATTACK, MOVE_SLASH, MOVE_DIG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 44,
    .species = SPECIES_RIVAL_EEVEE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_QUICK_ATTACK, MOVE_DOUBLE_EDGE, MOVE_SAND_ATTACK, MOVE_SWIFT}
    }
};

static const struct TrainerMon sParty_RivalSilphCoJolteon[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .lvl = 58,
    .species = SPECIES_PIDGEOTTO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FEATHER_DANCE, MOVE_TAILWIND, MOVE_ROOST, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 55,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FIRE_BLAST, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_ROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_ATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 57,
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHELL_SMASH, MOVE_ROCK_BLAST, MOVE_ICICLE_SPEAR, MOVE_AURORA_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 55,
    .species = SPECIES_KADABRA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_DISABLE, MOVE_RECOVER, MOVE_ENERGY_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 54,
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_SIGNAL_BEAM}
    }
};

static const struct TrainerMon sParty_RivalSilphCoFlareon[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .lvl = 58,
    .species = SPECIES_PIDGEOTTO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FEATHER_DANCE, MOVE_TAILWIND, MOVE_ROOST, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 57,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHOCK_WAVE, MOVE_SONIC_BOOM, MOVE_FLASH_CANNON, MOVE_SUPERSONIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_ATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 57,
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHELL_SMASH, MOVE_ROCK_BLAST, MOVE_ICICLE_SPEAR, MOVE_AURORA_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 55,
    .species = SPECIES_KADABRA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_DISABLE, MOVE_RECOVER, MOVE_ENERGY_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 54,
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAME_CHARGE, MOVE_FLARE_BLITZ, MOVE_BODY_SLAM, MOVE_STRENGTH}
    }
};

static const struct TrainerMon sParty_RivalSilphCoVaporeon[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .lvl = 58,
    .species = SPECIES_PIDGEOTTO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FEATHER_DANCE, MOVE_TAILWIND, MOVE_ROOST, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 55,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FIRE_BLAST, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_ROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 57,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHOCK_WAVE, MOVE_SONIC_BOOM, MOVE_FLASH_CANNON, MOVE_SUPERSONIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 55,
    .species = SPECIES_KADABRA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_DISABLE, MOVE_RECOVER, MOVE_ENERGY_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .lvl = 54,
    .species = SPECIES_VAPOREON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SCALD, MOVE_REST, MOVE_TOXIC, MOVE_ACID_ARMOR}
    }
};

static const struct TrainerMon sParty_RivalRoute22Jolteon[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 67,
    .species = SPECIES_PIDGEOTTO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HURRICANE, MOVE_TAILWIND, MOVE_ROOST, MOVE_OMINOUS_WIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 65,
    .species = SPECIES_EXEGGCUTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LEECH_SEED, MOVE_STUN_SPORE, MOVE_PSYBEAM, MOVE_SOLAR_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 65,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FIRE_BLAST, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_ROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_ATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 67,
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHELL_SMASH, MOVE_ROCK_BLAST, MOVE_ICICLE_SPEAR, MOVE_AURORA_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 65,
    .species = SPECIES_KADABRA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_DISABLE, MOVE_RECOVER, MOVE_ENERGY_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 64,
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_SIGNAL_BEAM}
    }
};

static const struct TrainerMon sParty_RivalRoute22Vaporeon[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 67,
    .species = SPECIES_PIDGEOTTO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HURRICANE, MOVE_TAILWIND, MOVE_ROOST, MOVE_OMINOUS_WIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 65,
    .species = SPECIES_EXEGGCUTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LEECH_SEED, MOVE_STUN_SPORE, MOVE_PSYBEAM, MOVE_SOLAR_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 65,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FIRE_BLAST, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_ROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 64,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHOCK_WAVE, MOVE_SONIC_BOOM, MOVE_FLASH_CANNON, MOVE_SUPERSONIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 65,
    .species = SPECIES_KADABRA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_DISABLE, MOVE_RECOVER, MOVE_ENERGY_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .lvl = 64,
    .species = SPECIES_VAPOREON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SCALD, MOVE_REST, MOVE_TOXIC, MOVE_ACID_ARMOR}
    }
};

static const struct TrainerMon sParty_RivalRoute22Flareon[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 67,
    .species = SPECIES_PIDGEOTTO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HURRICANE, MOVE_TAILWIND, MOVE_ROOST, MOVE_OMINOUS_WIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 65,
    .species = SPECIES_EXEGGCUTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LEECH_SEED, MOVE_STUN_SPORE, MOVE_PSYBEAM, MOVE_SOLAR_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_ATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 67,
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHELL_SMASH, MOVE_ROCK_BLAST, MOVE_ICICLE_SPEAR, MOVE_AURORA_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 64,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHOCK_WAVE, MOVE_SONIC_BOOM, MOVE_FLASH_CANNON, MOVE_SUPERSONIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 65,
    .species = SPECIES_KADABRA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_DISABLE, MOVE_RECOVER, MOVE_ENERGY_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 64,
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAME_CHARGE, MOVE_FLARE_BLITZ, MOVE_BODY_SLAM, MOVE_STRENGTH}
    }
};

static const struct TrainerMon sParty_RivalChampionJolteon[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 81,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_OMINOUS_WIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 82,
    .species = SPECIES_EXEGGUTOR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LEECH_SEED, MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_SOLAR_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 81,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_REFLECT, MOVE_ENERGY_BALL, MOVE_RECOVER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 81,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FIRE_BLAST, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 81,
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHELL_SMASH, MOVE_ROCK_BLAST, MOVE_ICICLE_SPEAR, MOVE_AURORA_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 84,
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_SIGNAL_BEAM}
    }
};

static const struct TrainerMon sParty_RivalChampionFlareon[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 81,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_NONE,
    .ability = 2,
    .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_OMINOUS_WIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 82,
    .species = SPECIES_EXEGGUTOR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LEECH_SEED, MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_SOLAR_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 81,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_REFLECT, MOVE_ENERGY_BALL, MOVE_RECOVER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 81,
    .species = SPECIES_MAGNEZONE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_SCREECH, MOVE_THUNDER_WAVE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 82,
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHELL_SMASH, MOVE_ROCK_BLAST, MOVE_ICICLE_SPEAR, MOVE_AURORA_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 84,
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAME_CHARGE, MOVE_FLARE_BLITZ, MOVE_BODY_SLAM, MOVE_STRENGTH}
    }
};

static const struct TrainerMon sParty_RivalChampionVaporeon[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 81,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_NONE,
    .ability = 2,
    .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_OMINOUS_WIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 82,
    .species = SPECIES_EXEGGUTOR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LEECH_SEED, MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_SOLAR_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 82,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_REFLECT, MOVE_ENERGY_BALL, MOVE_RECOVER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 81,
    .species = SPECIES_MAGNEZONE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_SCREECH, MOVE_THUNDER_WAVE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 82,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FIRE_BLAST, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .lvl = 84,
    .species = SPECIES_VAPOREON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SCALD, MOVE_REST, MOVE_TOXIC, MOVE_ACID_ARMOR}
    }
};

static const struct TrainerMon sParty_RivalPostGameJolteon[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 99,
    .species = SPECIES_EXEGGUTOR,
    .ability = 2,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_LEECH_SEED, MOVE_HYPNOSIS, MOVE_SUBSTITUTE, MOVE_SOLAR_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 99,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_PIDGEOTITE,
    .ability = 2,
    .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_FOCUS_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 99,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2,
    .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_RECOVER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 98,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_FIRE_BLAST, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 98,
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 1,
    .moves = {MOVE_SHELL_SMASH, MOVE_ROCK_BLAST, MOVE_ICICLE_SPEAR, MOVE_AURORA_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 100,
    .species = SPECIES_JOLTEON,
    .ability = 2,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, MOVE_SIGNAL_BEAM}
    }
};

static const struct TrainerMon sParty_RivalPostGameFlareon[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 99,
    .species = SPECIES_EXEGGUTOR,
    .ability = 2,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_LEECH_SEED, MOVE_HYPNOSIS, MOVE_SUBSTITUTE, MOVE_SOLAR_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 99,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_PIDGEOTITE,
    .ability = 2,
    .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_FOCUS_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 99,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2,
    .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_RECOVER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 99,
    .species = SPECIES_MAGNEZONE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_SCREECH, MOVE_THUNDER_WAVE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 98,
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 1,
    .moves = {MOVE_SHELL_SMASH, MOVE_ROCK_BLAST, MOVE_ICICLE_SPEAR, MOVE_AURORA_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .lvl = 100,
    .species = SPECIES_FLAREON,
    .ability = 2,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_FLAME_CHARGE, MOVE_FLARE_BLITZ, MOVE_FACADE, MOVE_STRENGTH}
    }
};

static const struct TrainerMon sParty_RivalPostGameVaporeon[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 99,
    .species = SPECIES_EXEGGUTOR,
    .ability = 2,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_LEECH_SEED, MOVE_HYPNOSIS, MOVE_SUBSTITUTE, MOVE_SOLAR_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 99,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_PIDGEOTITE,
    .ability = 2,
    .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_FOCUS_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    .lvl = 99,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2,
    .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_RECOVER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 99,
    .species = SPECIES_MAGNEZONE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_SCREECH, MOVE_THUNDER_WAVE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .lvl = 98,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_FIRE_BLAST, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
    .lvl = 100,
    .species = SPECIES_VAPOREON,
    .ability = 1,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SCALD, MOVE_REST, MOVE_TOXIC, MOVE_ACID_ARMOR}
    }
};

//New Trainers

//Viridian Forest
static const struct TrainerMon sParty_BugCatcherRick[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 12,
        .species = SPECIES_WEEDLE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 12,
        .species = SPECIES_CATERPIE,
        },
};

static const struct TrainerMon sParty_BugCatcherDoug[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 13,
        .species = SPECIES_WEEDLE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 13,
        .species = SPECIES_KAKUNA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 13,
        .species = SPECIES_WEEDLE,
        },
};

static const struct TrainerMon sParty_BugCatcherSammy[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 14,
        .species = SPECIES_WEEDLE,
        },
};

static const struct TrainerMon sParty_BugCatcherAnthony[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 13,
        .species = SPECIES_CATERPIE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 13,
        .species = SPECIES_CATERPIE,
        },
};

static const struct TrainerMon sParty_BugCatcherCharlie[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 13,
        .species = SPECIES_METAPOD,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 13,
        .species = SPECIES_CATERPIE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 13,
        .species = SPECIES_METAPOD,
        },
};

//Pewter Gym
static const struct TrainerMon sParty_CamperLiam[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 20,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_MAGNITUDE, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 21,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_SCRATCH, MOVE_DEFENSE_CURL, MOVE_SAND_ATTACK, MOVE_ROLLOUT},
    },
};

static const struct TrainerMon sParty_LeaderBrock[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .lvl = 22,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_MAGNITUDE, MOVE_ROLLOUT},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .lvl = 23,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_TAKE_DOWN},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_ATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 24,
        .species = SPECIES_ONIX,
        .moves = {MOVE_TACKLE, MOVE_BIND, MOVE_ROCK_TOMB, MOVE_SMACK_DOWN},
    },
};

static const struct TrainerMon sParty_LeaderBrockPostgame[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .lvl = 95,
        .species = SPECIES_ONIX,
        .heldItem = ITEM_EVIOLITE,
        .moves = {MOVE_STEALTH_ROCK, MOVE_ROCK_POLISH, MOVE_SMACK_DOWN, MOVE_ROCK_SLIDE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .lvl = 95,
        .species = SPECIES_GOLEM,
        .heldItem = ITEM_SMOOTH_ROCK,
        .moves = {MOVE_SANDSTORM, MOVE_ROCK_POLISH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_OMASTAR,
        .heldItem = ITEM_WHITE_HERB,
        .moves = {MOVE_SCALD, MOVE_BRINE, MOVE_ANCIENT_POWER, MOVE_SHELL_SMASH},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_KABUTOPS,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_ROCK_SLIDE, MOVE_AQUA_JET, MOVE_GIGA_DRAIN, MOVE_ENDURE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 95,
        .species = SPECIES_AERODACTYL,
        .heldItem = ITEM_AERODACTYLITE,
        .moves = {MOVE_ICE_FANG, MOVE_HONE_CLAWS, MOVE_ROCK_SLIDE, MOVE_DUAL_WINGBEAT},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = HP_ATK_SPREAD,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_RHYPERIOR,
        .heldItem = ITEM_ZOOM_LENS,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_ROCK_POLISH, MOVE_FISSURE},
    },
};

//Route 3
static const struct TrainerMon sParty_LassJanice1[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 19,
        .species = SPECIES_PIDGEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 19,
        .species = SPECIES_PIDGEY,
        },
};

static const struct TrainerMon sParty_LassJanice2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 30,
        .species = SPECIES_PIDGEOTTO,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 30,
        .species = SPECIES_PIDGEOTTO,
        },
};

static const struct TrainerMon sParty_LassJanice3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 48,
        .species = SPECIES_PIDGEOTTO,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 48,
        .species = SPECIES_PIDGEOTTO,
        },
};

static const struct TrainerMon sParty_BugCatcherColton[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 22,
        .species = SPECIES_CATERPIE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 22,
        .species = SPECIES_WEEDLE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 22,
        .species = SPECIES_CATERPIE,
        },
};

static const struct TrainerMon sParty_YoungsterBen[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 24,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 24,
        .species = SPECIES_EKANS,
        },
};

static const struct TrainerMon sParty_YoungsterBen2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 32,
        .species = SPECIES_RATICATE,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 32,
        .species = SPECIES_EKANS,
        },
};

static const struct TrainerMon sParty_YoungsterBen3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 51,
        .species = SPECIES_RATICATE,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 51,
        .species = SPECIES_ARBOK,
        },
};

static const struct TrainerMon sParty_BugCatcherGreg[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 16,
        .species = SPECIES_WEEDLE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 16,
        .species = SPECIES_KAKUNA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 16,
        .species = SPECIES_CATERPIE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 16,
        .species = SPECIES_METAPOD,
        },
};

static const struct TrainerMon sParty_YoungsterCalvin[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 19,
        .species = SPECIES_SPEAROW,
        },
};

static const struct TrainerMon sParty_LassSally[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 20,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 20,
        .species = SPECIES_NIDORAN_F,
    },
};

static const struct TrainerMon sParty_BugCatcherJames[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 16,
        .species = SPECIES_CATERPIE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 16,
        .species = SPECIES_METAPOD,
        },
};

static const struct TrainerMon sParty_LassRobin[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 24,
        .species = SPECIES_JIGGLYPUFF,
        },
};

//Route 4
static const struct TrainerMon sParty_LassCrissy[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_PARAS,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_PARAS,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_PARASECT,
        },
};

//Mt Moon
static const struct TrainerMon sParty_HikerMarcos[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 18,
        .species = SPECIES_GEODUDE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 18,
        .species = SPECIES_GEODUDE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 18,
        .species = SPECIES_ONIX,
        },
};

static const struct TrainerMon sParty_YoungsterJosh[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 18,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 18,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 18,
        .species = SPECIES_ZUBAT,
        },
};

static const struct TrainerMon sParty_LassMiriam[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 19,
        .species = SPECIES_ODDISH,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 19,
        .species = SPECIES_BELLSPROUT,
        },
};

static const struct TrainerMon sParty_LassIris[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 20,
        .species = SPECIES_CLEFAIRY,
        },
};

static const struct TrainerMon sParty_SuperNerdJovan[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 18,
        .species = SPECIES_MAGNEMITE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 18,
        .species = SPECIES_VOLTORB,
        },
};

static const struct TrainerMon sParty_BugCatcherKent[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 18,
        .species = SPECIES_WEEDLE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 18,
        .species = SPECIES_KAKUNA,
        },
};

static const struct TrainerMon sParty_BugCatcherRobby[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 16,
        .species = SPECIES_CATERPIE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 16,
        .species = SPECIES_METAPOD,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 16,
        .species = SPECIES_CATERPIE,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 20,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 21,
        .species = SPECIES_ZUBAT,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt2[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 17,
        .species = SPECIES_SANDSHREW,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 17,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 17,
        .species = SPECIES_ZUBAT,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt3[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 18,
        .species = SPECIES_ZUBAT,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 18,
        .species = SPECIES_EKANS,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt4[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 17,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 18,
        .species = SPECIES_SANDSHREW,
        },
};

static const struct TrainerMon sParty_SuperNerdMiguel[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 18,
        .species = SPECIES_GRIMER,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 18,
        .species = SPECIES_VOLTORB,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 18,
        .species = SPECIES_KOFFING,
        },
};

static const struct TrainerMon sParty_RocketDuo1[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 25,
        .species = SPECIES_EKANS,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 25,
        .species = SPECIES_MEOWTH,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 25,
        .species = SPECIES_KOFFING,
        },
};

//Cerulean City
static const struct TrainerMon sParty_TeamRocketGrunt5[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 24,
        .species = SPECIES_MACHOP,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 22,
        .species = SPECIES_DROWZEE,
        },
};
static const struct TrainerMon sParty_PicnickerDiana[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 33,
        .species = SPECIES_GOLDEEN,
        },
};
static const struct TrainerMon sParty_SwimmerMaleLuis[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 31,
        .species = SPECIES_HORSEA,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 31,
        .species = SPECIES_SHELLDER,
        },
};
static const struct TrainerMon sParty_LeaderMisty[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 34,
        .species = SPECIES_STARYU,
        .moves = {MOVE_TACKLE, MOVE_HARDEN, MOVE_RECOVER, MOVE_WATER_PULSE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 35,
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SWIFT, MOVE_RECOVER, MOVE_RAPID_SPIN, MOVE_WATER_PULSE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 34,
        .species = SPECIES_SEADRA,
        .moves = {MOVE_TWISTER, MOVE_SCALD, MOVE_AGILITY, MOVE_WATER_PULSE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 33,
        .species = SPECIES_PSYDUCK,
        .moves = {MOVE_CONFUSION, MOVE_RAIN_DANCE, MOVE_DISABLE, MOVE_WATER_PULSE},
    },
};
static const struct TrainerMon sParty_LeaderMistyPostgame[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_STARMIE,
        .heldItem = ITEM_CHOICE_SPECS,
        .moves = {MOVE_PSYCHIC, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = EVEN_SPREAD,
        .lvl = 95,
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_BLIZZARD, MOVE_FOCUS_BLAST, MOVE_AQUA_JET, MOVE_HONE_CLAWS},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_SEAKING,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_MEGAHORN, MOVE_WATERFALL, MOVE_POISON_JAB, MOVE_AGILITY},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPDEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .lvl = 95,
        .species = SPECIES_LAPRAS,
        .heldItem = ITEM_ASSAULT_VEST,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_DRAGON_PULSE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = SPATK_SPEED_SPREAD,
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_KINGDRA,
        .ability = 0,
        .heldItem = ITEM_DAMP_ROCK,
        .moves = {MOVE_RAIN_DANCE, MOVE_SCALD, MOVE_DRAGON_PULSE, MOVE_BLIZZARD},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_BLASTOISE,
        .heldItem = ITEM_BLASTOISINITE,
        .moves = {MOVE_FLASH_CANNON, MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_IRON_DEFENSE},
    },
};

//Route 24
static const struct TrainerMon sParty_CamperShane1[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 22,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 23,
        .species = SPECIES_EKANS,
        },
};
static const struct TrainerMon sParty_CamperShane2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 28,
        .species = SPECIES_RATICATE,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 28,
        .species = SPECIES_ARBOK,
        },
};
static const struct TrainerMon sParty_CamperShane3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 44,
        .species = SPECIES_RATICATE,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 44,
        .species = SPECIES_ARBOK,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 44,
        .species = SPECIES_MACHAMP,
        },
};
static const struct TrainerMon sParty_BugCatcherCale[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 17,
        .species = SPECIES_CATERPIE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 17,
        .species = SPECIES_WEEDLE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 17,
        .species = SPECIES_METAPOD,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 17,
        .species = SPECIES_KAKUNA,
        },
};
static const struct TrainerMon sParty_LassAli[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 22,
        .species = SPECIES_PIDGEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 22,
        .species = SPECIES_ODDISH,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 22,
        .species = SPECIES_BELLSPROUT,
        },
};
static const struct TrainerMon sParty_YoungsterTimmy[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 24,
        .species = SPECIES_SANDSHREW,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 24,
        .species = SPECIES_EKANS,
        },
};
static const struct TrainerMon sParty_LassReli[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 26,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 26,
        .species = SPECIES_NIDORAN_F,
    },
};
static const struct TrainerMon sParty_CamperEthan[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 28,
        .species = SPECIES_MANKEY,
        },
};
static const struct TrainerMon sParty_TeamRocketGrunt6[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 25,
        .species = SPECIES_EKANS,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 25,
        .species = SPECIES_ZUBAT,
        },
};
static const struct TrainerMon sParty_RocketDuoNuggetBridge[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 27,
        .species = SPECIES_EKANS,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 27,
        .species = SPECIES_MEOWTH,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 27,
        .species = SPECIES_KOFFING,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 27,
        .species = SPECIES_LICKITUNG,
        },
};

//Route 25
static const struct TrainerMon sParty_HikerFranklin1[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 23,
        .species = SPECIES_MACHOP,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 23,
        .species = SPECIES_GEODUDE,
        },
};
static const struct TrainerMon sParty_HikerFranklin2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 30,
        .species = SPECIES_MACHOKE,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 30,
        .species = SPECIES_GRAVELER,
        },
};
static const struct TrainerMon sParty_HikerFranklin3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 48,
        .species = SPECIES_MACHAMP,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 48,
        .species = SPECIES_GOLEM,
        },
};
static const struct TrainerMon sParty_YoungsterJoey[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 22,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 22,
        .species = SPECIES_SPEAROW,
        },
};
static const struct TrainerMon sParty_HikerWayne[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 24,
        .species = SPECIES_ONIX,
        },
};
static const struct TrainerMon sParty_YoungsterDan[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 25,
        .species = SPECIES_SLOWPOKE,
        },
};
static const struct TrainerMon sParty_PicnickerKelsey[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 23,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 23,
        .species = SPECIES_NIDORAN_F,
    },
};
static const struct TrainerMon sParty_HikerNob[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 21,
        .species = SPECIES_GEODUDE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 21,
        .species = SPECIES_GEODUDE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 21,
        .species = SPECIES_MACHOP,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 21,
        .species = SPECIES_GEODUDE,
        },
};
static const struct TrainerMon sParty_CamperFlint[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 22,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 22,
        .species = SPECIES_EKANS,
        },
};
static const struct TrainerMon sParty_YoungsterChad[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 22,
        .species = SPECIES_EKANS,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 22,
        .species = SPECIES_SANDSHREW,
        },
};
static const struct TrainerMon sParty_LassHaley[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 21,
        .species = SPECIES_ODDISH,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 21,
        .species = SPECIES_PIDGEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 21,
        .species = SPECIES_ODDISH,
        },
};

//Route 6
static const struct TrainerMon sParty_BugCatcherKeigo1[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 23,
        .species = SPECIES_WEEDLE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 23,
        .species = SPECIES_CATERPIE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 23,
        .species = SPECIES_VENONAT,
        },
};
static const struct TrainerMon sParty_BugCatcherKeigo2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 36,
        .species = SPECIES_KAKUNA,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 36,
        .species = SPECIES_METAPOD,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 36,
        .species = SPECIES_VENONAT,
        },
};
static const struct TrainerMon sParty_BugCatcherKeigo3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 50,
        .species = SPECIES_BEEDRILL,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 50,
        .species = SPECIES_BUTTERFREE,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 50,
        .species = SPECIES_VENOMOTH,
        },
};
static const struct TrainerMon sParty_CamperRicky[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 28,
        .species = SPECIES_SQUIRTLE,
        },
};
static const struct TrainerMon sParty_PicnickerNancy[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 29,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 28,
        .species = SPECIES_PIKACHU,
        },
};
static const struct TrainerMon sParty_BugCatcherElijah[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 29,
        .species = SPECIES_BUTTERFREE,
        },    
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 31,
        .species = SPECIES_PINSIR,
        },

};
static const struct TrainerMon sParty_PicnickerIsabelle[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 28,
        .species = SPECIES_PIDGEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 28,
        .species = SPECIES_PIDGEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 28,
        .species = SPECIES_PIDGEY,
        },
};
static const struct TrainerMon sParty_CamperJeff[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 28,
        .species = SPECIES_SPEAROW,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 28,
        .species = SPECIES_RATICATE,
        },
};

//Vermilion City
static const struct TrainerMon sParty_SailorDwayne[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 35,
        .species = SPECIES_PIKACHU,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 34,
        .species = SPECIES_PIKACHU,
        },
};
static const struct TrainerMon sParty_EngineerBaily[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 36,
        .species = SPECIES_VOLTORB,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 35,
        .species = SPECIES_MAGNEMITE,
        },
};
static const struct TrainerMon sParty_GentlemanTucker[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 36,
        .species = SPECIES_PIKACHU,
        },
};
static const struct TrainerMon sParty_LeaderLtSurge[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 40,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SONIC_BOOM, MOVE_TACKLE, MOVE_EXPLOSION, MOVE_SHOCK_WAVE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 40,
        .species = SPECIES_PIKACHU,
        .moves = {MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_SHOCK_WAVE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 40,
        .species = SPECIES_MAGNETON,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_DISCHARGE, MOVE_FLASH_CANNON, MOVE_BARRIER, MOVE_SIGNAL_BEAM},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 41,
        .species = SPECIES_RAICHU,
        .moves = {MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_SHOCK_WAVE},
    },
};
static const struct TrainerMon sParty_LeaderLtSurgePostgame[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_RAICHU,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_SIGNAL_BEAM},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_MAGNEZONE,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_DISCHARGE, MOVE_FLASH_CANNON, MOVE_BARRIER, MOVE_SIGNAL_BEAM},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_ELECTIVIRE,
        .heldItem = ITEM_EXPERT_BELT,
        .moves = {MOVE_WILD_CHARGE, MOVE_LOW_KICK, MOVE_ROCK_TOMB, MOVE_FIRE_PUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 95,
        .species = SPECIES_ELECTRODE,
        .heldItem = ITEM_DAMP_ROCK,
        .moves = {MOVE_RAIN_DANCE, MOVE_THUNDER, MOVE_MIRROR_COAT, MOVE_EXPLOSION},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_JOLTEON,
        .heldItem = ITEM_CHOICE_SPECS,
        .moves = {MOVE_HIDDEN_POWER, MOVE_THUNDER, MOVE_SIGNAL_BEAM, MOVE_SHADOW_BALL},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_EXPLOSION, MOVE_THUNDER_WAVE, MOVE_SCREECH, MOVE_THUNDER},
    },
};

//SS Anne - Deck
static const struct TrainerMon sParty_SailorEdmond[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 31,
        .species = SPECIES_MACHOP,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 32,
        .species = SPECIES_SHELLDER,
        },
};

static const struct TrainerMon sParty_SailorTrevor[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_MACHOP,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_TENTACOOL,
        },
};

//SS Anne - First Floor
static const struct TrainerMon sParty_LassAnn[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 32,
        .species = SPECIES_PIDGEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 31,
        .species = SPECIES_NIDORAN_F,
    },
};
static const struct TrainerMon sParty_YoungsterTyler[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_NIDORAN_M,
    },
};
static const struct TrainerMon sParty_GentlemanArthur[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 32,
        .species = SPECIES_NIDORAN_F,
    },
};
static const struct TrainerMon sParty_GentlemanThomas[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 31,
        .species = SPECIES_GROWLITHE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_GROWLITHE,
        },
};

// SS Anne - Second Floor
static const struct TrainerMon sParty_FishermanDale[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_GOLDEEN,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_TENTACOOL,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_GOLDEEN,
        },
};
static const struct TrainerMon sParty_GentlemanBrooks[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_PIKACHU,
        },
};
static const struct TrainerMon sParty_GentlemanLamar[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GROWLITHE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_PONYTA,
        },
};
static const struct TrainerMon sParty_LadyDawn[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_PIKACHU,
        },
};
// SS ANNE - B1F
static const struct TrainerMon sParty_SailorPhillip[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 32,
        .species = SPECIES_MACHOP,
        },
};
static const struct TrainerMon sParty_FishermanBarny[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_TENTACOOL,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_STARYU,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_SHELLDER,
        },
};
static const struct TrainerMon sParty_SailorHuey[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_TENTACOOL,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 31,
        .species = SPECIES_STARYU,
        },
};
static const struct TrainerMon sParty_SailorDylan[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_HORSEA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 32,
        .species = SPECIES_HORSEA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_HORSEA,
        },
};
static const struct TrainerMon sParty_SailorLeonard[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_SHELLDER,
        },
};

static const struct TrainerMon sParty_SailorDuncan[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_HORSEA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_SHELLDER,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_TENTACOOL,
        },
};
//Route 11
static const struct TrainerMon sParty_GamblerHugo1[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 32,
        .species = SPECIES_POLIWAG,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_HORSEA,
        },
};
static const struct TrainerMon sParty_GamblerHugo2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 42,
        .species = SPECIES_POLIWHIRL,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 42,
        .species = SPECIES_SEAKING,
        },
};
static const struct TrainerMon sParty_GamblerHugo3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 58,
        .species = SPECIES_POLITOED,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 58,
        .species = SPECIES_SEAKING,
        },
};
static const struct TrainerMon sParty_GamblerJasper[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 31,
        .species = SPECIES_BELLSPROUT,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 30,
        .species = SPECIES_ODDISH,
        },
};
static const struct TrainerMon sParty_EngineerBernie1[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 30,
        .species = SPECIES_MAGNEMITE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 30,
        .species = SPECIES_MAGNEMITE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 30,
        .species = SPECIES_VOLTORB,
        },
};
static const struct TrainerMon sParty_EngineerBernie2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 41,
        .species = SPECIES_VOLTORB,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 41,
        .species = SPECIES_MAGNETON,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 41,
        .species = SPECIES_MAGNETON,
        },
};
static const struct TrainerMon sParty_EngineerBernie3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_ELECTRODE,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_MAGNETON,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_MAGNEZONE,
        },
};
static const struct TrainerMon sParty_YoungsterEddie[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 32,
        .species = SPECIES_EKANS,
        },
};
static const struct TrainerMon sParty_YoungsterDillon[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_SANDSHREW,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_ZUBAT,
        },
};
static const struct TrainerMon sParty_YoungsterYasu[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 32,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 31,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_RATICATE,
        },
};
static const struct TrainerMon sParty_YoungsterDave[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 32,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 31,
        .species = SPECIES_NIDORINO,
        },
};
static const struct TrainerMon sParty_GamblerDirk[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 32,
        .species = SPECIES_VOLTORB,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 31,
        .species = SPECIES_MAGNEMITE,
        },
};
static const struct TrainerMon sParty_EngineerBraxton[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 32,
        .species = SPECIES_MAGNEMITE,
        },
};
static const struct TrainerMon sParty_GamblerDarian[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 31,
        .species = SPECIES_GROWLITHE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 32,
        .species = SPECIES_VULPIX,
        },
};
//Route 12
static const struct TrainerMon sParty_FishermanNed1[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_GOLDEEN,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_POLIWAG,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_GOLDEEN,
        },
};
static const struct TrainerMon sParty_FishermanNed2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 43,
        .species = SPECIES_SEAKING,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 43,
        .species = SPECIES_POLIWHIRL,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 43,
        .species = SPECIES_SEAKING,
        },
};
static const struct TrainerMon sParty_FishermanNed3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 54,
        .species = SPECIES_SEAKING,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 54,
        .species = SPECIES_POLITOED,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 54,
        .species = SPECIES_SEAKING,
        },
};
static const struct TrainerMon sParty_FishermanChip[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_TENTACOOL,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_GOLDEEN,
        },
};
static const struct TrainerMon sParty_FishermanHank[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GOLDEEN,
        },
};
static const struct TrainerMon sParty_FishermanElliot[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_POLIWAG,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_SHELLDER,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_GOLDEEN,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_HORSEA,
        },
};
static const struct TrainerMon sParty_YoungCoupleGiaJes[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_NIDORINO,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_NIDORINA,
        },
};
static const struct TrainerMon sParty_RockerLuca1[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_VOLTORB,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_ELECTRODE,
        },
};
static const struct TrainerMon sParty_RockerLuca2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 45,
        .species = SPECIES_ELECTRODE,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 45,
        .species = SPECIES_ELECTRODE,
        },
};
static const struct TrainerMon sParty_RockerLuca3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 54,
        .species = SPECIES_ELECTRODE,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 54,
        .species = SPECIES_ELECTRODE,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 54,
        .species = SPECIES_ELECTABUZZ,
        },
};
static const struct TrainerMon sParty_CamperJustin[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_NIDORINO,
        },
};
static const struct TrainerMon sParty_FishermanAndrew[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_MAGIKARP,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_MAGIKARP,
        },
};
//Route 9
static const struct TrainerMon sParty_PicnickerAlicia1[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 32,
        .species = SPECIES_ODDISH,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 32,
        .species = SPECIES_BELLSPROUT,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 32,
        .species = SPECIES_ODDISH,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 32,
        .species = SPECIES_BELLSPROUT,
        },
};
static const struct TrainerMon sParty_PicnickerAlicia2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 44,
        .species = SPECIES_GLOOM,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 44,
        .species = SPECIES_WEEPINBELL,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 44,
        .species = SPECIES_GLOOM,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 44,
        .species = SPECIES_WEEPINBELL,
        },
};
static const struct TrainerMon sParty_PicnickerAlicia3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_VILEPLUME,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_VICTREEBEL,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_BELLOSSOM,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_VICTREEBEL,
        },
};
static const struct TrainerMon sParty_BugCatcherBrent[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 32,
        .species = SPECIES_BEEDRILL,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 32,
        .species = SPECIES_BEEDRILL,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 32,
        .species = SPECIES_PINSIR,
        },
    
};
static const struct TrainerMon sParty_BugCatcherConner[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_CATERPIE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_WEEDLE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_VENONAT,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_SCYTHER,
        },
};
static const struct TrainerMon sParty_CamperChris[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_GROWLITHE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_CHARMANDER,
        },
};
static const struct TrainerMon sParty_CamperDrew[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 31,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 31,
        .species = SPECIES_SANDSHREW,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_EKANS,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_SANDSHREW,
        },
};
static const struct TrainerMon sParty_PicnickerCaitlin[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_MEOWTH,
        },
};
static const struct TrainerMon sParty_HikerAlan[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_ONIX,
        .moves = {MOVE_HARDEN, MOVE_ROCK_THROW, MOVE_BIND, MOVE_SCREECH},
    },
};

static const struct TrainerMon sParty_HikerBrice[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GEODUDE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_MACHOP,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_GEODUDE,
        },
};
static const struct TrainerMon sParty_HikerJeremy[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 32,
        .species = SPECIES_MACHOP,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_ONIX,
        },
};

//Route 10
static const struct TrainerMon sParty_PokemaniacMark1[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_RHYHORN,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_LICKITUNG,
        },
};
static const struct TrainerMon sParty_PokemaniacMark2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 52,
        .species = SPECIES_RHYDON,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 52,
        .species = SPECIES_LICKITUNG,
        },
};
static const struct TrainerMon sParty_PokemaniacMark3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_RHYPERIOR,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_KANGASKHAN,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_LICKILICKY,
        },
};
static const struct TrainerMon sParty_PokemaniacHerman[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_CUBONE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_SLOWPOKE,
        },
};
static const struct TrainerMon sParty_PicnickerHeidi[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_PIKACHU,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_CLEFAIRY,
        },
};
static const struct TrainerMon sParty_PicnickerCarol[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_PIDGEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_PIDGEOTTO,
        },
};
static const struct TrainerMon sParty_HikerClark[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_ONIX,
        .moves = {MOVE_HARDEN, MOVE_ROCK_THROW, MOVE_BIND, MOVE_SCREECH},
    },
};
static const struct TrainerMon sParty_HikerTrent[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_ONIX,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GRAVELER,
        },
};

//Rock Tunnel 1F
static const struct TrainerMon sParty_HikerLenny[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GEODUDE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_MACHOP,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GEODUDE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GEODUDE,
        },
};
static const struct TrainerMon sParty_HikerOliver[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_ONIX,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_STEELIX,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_GEODUDE,
        },
};
static const struct TrainerMon sParty_HikerLucas[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
    },
};
static const struct TrainerMon sParty_PokemaniacAshton[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_CUBONE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_SLOWPOKE,
        },
};
static const struct TrainerMon sParty_PicnickerDana[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_MEOWTH,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_ODDISH,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_PIDGEY,
        },
};
static const struct TrainerMon sParty_PicnickerAriana[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_PIDGEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 32,
        .species = SPECIES_BELLSPROUT,
        },
};
static const struct TrainerMon sParty_PicnickerLeah[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_BELLSPROUT,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_CLEFAIRY,
        },
};

//Rock Tunnel B1
static const struct TrainerMon sParty_PicnickerSofia[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_JIGGLYPUFF,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_PIDGEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_MEOWTH,
        },
};

static const struct TrainerMon sParty_PicnickerMartha[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_ODDISH,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_BULBASAUR,
        },
};
static const struct TrainerMon sParty_HikerDudley[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
    },
};

static const struct TrainerMon sParty_HikerAllen[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
    },
};

static const struct TrainerMon sParty_HikerEric[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_MACHOP,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_ONIX,
        },
};
static const struct TrainerMon sParty_PokemaniacCooper[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_SLOWPOKE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_SLOWPOKE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_SLOWPOKE,
        },
};

static const struct TrainerMon sParty_PokemaniacSteve[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_CHARMANDER,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_CUBONE,
        },
};

static const struct TrainerMon sParty_PokemaniacWinston[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_SLOWPOKE,
        },
};
//Pokemone Tower
static const struct TrainerMon sParty_ChannelerPatricia[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GASTLY,
        },
};

static const struct TrainerMon sParty_ChannelerCarly[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_GASTLY,
        },
};

static const struct TrainerMon sParty_ChannelerHope[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GASTLY,
        },
};

static const struct TrainerMon sParty_ChannelerPaula[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_GASTLY,
        },
};

static const struct TrainerMon sParty_ChannelerLaurel[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_GASTLY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_GASTLY,
        },
};

static const struct TrainerMon sParty_ChannelerJody[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GASTLY,
        },
};

static const struct TrainerMon sParty_ChannelerTammy[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_HAUNTER,
        },
};

static const struct TrainerMon sParty_ChannelerRuth[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GASTLY,
        },
};

static const struct TrainerMon sParty_ChannelerKarina[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_GASTLY,
        },
};

static const struct TrainerMon sParty_ChannelerJanae[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GASTLY,
        },
};

static const struct TrainerMon sParty_ChannelerAngelica[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_GASTLY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_GASTLY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_GASTLY,
        },
};

static const struct TrainerMon sParty_ChannelerEmilia[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GASTLY,
        },
};

static const struct TrainerMon sParty_ChannelerJennifer[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_GASTLY,
        },
};
static const struct TrainerMon sParty_TeamRocketGrunt19[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_ZUBAT,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_ZUBAT,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GOLBAT,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt20[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_KOFFING,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_DROWZEE,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt21[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_ZUBAT,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 33,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_RATICATE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_ZUBAT,
        },
};
static const struct TrainerMon sParty_PokemonTowerJessieJames[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_EKANS,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_KOFFING,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_LICKITUNG,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_MEOWTH,
        },
};
// Route 8
static const struct TrainerMon sParty_SuperNerdAidan1[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE, MOVE_CHARGE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE, MOVE_CHARGE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_SONIC_BOOM, MOVE_SUPERSONIC, MOVE_THUNDER_SHOCK, MOVE_TACKLE},
    },
};
static const struct TrainerMon sParty_SuperNerdAidan2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 45,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE, MOVE_CHARGE},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 45,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 45,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE, MOVE_CHARGE},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 45,
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_SONIC_BOOM, MOVE_SUPERSONIC, MOVE_THUNDER_SHOCK, MOVE_TACKLE},
    },
};
static const struct TrainerMon sParty_SuperNerdAidan3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE, MOVE_CHARGE},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE, MOVE_CHARGE},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_SONIC_BOOM, MOVE_SUPERSONIC, MOVE_THUNDER_SHOCK, MOVE_TACKLE},
    },
};
static const struct TrainerMon sParty_LassJulia[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_CLEFAIRY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_CLEFAIRY,
        },
};
static const struct TrainerMon sParty_LassPaige[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_NIDORAN_F,
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_NIDORINA,
        },
};
static const struct TrainerMon sParty_LassAndrea[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_MEOWTH,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_MEOWTH,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_MEOWTH,
        },
};
static const struct TrainerMon sParty_LassMegan[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_PIDGEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_MEOWTH,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_PIKACHU,
        },
};
static const struct TrainerMon sParty_SuperNerdGlenn[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GRIMER,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_MUK,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_GRIMER,
        },
};
static const struct TrainerMon sParty_SuperNerdLeslie[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_SMOG, MOVE_SELF_DESTRUCT},
    },
};
static const struct TrainerMon sParty_GamerStan[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_POLIWAG,
        },
    {   .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_POLIWAG,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_POLIWHIRL,
        },
};
static const struct TrainerMon sParty_GamerRich[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GROWLITHE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_VULPIX,
        },
};
static const struct TrainerMon sParty_TwinsEliAnne[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_CLEFAIRY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_JIGGLYPUFF,
        },
};
static const struct TrainerMon sParty_BikerRicardo[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_POUND},
    },
};
static const struct TrainerMon sParty_BikerJaren[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GRIMER,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_GRIMER,
        },
};
//Celadon City Rooftop
static const struct TrainerMon sParty_RooftopRocketGrunt[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_RATICATE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_MAGNEMITE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_GOLBAT,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_GRIMER,
        },
};
static const struct TrainerMon sParty_RooftopJessieJames[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_EKANS,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_KOFFING,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_LICKITUNG,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_MEOWTH,
        },
};
//Game Corner
static const struct TrainerMon sParty_TeamRocketGrunt7[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_RATICATE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_ZUBAT,
        },
};
//Rocket Hideout B1
static const struct TrainerMon sParty_TeamRocketGrunt8[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_DROWZEE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_MACHOP,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt9[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_RATICATE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_RATICATE,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt10[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_HARDEN},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS, MOVE_NONE},
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt11[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_RATICATE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_RATICATE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_RATTATA,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt12[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_HARDEN},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 39,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS},
    },
};
//Rocket Hideout B2
static const struct TrainerMon sParty_TeamRocketGrunt13[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_BITE, MOVE_ASTONISH, MOVE_SUPERSONIC, MOVE_LEECH_LIFE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 34,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SLUDGE, MOVE_DISABLE, MOVE_HARDEN, MOVE_POUND},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 35,
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_BITE, MOVE_ASTONISH, MOVE_SUPERSONIC, MOVE_LEECH_LIFE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_RATICATE,
        .moves = {MOVE_HYPER_FANG, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP, MOVE_TACKLE},
    },
};
//Rocket Hideout B3

static const struct TrainerMon sParty_TeamRocketGrunt14[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_RATICATE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_DROWZEE,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt15[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_MACHOP,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_MACHOP,
        },
};
//Rocket Hideout B4
static const struct TrainerMon sParty_TeamRocketGrunt16[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_SANDSHREW,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_EKANS,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_SANDSLASH,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt17[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_EKANS,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_SANDSHREW,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_ARBOK,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt18[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_KOFFING,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_ZUBAT,
        },
};
static const struct TrainerMon sParty_RocketHideoutJessie[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_EKANS,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_LICKITUNG,
        },
};
static const struct TrainerMon sParty_RocketHideoutJames[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_KOFFING,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_MEOWTH,
        },
};
static const struct TrainerMon sParty_BossGiovanni[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 37,
        .species = SPECIES_STEELIX,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 37,
        .species = SPECIES_RHYHORN,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 37,
        .species = SPECIES_KANGASKHAN,
        },
};
//Celadon Gym
static const struct TrainerMon sParty_LeaderErika[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 43,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_STUN_SPORE, MOVE_ACID, MOVE_POISON_POWDER, MOVE_GIGA_DRAIN},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 44,
        .species = SPECIES_TANGELA,
        .moves = {MOVE_POISON_POWDER, MOVE_CONSTRICT, MOVE_INGRAIN, MOVE_GIGA_DRAIN},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 46,
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_SLEEP_POWDER, MOVE_ACID, MOVE_STUN_SPORE, MOVE_GIGA_DRAIN},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 45,
        .species = SPECIES_EXEGGCUTE,
        .moves = {MOVE_ANCIENT_POWER, MOVE_LEECH_SEED, MOVE_SOLAR_BEAM, MOVE_HYPNOSIS},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 46,
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_SLEEP_POWDER, MOVE_SLUDGE_BOMB, MOVE_SOLAR_BEAM, MOVE_LEECH_SEED},
    },
};

static const struct TrainerMon sParty_LeaderErikaPostgame[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_ATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_TANGROWTH,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_POWER_WHIP},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_VILEPLUME,
        .heldItem = ITEM_HEAT_ROCK,
        .moves = {MOVE_SLEEP_POWDER, MOVE_MOONLIGHT, MOVE_SUNNY_DAY, MOVE_PETAL_DANCE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_LEAF_BLADE, MOVE_SWORDS_DANCE, MOVE_REFLECT},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_VENUSAUR,
        .heldItem = ITEM_VENUSAURITE,
        .moves = {MOVE_SYNTHESIS, MOVE_SOLAR_BEAM, MOVE_SLUDGE_WAVE, MOVE_GIGA_DRAIN},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_EXEGGUTOR,
        .ability = 2,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_PSYSHOCK, MOVE_HYPNOSIS},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 95,
        .species = SPECIES_LEAFEON,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SOLAR_BLADE, MOVE_LEAF_BLADE, MOVE_SYNTHESIS, MOVE_KNOCK_OFF},
    },
};

static const struct TrainerMon sParty_LassLisa[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 38,
        .species = SPECIES_ODDISH,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 38,
        .species = SPECIES_GLOOM,
        },
};
static const struct TrainerMon sParty_LassKay[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 39,
        .species = SPECIES_BELLSPROUT,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 37,
        .species = SPECIES_WEEPINBELL,
        },
};
static const struct TrainerMon sParty_PicnickerTina[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 37,
        .species = SPECIES_BULBASAUR,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 37,
        .species = SPECIES_IVYSAUR,
        },
};
static const struct TrainerMon sParty_BeautyBridget[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 38,
        .species = SPECIES_ODDISH,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 38,
        .species = SPECIES_BELLSPROUT,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 36,
        .species = SPECIES_ODDISH,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 37,
        .species = SPECIES_BELLSPROUT,
        },
};
static const struct TrainerMon sParty_BeautyTamia[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 38,
        .species = SPECIES_BELLSPROUT,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 38,
        .species = SPECIES_BELLSPROUT,
        },
};
static const struct TrainerMon sParty_BeautyLori[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 38,
        .species = SPECIES_EXEGGCUTE,
        },
};
static const struct TrainerMon sParty_CooltrainerMary[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 35,
        .species = SPECIES_BELLSPROUT,
        .moves = {MOVE_WRAP, MOVE_STUN_SPORE, MOVE_POISON_POWDER, MOVE_GROWTH},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 35,
        .species = SPECIES_ODDISH,
        .moves = {MOVE_POISON_POWDER, MOVE_STUN_SPORE, MOVE_ABSORB, MOVE_SWEET_SCENT},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 37,
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_VINE_WHIP, MOVE_STUN_SPORE, MOVE_POISON_POWDER, MOVE_GROWTH},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 37,
        .species = SPECIES_GLOOM,
        .moves = {MOVE_ABSORB, MOVE_STUN_SPORE, MOVE_POISON_POWDER, MOVE_SWEET_SCENT},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 37,
        .species = SPECIES_IVYSAUR,
        .moves = {MOVE_RAZOR_LEAF, MOVE_SLEEP_POWDER, MOVE_VINE_WHIP, MOVE_LEECH_SEED},
    },
};
//Route 16
static const struct TrainerMon sParty_BikerHideo1[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_ARBOK,
        },
};
static const struct TrainerMon sParty_BikerHideo2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 48,
        .species = SPECIES_ARBOK,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 48,
        .species = SPECIES_ARBOK,
        },
};
static const struct TrainerMon sParty_BikerHideo3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 62,
        .species = SPECIES_ARBOK,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 62,
        .species = SPECIES_ARBOK,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 62,
        .species = SPECIES_ARBOK,
        },
};
static const struct TrainerMon sParty_CueBallKoji1[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_MACHOP,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_MANKEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_MACHOP,
        },
};
static const struct TrainerMon sParty_CueBallKoji2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 47,
        .species = SPECIES_MACHOKE,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 47,
        .species = SPECIES_ANNIHILAPE,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 47,
        .species = SPECIES_MACHOKE,
        },
};
static const struct TrainerMon sParty_CueBallKoji3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 58,
        .species = SPECIES_MACHAMP,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 58,
        .species = SPECIES_PRIMEAPE,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 58,
        .species = SPECIES_MACHAMP,
        },
};
static const struct TrainerMon sParty_BikerLao[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
};
static const struct TrainerMon sParty_BikerRuben[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
};
static const struct TrainerMon sParty_CueBallLuke[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_MANKEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_MACHOP,
        },
};
static const struct TrainerMon sParty_CueBallCamron[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_MANKEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 40,
        .species = SPECIES_MACHOP,
        },
};
static const struct TrainerMon sParty_YoungCoupleLeaJed[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 40,
        .species = SPECIES_RAPIDASH,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_NINETALES,
        },
};

//Route 17
static const struct TrainerMon sParty_BikerBilly[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_MUK,
        },
};

static const struct TrainerMon sParty_BikerNikolas[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_CHARGE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_CHARGE},
    },
};

static const struct TrainerMon sParty_BikerJaxon[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_MUK,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
};

static const struct TrainerMon sParty_BikerWilliam[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SELF_DESTRUCT, MOVE_TACKLE},
    },
};
static const struct TrainerMon sParty_BikerVirgil[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
};
static const struct TrainerMon sParty_CueBallRaul[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_MANKEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_PRIMEAPE,
        },
};

static const struct TrainerMon sParty_CueBallIsaiah[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 40,
        .species = SPECIES_MACHOP,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 40,
        .species = SPECIES_MACHAMP,
        },
};

static const struct TrainerMon sParty_CueBallZeek[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_MACHOKE,
        },
};

static const struct TrainerMon sParty_CueBallJamal[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_MANKEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_MANKEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_MACHAMP,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_MACHOP,
        },
};

static const struct TrainerMon sParty_CueBallCorey[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_PRIMEAPE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_MACHOKE,
        },
};
//Route 18
static const struct TrainerMon sParty_BirdKeeperWilton1[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_SPEAROW,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_FEAROW,
        },
};
static const struct TrainerMon sParty_BirdKeeperWilton2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 49,
        .species = SPECIES_FEAROW,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 49,
        .species = SPECIES_FEAROW,
        },
};
static const struct TrainerMon sParty_BirdKeeperWilton3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 65,
        .species = SPECIES_FEAROW,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 65,
        .species = SPECIES_FEAROW,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 65,
        .species = SPECIES_FEAROW,
        },
};

static const struct TrainerMon sParty_BirdKeeperRamiro[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_DODRIO,
        },
};

static const struct TrainerMon sParty_BirdKeeperJacob[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_SPEAROW,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_SPEAROW,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_FEAROW,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_SPEAROW,
        },
};
//Fuchsia Gym

static const struct TrainerMon sParty_TamerPhil[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_SANDSLASH,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 44,
        .species = SPECIES_ARBOK,
        },
};

static const struct TrainerMon sParty_TamerEdgar[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 46,
        .species = SPECIES_ARBOK,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 46,
        .species = SPECIES_SANDSLASH,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_ARBOK,
        },
};
static const struct TrainerMon sParty_JugglerKayden[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 47,
        .species = SPECIES_HYPNO,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 47,
        .species = SPECIES_SCYTHER,
        },
};

static const struct TrainerMon sParty_JugglerNate[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_DROWZEE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_KADABRA,
        },
};

static const struct TrainerMon sParty_JugglerKirk[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 46,
        .species = SPECIES_DROWZEE,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 47,
        .species = SPECIES_DROWZEE,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_KADABRA,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 46,
        .species = SPECIES_DROWZEE,
        },
};

static const struct TrainerMon sParty_JugglerShawn[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_DROWZEE,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_HYPNO,
        },
};
static const struct TrainerMon sParty_LeaderKoga[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 49,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_TOXIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 51,
        .species = SPECIES_ARBOK,
        .moves = {MOVE_POISON_FANG, MOVE_SUCKER_PUNCH, MOVE_COIL, MOVE_GLARE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_ATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 51,
        .species = SPECIES_MUK,
        .moves = {MOVE_MINIMIZE, MOVE_SLUDGE_WAVE, MOVE_ACID_ARMOR, MOVE_TOXIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 52,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SELF_DESTRUCT, MOVE_SLUDGE_BOMB, MOVE_SMOKESCREEN, MOVE_TOXIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 51,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB, MOVE_SMOKESCREEN, MOVE_TOXIC},
    },

};

static const struct TrainerMon sParty_LeaderKogaPostgame[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_WEEZING,
        .heldItem = ITEM_BLACK_SLUDGE,
        .moves = {MOVE_TOXIC, MOVE_PROTECT, MOVE_SLUDGE_BOMB, MOVE_EXPLOSION},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_ATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_MUK,
        .heldItem = ITEM_BLACK_SLUDGE,
        .moves = {MOVE_TOXIC, MOVE_PROTECT, MOVE_POISON_JAB, MOVE_KNOCK_OFF},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_VENOMOTH,
        .heldItem = ITEM_CHOICE_SPECS,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_BUG_BUZZ},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_ATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_SCIZOR,
        .heldItem = ITEM_SCIZORITE,
        .moves = {MOVE_SWORDS_DANCE, MOVE_X_SCISSOR, MOVE_BULLET_PUNCH, MOVE_ROOST},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 95,
        .species = SPECIES_CROBAT,
        .heldItem = ITEM_SHARP_BEAK,
        .moves = {MOVE_FLY, MOVE_POISON_FANG, MOVE_LEECH_LIFE, MOVE_U_TURN},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPDEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .lvl = 95,
        .species = SPECIES_TENTACRUEL,
        .heldItem = ITEM_BLACK_SLUDGE,
        .moves = {MOVE_TOXIC, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_HYDRO_PUMP},
    },

};

//Route 13
static const struct TrainerMon sParty_BeautyLola[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_PIKACHU,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_RATTATA,
        },
};

static const struct TrainerMon sParty_BeautySheila[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_CLEFAIRY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_MEOWTH,
        },
};
static const struct TrainerMon sParty_BikerJarem[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_POISON_GAS},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
};
static const struct TrainerMon sParty_BirdKeeperSebastian[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_PIDGEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_PIDGEOTTO,
        },
};

static const struct TrainerMon sParty_BirdKeeperPerry[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_SPEAROW,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_PIDGEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_PIDGEOTTO,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_SPEAROW,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_FEAROW,
        },
};
static const struct TrainerMon sParty_BirdKeeperRobert[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_PIDGEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_PIDGEOTTO,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 36,
        .species = SPECIES_SPEAROW,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_FEAROW,
        },
};
static const struct TrainerMon sParty_PicnickerAlma[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_GOLDEEN,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_POLIWAG,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_HORSEA,
        },
};

static const struct TrainerMon sParty_PicnickerSusie[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_PIDGEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 39,
        .species = SPECIES_MEOWTH,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 39,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 38,
        .species = SPECIES_PIKACHU,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 39,
        .species = SPECIES_MEOWTH,
        },
};

static const struct TrainerMon sParty_PicnickerValerie[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_POLIWAG,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_POLIWAG,
        },
};

static const struct TrainerMon sParty_PicnickerGwen[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_PIDGEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_MEOWTH,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_PIDGEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_PIDGEOTTO,
        },
};
//Route 14
static const struct TrainerMon sParty_TwinsKiriJan[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_CHARMELEON,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_WARTORTLE,
        },
};
static const struct TrainerMon sParty_BirdKeeperCarter[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_PIDGEOTTO,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_DODRIO,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_PIDGEOT,
        },
};

static const struct TrainerMon sParty_BirdKeeperMitch[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_PIDGEY,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_SPEAROW,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_PIDGEOTTO,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_FEAROW,
        },
};

static const struct TrainerMon sParty_BirdKeeperBeck[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_PIDGEOTTO,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_FEAROW,
        },
};

static const struct TrainerMon sParty_BirdKeeperMarlon[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_SPEAROW,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_DODUO,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_FEAROW,
        },
};
static const struct TrainerMon sParty_BirdKeeperDonald[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 43,
        .heldItem = ITEM_STICK,
        .species = SPECIES_FARFETCHD,
        },
};

static const struct TrainerMon sParty_BirdKeeperBenny[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 44,
        .species = SPECIES_SPEAROW,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_FEAROW,
        },
};
static const struct TrainerMon sParty_BikerMalik[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 40,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
};
static const struct TrainerMon sParty_BikerLukas[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 37,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
};
static const struct TrainerMon sParty_BikerIsaac[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 44,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
};
static const struct TrainerMon sParty_BikerGerald[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_MUK,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
};

//Route 15
static const struct TrainerMon sParty_BeautyOlivia1[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 44,
        .species = SPECIES_BULBASAUR,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_IVYSAUR,
        },
};
static const struct TrainerMon sParty_BeautyOlivia2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 50,
        .species = SPECIES_BULBASAUR,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 52,
        .species = SPECIES_IVYSAUR,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 54,
        .species = SPECIES_VENUSAUR,
        },
};
static const struct TrainerMon sParty_BeautyOlivia3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 62,
        .species = SPECIES_BULBASAUR,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 64,
        .species = SPECIES_IVYSAUR,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 65,
        .species = SPECIES_VENUSAUR,
        },
};
static const struct TrainerMon sParty_BeautyGrace[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_PIDGEOTTO,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_WIGGLYTUFF,
        },
};
static const struct TrainerMon sParty_BikerErnest[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_POUND},
    },
};

static const struct TrainerMon sParty_BikerAlex[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
};
static const struct TrainerMon sParty_BirdKeeperEdwin[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_PIDGEOTTO,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 44,
        .species = SPECIES_FARFETCHD,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl =42,
        .species = SPECIES_DODUO,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_PIDGEOTTO,
        },
};

static const struct TrainerMon sParty_BirdKeeperChester[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_DODRIO,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_DODUO,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_DODUO,
        },
};
static const struct TrainerMon sParty_PicnickerYazmin[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_BELLSPROUT,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 41,
        .species = SPECIES_ODDISH,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_TANGELA,
        },
};

static const struct TrainerMon sParty_PicnickerKindra[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_GLOOM,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 44,
        .species = SPECIES_ODDISH,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 44,
        .species = SPECIES_ODDISH,
        },
};

static const struct TrainerMon sParty_PicnickerBecky[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 42,
        .species = SPECIES_PIKACHU,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_RAICHU,
        },
};

static const struct TrainerMon sParty_PicnickerCelia[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_CLEFAIRY,
        },
};
static const struct TrainerMon sParty_CrushKinRonMya[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
};
//Saffron Dojo
static const struct TrainerMon sParty_DojoMaster[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 55,
        .species = SPECIES_WIGGLYTUFF, // HP
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 55,
        .species = SPECIES_MACHAMP, // ATTACK
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 55,
        .species = SPECIES_ALAKAZAM, // SPATTACK
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 55,
        .species = SPECIES_GOLEM, // DEFENSE
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 55,
        .species = SPECIES_BLASTOISE,//SP DEFENSE
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 55,
        .species = SPECIES_RAICHU, // SPEED
    },
};
static const struct TrainerMon sParty_DojoHP[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_WIGGLYTUFF, // HP
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_WIGGLYTUFF, // HP
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_WIGGLYTUFF, // HP
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_WIGGLYTUFF, // HP
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_WIGGLYTUFF, // HP
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_WIGGLYTUFF, // HP
    },
};
static const struct TrainerMon sParty_DojoAttack[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_MACHAMP, // ATTACK
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_MACHAMP, // ATTACK
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_MACHAMP, // ATTACK
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_MACHAMP, // ATTACK
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_MACHAMP, // ATTACK
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_MACHAMP, // ATTACK
    },
};
static const struct TrainerMon sParty_DojoSPAttack[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_ALAKAZAM, // SPATTACK
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_ALAKAZAM, // SPATTACK
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_ALAKAZAM, // SPATTACK
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_ALAKAZAM, // SPATTACK
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_ALAKAZAM, // SPATTACK
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_ALAKAZAM, // SPATTACK
    },
};
static const struct TrainerMon sParty_DojoDefense[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_GOLEM, // DEFENSE
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_GOLEM, // DEFENSE
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_GOLEM, // DEFENSE
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_GOLEM, // DEFENSE
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_GOLEM, // DEFENSE
    },
};
static const struct TrainerMon sParty_DojoSPDefense[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_BLASTOISE,//SP DEFENSE
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_BLASTOISE,//SP DEFENSE
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_BLASTOISE,//SP DEFENSE
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_BLASTOISE,//SP DEFENSE
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_BLASTOISE,//SP DEFENSE
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_BLASTOISE,//SP DEFENSE
    },
};
static const struct TrainerMon sParty_DojoSpeed[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_RAICHU, // SPEED
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_RAICHU, // SPEED
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_RAICHU, // SPEED
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_RAICHU, // SPEED
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_RAICHU, // SPEED
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 45,
        .species = SPECIES_RAICHU, // SPEED
    },
};
//Saffron Gym
static const struct TrainerMon sParty_PsychicJohan[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 52,
        .species = SPECIES_KADABRA,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 52,
        .species = SPECIES_SLOWPOKE,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 52,
        .species = SPECIES_MR_MIME,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 52,
        .species = SPECIES_KADABRA,
        },
};

static const struct TrainerMon sParty_PsychicTyron[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 53,
        .species = SPECIES_MR_MIME,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 52,
        .species = SPECIES_KADABRA,
        },
};

static const struct TrainerMon sParty_PsychicCameron[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 53,
        .species = SPECIES_SLOWPOKE,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 53,
        .species = SPECIES_SLOWPOKE,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 53,
        .species = SPECIES_SLOWBRO,
        },
};

static const struct TrainerMon sParty_PsychicPreston[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 54,
        .species = SPECIES_SLOWKING,
        },
};
static const struct TrainerMon sParty_ChannelerAmanda[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 54,
        .species = SPECIES_GASTLY,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 55,
        .species = SPECIES_HAUNTER,
        },
};

static const struct TrainerMon sParty_ChannelerStacy[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 53,
        .species = SPECIES_HAUNTER,
        },
};

static const struct TrainerMon sParty_ChannelerTasha[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 54,
        .species = SPECIES_GASTLY,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 54,
        .species = SPECIES_GASTLY,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 52,
        .species = SPECIES_HAUNTER,
        },
};
static const struct TrainerMon sParty_LeaderSabrina[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 54,
        .species = SPECIES_KADABRA,
        .moves = {MOVE_PSYBEAM, MOVE_REFLECT, MOVE_FUTURE_SIGHT, MOVE_CALM_MIND},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 56,
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_BARRIER, MOVE_PSYBEAM, MOVE_BATON_PASS, MOVE_CALM_MIND},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 57,
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_PSYBEAM, MOVE_GUST, MOVE_LEECH_LIFE, MOVE_SUPERSONIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 54,
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYBEAM, MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_DISABLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 58,
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_RECOVER, MOVE_FUTURE_SIGHT, MOVE_CALM_MIND},
    },
};

static const struct TrainerMon sParty_LeaderSabrinaPostgame[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPDEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .lvl = 95,
        .species = SPECIES_MR_MIME,
        .heldItem = ITEM_LIGHT_CLAY,
        .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_CHARGE_BEAM, MOVE_REFLECT},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .lvl = 95,
        .species = SPECIES_HYPNO,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_SHADOW_BALL, MOVE_CALM_MIND},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .lvl = 95,
        .species = SPECIES_SLOWKING,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_PSYSHOCK, MOVE_SLACK_OFF, MOVE_ICE_BEAM, MOVE_CALM_MIND},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_ESPEON,
        .heldItem = ITEM_LIFE_ORB,
        .ability = 2,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_PSYSHOCK},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_EXEGGUTOR,
        .ability = 2,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_SLEEP_POWDER, MOVE_DREAM_EATER},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_ALAKAZITE,
        .moves = {MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_CHARGE_BEAM},
    },
};

//Silph Co
static const struct TrainerMon sParty_JugglerDalton[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 48,
        .species = SPECIES_KADABRA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 48,
        .species = SPECIES_MR_MIME,
    },
};
static const struct TrainerMon sParty_ScientistConnor[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_SELF_DESTRUCT},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
};

static const struct TrainerMon sParty_ScientistJerry[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_MAGNETON,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_ELECTRODE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_MAGNETON,
        },
};

static const struct TrainerMon sParty_ScientistJose[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
};

static const struct TrainerMon sParty_ScientistRodney[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 48,
        .species = SPECIES_ELECTRODE,
        },
};

static const struct TrainerMon sParty_ScientistBeau[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 48,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC},
    },
};

static const struct TrainerMon sParty_ScientistTaylor[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC, MOVE_THUNDER_SHOCK},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC, MOVE_THUNDER_SHOCK},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_SELF_DESTRUCT},
    },
};

static const struct TrainerMon sParty_ScientistJoshua[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_ELECTRODE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_MUK,
        },
};

static const struct TrainerMon sParty_ScientistParker[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_GRIMER,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_ELECTRODE,
        },
};

static const struct TrainerMon sParty_ScientistEd[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_TACKLE, MOVE_SMOG},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC},
    },
};
static const struct TrainerMon sParty_ScientistTravis[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_MAGNEMITE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_KOFFING,
        },
};
static const struct TrainerMon sParty_TeamRocketGrunt23[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_CUBONE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_ZUBAT,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt24[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_GOLBAT,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_GOLBAT,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_ZUBAT,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_RATICATE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_CROBAT,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt25[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_RATICATE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_HYPNO,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_RATICATE,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt26[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_MACHOKE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_HYPNO,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt27[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_ARBOK,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_GOLBAT,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_CUBONE,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt28[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 48,
        .species = SPECIES_ARBOK,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt29[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_HYPNO,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt30[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_MACHOKE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_MACHOKE,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt31[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_ZUBAT,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_GOLBAT,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_GOLBAT,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt32[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_RATICATE,
        .moves = {MOVE_SCARY_FACE, MOVE_HYPER_FANG, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_ARBOK,
        .moves = {MOVE_GLARE, MOVE_BITE, MOVE_POISON_STING, MOVE_LEER},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE_BOMB, MOVE_SMOG, MOVE_EXPLOSION},
    },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_WING_ATTACK, MOVE_BITE, MOVE_POISON_FANG, MOVE_SUPERSONIC},
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt33[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_CUBONE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_CUBONE,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt34[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 43,
        .species = SPECIES_SANDSHREW,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_SANDSLASH,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt35[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_RATICATE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_ZUBAT,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 48,
        .species = SPECIES_GOLBAT,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_RATTATA,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt36[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 48,
        .species = SPECIES_WEEZING,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_GOLBAT,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 48,
        .species = SPECIES_KOFFING,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt37[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 48,
        .species = SPECIES_DROWZEE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 49,
        .species = SPECIES_MUK,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 48,
        .species = SPECIES_MACHOKE,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt38[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_GOLBAT,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 47,
        .species = SPECIES_DROWZEE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 48,
        .species = SPECIES_HYPNO,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt39[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 48,
        .species = SPECIES_MACHOKE,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt40[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_ZUBAT,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_RATTATA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_EKANS,
        },
};

static const struct TrainerMon sParty_TeamRocketGrunt41[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_CUBONE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 46,
        .species = SPECIES_DROWZEE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 45,
        .species = SPECIES_MAROWAK,
        },
};
static const struct TrainerMon sParty_BossGiovanni2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 51,
        .species = SPECIES_NIDORINO,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 52,
        .species = SPECIES_KANGASKHAN,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 51,
        .species = SPECIES_RHYHORN,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 51,
        .species = SPECIES_NIDOQUEEN,
        },
};
static const struct TrainerMon sParty_SilphCoJessieJames[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 48,
        .species = SPECIES_WEEZING,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 48,
        .species = SPECIES_ARBOK,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 50,
        .species = SPECIES_MEOWTH,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 48,
        .species = SPECIES_LICKITUNG,
        },
};
//Route 19
static const struct TrainerMon sParty_TuberRichie1[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 50,
        .species = SPECIES_TENTACOOL,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 50,
        .species = SPECIES_SHELLDER,
        },
};
static const struct TrainerMon sParty_TuberRichie2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 60,
        .species = SPECIES_TENTACRUEL,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 60,
        .species = SPECIES_SHELLDER,
        },
};
static const struct TrainerMon sParty_TuberRichie3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 65,
        .species = SPECIES_TENTACRUEL,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 65,
        .species = SPECIES_CLOYSTER,
        },
};

static const struct TrainerMon sParty_TuberLizzie[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 51,
        .species = SPECIES_GOLDEEN,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 52,
        .species = SPECIES_HORSEA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_STARYU,
        },
};

static const struct TrainerMon sParty_SwimmerMaleMatthew[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 53,
        .species = SPECIES_POLIWAG,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 51,
        .species = SPECIES_POLIWHIRL,
        },
};

static const struct TrainerMon sParty_SwimmerMaleDouglas[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 53,
        .species = SPECIES_HORSEA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 53,
        .species = SPECIES_TENTACOOL,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_TENTACOOL,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 52,
        .species = SPECIES_GOLDEEN,
        },
};

static const struct TrainerMon sParty_SwimmerMaleDavid[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 51,
        .species = SPECIES_GOLDEEN,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 52,
        .species = SPECIES_SHELLDER,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_SEAKING,
        },
};

static const struct TrainerMon sParty_SwimmerMaleTony[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 52,
        .species = SPECIES_HORSEA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 51,
        .species = SPECIES_SEADRA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_KINGDRA,
        }
};

static const struct TrainerMon sParty_SwimmerMaleAxle[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 52,
        .species = SPECIES_TENTACOOL,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 51,
        .species = SPECIES_TENTACOOL,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 53,
        .species = SPECIES_STARYU,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 53,
        .species = SPECIES_HORSEA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 52,
        .species = SPECIES_TENTACRUEL,
        },
};
static const struct TrainerMon sParty_SwimmerFemaleAnya[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 53,
        .species = SPECIES_POLIWAG,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 52,
        .species = SPECIES_GOLDEEN,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 51,
        .species = SPECIES_SEAKING,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 51,
        .species = SPECIES_GOLDEEN,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 52,
        .species = SPECIES_POLIWAG,
        },
};

static const struct TrainerMon sParty_SwimmerFemaleAlice[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 52,
        .species = SPECIES_GOLDEEN,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 53,
        .species = SPECIES_SEAKING,
        },
};

static const struct TrainerMon sParty_SwimmerFemaleConnie[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 53,
        .species = SPECIES_STARYU,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 53,
        .species = SPECIES_STARYU,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 53,
        .species = SPECIES_STARYU,
        },
};
static const struct TrainerMon sParty_SisAndBroLiaLuc[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 52,
        .species = SPECIES_GOLDEEN,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 53,
        .species = SPECIES_SEAKING,
        },
};
//Route 20
static const struct TrainerMon sParty_DragonTamerRoger1[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 55,
        .species = SPECIES_GYARADOS,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 55,
        .species = SPECIES_GYARADOS,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 55,
        .species = SPECIES_GYARADOS,
        },
};
static const struct TrainerMon sParty_DragonTamerRoger2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 62,
        .species = SPECIES_GYARADOS,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 62,
        .species = SPECIES_GYARADOS,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 62,
        .species = SPECIES_GYARADOS,
        },
};
static const struct TrainerMon sParty_DragonTamerRoger3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 65,
        .species = SPECIES_GYARADOS,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 65,
        .species = SPECIES_GYARADOS,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 65,
        .species = SPECIES_GYARADOS,
        },
};
static const struct TrainerMon sParty_SwimmerFemaleTiffany[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 52,
        .species = SPECIES_SEAKING,
        },
};

static const struct TrainerMon sParty_SwimmerFemaleNora[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 53,
        .species = SPECIES_SHELLDER,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 52,
        .species = SPECIES_SHELLDER,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 53,
        .species = SPECIES_CLOYSTER,
        },
};

static const struct TrainerMon sParty_SwimmerFemaleMelissa[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_POLIWHIRL,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_SEAKING,
        },
};
static const struct TrainerMon sParty_PicnickerMissy[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 55,
        .species = SPECIES_GOLDEEN,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 55,
        .species = SPECIES_SEAKING,
        },
};

static const struct TrainerMon sParty_PicnickerIrene[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 51,
        .species = SPECIES_TENTACOOL,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_SEADRA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 53,
        .species = SPECIES_SEEL,
        },
};
static const struct TrainerMon sParty_SwimmerMaleDarrin[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 51,
        .species = SPECIES_HORSEA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 51,
        .species = SPECIES_HORSEA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 52,
        .species = SPECIES_SEADRA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 53,
        .species = SPECIES_KINGDRA,
        },
};
static const struct TrainerMon sParty_SwimmerMaleBarry[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_SHELLDER,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 53,
        .species = SPECIES_CLOYSTER,
        },
};

static const struct TrainerMon sParty_SwimmerMaleDean[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 56,
        .species = SPECIES_STARMIE,
        },
};
static const struct TrainerMon sParty_SwimmerFemaleShirley[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 55,
        .species = SPECIES_KINGDRA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 53,
        .species = SPECIES_HORSEA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_SEADRA,
        },
};
//Route 21
static const struct TrainerMon sParty_CoolTrainerAnri1[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_ARCANINE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_ALAKAZAM,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_SLOWBRO,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_MAGNETON,
        },
};
static const struct TrainerMon sParty_CoolTrainerAnri2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 60,
        .species = SPECIES_ARCANINE,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 60,
        .species = SPECIES_ALAKAZAM,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 60,
        .species = SPECIES_SLOWBRO,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 60,
        .species = SPECIES_MAGNETON,
        },
};
static const struct TrainerMon sParty_CoolTrainerAnri3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 65,
        .species = SPECIES_ARCANINE,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 65,
        .species = SPECIES_ALAKAZAM,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 65,
        .species = SPECIES_SLOWBRO,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 65,
        .species = SPECIES_MAGNEZONE,
        },
};
static const struct TrainerMon sParty_JugglerJared1[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 52,
        .species = SPECIES_JYNX,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 52,
        .species = SPECIES_MR_MIME,
    },
};
static const struct TrainerMon sParty_JugglerJared2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 60,
        .species = SPECIES_JYNX,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25), 
        .lvl = 60,
        .species = SPECIES_MR_MIME,
    },
};
static const struct TrainerMon sParty_JugglerJared3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 65,
        .species = SPECIES_JYNX,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 65,
        .species = SPECIES_MR_MIME,
    },
};
static const struct TrainerMon sParty_FishermanRonald[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 53,
        .species = SPECIES_SEAKING,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_GOLDEEN,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_SEAKING,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 55,
        .species = SPECIES_SEAKING,
        },
};
static const struct TrainerMon sParty_FishermanClaude[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 53,
        .species = SPECIES_SHELLDER,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 55,
        .species = SPECIES_CLOYSTER,
        },
};
static const struct TrainerMon sParty_FishermanWade[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 50,
        .species = SPECIES_MAGIKARP,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 50,
        .species = SPECIES_MAGIKARP,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 50,
        .species = SPECIES_MAGIKARP,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 50,
        .species = SPECIES_MAGIKARP,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 50,
        .species = SPECIES_MAGIKARP,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 60,
        .species = SPECIES_GYARADOS,
        },
};
static const struct TrainerMon sParty_FishermanNolan[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_SEAKING,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_GOLDEEN,
        },
};
static const struct TrainerMon sParty_SisAndBroLilIan[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_KINGDRA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 55,
        .species = SPECIES_STARMIE,
        },
};
static const struct TrainerMon sParty_SwimmerMaleJack[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 56,
        .species = SPECIES_STARMIE,
        },
};
static const struct TrainerMon sParty_SwimmerMaleJerome[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 53,
        .species = SPECIES_STARYU,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_WARTORTLE,
        },
};
static const struct TrainerMon sParty_SwimmerMaleRoland[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_POLIWHIRL,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 53,
        .species = SPECIES_TENTACOOL,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 55,
        .species = SPECIES_SEADRA,
        },
};
static const struct TrainerMon sParty_SwimmerMaleSpencer[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_KINGDRA,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 55,
        .species = SPECIES_TENTACRUEL,
        },
};

// Pokemon Mansion
static const struct TrainerMon sParty_ScientistTed[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 55,
        .species = SPECIES_ELECTRODE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 55,
        .species = SPECIES_WEEZING,
        },
};
static const struct TrainerMon sParty_ScientistBraydon[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 55,
        .species = SPECIES_MAGNEMITE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 56,
        .species = SPECIES_MAGNETON,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_VOLTORB,
        },
};

static const struct TrainerMon sParty_ScientistIvan[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 54,
        .species = SPECIES_MAGNETON,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 56,
        .species = SPECIES_ELECTRODE,
        },
};

static const struct TrainerMon sParty_YoungsterJohnson[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 56,
        .species = SPECIES_EKANS,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 57,
        .species = SPECIES_ARBOK,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 55,
        .species = SPECIES_RATICATE,
        },
};

static const struct TrainerMon sParty_BurglarArnie[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 56,
        .species = SPECIES_CHARMANDER,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 57,
        .species = SPECIES_CHARMELEON,
        },
};
static const struct TrainerMon sParty_BurglarSimon[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 56,
        .species = SPECIES_NINETALES,
        },
};

static const struct TrainerMon sParty_BurglarLewis[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 55,
        .species = SPECIES_GROWLITHE,
        },
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0), 
        .lvl = 56,
        .species = SPECIES_PONYTA,
        },
};

// Cinnabar Gym
static const struct TrainerMon sParty_SuperNerdErik[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 55,
        .species = SPECIES_VULPIX,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 55,
        .species = SPECIES_VULPIX,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 56,
        .species = SPECIES_NINETALES,
        },
};
static const struct TrainerMon sParty_SuperNerdAvery[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 55,
        .species = SPECIES_PONYTA,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 55,
        .species = SPECIES_CHARMELEON,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 56,
        .species = SPECIES_VULPIX,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 55,
        .species = SPECIES_GROWLITHE,
        },
};
static const struct TrainerMon sParty_SuperNerdDerek[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_RAPIDASH,
        },
};
static const struct TrainerMon sParty_SuperNerdZac[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_GROWLITHE,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_VULPIX,
        },
};
static const struct TrainerMon sParty_BurglarQuinn[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 56,
        .species = SPECIES_GROWLITHE,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 56,
        .species = SPECIES_VULPIX,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 56,
        .species = SPECIES_NINETALES,
        },
};
static const struct TrainerMon sParty_BurglarRamon[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 58,
        .species = SPECIES_PONYTA,
        },
};
static const struct TrainerMon sParty_BurglarDusty[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_VULPIX,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_GROWLITHE,
        },
};
static const struct TrainerMon sParty_BurglarTyler[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 56,
        .species = SPECIES_MACHAMP,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 56,
        .species = SPECIES_ELECTRODE,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 56,
        .species = SPECIES_ELECTRODE,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 56,
        .species = SPECIES_WEEZING,
        },
};
static const struct TrainerMon sParty_BurglarGreg[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_HITMONLEE,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_HITMONCHAN,
        },
};
static const struct TrainerMon sParty_BurglarKyle[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 56,
        .species = SPECIES_NINETALES,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 56,
        .species = SPECIES_MAGNETON,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_ARBOK,
        },
};
static const struct TrainerMon sParty_BurglarTony[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_JYNX,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 56,
        .species = SPECIES_KINGLER,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_RHYDON,
        },
};
static const struct TrainerMon sParty_BurglarPete[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 56,
        .species = SPECIES_SCYTHER,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 56,
        .species = SPECIES_PINSIR,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 56,
        .species = SPECIES_PARASECT,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 56,
        .species = SPECIES_VENOMOTH,
        },
};
static const struct TrainerMon sParty_BurglarJake[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_TENTACRUEL,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 57,
        .species = SPECIES_TANGROWTH,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 56,
        .species = SPECIES_VICTREEBEL,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 56,
        .species = SPECIES_STEELIX,
        },
};

static const struct TrainerMon sParty_LeaderBlaine[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 62,
        .species = SPECIES_FLAREON,
        .moves = {MOVE_BITE, MOVE_ROAR, MOVE_TAKE_DOWN, MOVE_FIRE_BLAST},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 61,
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_THUNDERBOLT, MOVE_CONFUSE_RAY, MOVE_SMOG, MOVE_FIRE_BLAST},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 63,
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_STOMP, MOVE_BOUNCE, MOVE_FIRE_SPIN, MOVE_FIRE_BLAST},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 64,
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_HOWL, MOVE_FIRE_BLAST},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = SPATK_SPEED_SPREAD,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 65,
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_AIR_CUTTER, MOVE_BLAST_BURN, MOVE_SEISMIC_TOSS, MOVE_FIRE_BLAST},
    },
};

static const struct TrainerMon sParty_LeaderBlainePostgame[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = ATK_SPEED_SPREAD,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_CHOICE_BAND,
        .moves = {MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_CLOSE_COMBAT, MOVE_EXTREME_SPEED},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = SPATK_SPEED_SPREAD,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_NINETALES,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_HEAT_WAVE, MOVE_ENERGY_BALL, MOVE_HYPNOSIS, MOVE_NASTY_PLOT},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = SPATK_SPEED_SPREAD,
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_CHARIZARDITE_Y,
        .moves = {MOVE_AIR_CUTTER, MOVE_ROOST, MOVE_SOLAR_BEAM, MOVE_FLAMETHROWER},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = HP_SPATK_SPREAD,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_MAGMORTAR,
        .ability = 2,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_FIRE_BLAST, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = HP_ATK_SPREAD,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_FLAREON,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_FLAME_CHARGE, MOVE_SUPERPOWER, MOVE_FLAIL, MOVE_YAWN},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = ATK_SPEED_SPREAD,
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 95,
        .species = SPECIES_RAPIDASH,
        .heldItem = ITEM_EXPERT_BELT,
        .moves = {MOVE_FLARE_BLITZ, MOVE_MEGAHORN, MOVE_WILD_CHARGE, MOVE_MORNING_SUN},
    },
};

//Viridian Gym
static const struct TrainerMon sParty_LeaderGiovanni[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = HP_ATK_SPREAD,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 71,
        .species = SPECIES_RHYDON,
        .ability = 0,
        .heldItem = ITEM_EVIOLITE,
        .moves = {MOVE_STEALTH_ROCK, MOVE_ROCK_BLAST, MOVE_HORN_DRILL, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = ATK_SPEED_SPREAD,
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 72,
        .species = SPECIES_DUGTRIO,
        .ability = 1,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_SLASH, MOVE_SCREECH, MOVE_SUBSTITUTE, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = SPATK_SPEED_SPREAD,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 71,
        .species = SPECIES_NIDOQUEEN,
        .ability = 1,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_ICE_BEAM, MOVE_FIRE_BLAST},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 71,
        .species = SPECIES_NIDOKING,
        .ability = 1,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_POISON_JAB, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_ATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 70,
        .species = SPECIES_RHYPERIOR,
        .ability = 2,
        .heldItem = ITEM_CHOICE_BAND,
        .moves = {MOVE_ICE_PUNCH, MOVE_MEGAHORN, MOVE_STONE_EDGE, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 72,
        .species = SPECIES_KANGASKHAN,
        .heldItem = ITEM_KANGASKHANITE,
        .moves = {MOVE_POWER_UP_PUNCH, MOVE_FAKE_OUT, MOVE_SHADOW_CLAW, MOVE_EARTHQUAKE},
    },
};

static const struct TrainerMon sParty_TamerJason[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_RHYHORN,
        },
};

static const struct TrainerMon sParty_TamerCole[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 62,
        .species = SPECIES_ARBOK,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_TAUROS,
        },
};

static const struct TrainerMon sParty_BlackBeltAtsushi[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 62,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_BlackBeltKiyo[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_BlackBeltTakashi[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 60,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_CooltrainerSamuel[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_SLASH, MOVE_SWIFT, MOVE_SAND_ATTACK, MOVE_POISON_STING},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_SLASH, MOVE_SWIFT, MOVE_SAND_ATTACK, MOVE_POISON_STING},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_RHYHORN,
        .moves = {MOVE_TAKE_DOWN, MOVE_ROCK_BLAST, MOVE_FURY_ATTACK, MOVE_SCARY_FACE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_NIDORINO,
        .moves = {MOVE_FURY_ATTACK, MOVE_HORN_ATTACK, MOVE_POISON_STING, MOVE_DOUBLE_KICK},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_THRASH, MOVE_DOUBLE_KICK, MOVE_POISON_STING, MOVE_FOCUS_ENERGY},
    },
};

static const struct TrainerMon sParty_CooltrainerYuji[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_SLASH, MOVE_SWIFT, MOVE_SAND_ATTACK, MOVE_POISON_STING},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_ROCK_BLAST, MOVE_MAGNITUDE, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_STEELIX,
        .moves = {MOVE_DRAGON_BREATH, MOVE_SANDSTORM, MOVE_ROCK_THROW, MOVE_BIND},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 62,
        .species = SPECIES_GOLEM,
        .moves = {MOVE_ROCK_BLAST, MOVE_MAGNITUDE, MOVE_ROLLOUT, MOVE_DEFENSE_CURL},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_HEADBUTT, MOVE_LEER, MOVE_GROWL},
    },
};

static const struct TrainerMon sParty_CooltrainerWarren[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_HEADBUTT, MOVE_LEER, MOVE_GROWL},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_HEADBUTT, MOVE_LEER, MOVE_GROWL},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_RHYHORN,
        .moves = {MOVE_TAKE_DOWN, MOVE_ROCK_BLAST, MOVE_FURY_ATTACK, MOVE_SCARY_FACE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 61,
        .species = SPECIES_NIDORINA,
        .moves = {MOVE_FURY_SWIPES, MOVE_BITE, MOVE_POISON_STING, MOVE_DOUBLE_KICK},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = EVEN_SPREAD,
        .lvl = 62,
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_BODY_SLAM, MOVE_BITE, MOVE_POISON_STING, MOVE_DOUBLE_KICK},
    },
};

//Victory Road
static const struct TrainerMon sParty_CooltrainerNaomi[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_PERSIAN,
        .ability = 2,
        .moves = {MOVE_FURY_SWIPES, MOVE_SCREECH, MOVE_FEINT_ATTACK, MOVE_PAY_DAY},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_PONYTA,
        .moves = {MOVE_AGILITY, MOVE_TAKE_DOWN, MOVE_FIRE_SPIN, MOVE_STOMP},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FURY_ATTACK, MOVE_FIRE_SPIN, MOVE_STOMP, MOVE_GROWL},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_VULPIX,
        .moves = {MOVE_FLAMETHROWER, MOVE_CONFUSE_RAY, MOVE_QUICK_ATTACK, MOVE_IMPRISON},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_NINETALES,
        .moves = {MOVE_SAFEGUARD, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_FIRE_SPIN},
    },
};

static const struct TrainerMon sParty_CooltrainerRolando[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_RATICATE,
        .moves = {MOVE_SUPER_FANG, MOVE_PURSUIT, MOVE_SCARY_FACE, MOVE_QUICK_ATTACK},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_IVYSAUR,
        .moves = {MOVE_RAZOR_LEAF, MOVE_SLEEP_POWDER, MOVE_SWEET_SCENT, MOVE_SYNTHESIS},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_WARTORTLE,
        .moves = {MOVE_WATER_GUN, MOVE_BITE, MOVE_RAPID_SPIN, MOVE_TAIL_WHIP},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_CHARMELEON,
        .moves = {MOVE_FLAMETHROWER, MOVE_SLASH, MOVE_SMOKESCREEN, MOVE_SCARY_FACE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FLAMETHROWER, MOVE_WING_ATTACK, MOVE_SMOKESCREEN, MOVE_SCARY_FACE},
    },
};

static const struct TrainerMon sParty_PokemaniacDawson[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_CHARMELEON,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_LAPRAS,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_LICKILICKY,
        },
};
static const struct TrainerMon sParty_BlackBeltDaisuke[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_MACHOP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
};
static const struct TrainerMon sParty_JugglerNelson[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 66,
        .species = SPECIES_DROWZEE,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 66,
        .species = SPECIES_HYPNO,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 66,
        .species = SPECIES_KADABRA,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 66,
        .species = SPECIES_KADABRA,
        },
};
static const struct TrainerMon sParty_JugglerGregory[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 68,
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_PSYCHIC, MOVE_ROLE_PLAY, MOVE_DOUBLE_SLAP, MOVE_ENCORE},
    },
};
static const struct TrainerMon sParty_TamerVincent[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 67,
        .species = SPECIES_PERSIAN,
        },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 67,
        .species = SPECIES_GOLDUCK,
        },
};
static const struct TrainerMon sParty_CooltrainerGeorge[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_EGG_BOMB, MOVE_CONFUSION, MOVE_STUN_SPORE, MOVE_SLEEP_POWDER},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_FURY_SWIPES, MOVE_SWIFT, MOVE_POISON_STING, MOVE_SAND_ATTACK},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 66,
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_SPIKE_CANNON, MOVE_SPIKES, MOVE_AURORA_BEAM, MOVE_SUPERSONIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 66,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_LIGHT_SCREEN},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 66,
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLAME_WHEEL, MOVE_ROAR, MOVE_BITE, MOVE_TAKE_DOWN},
    },
};

static const struct TrainerMon sParty_CooltrainerColby[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 64,
        .species = SPECIES_KINGLER,
        .moves = {MOVE_GUILLOTINE, MOVE_STOMP, MOVE_MUD_SHOT, MOVE_BUBBLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_POLIWHIRL,
        .moves = {MOVE_BODY_SLAM, MOVE_DOUBLE_SLAP, MOVE_WATER_GUN, MOVE_HYPNOSIS},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_BARRIER, MOVE_WRAP, MOVE_BUBBLE_BEAM, MOVE_ACID},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_SEADRA,
        .moves = {MOVE_WATER_GUN, MOVE_SMOKESCREEN, MOVE_TWISTER, MOVE_LEER},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_WATER_GUN, MOVE_BITE, MOVE_RAPID_SPIN, MOVE_RAIN_DANCE},
    },
};
static const struct TrainerMon sParty_CooltrainerCaroline[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_BELLSPROUT,
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_STUN_SPORE, MOVE_POISON_POWDER},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_SLEEP_POWDER, MOVE_POISON_POWDER},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 66,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_STUN_SPORE, MOVE_SLEEP_POWDER},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_PARAS,
        .moves = {MOVE_GROWTH, MOVE_SLASH, MOVE_LEECH_LIFE, MOVE_STUN_SPORE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 66,
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SPORE, MOVE_SLASH, MOVE_LEECH_LIFE, MOVE_POISON_POWDER},
    },
};

static const struct TrainerMon sParty_CooltrainerAlexa[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 64,
        .species = SPECIES_CLEFAIRY,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_COSMIC_POWER, MOVE_DOUBLE_SLAP, MOVE_ENCORE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_JIGGLYPUFF,
        .moves = {MOVE_SING, MOVE_BODY_SLAM, MOVE_ROLLOUT, MOVE_DISABLE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 64,
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_PAY_DAY, MOVE_FEINT_ATTACK, MOVE_BITE, MOVE_SCREECH},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 65,
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_SHEER_COLD, MOVE_TAKE_DOWN, MOVE_REST, MOVE_AURORA_BEAM},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 66,
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_SING, MOVE_EGG_BOMB, MOVE_SOFT_BOILED, MOVE_MINIMIZE},
    },
};
static const struct TrainerMon sParty_CoolCoupleRayTyra[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 62,
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_SUPERPOWER, MOVE_BODY_SLAM, MOVE_DOUBLE_KICK, MOVE_POISON_STING},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15), 
        .lvl = 64,
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_MEGAHORN, MOVE_THRASH, MOVE_DOUBLE_KICK, MOVE_POISON_STING},
    },
};

//Silph President
static const struct TrainerMon sParty_SilphPrez[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 80,
        .species = SPECIES_TAUROS,
        .ability = 2,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_ZEN_HEADBUTT, MOVE_WORK_UP},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPDEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
        .lvl = 80,
        .species = SPECIES_SNORLAX,
        .heldItem = ITEM_LEFTOVERS,
        .ability = 1,
        .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_REST, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .lvl = 80,
        .species = SPECIES_BLISSEY,
        .heldItem = ITEM_NUGGET,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 80,
        .species = SPECIES_LAPRAS,
        .heldItem = ITEM_CHOICE_SPECS,
        .moves = {MOVE_DRAGON_PULSE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_HYDRO_PUMP},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 80,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_TWISTED_SPOON,
        .moves = {MOVE_RECOVER, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_CALM_MIND},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 80,
        .species = SPECIES_PERSIAN,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_NASTY_PLOT, MOVE_HYPER_VOICE, MOVE_DARK_PULSE, MOVE_THUNDERBOLT},
    }
};

//Postgame Rockets
static const struct TrainerMon sParty_PostgameRocketLeader[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = EVEN_SPREAD,
        .lvl = 80,
        .species = SPECIES_ARBOK,
        },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = EVEN_SPREAD,
        .lvl = 80,
        .species = SPECIES_RHYHORN,
        },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = EVEN_SPREAD,
        .lvl = 80,
        .species = SPECIES_SCIZOR,
        },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = EVEN_SPREAD,
        .lvl = 80,
        .species = SPECIES_RATICATE,
        },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = EVEN_SPREAD,
        .lvl = 80,
        .species = SPECIES_MUK,
        },
};

static const struct TrainerMon sParty_PostgameSilphRocket1[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_GOLBAT,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_SANDSLASH,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_KINGLER,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_RATICATE,
        },
};

static const struct TrainerMon sParty_PostgameSilphRocket2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_RATICATE,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_STEELIX,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_VICTREEBEL,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_TAUROS,
        },
};

static const struct TrainerMon sParty_PostgameSilphRocket3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_GOLEM,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_KANGASKHAN,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_POLIWRATH,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_FEAROW,
        },
};

static const struct TrainerMon sParty_PostgameSilphRocket4[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_GOLBAT,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_SANDSLASH,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_KINGLER,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_RATICATE,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_MAGMAR,
        },
};

static const struct TrainerMon sParty_PostgameSilphRocket5[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_NIDOKING,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_MACHAMP,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_MR_MIME,
    },
};

static const struct TrainerMon sParty_PostgameSilphRocket6[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_NIDOQUEEN,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_GENGAR,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_JYNX,
        },
};

//Title Match
static const struct TrainerMon sParty_TitleMatchDaisy[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_BELLOSSOM,
        .heldItem = ITEM_HEAT_ROCK,
        .moves = {MOVE_SUNNY_DAY, MOVE_SLEEP_POWDER, MOVE_SYNTHESIS, MOVE_SOLAR_BEAM},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 95,
        .species = SPECIES_VICTREEBEL,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_SLEEP_POWDER, MOVE_SLUDGE_BOMB, MOVE_LEAF_STORM, MOVE_SUCKER_PUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_NIDOKING,
        .heldItem = ITEM_LIFE_ORB,
        .ability = 1,
        .moves = {MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH, MOVE_POISON_JAB, MOVE_ICE_PUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_NIDOQUEEN,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_TOXIC, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_FLAMETHROWER},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .lvl = 95,
        .species = SPECIES_BLISSEY,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_SEISMIC_TOSS, MOVE_TOXIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .lvl = 95,
        .species = SPECIES_CLEFABLE,
        .heldItem = ITEM_LEFTOVERS,
        .ability = 2,
        .moves = {MOVE_ENCORE, MOVE_SOFT_BOILED, MOVE_SEISMIC_TOSS, MOVE_TOXIC},
    },
};

static const struct TrainerMon sParty_TitleMatchRocket[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 95,
        .species = SPECIES_CROBAT,
        .heldItem = ITEM_SHARP_BEAK,
        .ability = 2,
        .moves = {MOVE_TAUNT, MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_ROOST},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 95,
        .species = SPECIES_RATICATE,
        .heldItem = ITEM_FLAME_ORB,
        .ability = 1,
        .moves = {MOVE_FACADE, MOVE_SUCKER_PUNCH, MOVE_U_TURN, MOVE_SWORDS_DANCE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_PERSIAN,
        .heldItem = ITEM_LIFE_ORB,
        .ability = 2,
        .moves = {MOVE_NASTY_PLOT, MOVE_HYPNOSIS, MOVE_SWIFT, MOVE_WATER_PULSE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_FEAROW,
        .heldItem = ITEM_SCOPE_LENS,
        .ability = 2,
        .moves = {MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_U_TURN, MOVE_PURSUIT},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_MAGNEZONE,
        .heldItem = ITEM_LEFTOVERS,
        .ability = 2,
        .moves = {MOVE_THUNDER, MOVE_FLASH_CANNON, MOVE_EXPLOSION, MOVE_SUPERSONIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_MAGMORTAR,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = 2,
        .moves = {MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_THUNDERBOLT, MOVE_PSYCHIC},
    },
};

static const struct TrainerMon sParty_TitleMatchSteph[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 95,
        .species = SPECIES_RATICATE,
        .heldItem = ITEM_FLAME_ORB,
        .ability = 1,
        .moves = {MOVE_FACADE, MOVE_SUCKER_PUNCH, MOVE_U_TURN, MOVE_SWORDS_DANCE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_KANGASKHAN,
        .heldItem = ITEM_KANGASKHANITE,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_EARTHQUAKE, MOVE_LOW_KICK, MOVE_FAKE_OUT},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_FEAROW,
        .heldItem = ITEM_SCOPE_LENS,
        .ability = 2,
        .moves = {MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_U_TURN, MOVE_PURSUIT},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_TAUROS,
        .ability = 2,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_ZEN_HEADBUTT, MOVE_WORK_UP},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_PERSIAN,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_NASTY_PLOT, MOVE_HYPNOSIS, MOVE_SWIFT, MOVE_WATER_PULSE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPDEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
        .lvl = 95,
        .species = SPECIES_SNORLAX,
        .heldItem = ITEM_LEFTOVERS,
        .ability = 1,
        .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_REST, MOVE_EARTHQUAKE},
    },
};

static const struct TrainerMon sParty_TitleMatchLiz[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .lvl = 95,
        .species = SPECIES_VAPOREON,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_SURF, MOVE_TOXIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 95,
        .species = SPECIES_CLOYSTER,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = 1,
        .moves = {MOVE_SHELL_SMASH, MOVE_ICICLE_SPEAR, MOVE_RAPID_SPIN, MOVE_SPIKES},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_BLASTOISE,
        .heldItem = ITEM_BLASTOISINITE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FLASH_CANNON, MOVE_AURA_SPHERE, MOVE_DARK_PULSE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .lvl = 95,
        .species = SPECIES_POLIWRATH,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_CIRCLE_THROW, MOVE_SCALD},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPDEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .lvl = 95,
        .species = SPECIES_TENTACRUEL,
        .heldItem = ITEM_BLACK_SLUDGE,
        .moves = {MOVE_RAPID_SPIN, MOVE_KNOCK_OFF, MOVE_SURF, MOVE_SLUDGE_BOMB},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPDEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .lvl = 95,
        .species = SPECIES_SLOWKING,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SLACK_OFF, MOVE_SURF, MOVE_ICE_BEAM, MOVE_TOXIC},
    },
};

static const struct TrainerMon sParty_TitleMatchSteve[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_NIDOKING,
        .heldItem = ITEM_LIFE_ORB,
        .ability = 1,
        .moves = {MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH, MOVE_POISON_JAB, MOVE_ICE_PUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 95,
        .species = SPECIES_AERODACTYL,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_STEALTH_ROCK, MOVE_TAUNT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_ATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_KANGASKHAN,
        .heldItem = ITEM_LEFTOVERS,
        .ability = 1,
        .moves = {MOVE_SUBSTITUTE, MOVE_FOCUS_PUNCH, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_OUTRAGE, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 95,
        .species = SPECIES_DRAGONITE,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = 2,
        .moves = {MOVE_DRAGON_DANCE, MOVE_OUTRAGE, MOVE_ROOST, MOVE_EXTREME_SPEED},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_CHARIZARDITE_X,
        .moves = {MOVE_FLARE_BLITZ, MOVE_DRAGON_CLAW, MOVE_ROOST, MOVE_DRAGON_DANCE},
    },
};

static const struct TrainerMon sParty_TitleMatchM[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_BUTTERFREE,
        .heldItem = ITEM_FOCUS_SASH,
        .moves = {MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE, MOVE_HURRICANE, MOVE_BUG_BUZZ},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_VENOMOTH,
        .heldItem = ITEM_BLACK_SLUDGE,
        .ability = 1,
        .moves = {MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE, MOVE_SLEEP_POWDER, MOVE_SLUDGE_BOMB},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 95,
        .species = SPECIES_CROBAT,
        .heldItem = ITEM_SHARP_BEAK,
        .ability = 2,
        .moves = {MOVE_TAUNT, MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_ROOST},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_FARFETCHD,
        .heldItem = ITEM_STICK,
        .ability = 2,
        .moves = {MOVE_SLASH, MOVE_NIGHT_SLASH, MOVE_DUAL_WINGBEAT, MOVE_SWORDS_DANCE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_VENUSAUR,
        .heldItem = ITEM_VENUSAURITE,
        .moves = {MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .lvl = 95,
        .species = SPECIES_POLIWRATH,
        .heldItem = ITEM_EXPERT_BELT,
        .moves = {MOVE_BULK_UP, MOVE_WATERFALL, MOVE_CLOSE_COMBAT, MOVE_HYPNOSIS},
    },
};

static const struct TrainerMon sParty_TitleMatchMeghan[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_FARFETCHD,
        .heldItem = ITEM_STICK,
        .ability = 2,
        .moves = {MOVE_SLASH, MOVE_ROOST, MOVE_DUAL_WINGBEAT, MOVE_SWORDS_DANCE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_ATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_VENUSAUR,
        .heldItem = ITEM_BLACK_SLUDGE,
        .moves = {MOVE_SWORDS_DANCE, MOVE_SLEEP_POWDER, MOVE_POWER_WHIP, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .lvl = 95,
        .species = SPECIES_VILEPLUME,
        .heldItem = ITEM_BLACK_SLUDGE,
        .moves = {MOVE_AROMATHERAPY, MOVE_MOONLIGHT, MOVE_ENERGY_BALL, MOVE_SLUDGE_BOMB},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_TOXIC, MOVE_MORNING_SUN},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_GENGAR,
        .heldItem = ITEM_GENGARITE,
        .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_WAVE, MOVE_FOCUS_BLAST, MOVE_TAUNT},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_KINGLER,
        .heldItem = ITEM_LIFE_ORB,
        .ability = 2,
        .moves = {MOVE_AGILITY, MOVE_SWORDS_DANCE, MOVE_CRABHAMMER, MOVE_X_SCISSOR},
    },
};

static const struct TrainerMon sParty_TitleMatchBean[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = ATK_SPEED_SPREAD,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_DRAGON_DANCE, MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = HP_ATK_SPREAD,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_MORNING_SUN, MOVE_WILL_O_WISP},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = SPATK_SPEED_SPREAD,
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_ALAKAZITE,
        .moves = {MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = HP_SPDEF_SPREAD,
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .lvl = 95,
        .species = SPECIES_HYPNO,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_WISH, MOVE_PSYCHIC, MOVE_TOXIC, MOVE_PROTECT},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = SPATK_SPEED_SPREAD,
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_RAICHU,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_NASTY_PLOT, MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_ENCORE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = SPATK_SPEED_SPREAD,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_MAGNEZONE,
        .heldItem = ITEM_CHOICE_SPECS,
        .moves = {MOVE_THUNDER, MOVE_TRI_ATTACK, MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER},
    },
};

static const struct TrainerMon sParty_TitleMatchChris[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_NIDOKING,
        .heldItem = ITEM_LIFE_ORB,
        .ability = 1,
        .moves = {MOVE_SUPERPOWER, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE, MOVE_ICE_BEAM},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_LIFE_ORB,
        .ability = 2,
        .moves = {MOVE_SUBSTITUTE, MOVE_PSYCHIC, MOVE_SIGNAL_BEAM, MOVE_FOCUS_BLAST},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = SPATK_SPEED_SPREAD,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_ROOST, MOVE_AIR_SLASH, MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = SPATK_SPEED_SPREAD,
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_GENGAR,
        .heldItem = ITEM_BLACK_SLUDGE,
        .moves = {MOVE_TRICK, MOVE_SHADOW_BALL, MOVE_HYPNOSIS, MOVE_FOCUS_BLAST},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_DRAGONITE,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = 2,
        .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW, MOVE_FIRE_PUNCH, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_PIDGEOT,
        .heldItem = ITEM_PIDGEOTITE,
        .moves = {MOVE_HURRICANE, MOVE_ROOST, MOVE_HEAT_WAVE, MOVE_FOCUS_BLAST},
    },
};

static const struct TrainerMon sParty_TitleMatchAnnie[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPDEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
        .lvl = 95,
        .species = SPECIES_SNORLAX,
        .heldItem = ITEM_LEFTOVERS,
        .ability = 1,
        .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_REST, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_STARMIE,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_RECOVER, MOVE_SCALD, MOVE_THUNDERBOLT, MOVE_BLIZZARD},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_TAUROS,
        .ability = 2,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_ZEN_HEADBUTT, MOVE_WORK_UP},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_LAPRAS,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_BLIZZARD, MOVE_THUNDERBOLT, MOVE_CALM_MIND, MOVE_REST},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_ATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_RHYPERIOR,
        .heldItem = ITEM_LEFTOVERS,
        .ability = 2,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BODY_SLAM, MOVE_SUBSTITUTE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .lvl = 95,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = 2,
        .moves = {MOVE_SLEEP_POWDER, MOVE_PSYCHIC, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN},
    },
};

static const struct TrainerMon sParty_TitleMatchMike[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_DRAGON_DANCE, MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_DRAGON_CLAW},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPATK_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_VENUSAUR,
        .heldItem = ITEM_BLACK_SLUDGE,
        .moves = {MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_SYNTHESIS},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .lvl = 95,
        .species = SPECIES_BLASTOISE,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAPID_SPIN, MOVE_REST},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_RAICHU,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_NASTY_PLOT, MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_THUNDER_WAVE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_JYNX,
        .heldItem = ITEM_NEVER_MELT_ICE,
        .moves = {MOVE_ICE_BEAM, MOVE_LOVELY_KISS, MOVE_NASTY_PLOT, MOVE_PSYCHIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .lvl = 95,
        .species = SPECIES_WIGGLYTUFF,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_SEISMIC_TOSS, MOVE_THUNDER_WAVE},
    },
};

static const struct TrainerMon sParty_TitleMatchKev[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_NINETALES,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_NASTY_PLOT, MOVE_FIRE_BLAST, MOVE_ENERGY_BALL, MOVE_EXTRASENSORY},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = SPATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .lvl = 95,
        .species = SPECIES_OMASTAR,
        .heldItem = ITEM_WHITE_HERB,
        .moves = {MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_SHELL_SMASH, MOVE_SURF},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_DEF_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .lvl = 95,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SLEEP_POWDER, MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_SUBSTITUTE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = ATK_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_RHYPERIOR,
        .heldItem = ITEM_CHOICE_BAND,
        .moves = {MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_STONE_EDGE, MOVE_FIRE_PUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = HP_ATK_SPREAD,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .lvl = 95,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_FLAME_ORB,
        .ability = 0,
        .moves = {MOVE_PAYBACK, MOVE_DYNAMIC_PUNCH, MOVE_BULLET_PUNCH, MOVE_ICE_PUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = HP_SPEED_SPREAD,
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .lvl = 95,
        .species = SPECIES_WEEZING,
        .heldItem = ITEM_BLACK_SLUDGE,
        .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP},
    },
};

//Rocket Fugitive
static const struct TrainerMon sParty_FugitiveJessieJames[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_WEEZING,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_ARBOK,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 78,
        .species = SPECIES_MEOWTH,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_LICKILICKY,
        },
};

static const struct TrainerMon sParty_FugitiveM[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_ELECTRODE,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_MUK,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_GOLEM,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_SCYTHER,
        },
};

static const struct TrainerMon sParty_FugitiveF[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_GOLBAT,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_RATICATE,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_RHYDON,
        },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .ev = EVEN_SPREAD,
        .lvl = 75,
        .species = SPECIES_GYARADOS,
        },
};