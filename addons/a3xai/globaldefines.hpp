//Advanced Configuration File (For development purposes)
//Do not edit unless you fully understand the consequences of the change.
//Improper editing may stop A3EAI/A3XAI from functioning properly or at all.


//Classnames
#define PARACHUTE_OBJECT "Steerable_Parachute_F"
#define RADIO_ITEM "ItemRadio" //A3XAI
//#define RADIO_ITEM "EpochRadio0" //A3EAI
#define PLAYER_UNITS "Exile_Unit_Player" //A3XAI
//#define PLAYER_UNITS "Epoch_Male_F","Epoch_Female_F" //A3EAI
#define LOOT_HOLDER_CLASS "GroundWeaponHolder" //A3XAI
//#define LOOT_HOLDER_CLASS "WH_Loot" //A3EAI
#define DEFAULT_UNIT_CLASSNAME "i_survivor_F"
#define SPACE_FOR_OBJECT "Land_Coil_F"
#define PLOTPOLE_OBJECT "Exile_Construction_Flag_Static" //A3XAI
//#define PLOTPOLE_OBJECT "PlotPole_EPOCH" //A3EAI
#define GRENADE_AMMO_3RND "3Rnd_HE_Grenade_shell"
#define GRENADE_AMMO_1RND "1Rnd_HE_Grenade_shell"
#define FIRST_AID_ITEM_AI "FirstAidKit"
#define FIRST_AID_ITEM_PLAYER "Exile_Item_InstaDoc" //A3XAI
//#define FIRST_AID_ITEM_PLAYER "FAK" //A3EAI
#define NVG_ITEM_AI "NVGoggles_OPFOR"
#define NVG_ITEM_PLAYER "NVGoggles" //A3XAI
// #define NVG_ITEM_PLAYER "NVG_EPOCH" //A3EAI
// #define DEFAULT_UNIFORM_ITEM "U_Test1_uniform" //A3EAI
// #define DEFAULT_VEST_ITEM_MALE "V_41_EPOCH" //A3EAI
// #define DEFAULT_VEST_ITEM_FEMALE "V_F41_EPOCH" //A3EAI
#define BLACKLIST_OBJECT_GENERAL "A3XAI_BlacklistedArea" //A3XAI
#define BLACKLIST_OBJECT_NOAGGRO "A3XAI_NoAggroArea" //A3XAI
#define BLACKLIST_OBJECT_RANDOM "A3XAI_RandomSpawnArea" //A3XAI
#define BLACKLIST_OBJECT_DYNAMIC "A3XAI_DynamicSpawnArea" //A3XAI
#define TRIGGER_OBJECT "A3XAI_EmptyDetector" //A3XAI
// #define BLACKLIST_OBJECT_GENERAL "A3EAI_BlacklistedArea" //A3EAI
// #define BLACKLIST_OBJECT_NOAGGRO "A3EAI_NoAggroArea" //A3EAI
// #define BLACKLIST_OBJECT_RANDOM "A3EAI_RandomSpawnArea" //A3EAI
// #define BLACKLIST_OBJECT_DYNAMIC "A3EAI_DynamicSpawnArea" //A3EAI
// #define TRIGGER_OBJECT "A3EAI_EmptyDetector" //A3EAI

//Probabilities
#define DYNAMIC_CHANCE_ADJUST_UNARMED -0.15
#define DYNAMIC_CHANCE_ADJUST_WEAKENED 0.05
#define DYNAMIC_CHANCE_ADJUST_LOOTING 0.05
#define DYNAMIC_CHANCE_ADJUST_WEALTHY 0.10

/*
	Distances
	  AI Spawn Distances - Adjusted for better player experience
*/
// #define NEAREST_ENEMY_RANGE 350
#define NEAREST_ENEMY_RANGE 200  // Reduce AI detection range for general enemies (was 350)
#define NEAREST_ENEMY_AIR 350  // Keep air detection the same
// #define NEAREST_ENEMY_INFANTRY 250
#define NEAREST_ENEMY_INFANTRY 150  // Reduce infantry detection range (was 250)
// #define NEAREST_ENEMY_LAND 300
#define NEAREST_ENEMY_LAND 200  // Reduce land vehicle detection range (was 300)
#define NEAREST_ENEMY_RANGE_ANTISTUCK 300  // Keep the same
#define PATROL_DISTANCE_BUFFER 100  // Keep the same
#define PLOTPOLE_RADIUS 300  // Keep AI away from Exile bases
// #define TRANSMIT_RANGE_RADIO_HUNTER 50
#define TRANSMIT_RANGE_RADIO_HUNTER 15  // AI calls for help at a **shorter** range (was 50)
// #define SEEK_RANGE_HUNTER 450
#define SEEK_RANGE_HUNTER 200  // AI Hunters now search within 350m (was 450)
// #define TRANSMIT_RANGE_RADIO_HUNTKILLER 50
#define TRANSMIT_RANGE_RADIO_HUNTKILLER 15  // HuntKillers call for backup at 30m instead of 50m
// #define RECEIVE_DIST_RADIO_HUNTKILLER 200
#define RECEIVE_DIST_RADIO_HUNTKILLER 75  // HuntKillers only hear backup requests within 150m (was 200)
// #define PLAYER_DISTANCE_SPAWN_AUTONOMOUS 300
#define PLAYER_DISTANCE_SPAWN_AUTONOMOUS 600  // AI spawns further from solo players
// #define PLAYER_DISTANCE_SPAWN_AIGROUP 100
#define PLAYER_DISTANCE_SPAWN_AIGROUP 500     // AI groups spawn further
// #define PLAYER_DISTANCE_SPAWN_AIVEHICLE 200
#define PLAYER_DISTANCE_SPAWN_AIVEHICLE 700   // AI vehicles stay farther away
#define PLAYER_DISTANCE_NO_LOS_DYNAMIC 400    // AI without LOS still spawns at a safer distance
// #define PLAYER_DISTANCE_WITH_LOS_DYNAMIC 400
#define PLAYER_DISTANCE_WITH_LOS_DYNAMIC 800  // AI needs to be further away with LOS
// #define PLAYER_DISTANCE_NO_LOS_RANDOM 200
#define PLAYER_DISTANCE_NO_LOS_RANDOM 600     // Prevents AI from instantly spawning nearby
// #define PLAYER_DISTANCE_WITH_LOS_RANDOM 400
#define PLAYER_DISTANCE_WITH_LOS_RANDOM 700   // Random spawns happen further away
// #define PLAYER_DISTANCE_NO_LOS_STATIC 200
#define PLAYER_DISTANCE_NO_LOS_STATIC 300  // AI spawns further away if no LOS (was 200)
// #define PLAYER_DISTANCE_WITH_LOS_STATIC 300
#define PLAYER_DISTANCE_WITH_LOS_STATIC 400  // AI spawns further away if LOS (was 300)
// #define PLAYER_DISTANCE_NO_LOS_STATIC_CUSTOM 100
#define PLAYER_DISTANCE_NO_LOS_STATIC_CUSTOM 200  // AI spawns further in custom areas if no LOS (was 100)
// #define PLAYER_DISTANCE_WITH_LOS_STATIC_CUSTOM 200
#define PLAYER_DISTANCE_WITH_LOS_STATIC_CUSTOM 300  // AI spawns further in custom areas with LOS (was 200)
// #define PLAYER_DISTANCE_WITH_LOS_ANTISTUCK 300
#define PLAYER_DISTANCE_WITH_LOS_ANTISTUCK 400  // AI will respawn further if stuck (was 300)
#define NO_AGGRO_AREA_SIZE 400 //A3XAI
//#define NO_AGGRO_AREA_SIZE 300 //A3EAI
#define BLACKLIST_AREA_SIZE 150 //A3XAI
//#define BLACKLIST_AREA_SIZE 750 //A3EAI
#define BLACKLIST_AREA_HC_SIZE 150
#define TRIGGER_SIZE_SMALL 600
#define TRIGGER_SIZE_NORMAL 650
#define TRIGGER_SIZE_EXPANDED 750
#define TRIGGER_SIZE_NORMAL_DOUBLED 1300
#define DUMBFIRE_AI_DISTANCE 400
#define SPAWN_DISTANCE_BASE_DYNAMICRANDOM 200
#define SPAWN_DISTANCE_EXTRA_DYNAMICRANDOM 100
#define SPAWN_DISTANCE_DEFAULT_RANDOM 300
#define SPAWN_DIRECTION_VARIANCE_DYNAMIC 80
#define TEMP_BLACKLIST_AREA_RANDOM_SIZE 350
#define TEMP_BLACKLIST_AREA_DYNAMIC_SIZE 350
#define TEMP_BLACKLIST_AREA_HC_SIZE 250
#define CREATE_RANDOM_SPAWN_DIST_BASE 300
#define CREATE_RANDOM_SPAWN_DIST_VARIANCE 450
#define STATIC_SPAWN_OBJECT_RANGE 250
#define STATIC_SPAWN_MIN_PATROL_RADIUS 125
#define STATIC_SPAWN_MAX_PATROL_RADIUS 300
#define STATIC_SPAWN_OBJECT_SIZE_REQ 15
#define PATROL_DIST_PARAGROUP 100
#define PATROL_DIST_VEHICLEGROUP 75
#define PATROL_DIST_DYNAMIC 150
#define PATROL_DIST_RANDOM 150
#define ANTISTUCK_AIR_MIN_WP_DIST 300
#define ANTISTUCK_AIR_WP_DIST_BASE 50
#define ANTISTUCK_AIR_WP_DIST_VARIANCE 900
#define ANTISTUCK_MIN_TRAVEL_DIST_AIR 750
#define ANTISTUCK_MIN_TRAVEL_DIST_LAND 10
#define ANTISTUCK_MIN_TRAVEL_DIST_INFANTRY 5
#define NEXT_WP_DIST_UAV 300
#define NEXT_WP_DIST_AIR 300
#define WP_POS_INGRESS_BASE_UAV 100
#define WP_POS_INGRESS_VARIANCE_UAV 350
#define WP_POS_EGRESS_BASE_UAV 300
#define WP_POS_EGRESS_VARIANCE_UAV 100
#define WP_POS_INGRESS_BASE_AIR 100
#define WP_POS_INGRESS_VARIANCE_AIR 700
#define WP_POS_EGRESS_BASE_AIR 600
#define WP_POS_EGRESS_VARIANCE_AIR 100
#define DETECT_RANGE_UGV 250
#define DETECT_RANGE_UAV 300
#define DETECT_RANGE_AIR 500
#define DETECT_RANGE_AIR_REINFORCE 300
#define DETECT_RANGE_AIR_CUSTOM 500
#define DETECT_LENGTH_UGV_2D 300
#define FLYINHEIGHT_UAV_SEARCHING_BASE 75
#define FLYINHEIGHT_UAV_SEARCHING_VARIANCE 25
#define FLYINHEIGHT_UAV_PATROLLING_BASE 125
#define FLYINHEIGHT_UAV_PATROLLING_VARIANCE 25
#define FLYINHEIGHT_AIR_SEARCHING_BASE 75
#define FLYINHEIGHT_AIR_SEARCHING_VARIANCE 25
#define FLYINHEIGHT_AIR_PATROLLING_BASE 125
#define FLYINHEIGHT_AIR_PATROLLING_VARIANCE 25
#define FLYINHEIGHT_AIR_CUSTOM 100
#define FLYINHEIGHT_AIR_REINFORCE 75
#define AIR_REINFORCE_DIST_BETWEEN_LOCATIONS 1000
#define AIR_REINFORCE_SPAWN_DIST_BASE 1800
#define AIR_REINFORCE_SPAWN_DIST_VARIANCE 900
#define AIR_REINFORCE_RADIO_DIST 300
#define AIR_REINFORCE_DESPAWN_DIST 12000
#define RADIO_RECEPTION_RANGE 350
#define PARACHUTE_HEIGHT_REQUIRED 50
#define REGROUP_VEHICLEGROUP_DIST 175
#define DYNAMIC_LOOTING_DISTANCE 25
#define NO_AGGRO_RANGE_MAN 100
#define NO_AGGRO_RANGE_AIR 900
#define NO_AGGRO_RANGE_LAND 500
#define NO_AGGRO_RANGE_UAV 1000 //Comment: UAVs have hilariously large range. Unlikely long enough distance, better than nothing.
#define NO_AGGRO_RANGE_UGV 500
#define NO_AGGRO_RANGE_DEFAULT 900

//Amounts 
#define STATIC_SPAWN_MIN_SPAWN_POINTS 6
#define MAX_UNITS_PER_STATIC_SPAWN 5
#define MAX_RANDOMSPAWN_RETRY_ATTEMPTS 2
#define DYNAMIC_RICH_PLAYER_AMOUNT 5000
#define DYNAMIC_WEAK_PLAYER_HEALTH 0.4
#define INFINITY 3.4028235e38

//Timing
#define TIME_PER_RESPAWN_PROCESSING 5
#define MONITOR_CLEANDEAD_FREQ 300
//#define MONITOR_VEHICLECLEANUP_FREQ 60 //A3EAI
#define MONITOR_LOCATIONCLEANUP_FREQ 360
#define MONITOR_CHECK_RANDSPAWN_FREQ 360
#define RANDSPAWN_EXPIRY_TIME 1080
#define SIDECHECK_TIME 1200
#define MONITOR_UPDATE_PLAYER_COUNT_FREQ 60
#define DYNSPAWNMGR_SLEEP_DELAY 300
// #define KRYPTO_CLEANUP_FREQ 900 //A3EAI
#define SERVER_START_TIMEOUT 300
#define TRIGGER_TIMEOUT_STATIC 3, 3, 3
#define TRIGGER_TIMEOUT_PARAGROUP 3, 3, 3
#define TRIGGER_TIMEOUT_VEHICLEGROUP 3, 3, 3
#define TRIGGER_TIMEOUT_RANDOM 3, 3, 3
#define TRIGGER_TIMEOUT_DYNAMIC 3, 3, 3
#define TRIGGER_TIMEOUT_STATICCUSTOM 3, 3, 3
#define DEFENSIVE_AGGRESSION_TIME 120
#define ADD_RESPAWN_FAST_TIME 30
#define ANTISTUCK_CHECK_TIME_INFANTRY 60
#define ANTISTUCK_CHECK_TIME_AIR 300
#define ANTISTUCK_CHECK_TIME_LAND 120

//Other definitions
#define PLAYER_GROUP_SIDE resistance //A3XAI
//#define PLAYER_GROUP_SIDE1 west //A3EAI
//#define PLAYER_GROUP_SIDE2 east //A3EAI
//#define AI_GROUP_SIDE resistance //A3EAI
#define AI_VEHICLEWEAPON_EXPLOSIVERATING_LIMIT 0.9
#define EXTERNAL_OBJECT_MONITOR_NAME "ExileSimulationMonitoredVehicles" //A3XAI
#define SERVER_STARTED_INDICATOR "PublicHiveIsLoaded" //A3XAI
//#define SERVER_STARTED_INDICATOR "EPOCH_BuildingSlotCount" //A3EAI

// AI Skill & Accuracy Tweaks
// This makes A3XAI miss shots, react slowly, and take longer to spot you.
A3XAI_skill_min = 0.05;  		// AI is now even less skilled
A3XAI_skill_max = 0.2;  		// Lower max skill to reduce effectiveness
A3XAI_aimingaccuracy = 0.05;  	// AI aim is now potato (default is ~0.2)
A3XAI_aimingshake = 0.7;  		// More shaky hands (default ~0.4)
A3XAI_aimingspeed = 0.1;  		// Slower reaction speed (default ~0.3)
A3XAI_spottime = 6;  			// Slower enemy detection (default ~3)
A3XAI_spotdistance = 200;  		// Reduce how far AI detects players (default ~400)


