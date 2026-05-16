#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"
#include "make_const_nonconst.h"
#include "levels/castle_inside/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_inside_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _inside_yay0SegmentRomStart, _inside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x0A, _bidw_skybox_yay0SegmentRomStart, _bidw_skybox_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP, castle_geo_000F18), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND, castle_geo_001530), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND, castle_geo_001548), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM, castle_geo_001518), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS, castle_door_0_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR, castle_door_1_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS, castle_door_3_stars_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR, key_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_inside_area_1),
		WARP_NODE( 0xF1, LEVEL_CASTLE,   0x01,   0x03, WARP_NO_CHECKPOINT),
		WARP_NODE( 0x03, LEVEL_CASTLE,   0x01,   0x24, WARP_NO_CHECKPOINT),
		WARP_NODE( 0x02, LEVEL_CASTLE_GROUNDS,   0x01,   0x01, WARP_NO_CHECKPOINT),
		WARP_NODE( 0x01, LEVEL_CASTLE_GROUNDS,   0x01,   0x00, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, 2935, 0, 4457, 0, -180, 0, (1 << 16), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, 2780, 0, 4457, 0, 0, 0, (2 << 16), bhvDoorWarp),
		OBJECT(MODEL_NONE, 2862, 1820, 2966, 90, 0, -180, (3 << 16), bhvDeathWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, 2935, 519, 711, 0, -180, 0, 0x00000000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, 2780, 519, 711, 0, 0, 0, 0x00000000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_STAR_DOOR_8_STARS, 1282, 519, 755, 0, -135, 0, 0x00000000, bhvStarDoor),
		OBJECT(MODEL_CASTLE_STAR_DOOR_8_STARS, 1172, 519, 865, 0, 45, 0, 0x00000000, bhvStarDoor),
		OBJECT(MODEL_CASTLE_WOODEN_DOOR, 2857, -101, 160, 0, 0, 0, 0x00000000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_STAR_DOOR_8_STARS, 2106, 2, 1450, 0, 135, 0, 0x00000000, bhvStarDoor),
		OBJECT(MODEL_CASTLE_STAR_DOOR_8_STARS, 3609, 2, 1449, 0, -135, 0, 0x00000000, bhvStarDoor),
		OBJECT(MODEL_CASTLE_CLOCK_PENDULUM, 2867, 1275, 781, 0, -180, 0, 0x00000000, bhvDecorativePendulum),
		OBJECT(MODEL_CASTLE_STAR_DOOR_8_STARS, 4933, 203, 2044, 0, 90, 0, 0x00000000, bhvStarDoor),
		OBJECT(MODEL_CASTLE_STAR_DOOR_8_STARS, -1966, 747, -4608, 0, 45, 0, 0x00000000, bhvStarDoor),
		OBJECT(MODEL_NONE, -2538, 747, -5172, 0, 45, 0, (80 << 24) | (4 << 16) | (1), bhvPrinter),
		OBJECT(MODEL_CASTLE_STAR_DOOR_8_STARS, 768, 203, 2044, 0, -90, 0, 0x00000000, bhvStarDoor),
		OBJECT(MODEL_NONE, 727, 327, 2432, 0, -90, 0, (3 << 16), bhvSignOnWall),
		OBJECT(MODEL_CASTLE_STAR_DOOR_8_STARS, 4136, 0, 1214, 0, -180, 0, 0x00000000, bhvStarDoor),
		OBJECT(MODEL_CASTLE_STAR_DOOR_8_STARS, -169, 747, 71, 0, 45, 0, 0x00000000, bhvStarDoor),
		OBJECT(MODEL_CASTLE_STAR_DOOR_8_STARS, -59, 747, -39, 0, -135, 0, 0x00000000, bhvStarDoor),
		OBJECT(MODEL_YELLOW_COIN, 2557, 384, 1942, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2447, 384, 1942, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3158, 384, 1942, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3267, 384, 1942, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2540, 203, 2133, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3166, 203, 2133, 0, 0, 0, 0x00000000, bhvYellowCoin),
		TERRAIN(castle_inside_area_1_collision),
		MACRO_OBJECTS(castle_inside_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_INSIDE_CASTLE),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(2, castle_inside_area_2),
		WARP_NODE(0x0A, LEVEL_CASTLE_GROUNDS, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_CASTLE, 0x04, 0x03, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_ENDING, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -8, 5, 2614, 0, -1, 0, (0xFF << 24) | (0 << 16) | (81), bhvPrinter),
		OBJECT(MODEL_NONE, -8, 5, -2776, 0, -1, 0, (0xFF << 24) | (0 << 16) | (1), bhvPrinter),
		OBJECT(MODEL_NONE, -8, 5, 90, 0, -1, 0, (0xFF << 24) | (2 << 16) | (80), bhvPrinter),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, -8, 5, 5003, 0, -1, 0, (0x0A << 16), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, -10, 3, -5178, 0, 0, 0, (0x02 << 16), bhvDoorWarp),
		TERRAIN(castle_inside_area_2_collision),
		MACRO_OBJECTS(castle_inside_area_2_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(3, castle_inside_area_3),
		WARP_NODE(0x03, LEVEL_CASTLE, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -3598, 823, 2978, 0, -180, 0, 0x00000000, bhvTankFishGroup),
		OBJECT(MODEL_NONE, -3598, 823, 2057, 0, -180, 0, 0x00000000, bhvTankFishGroup),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR_UNUSED, -1816, 1170, -350, 0, 0, 0, 0x00000000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR_UNUSED, -1661, 1170, -350, 0, -180, 0, 0x00000000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR_UNUSED, -1816, 1, -350, 0, 0, 0, (0x0A << 16), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR_UNUSED, -1661, 1, -350, 0, -180, 0, (0x0B << 16), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR_UNUSED, 154, 1, -887, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR_UNUSED, 309, 1, -887, 0, -180, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR_UNUSED, 2026, 1, -896, 0, 0, 0, 0x00000000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR_UNUSED, 2180, 1, -896, 0, -180, 0, 0x00000000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR_UNUSED, 1082, 1, -4799, 0, 0, 0, 0x00000000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR_UNUSED, 1237, 1, -4799, 0, -180, 0, 0x00000000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR_UNUSED, 1046, -171, -1945, 0, 90, 0, (0x0C << 16), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR_UNUSED, 1297, -171, -1945, 0, 90, 0, 0x00000000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR_UNUSED, 152, 1, 4637, 0, 0, 0, 0x00000000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR_UNUSED, 306, 1, 4637, 0, -180, 0, 0x00000000, bhvDoorWarp),
		TERRAIN(castle_inside_area_3_collision),
		MACRO_OBJECTS(castle_inside_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_DIRE_VICTORY),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(4, castle_inside_area_4),
		WARP_NODE(0x03, LEVEL_CASTLE, 0x02, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_CASTLE_GROUNDS, 0x02, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x03, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR_UNUSED, 1142, -1, 1091, 0, 180, 0, 0x00000000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR_UNUSED, 988, -1, 1091, 0, 0, 0, 0x00000000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR_UNUSED, -1194, -1, 1144, 0, 0, 0, (0x03 << 16), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR_UNUSED, -61, 454, -1745, 0, -90, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_CLOCK_PENDULUM, -1189, 1179, 1074, 0, 0, 0, 0x00000000, bhvDecorativePendulum),
		OBJECT(MODEL_CASTLE_CLOCK_PENDULUM, 1070, 1179, 1074, 0, 0, 0, 0x00000000, bhvDecorativePendulum),
		OBJECT(MODEL_NONE, -1174, 211, -1685, 0, 0, 0, 0x00000000, bhvTankFishGroup),
		OBJECT(MODEL_RED_FLAME, 1075, 89, -1453, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 919, 89, -1430, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 1227, 89, -1430, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 1110, 89, -1327, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 1004, 89, -1327, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 1056, 89, -1373, 0, 0, 0, 0x00000000, bhvFlame),
		TERRAIN(castle_inside_area_4_collision),
		MACRO_OBJECTS(castle_inside_area_4_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};