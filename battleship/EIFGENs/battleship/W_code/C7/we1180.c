/*
 * Code for class WEL_TA_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1180_11939(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1180_11940(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1180_11941(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1180_11942(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1180_11943(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1180_11944(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1180_11945(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1180_11946(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1180_11947(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1180_11948(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1180_11949(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1180_11950(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1180_11951(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1180_11952(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1180(void);

#ifdef __cplusplus
}
#endif

#include <windows.h>
#include "wel.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TA_CONSTANTS}.ta_noupdatecp */
EIF_TYPED_VALUE F1180_11939 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ta_noupdatecp";
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
	
	RTEAA(l_feature_name, 1179, Current, 0, 0, 18227);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1179, Current, 18227);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TA_NOUPDATECP;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TA_CONSTANTS}.ta_updatecp */
EIF_TYPED_VALUE F1180_11940 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ta_updatecp";
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
	
	RTEAA(l_feature_name, 1179, Current, 0, 0, 18228);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1179, Current, 18228);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TA_UPDATECP;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TA_CONSTANTS}.ta_left */
EIF_TYPED_VALUE F1180_11941 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ta_left";
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
	
	RTEAA(l_feature_name, 1179, Current, 0, 0, 18229);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1179, Current, 18229);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TA_LEFT;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TA_CONSTANTS}.ta_right */
EIF_TYPED_VALUE F1180_11942 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ta_right";
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
	
	RTEAA(l_feature_name, 1179, Current, 0, 0, 18230);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1179, Current, 18230);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TA_RIGHT;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TA_CONSTANTS}.ta_center */
EIF_TYPED_VALUE F1180_11943 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ta_center";
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
	
	RTEAA(l_feature_name, 1179, Current, 0, 0, 18231);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1179, Current, 18231);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TA_CENTER;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TA_CONSTANTS}.ta_top */
EIF_TYPED_VALUE F1180_11944 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ta_top";
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
	
	RTEAA(l_feature_name, 1179, Current, 0, 0, 18232);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1179, Current, 18232);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TA_TOP;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TA_CONSTANTS}.ta_bottom */
EIF_TYPED_VALUE F1180_11945 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ta_bottom";
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
	
	RTEAA(l_feature_name, 1179, Current, 0, 0, 18233);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1179, Current, 18233);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TA_BOTTOM;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TA_CONSTANTS}.ta_baseline */
EIF_TYPED_VALUE F1180_11946 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ta_baseline";
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
	
	RTEAA(l_feature_name, 1179, Current, 0, 0, 18234);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1179, Current, 18234);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TA_BASELINE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TA_CONSTANTS}.vta_baseline */
EIF_TYPED_VALUE F1180_11947 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "vta_baseline";
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
	
	RTEAA(l_feature_name, 1179, Current, 0, 0, 18235);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1179, Current, 18235);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) VTA_BASELINE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TA_CONSTANTS}.vta_center */
EIF_TYPED_VALUE F1180_11948 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "vta_center";
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
	
	RTEAA(l_feature_name, 1179, Current, 0, 0, 18236);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1179, Current, 18236);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) VTA_CENTER;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TA_CONSTANTS}.valid_text_alignment_constant */
EIF_TYPED_VALUE F1180_11949 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_text_alignment_constant";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1179, Current, 0, 1, 18237);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1179, Current, 18237);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	tb4 = '\01';
	tb5 = '\01';
	tb6 = '\01';
	tb7 = '\01';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9704, dtype))(Current)).it_i4);
	if (!(EIF_BOOLEAN)(arg1 == ti4_1)) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9705, dtype))(Current)).it_i4);
		tb7 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb7) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9706, dtype))(Current)).it_i4);
		tb6 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb6) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9707, dtype))(Current)).it_i4);
		tb5 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb5) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9708, dtype))(Current)).it_i4);
		tb4 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb4) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9709, dtype))(Current)).it_i4);
		tb3 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb3) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9710, dtype))(Current)).it_i4);
		tb2 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb2) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9711, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {WEL_TA_CONSTANTS}.valid_text_alignement_constant */
EIF_TYPED_VALUE F1180_11950 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_text_alignement_constant";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1179, Current, 0, 1, 18238);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1179, Current, 18238);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ui4_1 = arg1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9714, Dtype(Current)))(Current, ui4_1x)).it_b);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {WEL_TA_CONSTANTS}.valid_htext_alignment_constant */
EIF_TYPED_VALUE F1180_11951 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_htext_alignment_constant";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1179, Current, 0, 1, 18239);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1179, Current, 18239);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9706, dtype))(Current)).it_i4);
	if (!(EIF_BOOLEAN)(arg1 == ti4_1)) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9707, dtype))(Current)).it_i4);
		tb2 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb2) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9708, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {WEL_TA_CONSTANTS}.valid_vtext_alignment_constant */
EIF_TYPED_VALUE F1180_11952 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_vtext_alignment_constant";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1179, Current, 0, 1, 18240);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1179, Current, 18240);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9709, dtype))(Current)).it_i4);
	if (!(EIF_BOOLEAN)(arg1 == ti4_1)) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9710, dtype))(Current)).it_i4);
		tb2 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb2) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9711, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

void EIF_Minit1180 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
