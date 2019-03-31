/*
 * Code for class COORDINATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1787_20238(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1787_20239(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1787_20240(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1787_20241(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1787_20242(EIF_REFERENCE);
extern void F1787_20243(EIF_REFERENCE);
extern void F1787_20244(EIF_REFERENCE);
extern void F1787_20245(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1787_20246(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1787_20247(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1787_20248(EIF_REFERENCE);
extern void EIF_Minit1787(void);

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

/* {COORDINATE}.make */
void F1787_20238 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1786, Current, 0, 2, 26446);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1786, Current, 26446);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 16900, 0x10000000, 1); /* x */
	*(EIF_INTEGER_32 *)(Current + RTWA(16900, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 16901, 0x10000000, 1); /* y */
	*(EIF_INTEGER_32 *)(Current + RTWA(16901, dtype)) = (EIF_INTEGER_32) arg2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {COORDINATE}.x */
EIF_TYPED_VALUE F1787_20239 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(16900,Dtype(Current)));
	return r;
}


/* {COORDINATE}.y */
EIF_TYPED_VALUE F1787_20240 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(16901,Dtype(Current)));
	return r;
}


/* {COORDINATE}.ship */
EIF_TYPED_VALUE F1787_20241 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(16902,Dtype(Current)));
	return r;
}


/* {COORDINATE}.shot_at */
EIF_TYPED_VALUE F1787_20242 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(16903,Dtype(Current)));
	return r;
}


/* {COORDINATE}.shoot */
void F1787_20243 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "shoot";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1786, Current, 1, 0, 26440);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1786, Current, 26440);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 16903, 0x04000000, 1); /* shot_at */
	*(EIF_BOOLEAN *)(Current + RTWA(16903, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16902, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		ur1 = RTCCL(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7692, "hit", loc1))(loc1, ur1x);
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
#undef ur1
}

/* {COORDINATE}.unshoot */
void F1787_20244 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unshoot";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1786, Current, 1, 0, 26441);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1786, Current, 26441);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 16903, 0x04000000, 1); /* shot_at */
	*(EIF_BOOLEAN *)(Current + RTWA(16903, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16902, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		ur1 = RTCCL(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7693, "unhit", loc1))(loc1, ur1x);
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
#undef ur1
}

/* {COORDINATE}.set_coords */
void F1787_20245 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_coords";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1786, Current, 0, 2, 26442);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1786, Current, 26442);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 16900, 0x10000000, 1); /* x */
	*(EIF_INTEGER_32 *)(Current + RTWA(16900, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 16901, 0x10000000, 1); /* y */
	*(EIF_INTEGER_32 *)(Current + RTWA(16901, dtype)) = (EIF_INTEGER_32) arg2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {COORDINATE}.set_ship */
void F1787_20246 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_ship";
	RTEX;
#define arg1 arg1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1786, Current, 0, 1, 26443);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1786, Current, 26443);
	if (arg1) {
		RTCC(arg1, 1786, l_feature_name, 1, eif_new_type(1035, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 16902, 0xF800040B, 0); /* ship */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(16902, Dtype(Current))) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {COORDINATE}.debug_output */
EIF_TYPED_VALUE F1787_20247 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "debug_output";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1786, Current, 0, 0, 26444);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1786, Current, 26444);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(28, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {COORDINATE}.out */
EIF_TYPED_VALUE F1787_20248 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "out";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1786, Current, 2, 0, 26445);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1786, Current, 26445);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(16903, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
		Result = RTMS_EX_H("O",1,79);
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16902, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTCCL(tr1);
		if (EIF_TEST(loc1)) {
			RTHOOK(4);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("X",1,88);
		}
	} else {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16902, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			RTHOOK(6);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("S",1,83);
		} else {
			RTHOOK(7);
			RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
			Result = RTMS_EX_H("_",1,95);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

void EIF_Minit1787 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
