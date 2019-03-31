/*
 * Code for class EV_GDI_OBJECT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1539_17423(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1539_17424(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1539_17425(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1539_17426(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1539_17427(EIF_REFERENCE);
extern void F1539_17428(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1539_17429(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1539_17430(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1539_17431(EIF_REFERENCE);
extern void EIF_Minit1539(void);

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

/* {EV_GDI_OBJECT}.computed_hash_code */
EIF_TYPED_VALUE F1539_17423 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(14707,Dtype(Current)));
	return r;
}


/* {EV_GDI_OBJECT}.weight */
EIF_TYPED_VALUE F1539_17424 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(14708,Dtype(Current)));
	return r;
}


/* {EV_GDI_OBJECT}.age */
EIF_TYPED_VALUE F1539_17425 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(14709,Dtype(Current)));
	return r;
}


/* {EV_GDI_OBJECT}.item */
EIF_TYPED_VALUE F1539_17426 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(14710,Dtype(Current)));
	return r;
}


/* {EV_GDI_OBJECT}.value */
EIF_TYPED_VALUE F1539_17427 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "value";
	RTEX;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 1538, Current, 0, 0, 24210);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1538, Current, 24210);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(14708, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(14709, dtype));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result * ti4_1);
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

/* {EV_GDI_OBJECT}.set_weight */
void F1539_17428 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_weight";
	RTEX;
#define arg1 arg1x.it_i4
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
	
	RTEAA(l_feature_name, 1538, Current, 0, 1, 24211);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1538, Current, 24211);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 14708, 0x10000000, 1); /* weight */
	*(EIF_INTEGER_32 *)(Current + RTWA(14708, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {EV_GDI_OBJECT}.update */
void F1539_17429 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 1538, Current, 0, 1, 24212);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1538, Current, 24212);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(14708, dtype));
	if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 2147483646L))) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 14708, 0x10000000, 1); /* weight */
		(*(EIF_INTEGER_32 *)(Current + RTWA(14708, dtype)))++;
	}
	RTHOOK(3);
	RTDBGAA(Current, dtype, 14709, 0x10000000, 1); /* age */
	*(EIF_INTEGER_32 *)(Current + RTWA(14709, dtype)) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EV_GDI_OBJECT}.set_item */
void F1539_17430 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_item";
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
	
	RTEAA(l_feature_name, 1538, Current, 0, 1, 24213);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1538, Current, 24213);
	RTCC(arg1, 1538, l_feature_name, 1, RTWCT(14710, Dtype(Current), Dftype(Current)), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 14710, 0xF800059B, 0); /* item */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(14710, Dtype(Current))) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11650, "increment_reference", arg1))(arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EV_GDI_OBJECT}.delete */
void F1539_17431 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "delete";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1538, Current, 1, 0, 24214);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1538, Current, 24214);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14710, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11649, "decrement_reference", loc1))(loc1);
	}
	RTHOOK(3);
	RTDBGAA(Current, dtype, 14710, 0xF800059B, 0); /* item */
	*(EIF_REFERENCE *)(Current + RTWA(14710, dtype)) = (EIF_REFERENCE) NULL;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
}

void EIF_Minit1539 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
