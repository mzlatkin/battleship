/*
 * Code for class WEL_DLG_TEMPLATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1501_16441(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1501_16442(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1501_16443(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1501_16444(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1501_16445(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1501_16446(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1501_16447(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1501_16448(EIF_REFERENCE);
extern void F1501_16449(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1501_16450(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1501_16451(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1501_16452(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1501_16453(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1501_16454(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1501_16455(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1501_16456(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1501_16457(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1501_16458(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1501_16459(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1501_16460(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1501_16461(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1501_16462(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1501_16463(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1501_16464(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1501_16465(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1501_16466(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1501_16467(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1501_16468(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1501_16469(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1501_16470(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1501_16471(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1501_16472(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1501_16473(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1501_16474(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1501_16475(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1501_16476(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1501_16477(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1501_16478(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1501_16479(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1501_16480(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1501_16481(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1501_16482(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1501_16483(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1501_16484(EIF_REFERENCE);
extern void EIF_Minit1501(void);

#ifdef __cplusplus
}
#endif

#include <string.h>
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_DLG_TEMPLATE}.make_with_global_alloc */
void F1501_16441 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_with_global_alloc";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 0, 23175);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1500, Current, 23175);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 12360, 0x40000000, 1); /* item */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13816, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13043, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13794, dtype))(Current, ui4_1x, ui4_2x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(12360, dtype)) = (EIF_POINTER) tp1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 13793, 0x04000000, 1); /* memory_allocated_with_global_alloc */
	*(EIF_BOOLEAN *)(Current + RTWA(13793, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(tp1 == tp2)) {
		RTHOOK(4);
		tr1 = RTLN(eif_new_type(62, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(4,1);
		tr2 = RTMS_EX_H("No more memory",14,904766585);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1290, "raise", tr1))(tr1, ur1x);
	}
	RTHOOK(5);
	RTDBGAA(Current, dtype, 12361, 0x04000000, 1); /* shared */
	*(EIF_BOOLEAN *)(Current + RTWA(12361, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("not_shared", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(12361, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
}

/* {WEL_DLG_TEMPLATE}.style */
EIF_TYPED_VALUE F1501_16442 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "style";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 0, 23176);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1500, Current, 23176);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(13793, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13799, dtype))(Current, up1x)).it_i4);
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13796, dtype))(Current, up1x)).it_p);
		up1 = tp1;
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13799, dtype))(Current, up1x)).it_i4);
		RTHOOK(4);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13797, dtype))(Current, up1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {WEL_DLG_TEMPLATE}.dwextendedstyle */
EIF_TYPED_VALUE F1501_16443 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dwextendedstyle";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 0, 23177);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1500, Current, 23177);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(13793, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13800, dtype))(Current, up1x)).it_i4);
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13796, dtype))(Current, up1x)).it_p);
		up1 = tp1;
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13800, dtype))(Current, up1x)).it_i4);
		RTHOOK(4);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13797, dtype))(Current, up1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {WEL_DLG_TEMPLATE}.cdit */
EIF_TYPED_VALUE F1501_16444 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cdit";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 0, 23178);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1500, Current, 23178);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(13793, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13801, dtype))(Current, up1x)).it_i4);
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13796, dtype))(Current, up1x)).it_p);
		up1 = tp1;
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13801, dtype))(Current, up1x)).it_i4);
		RTHOOK(4);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13797, dtype))(Current, up1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {WEL_DLG_TEMPLATE}.x */
EIF_TYPED_VALUE F1501_16445 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "x";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 0, 23179);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1500, Current, 23179);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(13793, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13802, dtype))(Current, up1x)).it_i4);
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13796, dtype))(Current, up1x)).it_p);
		up1 = tp1;
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13802, dtype))(Current, up1x)).it_i4);
		RTHOOK(4);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13797, dtype))(Current, up1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {WEL_DLG_TEMPLATE}.y */
EIF_TYPED_VALUE F1501_16446 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "y";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 0, 23180);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1500, Current, 23180);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(13793, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13803, dtype))(Current, up1x)).it_i4);
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13796, dtype))(Current, up1x)).it_p);
		up1 = tp1;
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13803, dtype))(Current, up1x)).it_i4);
		RTHOOK(4);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13797, dtype))(Current, up1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {WEL_DLG_TEMPLATE}.cx */
EIF_TYPED_VALUE F1501_16447 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cx";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 0, 23181);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1500, Current, 23181);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(13793, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13804, dtype))(Current, up1x)).it_i4);
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13796, dtype))(Current, up1x)).it_p);
		up1 = tp1;
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13804, dtype))(Current, up1x)).it_i4);
		RTHOOK(4);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13797, dtype))(Current, up1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {WEL_DLG_TEMPLATE}.cy */
EIF_TYPED_VALUE F1501_16448 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cy";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 0, 23182);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1500, Current, 23182);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(13793, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13805, dtype))(Current, up1x)).it_i4);
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13796, dtype))(Current, up1x)).it_p);
		up1 = tp1;
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13805, dtype))(Current, up1x)).it_i4);
		RTHOOK(4);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13797, dtype))(Current, up1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {WEL_DLG_TEMPLATE}.set_style */
void F1501_16449 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_style";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 1, 23183);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1500, Current, 23183);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(13793, dtype));
	if (tb1) {
		RTHOOK(2);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13806, dtype))(Current, up1x, ui4_1x);
	} else {
		RTHOOK(3);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13796, dtype))(Current, up1x)).it_p);
		up1 = tp1;
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13806, dtype))(Current, up1x, ui4_1x);
		RTHOOK(4);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13797, dtype))(Current, up1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ui4_1
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.set_dwextendedstyle */
void F1501_16450 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_dwextendedstyle";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 1, 23184);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1500, Current, 23184);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(13793, dtype));
	if (tb1) {
		RTHOOK(2);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13807, dtype))(Current, up1x, ui4_1x);
	} else {
		RTHOOK(3);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13796, dtype))(Current, up1x)).it_p);
		up1 = tp1;
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13807, dtype))(Current, up1x, ui4_1x);
		RTHOOK(4);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13797, dtype))(Current, up1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ui4_1
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.set_cdit */
void F1501_16451 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_cdit";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 1, 23185);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1500, Current, 23185);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(13793, dtype));
	if (tb1) {
		RTHOOK(2);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13808, dtype))(Current, up1x, ui4_1x);
	} else {
		RTHOOK(3);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13796, dtype))(Current, up1x)).it_p);
		up1 = tp1;
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13808, dtype))(Current, up1x, ui4_1x);
		RTHOOK(4);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13797, dtype))(Current, up1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ui4_1
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.set_x */
void F1501_16452 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_x";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 1, 23186);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1500, Current, 23186);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(13793, dtype));
	if (tb1) {
		RTHOOK(2);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13809, dtype))(Current, up1x, ui4_1x);
	} else {
		RTHOOK(3);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13796, dtype))(Current, up1x)).it_p);
		up1 = tp1;
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13809, dtype))(Current, up1x, ui4_1x);
		RTHOOK(4);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13797, dtype))(Current, up1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ui4_1
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.set_y */
void F1501_16453 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_y";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 1, 23187);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1500, Current, 23187);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(13793, dtype));
	if (tb1) {
		RTHOOK(2);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13809, dtype))(Current, up1x, ui4_1x);
	} else {
		RTHOOK(3);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13796, dtype))(Current, up1x)).it_p);
		up1 = tp1;
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13809, dtype))(Current, up1x, ui4_1x);
		RTHOOK(4);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13797, dtype))(Current, up1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ui4_1
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.set_cx */
void F1501_16454 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_cx";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 1, 23188);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1500, Current, 23188);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(13793, dtype));
	if (tb1) {
		RTHOOK(2);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13796, dtype))(Current, up1x)).it_p);
		up1 = tp1;
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13812, dtype))(Current, up1x, ui4_1x);
	} else {
		RTHOOK(3);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13812, dtype))(Current, up1x, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ui4_1
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.set_cy */
void F1501_16455 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_cy";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 1, 23189);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1500, Current, 23189);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up1 = tp1;
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13811, dtype))(Current, up1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ui4_1
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.memory_copy */
void F1501_16456 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "memory_copy";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 2, 23190);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1500, Current, 23190);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("length_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13043, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) (arg2 <= ti4_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("length_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12362, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(13793, dtype));
	if (tb1) {
		if (RTAL & CK_CHECK) {
			RTHOOK(5);
			RTCT("source_pointer_exists", EX_CHECK);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
			if ((EIF_BOOLEAN)(arg1 != tp1)) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(6);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13796, dtype))(Current, up1x)).it_p);
		up1 = arg1;
		ui4_1 = arg2;
		memcpy((void *)tp1, (const void *) up1, (size_t) ui4_1);
		RTHOOK(7);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13797, dtype))(Current, up1x);
	} else {
		RTHOOK(8);
		up1 = arg1;
		ui4_1 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13040, 1455))(Current, up1x, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.initialize_with_character */
void F1501_16457 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "initialize_with_character";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 1, 23191);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1500, Current, 23191);
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
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(13793, dtype));
	if (tb1) {
		RTHOOK(3);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13796, dtype))(Current, up1x)).it_p);
		ti4_1 = (EIF_INTEGER_32) (arg1);
		ui4_1 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13043, dtype))(Current)).it_i4);
		ui4_2 = ti4_2;
		memset((void *)tp1, (int) ui4_1, (size_t) ui4_2);
		RTHOOK(4);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13797, dtype))(Current, up1x);
	} else {
		RTHOOK(5);
		uc1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13042, 1455))(Current, uc1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.destroy_item */
void F1501_16458 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "destroy_item";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_POINTER tp2;
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
	
	RTEAA(l_feature_name, 1500, Current, 0, 0, 23192);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1500, Current, 23192);
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
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(13793, dtype));
	if (tb1) {
		RTHOOK(3);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(tp1 != tp2)) {
			RTHOOK(4);
			RTDBGAA(Current, dtype, 12360, 0x40000000, 1); /* item */
			tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
			up1 = tp1;
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13795, dtype))(Current, up1x)).it_p);
			*(EIF_POINTER *)(Current + RTWA(12360, dtype)) = (EIF_POINTER) tp1;
		}
		RTHOOK(5);
		RTDBGAA(Current, dtype, 12360, 0x40000000, 1); /* item */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		*(EIF_POINTER *)(Current + RTWA(12360, dtype)) = (EIF_POINTER) tp1;
	} else {
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(12367, 1455))(Current);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {WEL_DLG_TEMPLATE}.structure_size */
RTOID (F1501_16459)
EIF_TYPED_VALUE F1501_16459 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "structure_size";
	RTEX;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, F1501_16459);
	dtype = Dtype(Current);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 0, 23193);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1500, Current, 23193);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13798, dtype))(Current)).it_i4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1024L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("positive_result", EX_POST);
		if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef Result
}

/* {WEL_DLG_TEMPLATE}.memory_allocated_with_global_alloc */
EIF_TYPED_VALUE F1501_16460 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(13793,Dtype(Current)));
	return r;
}


/* {WEL_DLG_TEMPLATE}.cwin_global_alloc */
EIF_TYPED_VALUE F1501_16461 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "cwin_global_alloc";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 2, 23195);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1500, Current, 23195);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) GlobalAlloc(((UINT) arg1), ((size_t) arg2));
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

/* {WEL_DLG_TEMPLATE}.cwin_global_free */
EIF_TYPED_VALUE F1501_16462 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwin_global_free";
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
	
	RTEAA(l_feature_name, 1500, Current, 0, 1, 23196);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1500, Current, 23196);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) GlobalFree(((HGLOBAL) arg1));
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

/* {WEL_DLG_TEMPLATE}.cwin_global_lock */
EIF_TYPED_VALUE F1501_16463 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwin_global_lock";
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
	
	RTEAA(l_feature_name, 1500, Current, 0, 1, 23197);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1500, Current, 23197);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) GlobalLock(((HGLOBAL) arg1));
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

/* {WEL_DLG_TEMPLATE}.cwin_global_unlock */
void F1501_16464 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwin_global_unlock";
	RTEX;
#define arg1 arg1x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 1, 23198);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1500, Current, 23198);
	RTIV(Current, RTAL);
	(void) GlobalUnlock(((HGLOBAL) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.c_size_of_dlgtemplate */
EIF_TYPED_VALUE F1501_16465 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_size_of_dlgtemplate";
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
	
	RTEAA(l_feature_name, 1500, Current, 0, 0, 23199);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1500, Current, 23199);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) sizeof (DLGTEMPLATE);
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

/* {WEL_DLG_TEMPLATE}.cwel_dlgtemplate_get_style */
EIF_TYPED_VALUE F1501_16466 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwel_dlgtemplate_get_style";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 1, 23200);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1500, Current, 23200);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((DLGTEMPLATE *)arg1)->style);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.cwel_dlgtemplate_get_extended_style */
EIF_TYPED_VALUE F1501_16467 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwel_dlgtemplate_get_extended_style";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 1, 23201);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1500, Current, 23201);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((DLGTEMPLATE *)arg1)->dwExtendedStyle);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.cwel_dlgtemplate_get_cdit */
EIF_TYPED_VALUE F1501_16468 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwel_dlgtemplate_get_cdit";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 1, 23202);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1500, Current, 23202);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((DLGTEMPLATE *)arg1)->cdit);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.cwel_dlgtemplate_get_x */
EIF_TYPED_VALUE F1501_16469 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwel_dlgtemplate_get_x";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 1, 23203);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1500, Current, 23203);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((DLGTEMPLATE *)arg1)->x);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.cwel_dlgtemplate_get_y */
EIF_TYPED_VALUE F1501_16470 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwel_dlgtemplate_get_y";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 1, 23204);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1500, Current, 23204);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((DLGTEMPLATE *)arg1)->y);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.cwel_dlgtemplate_get_cx */
EIF_TYPED_VALUE F1501_16471 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwel_dlgtemplate_get_cx";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 1, 23205);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1500, Current, 23205);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((DLGTEMPLATE *)arg1)->cx);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.cwel_dlgtemplate_get_cy */
EIF_TYPED_VALUE F1501_16472 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwel_dlgtemplate_get_cy";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 1, 23162);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1500, Current, 23162);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((DLGTEMPLATE *)arg1)->cy);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.cwel_dlgtemplate_set_style */
void F1501_16473 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "cwel_dlgtemplate_set_style";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 2, 23163);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1500, Current, 23163);
	RTIV(Current, RTAL);(((DLGTEMPLATE *)arg1)->style = (DWORD)(arg2));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.cwel_dlgtemplate_set_dwextendedstyle */
void F1501_16474 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "cwel_dlgtemplate_set_dwextendedstyle";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 2, 23164);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1500, Current, 23164);
	RTIV(Current, RTAL);(((DLGTEMPLATE *)arg1)->dwExtendedStyle = (DWORD)(arg2));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.cwel_dlgtemplate_set_cdit */
void F1501_16475 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "cwel_dlgtemplate_set_cdit";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 2, 23165);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1500, Current, 23165);
	RTIV(Current, RTAL);(((DLGTEMPLATE *)arg1)->dwExtendedStyle = (WORD)(arg2));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.cwel_dlgtemplate_set_x */
void F1501_16476 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "cwel_dlgtemplate_set_x";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 2, 23166);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1500, Current, 23166);
	RTIV(Current, RTAL);(((DLGTEMPLATE *)arg1)->x = (short)(arg2));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.cwel_dlgtemplate_set_y */
void F1501_16477 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "cwel_dlgtemplate_set_y";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 2, 23167);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1500, Current, 23167);
	RTIV(Current, RTAL);(((DLGTEMPLATE *)arg1)->y = (short)(arg2));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.cwel_dlgtemplate_set_cy */
void F1501_16478 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "cwel_dlgtemplate_set_cy";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 2, 23168);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1500, Current, 23168);
	RTIV(Current, RTAL);(((DLGTEMPLATE *)arg1)->cy = (short)(arg2));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.cwel_dlgtemplate_set_cx */
void F1501_16479 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "cwel_dlgtemplate_set_cx";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1500, Current, 0, 2, 23169);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1500, Current, 23169);
	RTIV(Current, RTAL);(((DLGTEMPLATE *)arg1)->cx = (short)(arg2));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {WEL_DLG_TEMPLATE}.gmem_fixed */
EIF_TYPED_VALUE F1501_16480 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {WEL_DLG_TEMPLATE}.gmem_moveable */
EIF_TYPED_VALUE F1501_16481 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {WEL_DLG_TEMPLATE}.gmem_zeroinit */
EIF_TYPED_VALUE F1501_16482 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	return r;
}

/* {WEL_DLG_TEMPLATE}.gptr */
EIF_TYPED_VALUE F1501_16483 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	return r;
}

/* {WEL_DLG_TEMPLATE}.ghnd */
EIF_TYPED_VALUE F1501_16484 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 66L);
	return r;
}

void EIF_Minit1501 (void)
{
	GTCX
	RTOTS (16459,F1501_16459)
}


#ifdef __cplusplus
}
#endif
