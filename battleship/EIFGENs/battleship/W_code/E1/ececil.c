#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* TRACING_HANDLER per_thread_trace */
void A32_36 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	EIF_TYPED_VALUE u [5];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(864, "per_thread_trace", Current))(Current, ((u [0].type = SK_INT32), (u [0].it_i4 = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_INT32), (u [3].it_i4 = arg4), u [3]), ((u [4].type = SK_BOOL), (u [4].it_b = arg5), u [4]));
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A139_159_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) F139_7117)(closed [1].it_r, open [1]);
}

	/* MISMATCH_INFORMATION wipe_out */
void A159_97 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2226, "wipe_out", Current))(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A159_161 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3069, "internal_put", Current))(Current, ((u [0].type = SK_REF), (u [0].it_r = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* MISMATCH_INFORMATION set_string_versions */
void A159_162 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3070, "set_string_versions", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* ETF_GUI_OUTPUT_HANDLER log_error */
void _A1263_35_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10742, "log_error", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_EVENT [G#1] execute */
void _A1996_36_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7775, "execute", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* ETF_CMD_LINE_OUTPUT_HANDLER log_empty */
void _A1264_34_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10740, "log_empty", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_CMD_LINE_OUTPUT_HANDLER log_error */
void _A1264_35_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10742, "log_error", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_CMD_LINE_OUTPUT_HANDLER log_command */
void _A1264_40_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10741, "log_command", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_ACCELERATOR_LIST enable_item_parented */
void _A1331_152_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11826, "enable_item_parented", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_ACCELERATOR_LIST disable_item_parented */
void _A1331_153_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11827, "disable_item_parented", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_TREE_ITEM_CHECK_ACTION_SEQUENCE wrapper */
void _A1333_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11835, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_VALUE_CHANGE_ACTION_SEQUENCE wrapper */
void _A1334_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11836, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_COLUMN_ACTION_SEQUENCE wrapper */
void _A1335_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11837, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_MULTI_COLUMN_LIST_ROW_SELECT_ACTION_SEQUENCE wrapper */
void _A1336_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11838, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_SCROLL_ACTION_SEQUENCE wrapper */
void _A1337_184_2_3 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11839, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], closed [2]);
}

	/* EV_NEW_ITEM_ACTION_SEQUENCE wrapper */
void _A1338_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11840, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_MENU_ITEM_SELECT_ACTION_SEQUENCE wrapper */
void _A1339_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11841, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_DOCKABLE_SOURCE_ACTION_SEQUENCE wrapper */
void _A1340_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11842, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_PND_FINISHED_ACTION_SEQUENCE wrapper */
void _A1341_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11843, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_KEY_STRING_ACTION_SEQUENCE wrapper */
void _A1342_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11844, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_KEY_ACTION_SEQUENCE wrapper */
void _A1343_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11845, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_INTEGER_ACTION_SEQUENCE wrapper */
void _A1344_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11846, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_POINTER_MOTION_ACTION_SEQUENCE wrapper */
void _A1345_184_2_3_4_5_6_7_8 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11847, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], closed [2]);
}

	/* EV_PND_START_ACTION_SEQUENCE wrapper */
void _A1346_184_2_3 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11848, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], closed [2]);
}

	/* EV_GEOMETRY_ACTION_SEQUENCE wrapper */
void _A1347_184_2_3_4_5 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11849, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], closed [2]);
}

	/* EV_PND_MOTION_ACTION_SEQUENCE wrapper */
void _A1348_184_2_3_4 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11850, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], closed [2]);
}

	/* EV_NOTIFY_ACTION_SEQUENCE wrapper */
void _A1349_183 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11851, "wrapper", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_NOTIFY_ACTION_SEQUENCE call */
void _A1349_182 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3111, "call", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_POINTER_BUTTON_ACTION_SEQUENCE wrapper */
void _A1350_184_2_3_4_5_6_7_8_9 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11852, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8], closed [2]);
}

	/* ETF_DUMMY etf_dummy */
void _A1387_74 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12228, "etf_dummy", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_REDO_INTERFACE redo */
void _A1388_74 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12229, "redo", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_UNDO_INTERFACE undo */
void _A1390_74 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12230, "undo", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_CUSTOM_SETUP_INTERFACE custom_setup */
void _A1392_75_2_3_4_5 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12232, "custom_setup", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4]);
}

	/* ETF_BOMB_INTERFACE bomb */
void _A1394_75_2_3 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12234, "bomb", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* ETF_DEBUG_TEST_INTERFACE debug_test */
void _A1396_75_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12236, "debug_test", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_NEW_GAME_INTERFACE new_game */
void _A1398_75_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12238, "new_game", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_CUSTOM_SETUP_TEST_INTERFACE custom_setup_test */
void _A1400_75_2_3_4_5 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12240, "custom_setup_test", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4]);
}

	/* ETF_FIRE_INTERFACE fire */
void _A1402_75_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12242, "fire", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_GIVE_UP_INTERFACE give_up */
void _A1404_74 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12243, "give_up", closed [1].it_r))(closed [1].it_r);
}

	/* WEL_FONT_FAMILY_ENUMERATOR update_current */
void A1412_42 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	EIF_TYPED_VALUE u [4];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12327, "update_current", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]), ((u [2].type = SK_INT32), (u [2].it_i4 = arg3), u [2]), ((u [3].type = SK_POINTER), (u [3].it_p = arg4), u [3]));
}

	/* HASH_TABLE [G#1, G#2] put */
void _A413_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2255, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [G#1, INTEGER_32] put */
void _A536_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2255, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] put */
void _A601_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2255, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [NATURAL_32, POINTER] put */
void _A887_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2255, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [INTEGER_32, G#2] put */
void _A936_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2255, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [G#1, INTEGER_64] put */
void _A2033_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2255, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [G#1, POINTER] put */
void _A2040_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2255, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [G#1, G#2] remove */
void _A413_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3005, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [G#1, INTEGER_32] remove */
void _A536_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3005, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] remove */
void _A601_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3005, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [NATURAL_32, POINTER] remove */
void _A887_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3005, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [INTEGER_32, G#2] remove */
void _A936_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3005, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [G#1, INTEGER_64] remove */
void _A2033_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3005, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [G#1, POINTER] remove */
void _A2040_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3005, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* WEL_RICH_EDIT_STREAM_OUT internal_callback */
EIF_INTEGER_32 A1532_76 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14679, "internal_callback", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].it_i4 = arg2), u [1])).it_i4;
}

	/* WEL_RICH_EDIT_STREAM_IN internal_callback */
EIF_INTEGER_32 A1535_76 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	EIF_TYPED_VALUE u [3];
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14688, "internal_callback", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].it_i4 = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2])).it_i4;
}

	/* EV_DYNAMIC_LIST [G#1] inline-agent#1 of append */
EIF_TYPED_VALUE _A2004_150_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) F2004_25684)(closed [1].it_r, open [1]);
}

	/* EV_WINDOW_I connect_accelerator */
void _A1734_260_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16507, "connect_accelerator", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_WINDOW_I disconnect_accelerator */
void _A1734_261_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16508, "disconnect_accelerator", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_MAIN_WINDOW_IMP command_return_key_pressed */
void _A1620_316 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(15429, "command_return_key_pressed", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP execute_pressed */
void _A1620_317 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(15430, "execute_pressed", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP reset_pressed */
void _A1620_318 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(15431, "reset_pressed", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP load_pressed */
void _A1620_319 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(15432, "load_pressed", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP destroy_and_exit_if_last */
void _A1620_260 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(15381, "destroy_and_exit_if_last", closed [1].it_r))(closed [1].it_r);
}

	/* EV_DIALOG dialog_key_press_action */
void _A1622_308_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15468, "dialog_key_press_action", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_DIALOG destroy */
void _A1622_260 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14844, "destroy", closed [1].it_r))(closed [1].it_r);
}

	/* EV_MESSAGE_DIALOG on_button_press */
void _A1624_349 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15498, "on_button_press", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_MESSAGE_DIALOG on_key_press */
void _A1624_350_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15499, "on_key_press", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_CHECKABLE_TREE is_item_checked */
EIF_TYPED_VALUE _A1661_306_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15696, "is_item_checked", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_APPLICATION_I contextual_help */
void _A1688_301_2_3_4_5_6_7_8_9 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(16048, "contextual_help", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_APPLICATION_I safe_destroy */
void _A1688_33 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(15730, "safe_destroy", closed [1].it_r))(closed [1].it_r);
}

	/* EV_APPLICATION_I inline-agent#1 of create_target_menu */
EIF_TYPED_VALUE _A1688_306_2_3 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1688_25706)(closed [1].it_r, open [1], open [2]);
}

	/* EV_APPLICATION_I inline-agent#2 of create_target_menu */
void _A1688_307_2_3_4 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1688_25707)(closed [1].it_r, open [1], open [2], open [3]);
}

	/* EV_APPLICATION_I help_handler */
void _A1688_298 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(16045, "help_handler", closed [1].it_r))(closed [1].it_r);
}

	/* EV_APPLICATION_I enable_contextual_help */
void _A1688_243 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(15991, "enable_contextual_help", closed [1].it_r))(closed [1].it_r);
}

	/* EV_PND_ACTION_SEQUENCE call */
void _A1332_183 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3111, "call", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_MENU_ITEM_LIST_IMP inline-agent#1 of menu_item_clicked */
EIF_TYPED_VALUE _A1693_244_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1693_25709)(closed [1].it_r, open [1], closed [2]);
}

	/* EV_MENU_ITEM_LIST_IMP inline-agent#1 of menu_opened */
EIF_TYPED_VALUE _A1693_245_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1693_25710)(closed [1].it_r, open [1], closed [2]);
}

	/* EV_DOCKABLE_SOURCE_I close_dockable_dialog */
void _A1697_100 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16210, "close_dockable_dialog", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_CHECKABLE_TREE_I get_state */
void _A1743_268_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(16623, "get_state", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_PIXMAP_IMP_LOADER update_fields */
void A1837_96 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_POINTER arg5, EIF_POINTER arg6)
{
	EIF_TYPED_VALUE u [6];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17565, "update_fields", Current))(Current, ((u [0].type = SK_INT32), (u [0].it_i4 = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].it_i4 = arg2), u [1]), ((u [2].type = SK_INT32), (u [2].it_i4 = arg3), u [2]), ((u [3].type = SK_INT32), (u [3].it_i4 = arg4), u [3]), ((u [4].type = SK_POINTER), (u [4].it_p = arg5), u [4]), ((u [5].type = SK_POINTER), (u [5].it_p = arg6), u [5]));
}

	/* EV_PIXMAP_IMP refresh_color_depth */
void _A1838_462 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17593, "refresh_color_depth", closed [1].it_r))(closed [1].it_r);
}

	/* EV_FONT_IMP update_preferred_faces */
void _A1852_192_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15889, "update_preferred_faces", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* WEL_WINDOW_ENUMERATOR enumerate_hwnd_callback */
void A1868_146 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	EIF_TYPED_VALUE u [1];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18314, "enumerate_hwnd_callback", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]));
}

	/* WEL_WINDOW_ENUMERATOR enumerate_child_windows_callback */
void A1868_145 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	EIF_TYPED_VALUE u [1];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18313, "enumerate_child_windows_callback", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]));
}

	/* WEL_DISPATCHER window_procedure */
EIF_POINTER A1874_366 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	EIF_TYPED_VALUE u [4];
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18405, "window_procedure", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].it_i4 = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_POINTER), (u [3].it_p = arg4), u [3])).it_p;
}

	/* WEL_DISPATCHER dialog_procedure */
EIF_POINTER A1874_367 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	EIF_TYPED_VALUE u [4];
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18406, "dialog_procedure", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].it_i4 = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_POINTER), (u [3].it_p = arg4), u [3])).it_p;
}

	/* EV_APPLICATION_IMP on_exception_action */
void _A1876_271_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16031, "on_exception_action", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_PICK_AND_DROPABLE_IMP real_start_transport */
void _A1918_254 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19331, "real_start_transport", closed [1].it_r))(closed [1].it_r, closed [2], closed [3], closed [4], closed [5], closed [6], closed [7], closed [8], closed [9], closed [10]);
}

	/* EV_WIDGET_IMP enable_drag_accept_files */
void _A1936_749 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19616, "enable_drag_accept_files", closed [1].it_r))(closed [1].it_r);
}

	/* EV_WIDGET_IMP disable_drag_accept_files */
void _A1936_750 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19617, "disable_drag_accept_files", closed [1].it_r))(closed [1].it_r);
}

	/* EV_CONTAINER_IMP disable_widget_sensitivity */
void _A1937_808_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19652, "disable_widget_sensitivity", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_CONTAINER_IMP add_radio_button */
void _A1937_805_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19649, "add_radio_button", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_CONTAINER_IMP enable_widget_sensitivity */
void _A1937_807_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19651, "enable_widget_sensitivity", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_CONTAINER_IMP remove_radio_button */
void _A1937_806_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19650, "remove_radio_button", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_BOX_IMP removed_so_update_non_expandable_children */
void _A1940_1803_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19678, "removed_so_update_non_expandable_children", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_BOX_IMP added_so_update_non_expandable_children */
void _A1940_1804_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19679, "added_so_update_non_expandable_children", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_HORIZONTAL_BOX_IMP set_item_size */
void _A1941_1816 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19683, "set_item_size", closed [1].it_r))(closed [1].it_r, closed [2], closed [3], closed [4], closed [5], closed [6], closed [7]);
}

	/* EV_VERTICAL_BOX_IMP set_item_size */
void _A1942_1816 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19683, "set_item_size", closed [1].it_r))(closed [1].it_r, closed [2], closed [3], closed [4], closed [5], closed [6], closed [7]);
}

	/* EV_DIALOG_IMP_COMMON copy_box_attributes */
void _A1952_1872 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(19753, "copy_box_attributes", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* EV_TOOL_BAR_IMP add_button */
void _A1958_1851_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19829, "add_button", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_TOOL_BAR_IMP add_radio_button */
void _A1958_1850_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19828, "add_radio_button", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_TOOL_BAR_IMP add_toggle_button */
void _A1958_1853_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19831, "add_toggle_button", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_TOOL_BAR_IMP remove_radio_button */
void _A1958_1852_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19830, "remove_radio_button", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_GAUGE_IMP set_range */
void _A1966_788 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19901, "set_range", closed [1].it_r))(closed [1].it_r);
}

	/* EV_RICH_TEXT_IMP update_tab_positions */
void _A1977_2139_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16743, "update_tab_positions", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* STRING_8 is_empty */
EIF_TYPED_VALUE _A233_162_1 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4639, "is_empty", open [1].it_r))(open [1].it_r);
}


static fnptr feif_address_table[] = {
(fnptr)0,
(fnptr)A32_36,
(fnptr)A159_97,
(fnptr)A159_161,
(fnptr)A159_162,
(fnptr)A1412_42,
(fnptr)A1532_76,
(fnptr)A1535_76,
(fnptr)A1837_96,
(fnptr)A1868_146,
(fnptr)A1868_145,
(fnptr)A1874_366,
(fnptr)A1874_367,
};

fnptr *egc_address_table_init = feif_address_table;



#ifdef __cplusplus
}
#endif
