/*
 * Code for class BOARD
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPED_VALUE F962_7202_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F962_7202(EIF_REFERENCE);
static EIF_TYPED_VALUE F962_7203_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F962_7203(EIF_REFERENCE);
extern EIF_TYPED_VALUE F962_7204(EIF_REFERENCE);
extern EIF_TYPED_VALUE F962_7205(EIF_REFERENCE);
extern EIF_TYPED_VALUE F962_7206(EIF_REFERENCE);
extern EIF_TYPED_VALUE F962_7207(EIF_REFERENCE);
extern void F962_7208(EIF_REFERENCE);
extern void F962_7209(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F962_7210(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F962_7211(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F962_7212(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F962_7213(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F962_7214(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F962_7215(EIF_REFERENCE);
extern EIF_TYPED_VALUE F962_7216(EIF_REFERENCE);
extern void EIF_Minit962(void);

#ifdef __cplusplus
}
#endif

#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BOARD}.rand_gen */
static EIF_TYPED_VALUE F962_7202_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "rand_gen";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 961, Current, 0, 0, 13489);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(961, Current, 13489);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80003BF, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(959, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4984, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

EIF_TYPED_VALUE F962_7202 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4991,Dtype(Current)));
	if (!r.it_r) {
		GTCX
		RTLD;
		RTLI(1);
		RTLR(0,Current);
		RTLIU(1);
		r.it_r = (F962_7202_body (Current)).it_r;
		*(EIF_REFERENCE *)(Current + RTWA(4991,Dtype(Current))) = r.it_r;
		RTAR(Current, r.it_r);
		RTLE;
	}
	return r;
}


/* {BOARD}.debug_gen */
static EIF_TYPED_VALUE F962_7203_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "debug_gen";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 961, Current, 0, 0, 13490);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(961, Current, 13490);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80003BF, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(959, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4983, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

EIF_TYPED_VALUE F962_7203 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4992,Dtype(Current)));
	if (!r.it_r) {
		GTCX
		RTLD;
		RTLI(1);
		RTLR(0,Current);
		RTLIU(1);
		r.it_r = (F962_7203_body (Current)).it_r;
		*(EIF_REFERENCE *)(Current + RTWA(4992,Dtype(Current))) = r.it_r;
		RTAR(Current, r.it_r);
		RTLE;
	}
	return r;
}


/* {BOARD}.board */
EIF_TYPED_VALUE F962_7204 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4993,Dtype(Current)));
	return r;
}


/* {BOARD}.coord_board */
EIF_TYPED_VALUE F962_7205 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4994,Dtype(Current)));
	return r;
}


/* {BOARD}.row_indices */
RTOID (F962_7206)
EIF_TYPED_VALUE F962_7206 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "row_indices";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F962_7206);

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 961, Current, 0, 0, 13493);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(961, Current, 13493);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80001FE, 0,0); /* Result */
	ui4_1 = ((EIF_INTEGER_32) 12L);
	{
		static EIF_TYPE_INDEX typarr0[] = {506,197,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_CHARACTER_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 12L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	*((EIF_CHARACTER_8 *)tr2+0) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) 'A';
	*((EIF_CHARACTER_8 *)tr2+1) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) 'B';
	*((EIF_CHARACTER_8 *)tr2+2) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) 'C';
	*((EIF_CHARACTER_8 *)tr2+3) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) 'D';
	*((EIF_CHARACTER_8 *)tr2+4) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) 'E';
	*((EIF_CHARACTER_8 *)tr2+5) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) 'F';
	*((EIF_CHARACTER_8 *)tr2+6) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) 'G';
	*((EIF_CHARACTER_8 *)tr2+7) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) 'H';
	*((EIF_CHARACTER_8 *)tr2+8) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) 'I';
	*((EIF_CHARACTER_8 *)tr2+9) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) 'J';
	*((EIF_CHARACTER_8 *)tr2+10) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) 'K';
	*((EIF_CHARACTER_8 *)tr2+11) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) 'L';
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2570, Dtype(tr2)))(tr2).it_r;
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef Result
}

/* {BOARD}.size */
EIF_TYPED_VALUE F962_7207 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4996,Dtype(Current)));
	return r;
}


/* {BOARD}.make */
void F962_7208 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	
	RTEAA(l_feature_name, 961, Current, 0, 0, 13495);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(961, Current, 13495);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4993, 0xF80007EC, 0); /* board */
	tr1 = RTLNSMART(RTWCT(4993, dtype, Dftype(Current)).id);
	tr2 = RTLN(eif_new_type(960, 0x01).id);
	uc1 = (EIF_CHARACTER_8) '_';
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4989, Dtype(tr2)))(tr2, uc1x);
	RTNHOOK(1,1);
	ur1 = RTCCL(tr2);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	ui4_2 = ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2667, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
	RTNHOOK(1,2);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4993, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4994, 0xF80007EC, 0); /* coord_board */
	tr1 = RTLNSMART(RTWCT(4994, dtype, Dftype(Current)).id);
	tr2 = RTLN(eif_new_type(1786, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(16899, Dtype(tr2)))(tr2, ui4_1x, ui4_2x);
	RTNHOOK(2,1);
	ur1 = RTCCL(tr2);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	ui4_2 = ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2667, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
	RTNHOOK(2,2);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4994, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uc1
}

/* {BOARD}.reset_game */
void F962_7209 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "reset_game";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 961, Current, 2, 1, 13496);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(961, Current, 13496);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4993, 0xF80007EC, 0); /* board */
	tr1 = RTLNSMART(RTWCT(4993, dtype, Dftype(Current)).id);
	tr2 = RTLN(eif_new_type(960, 0x01).id);
	uc1 = (EIF_CHARACTER_8) '_';
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4989, Dtype(tr2)))(tr2, uc1x);
	RTNHOOK(1,1);
	ur1 = RTCCL(tr2);
	ui4_1 = arg1;
	ui4_2 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2667, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
	RTNHOOK(1,2);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4993, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4994, 0xF80007EC, 0); /* coord_board */
	tr1 = RTLNSMART(RTWCT(4994, dtype, Dftype(Current)).id);
	tr2 = RTLN(eif_new_type(1786, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(16899, Dtype(tr2)))(tr2, ui4_1x, ui4_2x);
	RTNHOOK(2,1);
	ur1 = RTCCL(tr2);
	ui4_1 = arg1;
	ui4_2 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2667, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
	RTNHOOK(2,2);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4994, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF800021D, 0, 0); /* loc1 */
	ui4_1 = arg1;
	tr1 = RTLN(eif_new_type(218, 0x00).id);
	*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4415, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2163, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "after", loc1))(loc1)).it_b);
		if (tb1) break;
		RTHOOK(4);
		RTDBGAL(Current, 2, 0xF800021D, 0, 0); /* loc2 */
		ui4_1 = arg1;
		tr1 = RTLN(eif_new_type(218, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4415, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2163, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		for (;;) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "after", loc2))(loc2)).it_b);
			if (tb2) break;
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4994, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = RTLN(eif_new_type(1786, 0x01).id);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc1))(loc1)).it_i4);
			ui4_1 = ti4_1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc2))(loc2)).it_i4);
			ui4_2 = ti4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(16899, Dtype(tr2)))(tr2, ui4_1x, ui4_2x);
			RTNHOOK(5,1);
			ur1 = RTCCL(tr2);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc1))(loc1)).it_i4);
			ui4_1 = ti4_1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc2))(loc2)).it_i4);
			ui4_2 = ti4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2672, "put", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3146, "forth", loc2))(loc2);
		}
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3146, "forth", loc1))(loc1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

/* {BOARD}.generate_ships */
EIF_TYPED_VALUE F962_7210 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "generate_ships";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_b
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc5);
	RTLR(4,loc6);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_BOOL,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 961, Current, 6, 3, 13497);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(961, Current, 13497);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800010E, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,270,0xFF01,0xFFF9,4,186,218,218,218,203,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3080, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	if (arg1) {
		RTHOOK(3);
		RTDBGAL(Current, 5, 0xF80003BF, 0, 0); /* loc5 */
		loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4992, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTHOOK(4);
		RTDBGAL(Current, 5, 0xF80003BF, 0, 0); /* loc5 */
		loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4991, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	}
	RTHOOK(5);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg3;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(7);
		RTDBGAL(Current, 4, 0x04000000, 1, 0); /* loc4 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4987, "direction", loc5))(loc5)).it_i4);
		loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 1L));
		RTHOOK(8);
		if (loc4) {
			RTHOOK(9);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4985, "column", loc5))(loc5)).it_i4);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 % arg2) + ((EIF_INTEGER_32) 1L));
			RTHOOK(10);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4986, "row", loc5))(loc5)).it_i4);
			loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) (ti4_1 % (EIF_INTEGER_32) (arg2 - loc1))) + ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(11);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4986, "row", loc5))(loc5)).it_i4);
			loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 % arg2) + ((EIF_INTEGER_32) 1L));
			RTHOOK(12);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4985, "column", loc5))(loc5)).it_i4);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) (ti4_1 % (EIF_INTEGER_32) (arg2 - loc1))) + ((EIF_INTEGER_32) 1L));
		}
		RTHOOK(13);
		RTDBGAL(Current, 6, 0xF80000BA, 0, 0); /* loc6 */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,186,218,218,218,203,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 5, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = loc1;
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = loc3;
		((EIF_TYPED_VALUE *)tr1+3)->it_i4 = loc2;
		((EIF_TYPED_VALUE *)tr1+4)->it_b = loc4;
		loc6 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(14);
		ur1 = RTCCL(Result);
		ur2 = RTCCL(loc6);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5001, dtype))(Current, ur1x, ur2x)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(15);
			ur1 = RTCCL(loc6);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", Result))(Result, ur1x);
			RTHOOK(16);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			loc1--;
		}
		RTHOOK(17);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4988, "forth", loc5))(loc5);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {BOARD}.collide_with_each_other */
EIF_TYPED_VALUE F962_7211 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "collide_with_each_other";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	
	RTEAA(l_feature_name, 961, Current, 8, 2, 13498);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(961, Current, 13498);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,186,218,218,218,203,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 961, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,186,218,218,218,203,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 961, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = eif_integer_32_item(RTCW(arg1),2);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	ti4_1 = eif_integer_32_item(RTCW(arg1),3);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	tb1 = eif_boolean_item(RTCW(arg1),4);
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		loc3++;
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		ti4_1 = eif_integer_32_item(RTCW(arg1),1);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + ti4_1) - ((EIF_INTEGER_32) 1L));
		RTHOOK(6);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) loc4;
	} else {
		RTHOOK(7);
		RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
		loc4++;
		RTHOOK(8);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = eif_integer_32_item(RTCW(arg1),1);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + ti4_1) - ((EIF_INTEGER_32) 1L));
		RTHOOK(9);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) loc3;
	}
	RTHOOK(10);
	RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
	ti4_1 = eif_integer_32_item(RTCW(arg2),2);
	loc7 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(11);
	RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
	ti4_1 = eif_integer_32_item(RTCW(arg2),3);
	loc8 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(12);
	tb1 = eif_boolean_item(RTCW(arg2),4);
	if (tb1) {
		RTHOOK(13);
		RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
		loc7++;
		RTHOOK(14);
		RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
		ti4_1 = eif_integer_32_item(RTCW(arg2),1);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc7 + ti4_1) - ((EIF_INTEGER_32) 1L));
		RTHOOK(15);
		RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
		loc6 = (EIF_INTEGER_32) loc8;
	} else {
		RTHOOK(16);
		RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
		loc8++;
		RTHOOK(17);
		RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
		ti4_1 = eif_integer_32_item(RTCW(arg2),1);
		loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 + ti4_1) - ((EIF_INTEGER_32) 1L));
		RTHOOK(18);
		RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
		loc5 = (EIF_INTEGER_32) loc7;
	}
	RTHOOK(19);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc4 <= loc6) && (EIF_BOOLEAN) (loc2 >= loc8)) && (EIF_BOOLEAN) (loc3 <= loc5)) && (EIF_BOOLEAN) (loc1 >= loc7));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg2
#undef arg1
}

/* {BOARD}.collide_with */
EIF_TYPED_VALUE F962_7212 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "collide_with";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,Current);
	RTLR(7,loc2);
	RTLIU(8);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 961, Current, 2, 2, 13499);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(961, Current, 13499);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,270,0xFF01,0xFFF9,4,186,218,218,218,203,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 961, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,186,218,218,218,203,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 961, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000118, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2163, "new_cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "after", loc1))(loc1)).it_b);
		if (tb1) break;
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		tb2 = '\01';
		if (!Result) {
			ur1 = RTCCL(arg2);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur2 = RTCCL(tr1);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5000, dtype))(Current, ur1x, ur2x)).it_b);
			tb2 = tb3;
		}
		Result = (EIF_BOOLEAN) tb2;
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3146, "forth", loc1))(loc1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("Result = across existing_ships as existing_ship some collide_with_each_other (new_ship, existing_ship.item) end", EX_POST);
		RTHOOK(5);
		RTDBGAL(Current, 2, 0xF8000118, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2163, "new_cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		tb2 = EIF_FALSE;
		for (;;) {
			if (tb2) break;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "after", loc2))(loc2)).it_b);
			if (tb3) break;
			RTHOOK(6);
			ur1 = RTCCL(arg2);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur2 = RTCCL(tr1);
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5000, dtype))(Current, ur1x, ur2x)).it_b);
			tb2 = tb4;
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3146, "forth", loc2))(loc2);
		}
		if ((EIF_BOOLEAN)(Result == tb2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {BOARD}.set_square */
void F962_7213 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_square";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 961, Current, 0, 2, 13500);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(961, Current, 13500);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4993, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTLN(eif_new_type(960, 0x01).id);
	uc1 = (EIF_CHARACTER_8) 'X';
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4989, Dtype(tr2)))(tr2, uc1x);
	RTNHOOK(1,1);
	ur1 = RTCCL(tr2);
	ui4_1 = arg1;
	ui4_2 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2672, "put", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg2
#undef arg1
}

/* {BOARD}.place_new_ships */
void F962_7214 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "place_new_ships";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLR(7,Current);
	RTLR(8,loc3);
	RTLR(9,loc4);
	RTLR(10,tr3);
	RTLR(11,loc5);
	RTLIU(12);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 961, Current, 5, 1, 13501);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(961, Current, 13501);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,270,0xFF01,0xFFF9,4,186,218,218,218,203,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 961, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("across new_ships.lower |..| new_ships.upper as i all across new_ships.lower |..| new_ships.upper as j all i.item /= j.item implies not collide_with_each_other (new_ships[i.item], new_ships[j.item]) end end", EX_PRE);
		RTHOOK(2);
		RTDBGAL(Current, 1, 0xF800021D, 0, 0); /* loc1 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2558, "lower", arg1))(arg1)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3088, "upper", arg1))(arg1)).it_i4);
		ui4_1 = ti4_2;
		tr1 = RTLN(eif_new_type(218, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = ti4_1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4415, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2163, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "after", loc1))(loc1)).it_b);
			if (tb2) break;
			RTHOOK(3);
			RTHOOK(4);
			RTDBGAL(Current, 2, 0xF800021D, 0, 0); /* loc2 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2558, "lower", arg1))(arg1)).it_i4);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3088, "upper", arg1))(arg1)).it_i4);
			ui4_1 = ti4_2;
			tr1 = RTLN(eif_new_type(218, 0x00).id);
			*(EIF_INTEGER_32 *)tr1 = ti4_1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4415, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2163, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			tb3 = EIF_TRUE;
			for (;;) {
				if (!tb3) break;
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "after", loc2))(loc2)).it_b);
				if (tb4) break;
				RTHOOK(5);
				tb5 = '\01';
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc1))(loc1)).it_i4);
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc2))(loc2)).it_i4);
				if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc1))(loc1)).it_i4);
					ui4_1 = ti4_1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "i_th", arg1))(arg1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc2))(loc2)).it_i4);
					ui4_1 = ti4_1;
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "i_th", arg1))(arg1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur2 = RTCCL(tr2);
					tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5000, dtype))(Current, ur1x, ur2x)).it_b);
					tb5 = (EIF_BOOLEAN) !tb6;
				}
				tb3 = tb5;
				RTHOOK(6);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3146, "forth", loc2))(loc2);
			}
			tb1 = tb3;
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3146, "forth", loc1))(loc1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(8);
	RTDBGAL(Current, 3, 0xF8000118, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2163, "new_cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "after", loc3))(loc3)).it_b);
		if (tb1) break;
		RTHOOK(9);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		tb2 = eif_boolean_item(RTCW(tr1),4);
		if (tb2) {
			RTHOOK(10);
			RTDBGAL(Current, 4, 0xF800021D, 0, 0); /* loc4 */
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ti4_1 = eif_integer_32_item(RTCW(tr2),1);
			ui4_1 = ti4_1;
			tr1 = RTLN(eif_new_type(218, 0x00).id);
			*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4415, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2163, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
			for (;;) {
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "after", loc4))(loc4)).it_b);
				if (tb2) break;
				RTHOOK(11);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4993, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = RTLN(eif_new_type(960, 0x01).id);
				uc1 = (EIF_CHARACTER_8) 'v';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4989, Dtype(tr2)))(tr2, uc1x);
				RTNHOOK(11,1);
				ur1 = RTCCL(tr2);
				tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc3))(loc3)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(11,2);
				ti4_1 = eif_integer_32_item(RTCW(tr3),2);
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc4))(loc4)).it_i4);
				ui4_1 = (EIF_INTEGER_32) (ti4_1 + ti4_2);
				tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc3))(loc3)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(11,3);
				ti4_3 = eif_integer_32_item(RTCW(tr3),3);
				ui4_2 = ti4_3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2672, "put", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
				RTHOOK(12);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3146, "forth", loc4))(loc4);
			}
		} else {
			RTHOOK(13);
			RTDBGAL(Current, 5, 0xF800021D, 0, 0); /* loc5 */
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ti4_1 = eif_integer_32_item(RTCW(tr2),1);
			ui4_1 = ti4_1;
			tr1 = RTLN(eif_new_type(218, 0x00).id);
			*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4415, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2163, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = (EIF_REFERENCE) RTCCL(tr1);
			for (;;) {
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "after", loc5))(loc5)).it_b);
				if (tb3) break;
				RTHOOK(14);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4993, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = RTLN(eif_new_type(960, 0x01).id);
				uc1 = (EIF_CHARACTER_8) 'h';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4989, Dtype(tr2)))(tr2, uc1x);
				RTNHOOK(14,1);
				ur1 = RTCCL(tr2);
				tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc3))(loc3)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(14,2);
				ti4_1 = eif_integer_32_item(RTCW(tr3),2);
				ui4_1 = ti4_1;
				tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc3))(loc3)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(14,3);
				ti4_2 = eif_integer_32_item(RTCW(tr3),3);
				ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc5))(loc5)).it_i4);
				ui4_2 = (EIF_INTEGER_32) (ti4_2 + ti4_3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2672, "put", tr1))(tr1, ur1x, ui4_1x, ui4_2x);
				RTHOOK(15);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3146, "forth", loc5))(loc5);
			}
		}
		RTHOOK(16);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3146, "forth", loc3))(loc3);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

/* {BOARD}.out */
EIF_TYPED_VALUE F962_7215 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "out";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLR(5,loc2);
	RTLR(6,Current);
	RTLR(7,loc3);
	RTLR(8,loc4);
	RTLR(9,tr3);
	RTLIU(10);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 961, Current, 4, 0, 13502);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(961, Current, 13502);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF800001D, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(29, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(765, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(232, 0x01).id);
	tr2 = RTMS_EX_H("\012 ",2,2592);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4718, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF800021D, 0, 0); /* loc2 */
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4993, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(2671, "width", tr2));
	ui4_1 = ti4_1;
	tr1 = RTLN(eif_new_type(218, 0x00).id);
	*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4415, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2163, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "after", loc2))(loc2)).it_b);
		if (tb1) break;
		RTHOOK(4);
		tr1 = RTMS_EX_H(" ",1,32);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc2))(loc2)).it_i4);
		ui4_1 = ti4_1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(813, "formatted", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3146, "forth", loc2))(loc2);
	}
	RTHOOK(6);
	RTDBGAL(Current, 2, 0xF800021D, 0, 0); /* loc3 */
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4993, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(2671, "width", tr2));
	ui4_1 = ti4_1;
	tr1 = RTLN(eif_new_type(218, 0x00).id);
	*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4415, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2163, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "after", loc3))(loc3)).it_b);
		if (tb2) break;
		RTHOOK(7);
		tr1 = RTMS_EX_H("\012",1,10);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4995, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc3))(loc3)).it_i4);
		ui4_1 = ti4_1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", tr2))(tr2, ui4_1x)).it_c1);
		tr2 = c_outc(tc1);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
		RTHOOK(8);
		RTDBGAL(Current, 3, 0xF800021D, 0, 0); /* loc4 */
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4993, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(2670, "height", tr2));
		ui4_1 = ti4_1;
		tr1 = RTLN(eif_new_type(218, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4415, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2163, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		for (;;) {
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "after", loc4))(loc4)).it_b);
			if (tb3) break;
			RTHOOK(9);
			tr1 = RTMS_EX_H("  ",2,8224);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4993, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc3))(loc3)).it_i4);
			ui4_1 = ti4_1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc4))(loc4)).it_i4);
			ui4_2 = ti4_2;
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2669, "item", tr2))(tr2, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
			RTHOOK(10);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3146, "forth", loc4))(loc4);
		}
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3146, "forth", loc3))(loc3);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
}

/* {BOARD}.coord_out */
EIF_TYPED_VALUE F962_7216 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "coord_out";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLR(5,Current);
	RTLR(6,loc2);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 961, Current, 2, 0, 13503);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(961, Current, 13503);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(232, 0x01).id);
	tr2 = RTMS_EX_H("\012 ",2,2592);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4718, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF800021D, 0, 0); /* loc1 */
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4994, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(2671, "width", tr2));
	ui4_1 = ti4_1;
	tr1 = RTLN(eif_new_type(218, 0x00).id);
	*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4415, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2163, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "after", loc1))(loc1)).it_b);
		if (tb1) break;
		RTHOOK(3);
		RTDBGAL(Current, 2, 0xF800021D, 0, 0); /* loc2 */
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4994, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(2670, "height", tr2));
		ui4_1 = ti4_1;
		tr1 = RTLN(eif_new_type(218, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4415, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2163, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		for (;;) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "after", loc2))(loc2)).it_b);
			if (tb2) break;
			RTHOOK(4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4994, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc1))(loc1)).it_i4);
			ui4_1 = ti4_1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc2))(loc2)).it_i4);
			ui4_2 = ti4_2;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2669, "item", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
			RTHOOK(5);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3146, "forth", loc2))(loc2);
		}
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3146, "forth", loc1))(loc1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
}

void EIF_Minit962 (void)
{
	GTCX
	RTOTS (7206,F962_7206)
}


#ifdef __cplusplus
}
#endif
