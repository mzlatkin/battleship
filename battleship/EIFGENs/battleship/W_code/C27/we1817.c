/*
 * Code for class WEL_CURSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1817_20801(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1817_20802(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1817_20803(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1817_20804(EIF_REFERENCE);
extern void F1817_20805(EIF_REFERENCE);
extern void F1817_20806(EIF_REFERENCE);
extern void F1817_20807(EIF_REFERENCE);
extern void F1817_20808(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1817_20809(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1817_20810(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1817_20811(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1817_20812(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1817_20813(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1817_20814(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1817_20815(EIF_REFERENCE);
extern void EIF_Minit1817(void);

#ifdef __cplusplus
}
#endif

#include <wel.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_CURSOR}.make_by_bitmask */
void F1817_20801 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "make_by_bitmask";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(8);
	RTLR(0,arg3);
	RTLR(1,arg4);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLR(6,loc2);
	RTLR(7,tr2);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1816, Current, 2, 4, 26943);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1816, Current, 26943);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,510,197,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 1816, l_feature_name, 3, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,510,197,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg4, 1816, l_feature_name, 4, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("x_hot_spot_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("x_hot_spot_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17298, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) (arg1 < ti4_1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("y_hot_spot_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("y_hot_spot_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17299, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) (arg2 < ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("and_plane_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("xor_plane_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != NULL), label_1);
		RTCK;
		RTHOOK(7);
		RTCT("and_plane_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2210, "is_empty", arg3))(arg3)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(8);
		RTCT("xor_plane_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2210, "is_empty", arg4))(arg4)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(9);
	RTDBGAL(Current, 1, 0xF80005D8, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1496, 0x01).id);
	ur1 = RTCCL(arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(13726, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(9,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	RTDBGAL(Current, 2, 0xF80005D8, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(1496, 0x01).id);
	ur1 = RTCCL(arg4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(13726, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(10,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(11);
	RTDBGAA(Current, dtype, 12360, 0x40000000, 1); /* item */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12714, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(11,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9014, "resource_instance", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(11,2);
	tp1 = *(EIF_POINTER *)(tr2 + RTVA(12360, "item", tr2));
	up1 = tp1;
	ui4_1 = arg1;
	ui4_2 = arg2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17298, dtype))(Current)).it_i4);
	ui4_3 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17299, dtype))(Current)).it_i4);
	ui4_4 = ti4_2;
	tp2 = *(EIF_POINTER *)(loc1 + RTVA(12360, "item", loc1));
	up2 = tp2;
	tp3 = *(EIF_POINTER *)(loc2 + RTVA(12360, "item", loc2));
	up3 = tp3;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17356, dtype))(Current, up1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, up2x, up3x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(12360, dtype)) = (EIF_POINTER) tp1;
	RTHOOK(12);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(12775, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_CURSOR}.x_hotspot */
EIF_TYPED_VALUE F1817_20802 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "x_hotspot";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1816, Current, 1, 0, 26944);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1816, Current, 26944);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80005E8, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12862, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14165, "x_hotspot", loc1))(loc1)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14169, "enable_reference_tracking_on_bitmaps", loc1))(loc1);
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3245, "dispose", loc1))(loc1);
	} else {
		RTHOOK(6);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {WEL_CURSOR}.y_hotspot */
EIF_TYPED_VALUE F1817_20803 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "y_hotspot";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1816, Current, 1, 0, 26945);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1816, Current, 26945);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80005E8, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12862, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14166, "y_hotspot", loc1))(loc1)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14169, "enable_reference_tracking_on_bitmaps", loc1))(loc1);
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3245, "dispose", loc1))(loc1);
	} else {
		RTHOOK(6);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {WEL_CURSOR}.previous_cursor */
EIF_TYPED_VALUE F1817_20804 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "previous_cursor";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	
	RTEAA(l_feature_name, 1816, Current, 1, 0, 26946);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1816, Current, 26946);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current + RTWA(17352, dtype));
	if ((EIF_BOOLEAN)(tp1 != loc1)) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF8000718, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(1816, 0x01).id);
		tp1 = *(EIF_POINTER *)(Current + RTWA(17352, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12359, Dtype(tr1)))(tr1, up1x);
		RTNHOOK(2,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {WEL_CURSOR}.set */
void F1817_20805 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1816, Current, 0, 0, 26947);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1816, Current, 26947);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12362, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 17352, 0x40000000, 1); /* internal_previous_cursor */
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17353, dtype))(Current, up1x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(17352, dtype)) = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {WEL_CURSOR}.remove */
void F1817_20806 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "remove";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1816, Current, 0, 0, 26948);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1816, Current, 26948);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12362, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 17352, 0x40000000, 1); /* internal_previous_cursor */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17353, dtype))(Current, up1x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(17352, dtype)) = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {WEL_CURSOR}.restore_previous */
void F1817_20807 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "restore_previous";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	
	RTEAA(l_feature_name, 1816, Current, 2, 0, 26949);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1816, Current, 26949);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("previous_cursor_not_void", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17348, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(17352, dtype));
	up1 = tp1;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17353, dtype))(Current, up1x)).it_p);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 17352, 0x40000000, 1); /* internal_previous_cursor */
	*(EIF_POINTER *)(Current + RTWA(17352, dtype)) = (EIF_POINTER) loc2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("previous_cursor_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17348, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
}

/* {WEL_CURSOR}.load_item */
void F1817_20808 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "load_item";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1816, Current, 0, 2, 26950);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1816, Current, 26950);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("id_not_void", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg2 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 12360, 0x40000000, 1); /* item */
	up1 = arg1;
	up2 = arg2;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17354, dtype))(Current, up1x, up2x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(12360, dtype)) = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef arg2
#undef arg1
}

/* {WEL_CURSOR}.internal_previous_cursor */
EIF_TYPED_VALUE F1817_20809 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(17352,Dtype(Current)));
	return r;
}


/* {WEL_CURSOR}.destroy_resource */
EIF_TYPED_VALUE F1817_20810 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "destroy_resource";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1816, Current, 0, 0, 26952);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1816, Current, 26952);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up1 = tp1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17355, dtype))(Current, up1x)).it_b);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {WEL_CURSOR}.cwin_set_cursor */
EIF_TYPED_VALUE F1817_20811 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwin_set_cursor";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1816, Current, 0, 1, 26953);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1816, Current, 26953);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) SetCursor(((HCURSOR) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

/* {WEL_CURSOR}.cwin_load_cursor */
EIF_TYPED_VALUE F1817_20812 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "cwin_load_cursor";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1816, Current, 0, 2, 26954);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1816, Current, 26954);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) LoadCursor(((HINSTANCE) arg1), ((LPCTSTR) arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg2
#undef arg1
}

/* {WEL_CURSOR}.cwin_destroy_cursor */
EIF_TYPED_VALUE F1817_20813 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwin_destroy_cursor";
	RTEX;
#define arg1 arg1x.it_p
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1816, Current, 0, 1, 26955);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1816, Current, 26955);
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) EIF_TEST(DestroyCursor(((HCURSOR) arg1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {WEL_CURSOR}.cwin_create_cursor */
EIF_TYPED_VALUE F1817_20814 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "cwin_create_cursor";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_p
#define arg7 arg7x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_p = * (EIF_POINTER *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_p = * (EIF_POINTER *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_POINTER,&arg6);
	RTLU(SK_POINTER,&arg7);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1816, Current, 0, 7, 26956);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1816, Current, 26956);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) CreateCursor(((HINSTANCE) arg1), ((int) arg2), ((int) arg3), ((int) arg4), ((int) arg5), ((void *) arg6), ((void *) arg7));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_CURSOR}.image_type */
EIF_TYPED_VALUE F1817_20815 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "image_type";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1816, Current, 0, 0, 26957);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1816, Current, 26957);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10751, Dtype(Current)))(Current)).it_i4);
	Result = (EIF_INTEGER_32) Result;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

void EIF_Minit1817 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
