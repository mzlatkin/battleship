/*
 * Code for class WEL_GDIP_RECT_F
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F981_8885(EIF_REFERENCE);
extern void F981_8886(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F981_8887(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F981_8888(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F981_8889(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F981_8890(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F981_8891(EIF_REFERENCE);
extern EIF_TYPED_VALUE F981_8892(EIF_REFERENCE);
extern EIF_TYPED_VALUE F981_8893(EIF_REFERENCE);
extern EIF_TYPED_VALUE F981_8894(EIF_REFERENCE);
extern EIF_TYPED_VALUE F981_8895(EIF_REFERENCE);
extern EIF_TYPED_VALUE F981_8896(EIF_REFERENCE);
extern EIF_TYPED_VALUE F981_8897(EIF_REFERENCE);
extern EIF_TYPED_VALUE F981_8898(EIF_REFERENCE);
extern void F981_8899(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F981_8900(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F981_8901(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F981_8902(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F981_8903(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F981_8904(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F981_8905(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F981_8906(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit981(void);

#ifdef __cplusplus
}
#endif

#include "wel_gdi_plus.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F981_8899
static void inline_F981_8899 (EIF_POINTER arg1, EIF_REAL_32 arg2)
{
	{
	((RectF *)arg1)->X = (EIF_REAL)arg2;
}
	;
}
#define INLINE_F981_8899
#endif
#ifndef INLINE_F981_8900
static void inline_F981_8900 (EIF_POINTER arg1, EIF_REAL_32 arg2)
{
	{
	((RectF *)arg1)->Y = (EIF_REAL)arg2;
}
	;
}
#define INLINE_F981_8900
#endif
#ifndef INLINE_F981_8901
static void inline_F981_8901 (EIF_POINTER arg1, EIF_REAL_32 arg2)
{
	{
	((RectF *)arg1)->Width = (EIF_REAL)arg2;			
}
	;
}
#define INLINE_F981_8901
#endif
#ifndef INLINE_F981_8902
static void inline_F981_8902 (EIF_POINTER arg1, EIF_REAL_32 arg2)
{
	{
	((RectF *)arg1)->Height = (EIF_REAL)arg2;
}
	;
}
#define INLINE_F981_8902
#endif
#ifndef INLINE_F981_8903
static EIF_REAL_32 inline_F981_8903 (EIF_POINTER arg1)
{
	return (EIF_REAL_32) (((RectF *)arg1)->X)
	;
}
#define INLINE_F981_8903
#endif
#ifndef INLINE_F981_8904
static EIF_REAL_32 inline_F981_8904 (EIF_POINTER arg1)
{
	return (EIF_REAL_32) (((RectF *)arg1)->Y)
	;
}
#define INLINE_F981_8904
#endif
#ifndef INLINE_F981_8905
static EIF_REAL_32 inline_F981_8905 (EIF_POINTER arg1)
{
	return (EIF_REAL_32) (((RectF *)arg1)->Width)
	;
}
#define INLINE_F981_8905
#endif
#ifndef INLINE_F981_8906
static EIF_REAL_32 inline_F981_8906 (EIF_POINTER arg1)
{
	return (EIF_REAL_32) (((RectF *)arg1)->Height)
	;
}
#define INLINE_F981_8906
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_GDIP_RECT_F}.make */
void F981_8885 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 980, Current, 0, 0, 15182);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(980, Current, 15182);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6685, 0xF80000AB, 0); /* internal_item */
	tr1 = RTLNSMART(RTWCT(6685, dtype, Dftype(Current)).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6679, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3275, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(6685, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
}

/* {WEL_GDIP_RECT_F}.make_with_size */
void F981_8886 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "make_with_size";
	RTEX;
#define arg1 arg1x.it_r4
#define arg2 arg2x.it_r4
#define arg3 arg3x.it_r4
#define arg4 arg4x.it_r4
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r4 = * (EIF_REAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r4 = * (EIF_REAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r4 = * (EIF_REAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r4 = * (EIF_REAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU(SK_REAL32,&arg2);
	RTLU(SK_REAL32,&arg3);
	RTLU(SK_REAL32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 980, Current, 0, 4, 15183);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(980, Current, 15183);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6673, dtype))(Current);
	RTHOOK(2);
	ur4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6675, dtype))(Current, ur4_1x);
	RTHOOK(3);
	ur4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6676, dtype))(Current, ur4_1x);
	RTHOOK(4);
	ur4_1 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6677, dtype))(Current, ur4_1x);
	RTHOOK(5);
	ur4_1 = arg4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6678, dtype))(Current, ur4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef ur4_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_GDIP_RECT_F}.set_x */
void F981_8887 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_x";
	RTEX;
#define arg1 arg1x.it_r4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_POINTER tp1;
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r4 = * (EIF_REAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 980, Current, 0, 1, 15184);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(980, Current, 15184);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6684, dtype))(Current)).it_p);
	up1 = tp1;
	ur4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6687, dtype))(Current, up1x, ur4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("set", EX_POST);
		tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6680, dtype))(Current)).it_r4);
		if ((EIF_BOOLEAN)(tr4_1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef up1
#undef ur4_1
#undef arg1
}

/* {WEL_GDIP_RECT_F}.set_y */
void F981_8888 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_y";
	RTEX;
#define arg1 arg1x.it_r4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_POINTER tp1;
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r4 = * (EIF_REAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 980, Current, 0, 1, 15185);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(980, Current, 15185);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6684, dtype))(Current)).it_p);
	up1 = tp1;
	ur4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6688, dtype))(Current, up1x, ur4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("set", EX_POST);
		tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6681, dtype))(Current)).it_r4);
		if ((EIF_BOOLEAN)(tr4_1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef up1
#undef ur4_1
#undef arg1
}

/* {WEL_GDIP_RECT_F}.set_width */
void F981_8889 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_width";
	RTEX;
#define arg1 arg1x.it_r4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_POINTER tp1;
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r4 = * (EIF_REAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 980, Current, 0, 1, 15186);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(980, Current, 15186);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6684, dtype))(Current)).it_p);
	up1 = tp1;
	ur4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6689, dtype))(Current, up1x, ur4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("set", EX_POST);
		tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6682, dtype))(Current)).it_r4);
		if ((EIF_BOOLEAN)(tr4_1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef up1
#undef ur4_1
#undef arg1
}

/* {WEL_GDIP_RECT_F}.set_height */
void F981_8890 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_height";
	RTEX;
#define arg1 arg1x.it_r4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_POINTER tp1;
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r4 = * (EIF_REAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 980, Current, 0, 1, 15187);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(980, Current, 15187);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6684, dtype))(Current)).it_p);
	up1 = tp1;
	ur4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6690, dtype))(Current, up1x, ur4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("set", EX_POST);
		tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6683, dtype))(Current)).it_r4);
		if ((EIF_BOOLEAN)(tr4_1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef up1
#undef ur4_1
#undef arg1
}

/* {WEL_GDIP_RECT_F}.structure_size */
EIF_TYPED_VALUE F981_8891 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "structure_size";
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
	
	RTEAA(l_feature_name, 980, Current, 0, 0, 15188);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(980, Current, 15188);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6686, Dtype(Current)))(Current)).it_i4);
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

/* {WEL_GDIP_RECT_F}.x */
EIF_TYPED_VALUE F981_8892 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "x";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 980, Current, 0, 0, 15189);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(980, Current, 15189);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x18000000, 1,0); /* Result */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6684, dtype))(Current)).it_p);
	up1 = tp1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6691, dtype))(Current, up1x)).it_r4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef up1
}

/* {WEL_GDIP_RECT_F}.y */
EIF_TYPED_VALUE F981_8893 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "y";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 980, Current, 0, 0, 15190);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(980, Current, 15190);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x18000000, 1,0); /* Result */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6684, dtype))(Current)).it_p);
	up1 = tp1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6692, dtype))(Current, up1x)).it_r4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef up1
}

/* {WEL_GDIP_RECT_F}.width */
EIF_TYPED_VALUE F981_8894 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "width";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 980, Current, 0, 0, 15191);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(980, Current, 15191);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x18000000, 1,0); /* Result */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6684, dtype))(Current)).it_p);
	up1 = tp1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6693, dtype))(Current, up1x)).it_r4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef up1
}

/* {WEL_GDIP_RECT_F}.height */
EIF_TYPED_VALUE F981_8895 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "height";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 980, Current, 0, 0, 15192);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(980, Current, 15192);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x18000000, 1,0); /* Result */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6684, dtype))(Current)).it_p);
	up1 = tp1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6694, dtype))(Current, up1x)).it_r4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef up1
}

/* {WEL_GDIP_RECT_F}.item */
EIF_TYPED_VALUE F981_8896 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "item";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 980, Current, 0, 0, 15193);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(980, Current, 15193);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6685, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tp1 = *(EIF_POINTER *)(tr1 + RTVA(3281, "item", tr1));
	Result = (EIF_POINTER) tp1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_null", EX_POST);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(Result != tp1)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef up1
}

/* {WEL_GDIP_RECT_F}.internal_item */
EIF_TYPED_VALUE F981_8897 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6685,Dtype(Current)));
	return r;
}


/* {WEL_GDIP_RECT_F}.c_size_of_gp_rect */
EIF_TYPED_VALUE F981_8898 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_size_of_gp_rect";
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
	
	RTEAA(l_feature_name, 980, Current, 0, 0, 15173);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(980, Current, 15173);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) sizeof (RectF);
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

/* {WEL_GDIP_RECT_F}.c_set_x */
void F981_8899 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_set_x";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_r4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r4 = * (EIF_REAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_REAL32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 980, Current, 0, 2, 15174);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(980, Current, 15174);
	RTIV(Current, RTAL);
	inline_F981_8899 ((EIF_POINTER) arg1, (EIF_REAL_32) arg2);
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

/* {WEL_GDIP_RECT_F}.c_set_y */
void F981_8900 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_set_y";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_r4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r4 = * (EIF_REAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_REAL32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 980, Current, 0, 2, 15175);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(980, Current, 15175);
	RTIV(Current, RTAL);
	inline_F981_8900 ((EIF_POINTER) arg1, (EIF_REAL_32) arg2);
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

/* {WEL_GDIP_RECT_F}.c_set_width */
void F981_8901 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_set_width";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_r4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r4 = * (EIF_REAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_REAL32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 980, Current, 0, 2, 15176);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(980, Current, 15176);
	RTIV(Current, RTAL);
	inline_F981_8901 ((EIF_POINTER) arg1, (EIF_REAL_32) arg2);
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

/* {WEL_GDIP_RECT_F}.c_set_height */
void F981_8902 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_set_height";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_r4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r4 = * (EIF_REAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_REAL32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 980, Current, 0, 2, 15177);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(980, Current, 15177);
	RTIV(Current, RTAL);
	inline_F981_8902 ((EIF_POINTER) arg1, (EIF_REAL_32) arg2);
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

/* {WEL_GDIP_RECT_F}.c_x */
EIF_TYPED_VALUE F981_8903 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_x";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 980, Current, 0, 1, 15178);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(980, Current, 15178);
	RTIV(Current, RTAL);
	Result = inline_F981_8903 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef arg1
}

/* {WEL_GDIP_RECT_F}.c_y */
EIF_TYPED_VALUE F981_8904 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_y";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 980, Current, 0, 1, 15179);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(980, Current, 15179);
	RTIV(Current, RTAL);
	Result = inline_F981_8904 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef arg1
}

/* {WEL_GDIP_RECT_F}.c_width */
EIF_TYPED_VALUE F981_8905 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_width";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 980, Current, 0, 1, 15180);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(980, Current, 15180);
	RTIV(Current, RTAL);
	Result = inline_F981_8905 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef arg1
}

/* {WEL_GDIP_RECT_F}.c_height */
EIF_TYPED_VALUE F981_8906 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_height";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 980, Current, 0, 1, 15181);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(980, Current, 15181);
	RTIV(Current, RTAL);
	Result = inline_F981_8906 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef arg1
}

void EIF_Minit981 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
