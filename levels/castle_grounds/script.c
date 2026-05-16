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
#include "levels/castle_grounds/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_grounds_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _outside_yay0SegmentRomStart, _outside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, castle_grounds_geo_0006F4), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL, castle_grounds_geo_00070C), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG, castle_grounds_geo_000660), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_grounds_area_1),
		WARP_NODE(0x0A, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x32, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x03, WARP_NO_CHECKPOINT),
		WARP_NODE(0x00, LEVEL_CASTLE, 0x01, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_CASTLE, 0x01, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_CASTLE_GROUNDS, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0D, LEVEL_CASTLE, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0E, LEVEL_CASTLE, 0x02, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_CASTLE_GROUNDS, 0x03, 0x03, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_CASTLE_GROUNDS, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -3128, 6082, 846, 90, 0, 0, (0x03 << 16), bhvFadingWarp),
		MARIO_POS(0x01, -180, -1170, 86, 7242),
		OBJECT(MODEL_NONE, -5666, 846, -3699, 0, 64, 0, (0x04 << 16), bhvAirborneWarp),
		OBJECT(MODEL_NONE, -3129, 907, -6084, 0, -180, 0, (50 << 24) | (1 << 16) | (81), bhvPrinter),
		OBJECT(MODEL_NONE, 270, 881, -6985, 0, 90, 0, 0x00000000, bhvBirdsSoundLoop),
		OBJECT(MODEL_CANNON_BASE, -6250, 371, 3727, 0, 90, 0, (64 << 16), bhvCannon),
		OBJECT(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, -38, 788, -1189, 0, 0, 0, (0x01 << 16), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, 115, 788, -1189, 0, -180, 0, (0x00 << 16), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, 35, 632, -4392, 0, -180, 0, (0x0D << 16), bhvDoorWarp),
		OBJECT(MODEL_NONE, -3025, 789, -6082, 0, 90, 0, (DIALOG_001 << 16), bhvSignOnWall),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -667, 763, 3765, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -1600, 746, 3693, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -953, 620, 4328, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -1209, 445, 4772, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -1871, 462, 4747, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -2473, 513, 4538, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -2658, 579, 3811, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -417, 436, 5110, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 1, 610, 5162, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 356, 667, 4243, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 786, 626, 4594, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 1470, 395, 4863, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 1505, 334, 3718, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 1915, 312, 3033, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 2558, 229, 2739, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 3076, 282, 2370, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 6692, 218, 2652, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 5970, 288, 2211, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 5518, 406, 1681, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 5787, 418, 845, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 6464, 500, 259, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 6548, 542, -295, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 6067, 455, -220, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 6115, 583, -1088, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 5646, 461, -757, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 5510, 535, -1297, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 6177, 664, -1712, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 5632, 640, -2175, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 6261, 761, -2841, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -5205, 360, 5161, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -5901, 481, 5847, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -4686, 320, 2542, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -4416, 363, 2130, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -5964, 289, 2438, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -5732, 326, 1736, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -5388, 349, 1313, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -5697, 349, 681, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -6215, 366, -15, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -6109, 373, -827, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -5327, 424, -846, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -5591, 378, -233, 0, 0, 0, (0x00 << 16), bhvTree),
		OBJECT(MODEL_REX, 951, 631, 3312, 0, 0, 0, 0x00000000, bhvRex),
		OBJECT(MODEL_REX, -3684, 404, 2896, 0, 0, 0, 0x00000000, bhvRex),
		OBJECT(MODEL_REX, 848, 644, -5707, 0, 0, 0, 0x00000000, bhvRex),
		TERRAIN(castle_grounds_area_1_collision),
		MACRO_OBJECTS(castle_grounds_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(2, castle_grounds_area_2),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x03, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x32, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_CASTLE_GROUNDS, 0x01, 0x04, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 252, 1277, -1756, 0, 90, 0, 0x00000000, bhvBirdsSoundLoop),
		OBJECT(MODEL_NONE, 11, 205, 3106, 0, 180, 0, (0x0A << 16), bhvAirborneWarp),
		TERRAIN(castle_grounds_area_2_collision),
		MACRO_OBJECTS(castle_grounds_area_2_macro_objs),
		STOP_MUSIC(0),
		SHOW_DIALOG(0x00, DIALOG_000),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(3, castle_grounds_area_3),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 8, 1174, 828, 0, 0, 0, (0x0A << 16), bhvAirborneWarp),
		OBJECT(MODEL_NONE, 8, 449, -178, 0, 0, 0, (0xFF << 24) | (4 << 16) | (81), bhvPrinter),
		OBJECT(MODEL_NONE, 8, 449, -184, 0, 0, 0, (0xFF << 24) | (3 << 16) | (81), bhvPrinter),
		TERRAIN(castle_grounds_area_3_collision),
		MACRO_OBJECTS(castle_grounds_area_3_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, -1170, 86, 7242),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};