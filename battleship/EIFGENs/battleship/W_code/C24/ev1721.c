/*
 * Code for class EV_TEXT_ALIGNABLE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1721_19564(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1721_19565(EIF_REFERENCE);
extern void F1721_19566(EIF_REFERENCE);
extern void F1721_19567(EIF_REFERENCE);
extern void F1721_19568(EIF_REFERENCE);
extern void EIF_Minit1721(void);

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

/* {EV_TEXT_ALIGNABLE_IMP}.alignment */
EIF_TYPED_VALUE F1721_19564 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "alignment";
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
	
	RTEAA(l_feature_name, 1720, Current, 0, 0, 26104);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1720, Current, 26104);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(16338, Dtype(Current)));
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

/* {EV_TEXT_ALIGNABLE_IMP}.text_alignment */
EIF_TYPED_VALUE F1721_19565 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(16338,Dtype(Current)));
	return r;
}


/* {EV_TEXT_ALIGNABLE_IMP}.align_text_center */
void F1721_19566 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "align_text_center";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1720, Current, 0, 0, 26106);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1720, Current, 26106);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 16338, 0x10000000, 1); /* text_alignment */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7102, 1019))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(16338, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_TEXT_ALIGNABLE_IMP}.align_text_right */
void F1721_19567 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "align_text_right";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1720, Current, 0, 0, 26107);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1720, Current, 26107);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 16338, 0x10000000, 1); /* text_alignment */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7103, 1019))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(16338, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_TEXT_ALIGNABLE_IMP}.align_text_left */
void F1721_19568 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "align_text_left";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1720, Current, 0, 0, 26108);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1720, Current, 26108);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 16338, 0x10000000, 1); /* text_alignment */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7101, 1019))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(16338, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit1721 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
