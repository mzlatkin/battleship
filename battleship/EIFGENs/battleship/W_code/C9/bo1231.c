/*
 * Code for class BOMB
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1231_12896(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1231_12897(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1231_12898(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1231_12899(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1231_12900(EIF_REFERENCE);
extern void F1231_12901(EIF_REFERENCE);
extern void F1231_12902(EIF_REFERENCE);
extern void F1231_12903(EIF_REFERENCE);
extern void EIF_Minit1231(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BOMB}.make */
void F1231_12896 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,arg5);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1230, Current, 0, 5, 19131);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1230, Current, 19131);
	RTCC(arg5, 1230, l_feature_name, 5, eif_new_type(1039, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10648, 0x10000000, 1); /* l_x */
	*(EIF_INTEGER_32 *)(Current + RTWA(10648, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 10649, 0x10000000, 1); /* l_y */
	*(EIF_INTEGER_32 *)(Current + RTWA(10649, dtype)) = (EIF_INTEGER_32) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 10650, 0x10000000, 1); /* r_x */
	*(EIF_INTEGER_32 *)(Current + RTWA(10650, dtype)) = (EIF_INTEGER_32) arg3;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 10651, 0x10000000, 1); /* r_y */
	*(EIF_INTEGER_32 *)(Current + RTWA(10651, dtype)) = (EIF_INTEGER_32) arg4;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 10642, 0xF800040F, 0); /* game */
	tr1 = RTCCL(arg5);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(10642, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {BOMB}.l_x */
EIF_TYPED_VALUE F1231_12897 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(10648,Dtype(Current)));
	return r;
}


/* {BOMB}.l_y */
EIF_TYPED_VALUE F1231_12898 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(10649,Dtype(Current)));
	return r;
}


/* {BOMB}.r_x */
EIF_TYPED_VALUE F1231_12899 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(10650,Dtype(Current)));
	return r;
}


/* {BOMB}.r_y */
EIF_TYPED_VALUE F1231_12900 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(10651,Dtype(Current)));
	return r;
}


/* {BOMB}.execute */
void F1231_12901 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "execute";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
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
	
	RTEAA(l_feature_name, 1230, Current, 0, 0, 19136);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1230, Current, 19136);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10642, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10648, dtype));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(10649, dtype));
	ui4_2 = ti4_2;
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(10650, dtype));
	ui4_3 = ti4_3;
	ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(10651, dtype));
	ui4_4 = ti4_4;
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7769, "bomb", tr1))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ub1
}

/* {BOMB}.undo */
void F1231_12902 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "undo";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
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
	
	RTEAA(l_feature_name, 1230, Current, 0, 0, 19137);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1230, Current, 19137);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10642, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10648, dtype));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(10649, dtype));
	ui4_2 = ti4_2;
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(10650, dtype));
	ui4_3 = ti4_3;
	ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(10651, dtype));
	ui4_4 = ti4_4;
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7769, "bomb", tr1))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ub1
}

/* {BOMB}.redo */
void F1231_12903 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "redo";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1230, Current, 0, 0, 19138);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1230, Current, 19138);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10644, Dtype(Current)))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit1231 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
