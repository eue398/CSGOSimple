#pragma once

enum modtype_t {
    mod_bad = 0,
    mod_brush,
    mod_sprite,
    mod_studio,
    MAXMODTYPE
};

enum Hitboxes {
    HITBOX_HEAD,
    HITBOX_NECK,
    HITBOX_LOWER_NECK,
    HITBOX_PELVIS,
    HITBOX_BODY,
    HITBOX_THORAX,
    HITBOX_STOMACH,
    HITBOX_LOWER_CHEST,
    HITBOX_CHEST,
    HITBOX_UPPER_CHEST,
    HITBOX_RIGHT_THIGH,
    HITBOX_LEFT_THIGH,
    HITBOX_RIGHT_CALF,
    HITBOX_LEFT_CALF,
    HITBOX_RIGHT_FOOT,
    HITBOX_LEFT_FOOT,
    HITBOX_RIGHT_HAND,
    HITBOX_LEFT_HAND,
    HITBOX_RIGHT_UPPER_ARM,
    HITBOX_RIGHT_FOREARM,
    HITBOX_LEFT_UPPER_ARM,
    HITBOX_LEFT_FOREARM,
    MAXHITBOXES
};

enum CSWeaponType {
    WEAPONTYPE_KNIFE = 0,
    WEAPONTYPE_PISTOL,
    WEAPONTYPE_SUBMACHINEGUN,
    WEAPONTYPE_RIFLE,
    WEAPONTYPE_SHOTGUN,
    WEAPONTYPE_SNIPER_RIFLE,
    WEAPONTYPE_MACHINEGUN,
    WEAPONTYPE_C4,
    WEAPONTYPE_PLACEHOLDER,
    WEAPONTYPE_GRENADE,
    WEAPONTYPE_UNKNOWN,
    MAXCSWEAPONTYPE
};

enum ECstrike15UserMessages {
    CS_UM_VGUIMenu = 1,
    CS_UM_Geiger = 2,
    CS_UM_Train = 3,
    CS_UM_HudText = 4,
    CS_UM_SayText = 5,
    CS_UM_SayText2 = 6,
    CS_UM_TextMsg = 7,
    CS_UM_HudMsg = 8,
    CS_UM_ResetHud = 9,
    CS_UM_GameTitle = 10,
    CS_UM_Shake = 12,
    CS_UM_Fade = 13,
    CS_UM_Rumble = 14,
    CS_UM_CloseCaption = 15,
    CS_UM_CloseCaptionDirect = 16,
    CS_UM_SendAudio = 17,
    CS_UM_RawAudio = 18,
    CS_UM_VoiceMask = 19,
    CS_UM_RequestState = 20,
    CS_UM_Damage = 21,
    CS_UM_RadioText = 22,
    CS_UM_HintText = 23,
    CS_UM_KeyHintText = 24,
    CS_UM_ProcessSpottedEntityUpdate = 25,
    CS_UM_ReloadEffect = 26,
    CS_UM_AdjustMoney = 27,
    CS_UM_UpdateTeamMoney = 28,
    CS_UM_StopSpectatorMode = 29,
    CS_UM_KillCam = 30,
    CS_UM_DesiredTimescale = 31,
    CS_UM_CurrentTimescale = 32,
    CS_UM_AchievementEvent = 33,
    CS_UM_MatchEndConditions = 34,
    CS_UM_DisconnectToLobby = 35,
    CS_UM_PlayerStatsUpdate = 36,
    CS_UM_DisplayInventory = 37,
    CS_UM_WarmupHasEnded = 38,
    CS_UM_ClientInfo = 39,
    CS_UM_XRankGet = 40,
    CS_UM_XRankUpd = 41,
    CS_UM_CallVoteFailed = 45,
    CS_UM_VoteStart = 46,
    CS_UM_VotePass = 47,
    CS_UM_VoteFailed = 48,
    CS_UM_VoteSetup = 49,
    CS_UM_ServerRankRevealAll = 50,
    CS_UM_SendLastKillerDamageToClient = 51,
    CS_UM_ServerRankUpdate = 52,
    CS_UM_ItemPickup = 53,
    CS_UM_ShowMenu = 54,
    CS_UM_BarTime = 55,
    CS_UM_AmmoDenied = 56,
    CS_UM_MarkAchievement = 57,
    CS_UM_MatchStatsUpdate = 58,
    CS_UM_ItemDrop = 59,
    CS_UM_GlowPropTurnOff = 60,
    CS_UM_SendPlayerItemDrops = 61,
    CS_UM_RoundBackupFilenames = 62,
    CS_UM_SendPlayerItemFound = 63,
    CS_UM_ReportHit = 64,
    CS_UM_XpUpdate = 65,
    CS_UM_QuestProgress = 66,
    CS_UM_ScoreLeaderboardData = 67,
    CS_UM_PlayerDecalDigitalSignature = 68,
    MAXECSTRIKE15USERMESSAGES
};


enum ItemDefinitionIndex {
    ITEM_NONE = 0,
    WEAPON_DEAGLE = 1,
    WEAPON_ELITE = 2,
    WEAPON_FIVESEVEN = 3,
    WEAPON_GLOCK = 4,
    WEAPON_AK47 = 7,
    WEAPON_AUG = 8,
    WEAPON_AWP = 9,
    WEAPON_FAMAS = 10,
    WEAPON_G3SG1 = 11,
    WEAPON_GALILAR = 13,
    WEAPON_M249 = 14,
    WEAPON_M4A1 = 16,
    WEAPON_MAC10 = 17,
    WEAPON_P90 = 19,
    WEAPON_UMP45 = 20,
    WEAPON_XM1014 = 21,
    WEAPON_BIZON = 22,
    WEAPON_MAG7 = 23,
    WEAPON_NEGEV = 24,
    WEAPON_SAWEDOFF = 25,
    WEAPON_TEC9 = 26,
    WEAPON_TASER = 27,
    WEAPON_HKP2000 = 28,
    WEAPON_MP7 = 29,
    WEAPON_MP9 = 30,
    WEAPON_NOVA = 31,
    WEAPON_P250 = 32,
    WEAPON_SCAR20 = 33,
    WEAPON_SG556 = 34,
    WEAPON_SSG08 = 35,
    WEAPON_KNIFE = 36,
    WEAPON_FLASHBANG = 37,
    WEAPON_HEGRENADE = 38,
    WEAPON_SMOKEGRENADE = 39,
    WEAPON_MOLOTOV = 40,
    WEAPON_DECOY = 41,
    WEAPON_INCGRENADE = 42,
    WEAPON_C4 = 43,
    WEAPON_KNIFE_T = 44,
    WEAPON_M4A1_SILENCER = 45,
    WEAPON_USP_SILENCER = 46,
    WEAPON_CZ75A = 47,
    WEAPON_REVOLVER = 48,
    WEAPON_BAYONET = 500,
    WEAPON_KNIFE_FLIP = 505,
    WEAPON_KNIFE_GUT = 506,
    WEAPON_KNIFE_KARAMBIT = 507,
    WEAPON_KNIFE_M9_BAYONET = 508,
    WEAPON_KNIFE_TACTICAL = 509,
    WEAPON_KNIFE_FALCHION = 512,
    WEAPON_KNIFE_SURVIVAL_BOWIE = 514,
    WEAPON_KNIFE_BUTTERFLY = 515,
    WEAPON_KNIFE_PUSH = 516,
    GLOVE_STUDDED_BLOODHOUND = 5027,
    GLOVE_T_SIDE = 5028,
    GLOVE_CT_SIDE = 5029,
    GLOVE_SPORTY = 5030,
    GLOVE_SLICK = 5031,
    GLOVE_LEATHER_WRAP = 5032,
    GLOVE_MOTORCYCLE = 5033,
    GLOVE_SPECIALIST = 5034,
    MAXITEMDEFINITIONINDEX
};

enum ClassInfo {
    CAI_BaseNPC,
    CAK47,
    CBaseAnimating,
    CBaseAnimatingOverlay,
    CBaseAttributableItem,
    CBaseButton,
    CBaseCombatCharacter,
    CBaseCombatWeapon,
    CBaseCSGrenade,
    CBaseCSGrenadeProjectile,
    CBaseDoor,
    CBaseEntity,
    CBaseFlex,
    CBaseGrenade,
    CBaseParticleEntity,
    CBasePlayer,
    CBasePropDoor,
    CBaseTeamObjectiveResource,
    CBaseTempEntity,
    CBaseToggle,
    CBaseTrigger,
    CBaseViewModel,
    CBaseVPhysicsTrigger,
    CBaseWeaponWorldModel,
    CBeam,
    CBeamSpotlight,
    CBoneFollower,
    CBreakableProp,
    CBreakableSurface,
    CC4,
    CCascadeLight,
    CChicken,
    CColorCorrection,
    CColorCorrectionVolume,
    CCSGameRulesProxy,
    CCSPlayer,
    CCSPlayerResource,
    CCSRagdoll,
    CCSTeam,
    CDEagle,
    CDecoyGrenade,
    CDecoyProjectile,
    CDynamicLight,
    CDynamicProp,
    CEconEntity,
    CEconWearable,
    CEmbers,
    CEntityDissolve,
    CEntityFlame,
    CEntityFreezing,
    CEntityParticleTrail,
    CEnvAmbientLight,
    CEnvDetailController,
    CEnvDOFController,
    CEnvParticleScript,
    CEnvProjectedTexture,
    CEnvQuadraticBeam,
    CEnvScreenEffect,
    CEnvScreenOverlay,
    CEnvTonemapController,
    CEnvWind,
    CFEPlayerDecal,
    CFireCrackerBlast,
    CFireSmoke,
    CFireTrail,
    CFish,
    CFlashbang,
    CFogController,
    CFootstepControl,
    CFunc_Dust,
    CFunc_LOD,
    CFuncAreaPortalWindow,
    CFuncBrush,
    CFuncConveyor,
    CFuncLadder,
    CFuncMonitor,
    CFuncMoveLinear,
    CFuncOccluder,
    CFuncReflectiveGlass,
    CFuncRotating,
    CFuncSmokeVolume,
    CFuncTrackTrain,
    CGameRulesProxy,
    CHandleTest,
    CHEGrenade,
    CHostage,
    CHostageCarriableProp,
    CIncendiaryGrenade,
    CInferno,
    CInfoLadderDismount,
    CInfoOverlayAccessor,
    CItem_Healthshot,
    CItemDogtags,
    CKnife,
    CKnifeGG,
    CLightGlow,
    CMaterialModifyControl,
    CMolotovGrenade,
    CMolotovProjectile,
    CMovieDisplay,
    CParticleFire,
    CParticlePerformanceMonitor,
    CParticleSystem,
    CPhysBox,
    CPhysBoxMultiplayer,
    CPhysicsProp,
    CPhysicsPropMultiplayer,
    CPhysMagnet,
    CPlantedC4,
    CPlasma,
    CPlayerResource,
    CPointCamera,
    CPointCommentaryNode,
    CPointWorldText,
    CPoseController,
    CPostProcessController,
    CPrecipitation,
    CPrecipitationBlocker,
    CPredictedViewModel,
    CProp_Hallucination,
    CPropDoorRotating,
    CPropJeep,
    CPropVehicleDriveable,
    CRagdollManager,
    CRagdollProp,
    CRagdollPropAttached,
    CRopeKeyframe,
    CSCAR17,
    CSceneEntity,
    CSensorGrenade,
    CSensorGrenadeProjectile,
    CShadowControl,
    CSlideshowDisplay,
    CSmokeGrenade,
    CSmokeGrenadeProjectile,
    CSmokeStack,
    CSpatialEntity,
    CSpotlightEnd,
    CSprite,
    CSpriteOriented,
    CSpriteTrail,
    CStatueProp,
    CSteamJet,
    CSun,
    CSunlightShadowControl,
    CTeam,
    CTeamplayRoundBasedRulesProxy,
    CTEArmorRicochet,
    CTEBaseBeam,
    CTEBeamEntPoint,
    CTEBeamEnts,
    CTEBeamFollow,
    CTEBeamLaser,
    CTEBeamPoints,
    CTEBeamRing,
    CTEBeamRingPoint,
    CTEBeamSpline,
    CTEBloodSprite,
    CTEBloodStream,
    CTEBreakModel,
    CTEBSPDecal,
    CTEBubbles,
    CTEBubbleTrail,
    CTEClientProjectile,
    CTEDecal,
    CTEDust,
    CTEDynamicLight,
    CTEEffectDispatch,
    CTEEnergySplash,
    CTEExplosion,
    CTEFireBullets,
    CTEFizz,
    CTEFootprintDecal,
    CTEFoundryHelpers,
    CTEGaussExplosion,
    CTEGlowSprite,
    CTEImpact,
    CTEKillPlayerAttachments,
    CTELargeFunnel,
    CTEMetalSparks,
    CTEMuzzleFlash,
    CTEParticleSystem,
    CTEPhysicsProp,
    CTEPlantBomb,
    CTEPlayerAnimEvent,
    CTEPlayerDecal,
    CTEProjectedDecal,
    CTERadioIcon,
    CTEShatterSurface,
    CTEShowLine,
    CTesla,
    CTESmoke,
    CTESparks,
    CTESprite,
    CTESpriteSpray,
    CTest_ProxyToggle_Networkable,
    CTestTraceline,
    CTEWorldDecal,
    CTriggerPlayerMovement,
    CTriggerSoundOperator,
    CVGuiScreen,
    CVoteController,
    CWaterBullet,
    CWaterLODControl,
    CWeaponAug,
    CWeaponAWP,
    CWeaponBaseItem,
    CWeaponBizon,
    CWeaponCSBase,
    CWeaponCSBaseGun,
    CWeaponCycler,
    CWeaponElite,
    CWeaponFamas,
    CWeaponFiveSeven,
    CWeaponG3SG1,
    CWeaponGalil,
    CWeaponGalilAR,
    CWeaponGlock,
    CWeaponHKP2000,
    CWeaponM249,
    CWeaponM3,
    CWeaponM4A1,
    CWeaponMAC10,
    CWeaponMag7,
    CWeaponMP5Navy,
    CWeaponMP7,
    CWeaponMP9,
    CWeaponNegev,
    CWeaponNOVA,
    CWeaponP228,
    CWeaponP250,
    CWeaponP90,
    CWeaponSawedoff,
    CWeaponSCAR20,
    CWeaponScout,
    CWeaponSG550,
    CWeaponSG552,
    CWeaponSG556,
    CWeaponSSG08,
    CWeaponTaser,
    CWeaponTec9,
    CWeaponTMP,
    CWeaponUMP45,
    CWeaponUSP,
    CWeaponXM1014,
    CWorld,
    DustTrail,
    MovieExplosion,
    ParticleSmokeGrenade,
    RocketTrail,
    SmokeTrail,
    SporeExplosion,
    SporeTrail,
    MAXCLASSINFO
};

enum ECSPlayerBones {
    PELVIS = 0,
    SPINE_0,
    SPINE_1,
    SPINE_2,
    SPINE_3,
    NECK_0,
    HEAD_0,
    CLAVICLE_L,
    ARM_UPPER_L,
    ARM_LOWER_L,
    HAND_L,
    FINGER_MIDDLE_META_L,
    FINGER_MIDDLE_0_L,
    FINGER_MIDDLE_1_L,
    FINGER_MIDDLE_2_L,
    FINGER_PINKY_META_L,
    FINGER_PINKY_0_L,
    FINGER_PINKY_1_L,
    FINGER_PINKY_2_L,
    FINGER_INDEX_META_L,
    FINGER_INDEX_0_L,
    FINGER_INDEX_1_L,
    FINGER_INDEX_2_L,
    FINGER_THUMB_0_L,
    FINGER_THUMB_1_L,
    FINGER_THUMB_2_L,
    FINGER_RING_META_L,
    FINGER_RING_0_L,
    FINGER_RING_1_L,
    FINGER_RING_2_L,
    WEAPON_HAND_L,
    ARM_LOWER_L_TWIST,
    ARM_LOWER_L_TWIST1,
    ARM_UPPER_L_TWIST,
    ARM_UPPER_L_TWIST1,
    CLAVICLE_R,
    ARM_UPPER_R,
    ARM_LOWER_R,
    HAND_R,
    FINGER_MIDDLE_META_R,
    FINGER_MIDDLE_0_R,
    FINGER_MIDDLE_1_R,
    FINGER_MIDDLE_2_R,
    FINGER_PINKY_META_R,
    FINGER_PINKY_0_R,
    FINGER_PINKY_1_R,
    FINGER_PINKY_2_R,
    FINGER_INDEX_META_R,
    FINGER_INDEX_0_R,
    FINGER_INDEX_1_R,
    FINGER_INDEX_2_R,
    FINGER_THUMB_0_R,
    FINGER_THUMB_1_R,
    FINGER_THUMB_2_R,
    FINGER_RING_META_R,
    FINGER_RING_0_R,
    FINGER_RING_1_R,
    FINGER_RING_2_R,
    WEAPON_HAND_R,
    ARM_LOWER_R_TWIST,
    ARM_LOWER_R_TWIST1,
    ARM_UPPER_R_TWIST,
    ARM_UPPER_R_TWIST1,
    LEG_UPPER_L,
    LEG_LOWER_L,
    ANKLE_L,
    BALL_L,
    LFOOT_LOCK,
    LEG_UPPER_L_TWIST,
    LEG_UPPER_L_TWIST1,
    LEG_UPPER_R,
    LEG_LOWER_R,
    ANKLE_R,
    BALL_R,
    RFOOT_LOCK,
    LEG_UPPER_R_TWIST,
    LEG_UPPER_R_TWIST1,
    FINGER_PINKY_L_END,
    FINGER_PINKY_R_END,
    VALVEBIPED_WEAPON_BONE,
    LH_IK_DRIVER,
    PRIMARY_JIGGLE_JNT,
    MAXECSPLAYERBONES
};

enum EntityFlags {
    FL_ONGROUND = (1 << 0),
    FL_DUCKING = (1 << 1),
    FL_WATERJUMP = (1 << 2),
    FL_ONTRAIN = (1 << 3),
    FL_INRAIN = (1 << 4),
    FL_FROZEN = (1 << 5),
    FL_ATCONTROLS = (1 << 6),
    FL_CLIENT = (1 << 7),
    FL_FAKECLIENT = (1 << 8),
    MAX_ENTITYFLAGS
};

enum LifeState : unsigned char {
    LIFE_ALIVE = 0,// alive
    LIFE_DYING = 1, // playing death animation or still falling off of a ledge waiting to hit ground
    LIFE_DEAD = 2, // dead. lying still.
    MAXLIFESTATE
};

enum WeaponSound_t {
    EMPTY,
    SINGLE,
    SINGLE_NPC,
    WPN_DOUBLE, // Can't be "DOUBLE" because windows.h uses it.
    DOUBLE_NPC,
    BURST,
    RELOAD,
    RELOAD_NPC,
    MELEE_MISS,
    MELEE_HIT,
    MELEE_HIT_WORLD,
    SPECIAL1,
    SPECIAL2,
    SPECIAL3,
    TAUNT,
    FAST_RELOAD,
    // Add new shoot sound types here
    REVERSE_THE_NEW_SOUND,
    NUM_SHOOT_SOUND_TYPES,
    MAXWEAPONSOUND
};

enum MoveType_t {
    MOVETYPE_NONE = 0,
    MOVETYPE_ISOMETRIC,
    MOVETYPE_WALK,
    MOVETYPE_STEP,
    MOVETYPE_FLY,
    MOVETYPE_FLYGRAVITY,
    MOVETYPE_VPHYSICS,
    MOVETYPE_PUSH,
    MOVETYPE_NOCLIP,
    MOVETYPE_LADDER,
    MOVETYPE_OBSERVER,
    MOVETYPE_CUSTOM,
    MOVETYPE_LAST = MOVETYPE_CUSTOM,
    MOVETYPE_MAX_BITS = 4,
    MAXMOVETYPE
};
