/*
 * Code for class ETF_INPUT_HANDLER_INTERFACE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1248_12986(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1248_12987(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1248_12988(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1248_12989(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1248_12990(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1248_12991(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1248_12992(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1248_12993(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1248_12994(EIF_REFERENCE);
extern void F1248_12995(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1248_12996(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1248_12997(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1248(void);

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

/* {ETF_INPUT_HANDLER_INTERFACE}.make_without_running */
void F1248_12986 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_without_running";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1247, Current, 0, 2, 19228);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1247, Current, 19228);
	RTCC(arg1, 1247, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTCC(arg2, 1247, l_feature_name, 2, eif_new_type(1159, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10704, 0xF80007CB, 0); /* on_error */
	tr1 = RTLNSMART(RTWCT(10704, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(10704, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 10702, 0xF80000E8, 0); /* input_string */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(10702, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 10703, 0xF8000487, 0); /* abstract_ui */
	tr1 = RTCCL(arg2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(10703, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {ETF_INPUT_HANDLER_INTERFACE}.make */
void F1248_12987 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,ur2);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1247, Current, 0, 2, 19229);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1247, Current, 19229);
	RTCC(arg1, 1247, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTCC(arg2, 1247, l_feature_name, 2, eif_new_type(1159, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10698, dtype))(Current, ur1x, ur2x);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10707, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {ETF_INPUT_HANDLER_INTERFACE}.etf_evt_out */
EIF_TYPED_VALUE F1248_12988 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "etf_evt_out";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,Result);
	RTLR(5,ur1);
	RTLR(6,tr2);
	RTLR(7,Current);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1247, Current, 3, 1, 19230);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1247, Current, 19230);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,248,0xFF01,1249,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1247, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0xF80000E8, 0, 0); /* loc2 */
	tr1 = eif_boxed_item(arg1,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 3, 0xF80000F8, 0, 0); /* loc3 */
	tr1 = eif_boxed_item(arg1,2);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(232, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4623, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("(",1,40);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", loc2))(loc2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
	RTHOOK(5);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(2665, "lower", loc3));
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(2664, "upper", loc3));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(7);
		ui4_1 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10710, "src_out", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4639, "is_empty", tr2))(tr2)).it_b);
		if (tb1) {
			RTHOOK(8);
			ui4_1 = loc1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
		} else {
			RTHOOK(9);
			ui4_1 = loc1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10710, "src_out", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
		}
		RTHOOK(10);
		ti4_2 = *(EIF_INTEGER_32 *)(loc3 + RTVA(2664, "upper", loc3));
		if ((EIF_BOOLEAN) (loc1 < ti4_2)) {
			RTHOOK(11);
			tr1 = RTMS_EX_H(", ",2,11296);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
		}
		RTHOOK(12);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTHOOK(13);
	tr1 = RTMS_EX_H(")",1,41);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {ETF_INPUT_HANDLER_INTERFACE}.etf_error */
EIF_TYPED_VALUE F1248_12989 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(10701,Dtype(Current)));
	return r;
}


/* {ETF_INPUT_HANDLER_INTERFACE}.input_string */
EIF_TYPED_VALUE F1248_12990 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(10702,Dtype(Current)));
	return r;
}


/* {ETF_INPUT_HANDLER_INTERFACE}.abstract_ui */
EIF_TYPED_VALUE F1248_12991 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(10703,Dtype(Current)));
	return r;
}


/* {ETF_INPUT_HANDLER_INTERFACE}.on_error */
EIF_TYPED_VALUE F1248_12992 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(10704,Dtype(Current)));
	return r;
}


/* {ETF_INPUT_HANDLER_INTERFACE}.input_cmds_syntax_err_msg */
RTOID (F1248_12993)


EIF_TYPED_VALUE F1248_12993 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1248_12993,19224,RTMS_EX_H("Syntax Error: specification of command executions cannot be parsed",66,187532644));
}

/* {ETF_INPUT_HANDLER_INTERFACE}.input_cmds_type_err_msg */
RTOID (F1248_12994)


EIF_TYPED_VALUE F1248_12994 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1248_12994,19225,RTMS_EX_H("Type Error: specification of command executions is not type-correct",67,295559028));
}

/* {ETF_INPUT_HANDLER_INTERFACE}.parse_and_validate_input_string */
void F1248_12995 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parse_and_validate_input_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,tr3);
	RTLR(6,ur2);
	RTLR(7,loc3);
	RTLR(8,loc4);
	RTLR(9,loc2);
	RTLR(10,tr4);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1247, Current, 4, 0, 19225);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1247, Current, 19225);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000744, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1860, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10696, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10693, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(18158, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10702, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18171, "parse_string", loc1))(loc1, ur1x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18160, "last_error", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4639, "is_empty", tr1))(tr1)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(Current, 3, 0xF80000E8, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18159, "event_trace", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10709, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(5);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4639, "is_empty", loc3))(loc3)).it_b);
		if (tb1) {
			RTHOOK(6);
			RTDBGAL(Current, 1, 0xF8000113, 0, 0); /* loc4 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18159, "event_trace", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2163, "new_cursor", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) RTCCL(tr2);
			for (;;) {
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3145, "after", loc4))(loc4)).it_b);
				if (tb1) break;
				RTHOOK(7);
				RTDBGAL(Current, 2, 0xF8000568, 0, 0); /* loc2 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3144, "item", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10708, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTHOOK(8);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10703, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(8,1);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9444, "put", tr1))(tr1, ur1x);
				RTHOOK(9);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3146, "forth", loc4))(loc4);
			}
		} else {
			RTHOOK(10);
			RTDBGAA(Current, dtype, 10701, 0x04000000, 1); /* etf_error */
			*(EIF_BOOLEAN *)(Current + RTWA(10701, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(11);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10704, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,0xFF01,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 2, 0);
			}
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10706, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr4 = RTMS_EX_H("\012",1,10);
			ur1 = tr4;
			tr4 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", tr3))(tr3, ur1x)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
			ur1 = RTCCL(loc3);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", tr4))(tr4, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7774, "notify", tr1))(tr1, ur1x);
		}
	} else {
		RTHOOK(12);
		RTDBGAA(Current, dtype, 10701, 0x04000000, 1); /* etf_error */
		*(EIF_BOOLEAN *)(Current + RTWA(10701, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(13);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10704, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,0xFF01,232,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10705, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr4 = RTMS_EX_H("\012",1,10);
		ur1 = tr4;
		tr4 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", tr3))(tr3, ur1x)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18160, "last_error", loc1))(loc1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr3);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", tr4))(tr4, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
		RTAR(tr2,tr3);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7774, "notify", tr1))(tr1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ur2
}

/* {ETF_INPUT_HANDLER_INTERFACE}.evt_to_cmd */
EIF_TYPED_VALUE F1248_12996 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "evt_to_cmd";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_BOOLEAN tb9;
	EIF_BOOLEAN tb10;
	EIF_BOOLEAN tb11;
	EIF_BOOLEAN tb12;
	EIF_BOOLEAN tb13;
	EIF_BOOLEAN tb14;
	EIF_BOOLEAN tb15;
	EIF_BOOLEAN tb16;
	EIF_BOOLEAN tb17;
	EIF_BOOLEAN tb18;
	EIF_BOOLEAN tb19;
	EIF_BOOLEAN tb20;
	EIF_BOOLEAN tb21;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(32);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,tr2);
	RTLR(6,ur1);
	RTLR(7,Current);
	RTLR(8,tr3);
	RTLR(9,ur2);
	RTLR(10,tr4);
	RTLR(11,ur3);
	RTLR(12,loc4);
	RTLR(13,Result);
	RTLR(14,loc5);
	RTLR(15,loc6);
	RTLR(16,loc7);
	RTLR(17,loc8);
	RTLR(18,loc9);
	RTLR(19,loc10);
	RTLR(20,loc11);
	RTLR(21,loc12);
	RTLR(22,loc13);
	RTLR(23,loc14);
	RTLR(24,loc15);
	RTLR(25,loc16);
	RTLR(26,loc17);
	RTLR(27,loc18);
	RTLR(28,loc19);
	RTLR(29,loc20);
	RTLR(30,loc21);
	RTLR(31,loc22);
	RTLIU(32);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REF, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_REF, &loc20);
	RTLU(SK_REF, &loc21);
	RTLU(SK_REF, &loc22);
	
	RTEAA(l_feature_name, 1247, Current, 22, 1, 19226);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1247, Current, 19226);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,248,0xFF01,1249,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 1247, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80000E8, 0, 0); /* loc1 */
	tr1 = eif_boxed_item(arg1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF80000F8, 0, 0); /* loc2 */
	tr1 = eif_boxed_item(arg1,2);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 3, 0xF800056A, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1386, 0x01).id);
	tr2 = RTMS_EX_H("dummy",5,1970873721);
	ur1 = tr2;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,186,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 1, 1);
	}
	ur2 = tr3;
	tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10703, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(12215, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	if (RTEQ(loc1, RTMS_EX_H("new_game",8,1289924453))) {
		RTHOOK(5);
		tb1 = '\0';
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = RTCCL(tr1);
		loc4 = RTRV(eif_new_type(1260, 0x01),loc4);
		if (EIF_TEST(loc4)) {
			tb2 = '\01';
			tb3 = '\01';
			tb4 = '\01';
			ti8_1 = *(EIF_INTEGER_64 *)(loc4 + RTVA(10735, "value", loc4));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10689, dtype))(Current)).it_i4);
			ti8_2 = (EIF_INTEGER_64) ti4_1;
			if (!(EIF_BOOLEAN)(ti8_1 == ti8_2)) {
				ti8_1 = *(EIF_INTEGER_64 *)(loc4 + RTVA(10735, "value", loc4));
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10690, dtype))(Current)).it_i4);
				ti8_2 = (EIF_INTEGER_64) ti4_1;
				tb4 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
			}
			if (!tb4) {
				ti8_1 = *(EIF_INTEGER_64 *)(loc4 + RTVA(10735, "value", loc4));
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10691, dtype))(Current)).it_i4);
				ti8_2 = (EIF_INTEGER_64) ti4_1;
				tb3 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
			}
			if (!tb3) {
				ti8_1 = *(EIF_INTEGER_64 *)(loc4 + RTVA(10735, "value", loc4));
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10692, dtype))(Current)).it_i4);
				ti8_2 = (EIF_INTEGER_64) ti4_1;
				tb2 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(6);
			RTDBGAL(Current, 0, 0xF8000568, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(1398, 0x01).id);
			tr2 = RTMS_EX_H("new_game",8,1289924453);
			ur1 = tr2;
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,200,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr3 = RTLNTS(typres0.id, 2, 1);
			}
			ti8_1 = *(EIF_INTEGER_64 *)(loc4 + RTVA(10735, "value", loc4));
			((EIF_TYPED_VALUE *)tr3+1)->it_i8 = ti8_1;
			ur2 = RTCCL(tr3);
			tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10703, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur3 = RTCCL(tr4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(12215, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
			RTNHOOK(6,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(7);
			RTDBGAL(Current, 0, 0xF8000568, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc3);
		}
	} else {
		RTHOOK(8);
		if (RTEQ(loc1, RTMS_EX_H("debug_test",10,723132276))) {
			RTHOOK(9);
			tb1 = '\0';
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = RTCCL(tr1);
			loc5 = RTRV(eif_new_type(1260, 0x01),loc5);
			if (EIF_TEST(loc5)) {
				tb2 = '\01';
				tb3 = '\01';
				tb4 = '\01';
				ti8_1 = *(EIF_INTEGER_64 *)(loc5 + RTVA(10735, "value", loc5));
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10689, dtype))(Current)).it_i4);
				ti8_2 = (EIF_INTEGER_64) ti4_1;
				if (!(EIF_BOOLEAN)(ti8_1 == ti8_2)) {
					ti8_1 = *(EIF_INTEGER_64 *)(loc5 + RTVA(10735, "value", loc5));
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10690, dtype))(Current)).it_i4);
					ti8_2 = (EIF_INTEGER_64) ti4_1;
					tb4 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
				}
				if (!tb4) {
					ti8_1 = *(EIF_INTEGER_64 *)(loc5 + RTVA(10735, "value", loc5));
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10691, dtype))(Current)).it_i4);
					ti8_2 = (EIF_INTEGER_64) ti4_1;
					tb3 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
				}
				if (!tb3) {
					ti8_1 = *(EIF_INTEGER_64 *)(loc5 + RTVA(10735, "value", loc5));
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10692, dtype))(Current)).it_i4);
					ti8_2 = (EIF_INTEGER_64) ti4_1;
					tb2 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
				}
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(10);
				RTDBGAL(Current, 0, 0xF8000568, 0,0); /* Result */
				tr1 = RTLN(eif_new_type(1396, 0x01).id);
				tr2 = RTMS_EX_H("debug_test",10,723132276);
				ur1 = tr2;
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,200,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr3 = RTLNTS(typres0.id, 2, 1);
				}
				ti8_1 = *(EIF_INTEGER_64 *)(loc5 + RTVA(10735, "value", loc5));
				((EIF_TYPED_VALUE *)tr3+1)->it_i8 = ti8_1;
				ur2 = RTCCL(tr3);
				tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10703, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur3 = RTCCL(tr4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(12215, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
				RTNHOOK(10,1);
				Result = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(11);
				RTDBGAL(Current, 0, 0xF8000568, 0,0); /* Result */
				Result = (EIF_REFERENCE) RTCCL(loc3);
			}
		} else {
			RTHOOK(12);
			if (RTEQ(loc1, RTMS_EX_H("fire",4,1718186597))) {
				RTHOOK(13);
				tb1 = '\0';
				tb2 = '\0';
				tb3 = '\0';
				tb4 = '\0';
				tb5 = '\0';
				tb6 = '\0';
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc6 = RTCCL(tr1);
				loc6 = RTRV(eif_new_type(1258, 0x01),loc6);
				if ((EIF_TEST(loc6))) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10731, "value", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(13,1);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", tr1))(tr1)).it_i4);
					tb6 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
				}
				if (tb6) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10731, "value", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc7 = RTCCL(tr2);
					loc7 = RTRV(eif_new_type(1260, 0x01),loc7);
					tb5 = (EIF_TEST(loc7));
				}
				if (tb5) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10731, "value", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ui4_1 = ((EIF_INTEGER_32) 2L);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc8 = RTCCL(tr2);
					loc8 = RTRV(eif_new_type(1259, 0x01),loc8);
					tb4 = (EIF_TEST(loc8));
				}
				if (tb4) {
					tb4 = '\01';
					tb5 = '\01';
					tb6 = '\01';
					tb7 = '\01';
					tb8 = '\01';
					tb9 = '\01';
					tb10 = '\01';
					tb11 = '\01';
					tb12 = '\01';
					tb13 = '\01';
					tb14 = '\01';
					ti8_1 = *(EIF_INTEGER_64 *)(loc7 + RTVA(10735, "value", loc7));
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10677, dtype))(Current)).it_i4);
					ti8_2 = (EIF_INTEGER_64) ti4_1;
					if (!(EIF_BOOLEAN)(ti8_1 == ti8_2)) {
						ti8_1 = *(EIF_INTEGER_64 *)(loc7 + RTVA(10735, "value", loc7));
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10678, dtype))(Current)).it_i4);
						ti8_2 = (EIF_INTEGER_64) ti4_1;
						tb14 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
					}
					if (!tb14) {
						ti8_1 = *(EIF_INTEGER_64 *)(loc7 + RTVA(10735, "value", loc7));
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10679, dtype))(Current)).it_i4);
						ti8_2 = (EIF_INTEGER_64) ti4_1;
						tb13 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
					}
					if (!tb13) {
						ti8_1 = *(EIF_INTEGER_64 *)(loc7 + RTVA(10735, "value", loc7));
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10680, dtype))(Current)).it_i4);
						ti8_2 = (EIF_INTEGER_64) ti4_1;
						tb12 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
					}
					if (!tb12) {
						ti8_1 = *(EIF_INTEGER_64 *)(loc7 + RTVA(10735, "value", loc7));
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10681, dtype))(Current)).it_i4);
						ti8_2 = (EIF_INTEGER_64) ti4_1;
						tb11 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
					}
					if (!tb11) {
						ti8_1 = *(EIF_INTEGER_64 *)(loc7 + RTVA(10735, "value", loc7));
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10682, dtype))(Current)).it_i4);
						ti8_2 = (EIF_INTEGER_64) ti4_1;
						tb10 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
					}
					if (!tb10) {
						ti8_1 = *(EIF_INTEGER_64 *)(loc7 + RTVA(10735, "value", loc7));
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10683, dtype))(Current)).it_i4);
						ti8_2 = (EIF_INTEGER_64) ti4_1;
						tb9 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
					}
					if (!tb9) {
						ti8_1 = *(EIF_INTEGER_64 *)(loc7 + RTVA(10735, "value", loc7));
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10684, dtype))(Current)).it_i4);
						ti8_2 = (EIF_INTEGER_64) ti4_1;
						tb8 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
					}
					if (!tb8) {
						ti8_1 = *(EIF_INTEGER_64 *)(loc7 + RTVA(10735, "value", loc7));
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10685, dtype))(Current)).it_i4);
						ti8_2 = (EIF_INTEGER_64) ti4_1;
						tb7 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
					}
					if (!tb7) {
						ti8_1 = *(EIF_INTEGER_64 *)(loc7 + RTVA(10735, "value", loc7));
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10686, dtype))(Current)).it_i4);
						ti8_2 = (EIF_INTEGER_64) ti4_1;
						tb6 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
					}
					if (!tb6) {
						ti8_1 = *(EIF_INTEGER_64 *)(loc7 + RTVA(10735, "value", loc7));
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10687, dtype))(Current)).it_i4);
						ti8_2 = (EIF_INTEGER_64) ti4_1;
						tb5 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
					}
					if (!tb5) {
						ti8_1 = *(EIF_INTEGER_64 *)(loc7 + RTVA(10735, "value", loc7));
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10688, dtype))(Current)).it_i4);
						ti8_2 = (EIF_INTEGER_64) ti4_1;
						tb4 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
					}
					tb3 = tb4;
				}
				if (tb3) {
					ti8_1 = *(EIF_INTEGER_64 *)(loc8 + RTVA(10733, "value", loc8));
					tb2 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= ti8_1);
				}
				if (tb2) {
					ti8_1 = *(EIF_INTEGER_64 *)(loc8 + RTVA(10733, "value", loc8));
					tb1 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L));
				}
				if (tb1) {
					RTHOOK(14);
					RTDBGAL(Current, 0, 0xF8000568, 0,0); /* Result */
					tr1 = RTLN(eif_new_type(1402, 0x01).id);
					tr2 = RTMS_EX_H("fire",4,1718186597);
					ur1 = tr2;
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,0xFF01,0xFFF9,2,186,200,200,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr3 = RTLNTS(typres0.id, 2, 0);
					}
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,200,200,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr4 = RTLNTS(typres0.id, 3, 1);
					}
					ti8_1 = *(EIF_INTEGER_64 *)(loc7 + RTVA(10735, "value", loc7));
					((EIF_TYPED_VALUE *)tr4+1)->it_i8 = ti8_1;
					ti8_1 = *(EIF_INTEGER_64 *)(loc8 + RTVA(10733, "value", loc8));
					((EIF_TYPED_VALUE *)tr4+2)->it_i8 = ti8_1;
					((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
					RTAR(tr3,tr4);
					ur2 = RTCCL(tr3);
					tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10703, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur3 = RTCCL(tr4);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(12215, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
					RTNHOOK(14,1);
					Result = (EIF_REFERENCE) RTCCL(tr1);
				} else {
					RTHOOK(15);
					RTDBGAL(Current, 0, 0xF8000568, 0,0); /* Result */
					Result = (EIF_REFERENCE) RTCCL(loc3);
				}
			} else {
				RTHOOK(16);
				if (RTEQ(loc1, RTMS_EX_H("bomb",4,1651469666))) {
					RTHOOK(17);
					tb1 = '\0';
					tb2 = '\0';
					tb3 = '\0';
					tb4 = '\0';
					tb5 = '\0';
					tb6 = '\0';
					tb7 = '\0';
					tb8 = '\0';
					tb9 = '\0';
					tb10 = '\0';
					tb11 = '\0';
					tb12 = '\0';
					tb13 = '\0';
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc9 = RTCCL(tr1);
					loc9 = RTRV(eif_new_type(1258, 0x01),loc9);
					if ((EIF_TEST(loc9))) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10731, "value", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(17,1);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", tr1))(tr1)).it_i4);
						tb13 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
					}
					if (tb13) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10731, "value", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ui4_1 = ((EIF_INTEGER_32) 1L);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc10 = RTCCL(tr2);
						loc10 = RTRV(eif_new_type(1260, 0x01),loc10);
						tb12 = (EIF_TEST(loc10));
					}
					if (tb12) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10731, "value", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ui4_1 = ((EIF_INTEGER_32) 2L);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc11 = RTCCL(tr2);
						loc11 = RTRV(eif_new_type(1259, 0x01),loc11);
						tb11 = (EIF_TEST(loc11));
					}
					if (tb11) {
						tb11 = '\01';
						tb12 = '\01';
						tb13 = '\01';
						tb14 = '\01';
						tb15 = '\01';
						tb16 = '\01';
						tb17 = '\01';
						tb18 = '\01';
						tb19 = '\01';
						tb20 = '\01';
						tb21 = '\01';
						ti8_1 = *(EIF_INTEGER_64 *)(loc10 + RTVA(10735, "value", loc10));
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10677, dtype))(Current)).it_i4);
						ti8_2 = (EIF_INTEGER_64) ti4_1;
						if (!(EIF_BOOLEAN)(ti8_1 == ti8_2)) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc10 + RTVA(10735, "value", loc10));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10678, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb21 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb21) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc10 + RTVA(10735, "value", loc10));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10679, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb20 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb20) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc10 + RTVA(10735, "value", loc10));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10680, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb19 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb19) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc10 + RTVA(10735, "value", loc10));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10681, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb18 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb18) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc10 + RTVA(10735, "value", loc10));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10682, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb17 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb17) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc10 + RTVA(10735, "value", loc10));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10683, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb16 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb16) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc10 + RTVA(10735, "value", loc10));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10684, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb15 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb15) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc10 + RTVA(10735, "value", loc10));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10685, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb14 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb14) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc10 + RTVA(10735, "value", loc10));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10686, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb13 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb13) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc10 + RTVA(10735, "value", loc10));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10687, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb12 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb12) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc10 + RTVA(10735, "value", loc10));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10688, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb11 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						tb10 = tb11;
					}
					if (tb10) {
						ti8_1 = *(EIF_INTEGER_64 *)(loc11 + RTVA(10733, "value", loc11));
						tb9 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= ti8_1);
					}
					if (tb9) {
						ti8_1 = *(EIF_INTEGER_64 *)(loc11 + RTVA(10733, "value", loc11));
						tb8 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L));
					}
					if (tb8) {
						ui4_1 = ((EIF_INTEGER_32) 2L);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc12 = RTCCL(tr1);
						loc12 = RTRV(eif_new_type(1258, 0x01),loc12);
						tb7 = (EIF_TEST(loc12));
					}
					if (tb7) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10731, "value", loc12))(loc12)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(17,2);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", tr1))(tr1)).it_i4);
						tb6 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
					}
					if (tb6) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10731, "value", loc12))(loc12)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ui4_1 = ((EIF_INTEGER_32) 1L);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc13 = RTCCL(tr2);
						loc13 = RTRV(eif_new_type(1260, 0x01),loc13);
						tb5 = (EIF_TEST(loc13));
					}
					if (tb5) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10731, "value", loc12))(loc12)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ui4_1 = ((EIF_INTEGER_32) 2L);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc14 = RTCCL(tr2);
						loc14 = RTRV(eif_new_type(1259, 0x01),loc14);
						tb4 = (EIF_TEST(loc14));
					}
					if (tb4) {
						tb4 = '\01';
						tb5 = '\01';
						tb6 = '\01';
						tb7 = '\01';
						tb8 = '\01';
						tb9 = '\01';
						tb10 = '\01';
						tb11 = '\01';
						tb12 = '\01';
						tb13 = '\01';
						tb14 = '\01';
						ti8_1 = *(EIF_INTEGER_64 *)(loc13 + RTVA(10735, "value", loc13));
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10677, dtype))(Current)).it_i4);
						ti8_2 = (EIF_INTEGER_64) ti4_1;
						if (!(EIF_BOOLEAN)(ti8_1 == ti8_2)) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc13 + RTVA(10735, "value", loc13));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10678, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb14 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb14) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc13 + RTVA(10735, "value", loc13));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10679, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb13 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb13) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc13 + RTVA(10735, "value", loc13));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10680, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb12 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb12) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc13 + RTVA(10735, "value", loc13));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10681, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb11 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb11) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc13 + RTVA(10735, "value", loc13));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10682, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb10 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb10) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc13 + RTVA(10735, "value", loc13));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10683, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb9 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb9) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc13 + RTVA(10735, "value", loc13));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10684, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb8 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb8) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc13 + RTVA(10735, "value", loc13));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10685, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb7 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb7) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc13 + RTVA(10735, "value", loc13));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10686, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb6 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb6) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc13 + RTVA(10735, "value", loc13));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10687, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb5 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb5) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc13 + RTVA(10735, "value", loc13));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10688, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_1;
							tb4 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						tb3 = tb4;
					}
					if (tb3) {
						ti8_1 = *(EIF_INTEGER_64 *)(loc14 + RTVA(10733, "value", loc14));
						tb2 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= ti8_1);
					}
					if (tb2) {
						ti8_1 = *(EIF_INTEGER_64 *)(loc14 + RTVA(10733, "value", loc14));
						tb1 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L));
					}
					if (tb1) {
						RTHOOK(18);
						RTDBGAL(Current, 0, 0xF8000568, 0,0); /* Result */
						tr1 = RTLN(eif_new_type(1394, 0x01).id);
						tr2 = RTMS_EX_H("bomb",4,1651469666);
						ur1 = tr2;
						{
							static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,0xFFF9,2,186,200,200,0xFF01,0xFFF9,2,186,200,200,0xFFFF};
							EIF_TYPE typres0;
							static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
							
							typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							tr3 = RTLNTS(typres0.id, 3, 0);
						}
						{
							static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,200,200,0xFFFF};
							EIF_TYPE typres0;
							static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
							
							typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							tr4 = RTLNTS(typres0.id, 3, 1);
						}
						ti8_1 = *(EIF_INTEGER_64 *)(loc10 + RTVA(10735, "value", loc10));
						((EIF_TYPED_VALUE *)tr4+1)->it_i8 = ti8_1;
						ti8_1 = *(EIF_INTEGER_64 *)(loc11 + RTVA(10733, "value", loc11));
						((EIF_TYPED_VALUE *)tr4+2)->it_i8 = ti8_1;
						((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
						RTAR(tr3,tr4);
						{
							static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,200,200,0xFFFF};
							EIF_TYPE typres0;
							static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
							
							typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							tr4 = RTLNTS(typres0.id, 3, 1);
						}
						ti8_1 = *(EIF_INTEGER_64 *)(loc13 + RTVA(10735, "value", loc13));
						((EIF_TYPED_VALUE *)tr4+1)->it_i8 = ti8_1;
						ti8_1 = *(EIF_INTEGER_64 *)(loc14 + RTVA(10733, "value", loc14));
						((EIF_TYPED_VALUE *)tr4+2)->it_i8 = ti8_1;
						((EIF_TYPED_VALUE *)tr3+2)->it_r = tr4;
						RTAR(tr3,tr4);
						ur2 = RTCCL(tr3);
						tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10703, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur3 = RTCCL(tr4);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(12215, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
						RTNHOOK(18,1);
						Result = (EIF_REFERENCE) RTCCL(tr1);
					} else {
						RTHOOK(19);
						RTDBGAL(Current, 0, 0xF8000568, 0,0); /* Result */
						Result = (EIF_REFERENCE) RTCCL(loc3);
					}
				} else {
					RTHOOK(20);
					if (RTEQ(loc1, RTMS_EX_H("undo",4,1970168943))) {
						RTHOOK(21);
						if ((EIF_BOOLEAN) 1) {
							RTHOOK(22);
							RTDBGAL(Current, 0, 0xF8000568, 0,0); /* Result */
							tr1 = RTLN(eif_new_type(1390, 0x01).id);
							tr2 = RTMS_EX_H("undo",4,1970168943);
							ur1 = tr2;
							{
								static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,186,0xFFFF};
								EIF_TYPE typres0;
								static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
								
								typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
								tr3 = RTLNTS(typres0.id, 1, 1);
							}
							ur2 = tr3;
							tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10703, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur3 = RTCCL(tr4);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(12215, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
							RTNHOOK(22,1);
							Result = (EIF_REFERENCE) RTCCL(tr1);
						} else {
							RTHOOK(23);
							RTDBGAL(Current, 0, 0xF8000568, 0,0); /* Result */
							Result = (EIF_REFERENCE) RTCCL(loc3);
						}
					} else {
						RTHOOK(24);
						if (RTEQ(loc1, RTMS_EX_H("redo",4,1919247471))) {
							RTHOOK(25);
							if ((EIF_BOOLEAN) 1) {
								RTHOOK(26);
								RTDBGAL(Current, 0, 0xF8000568, 0,0); /* Result */
								tr1 = RTLN(eif_new_type(1388, 0x01).id);
								tr2 = RTMS_EX_H("redo",4,1919247471);
								ur1 = tr2;
								{
									static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,186,0xFFFF};
									EIF_TYPE typres0;
									static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
									
									typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
									tr3 = RTLNTS(typres0.id, 1, 1);
								}
								ur2 = tr3;
								tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10703, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur3 = RTCCL(tr4);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(12215, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
								RTNHOOK(26,1);
								Result = (EIF_REFERENCE) RTCCL(tr1);
							} else {
								RTHOOK(27);
								RTDBGAL(Current, 0, 0xF8000568, 0,0); /* Result */
								Result = (EIF_REFERENCE) RTCCL(loc3);
							}
						} else {
							RTHOOK(28);
							if (RTEQ(loc1, RTMS_EX_H("custom_setup",12,365685616))) {
								RTHOOK(29);
								tb1 = '\0';
								tb2 = '\0';
								tb3 = '\0';
								tb4 = '\0';
								tb5 = '\0';
								tb6 = '\0';
								tb7 = '\0';
								tb8 = '\0';
								tb9 = '\0';
								tb10 = '\0';
								tb11 = '\0';
								ui4_1 = ((EIF_INTEGER_32) 1L);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								loc15 = RTCCL(tr1);
								loc15 = RTRV(eif_new_type(1259, 0x01),loc15);
								if (EIF_TEST(loc15)) {
									ti8_1 = *(EIF_INTEGER_64 *)(loc15 + RTVA(10733, "value", loc15));
									tb11 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 4L) <= ti8_1);
								}
								if (tb11) {
									ti8_1 = *(EIF_INTEGER_64 *)(loc15 + RTVA(10733, "value", loc15));
									tb10 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L));
								}
								if (tb10) {
									ui4_1 = ((EIF_INTEGER_32) 2L);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									loc16 = RTCCL(tr1);
									loc16 = RTRV(eif_new_type(1259, 0x01),loc16);
									tb9 = EIF_TEST(loc16);
								}
								if (tb9) {
									ti8_1 = *(EIF_INTEGER_64 *)(loc16 + RTVA(10733, "value", loc16));
									tb8 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= ti8_1);
								}
								if (tb8) {
									ti8_1 = *(EIF_INTEGER_64 *)(loc16 + RTVA(10733, "value", loc16));
									tb7 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L));
								}
								if (tb7) {
									ui4_1 = ((EIF_INTEGER_32) 3L);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									loc17 = RTCCL(tr1);
									loc17 = RTRV(eif_new_type(1259, 0x01),loc17);
									tb6 = EIF_TEST(loc17);
								}
								if (tb6) {
									ti8_1 = *(EIF_INTEGER_64 *)(loc17 + RTVA(10733, "value", loc17));
									tb5 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= ti8_1);
								}
								if (tb5) {
									ti8_1 = *(EIF_INTEGER_64 *)(loc17 + RTVA(10733, "value", loc17));
									tb4 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 144L));
								}
								if (tb4) {
									ui4_1 = ((EIF_INTEGER_32) 4L);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									loc18 = RTCCL(tr1);
									loc18 = RTRV(eif_new_type(1259, 0x01),loc18);
									tb3 = EIF_TEST(loc18);
								}
								if (tb3) {
									ti8_1 = *(EIF_INTEGER_64 *)(loc18 + RTVA(10733, "value", loc18));
									tb2 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= ti8_1);
								}
								if (tb2) {
									ti8_1 = *(EIF_INTEGER_64 *)(loc18 + RTVA(10733, "value", loc18));
									tb1 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L));
								}
								if (tb1) {
									RTHOOK(30);
									RTDBGAL(Current, 0, 0xF8000568, 0,0); /* Result */
									tr1 = RTLN(eif_new_type(1392, 0x01).id);
									tr2 = RTMS_EX_H("custom_setup",12,365685616);
									ur1 = tr2;
									{
										static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,186,200,200,200,200,0xFFFF};
										EIF_TYPE typres0;
										static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
										
										typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
										tr3 = RTLNTS(typres0.id, 5, 1);
									}
									ti8_1 = *(EIF_INTEGER_64 *)(loc15 + RTVA(10733, "value", loc15));
									((EIF_TYPED_VALUE *)tr3+1)->it_i8 = ti8_1;
									ti8_1 = *(EIF_INTEGER_64 *)(loc16 + RTVA(10733, "value", loc16));
									((EIF_TYPED_VALUE *)tr3+2)->it_i8 = ti8_1;
									ti8_1 = *(EIF_INTEGER_64 *)(loc17 + RTVA(10733, "value", loc17));
									((EIF_TYPED_VALUE *)tr3+3)->it_i8 = ti8_1;
									ti8_1 = *(EIF_INTEGER_64 *)(loc18 + RTVA(10733, "value", loc18));
									((EIF_TYPED_VALUE *)tr3+4)->it_i8 = ti8_1;
									ur2 = RTCCL(tr3);
									tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10703, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur3 = RTCCL(tr4);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(12215, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
									RTNHOOK(30,1);
									Result = (EIF_REFERENCE) RTCCL(tr1);
								} else {
									RTHOOK(31);
									RTDBGAL(Current, 0, 0xF8000568, 0,0); /* Result */
									Result = (EIF_REFERENCE) RTCCL(loc3);
								}
							} else {
								RTHOOK(32);
								if (RTEQ(loc1, RTMS_EX_H("custom_setup_test",17,1479641460))) {
									RTHOOK(33);
									tb1 = '\0';
									tb2 = '\0';
									tb3 = '\0';
									tb4 = '\0';
									tb5 = '\0';
									tb6 = '\0';
									tb7 = '\0';
									tb8 = '\0';
									tb9 = '\0';
									tb10 = '\0';
									tb11 = '\0';
									ui4_1 = ((EIF_INTEGER_32) 1L);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									loc19 = RTCCL(tr1);
									loc19 = RTRV(eif_new_type(1259, 0x01),loc19);
									if (EIF_TEST(loc19)) {
										ti8_1 = *(EIF_INTEGER_64 *)(loc19 + RTVA(10733, "value", loc19));
										tb11 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 4L) <= ti8_1);
									}
									if (tb11) {
										ti8_1 = *(EIF_INTEGER_64 *)(loc19 + RTVA(10733, "value", loc19));
										tb10 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L));
									}
									if (tb10) {
										ui4_1 = ((EIF_INTEGER_32) 2L);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										loc20 = RTCCL(tr1);
										loc20 = RTRV(eif_new_type(1259, 0x01),loc20);
										tb9 = EIF_TEST(loc20);
									}
									if (tb9) {
										ti8_1 = *(EIF_INTEGER_64 *)(loc20 + RTVA(10733, "value", loc20));
										tb8 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= ti8_1);
									}
									if (tb8) {
										ti8_1 = *(EIF_INTEGER_64 *)(loc20 + RTVA(10733, "value", loc20));
										tb7 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L));
									}
									if (tb7) {
										ui4_1 = ((EIF_INTEGER_32) 3L);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										loc21 = RTCCL(tr1);
										loc21 = RTRV(eif_new_type(1259, 0x01),loc21);
										tb6 = EIF_TEST(loc21);
									}
									if (tb6) {
										ti8_1 = *(EIF_INTEGER_64 *)(loc21 + RTVA(10733, "value", loc21));
										tb5 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= ti8_1);
									}
									if (tb5) {
										ti8_1 = *(EIF_INTEGER_64 *)(loc21 + RTVA(10733, "value", loc21));
										tb4 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 144L));
									}
									if (tb4) {
										ui4_1 = ((EIF_INTEGER_32) 4L);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										loc22 = RTCCL(tr1);
										loc22 = RTRV(eif_new_type(1259, 0x01),loc22);
										tb3 = EIF_TEST(loc22);
									}
									if (tb3) {
										ti8_1 = *(EIF_INTEGER_64 *)(loc22 + RTVA(10733, "value", loc22));
										tb2 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= ti8_1);
									}
									if (tb2) {
										ti8_1 = *(EIF_INTEGER_64 *)(loc22 + RTVA(10733, "value", loc22));
										tb1 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L));
									}
									if (tb1) {
										RTHOOK(34);
										RTDBGAL(Current, 0, 0xF8000568, 0,0); /* Result */
										tr1 = RTLN(eif_new_type(1400, 0x01).id);
										tr2 = RTMS_EX_H("custom_setup_test",17,1479641460);
										ur1 = tr2;
										{
											static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,186,200,200,200,200,0xFFFF};
											EIF_TYPE typres0;
											static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
											
											typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
											tr3 = RTLNTS(typres0.id, 5, 1);
										}
										ti8_1 = *(EIF_INTEGER_64 *)(loc19 + RTVA(10733, "value", loc19));
										((EIF_TYPED_VALUE *)tr3+1)->it_i8 = ti8_1;
										ti8_1 = *(EIF_INTEGER_64 *)(loc20 + RTVA(10733, "value", loc20));
										((EIF_TYPED_VALUE *)tr3+2)->it_i8 = ti8_1;
										ti8_1 = *(EIF_INTEGER_64 *)(loc21 + RTVA(10733, "value", loc21));
										((EIF_TYPED_VALUE *)tr3+3)->it_i8 = ti8_1;
										ti8_1 = *(EIF_INTEGER_64 *)(loc22 + RTVA(10733, "value", loc22));
										((EIF_TYPED_VALUE *)tr3+4)->it_i8 = ti8_1;
										ur2 = RTCCL(tr3);
										tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10703, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur3 = RTCCL(tr4);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(12215, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
										RTNHOOK(34,1);
										Result = (EIF_REFERENCE) RTCCL(tr1);
									} else {
										RTHOOK(35);
										RTDBGAL(Current, 0, 0xF8000568, 0,0); /* Result */
										Result = (EIF_REFERENCE) RTCCL(loc3);
									}
								} else {
									RTHOOK(36);
									if (RTEQ(loc1, RTMS_EX_H("give_up",7,62701680))) {
										RTHOOK(37);
										if ((EIF_BOOLEAN) 1) {
											RTHOOK(38);
											RTDBGAL(Current, 0, 0xF8000568, 0,0); /* Result */
											tr1 = RTLN(eif_new_type(1404, 0x01).id);
											tr2 = RTMS_EX_H("give_up",7,62701680);
											ur1 = tr2;
											{
												static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,186,0xFFFF};
												EIF_TYPE typres0;
												static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
												
												typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
												tr3 = RTLNTS(typres0.id, 1, 1);
											}
											ur2 = tr3;
											tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10703, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											ur3 = RTCCL(tr4);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(12215, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
											RTNHOOK(38,1);
											Result = (EIF_REFERENCE) RTCCL(tr1);
										} else {
											RTHOOK(39);
											RTDBGAL(Current, 0, 0xF8000568, 0,0); /* Result */
											Result = (EIF_REFERENCE) RTCCL(loc3);
										}
									} else {
										RTHOOK(40);
										RTDBGAL(Current, 0, 0xF8000568, 0,0); /* Result */
										Result = (EIF_REFERENCE) RTCCL(loc3);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(41);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(25);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef arg1
}

/* {ETF_INPUT_HANDLER_INTERFACE}.find_invalid_evt_trace */
EIF_TYPED_VALUE F1248_12997 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "find_invalid_evt_trace";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc23 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc24 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_BOOLEAN tb9;
	EIF_BOOLEAN tb10;
	EIF_BOOLEAN tb11;
	EIF_BOOLEAN tb12;
	EIF_BOOLEAN tb13;
	EIF_BOOLEAN tb14;
	EIF_BOOLEAN tb15;
	EIF_BOOLEAN tb16;
	EIF_BOOLEAN tb17;
	EIF_BOOLEAN tb18;
	EIF_BOOLEAN tb19;
	EIF_BOOLEAN tb20;
	EIF_BOOLEAN tb21;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(29);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc2);
	RTLR(4,loc5);
	RTLR(5,ur1);
	RTLR(6,Current);
	RTLR(7,loc3);
	RTLR(8,loc4);
	RTLR(9,loc6);
	RTLR(10,tr2);
	RTLR(11,loc7);
	RTLR(12,loc8);
	RTLR(13,loc9);
	RTLR(14,loc10);
	RTLR(15,loc11);
	RTLR(16,loc12);
	RTLR(17,loc13);
	RTLR(18,loc14);
	RTLR(19,loc15);
	RTLR(20,loc16);
	RTLR(21,loc17);
	RTLR(22,loc18);
	RTLR(23,loc19);
	RTLR(24,loc20);
	RTLR(25,loc21);
	RTLR(26,loc22);
	RTLR(27,loc23);
	RTLR(28,loc24);
	RTLIU(29);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REF, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_REF, &loc20);
	RTLU(SK_REF, &loc21);
	RTLU(SK_REF, &loc22);
	RTLU(SK_REF, &loc23);
	RTLU(SK_REF, &loc24);
	
	RTEAA(l_feature_name, 1247, Current, 24, 1, 19227);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1247, Current, 19227);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,248,0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,248,0xFF01,1249,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1247, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(232, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4623, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2665, "lower", arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2664, "upper", arg1));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		RTDBGAL(Current, 2, 0xF80000BA, 0, 0); /* loc2 */
		ui4_1 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", arg1))(arg1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		RTDBGAL(Current, 5, 0xF80000E8, 0, 0); /* loc5 */
		ur1 = RTCCL(loc2);
		loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10700, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(6);
		RTDBGAL(Current, 3, 0xF80000E8, 0, 0); /* loc3 */
		tr1 = eif_boxed_item(loc2,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		RTDBGAL(Current, 4, 0xF80000F8, 0, 0); /* loc4 */
		tr1 = eif_boxed_item(loc2,2);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(8);
		if (RTEQ(loc3, RTMS_EX_H("new_game",8,1289924453))) {
			RTHOOK(9);
			tb1 = '\0';
			tb2 = '\0';
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", loc4))(loc4)).it_i4);
			if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 1L))) {
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc6 = RTCCL(tr1);
				loc6 = RTRV(eif_new_type(1260, 0x01),loc6);
				tb2 = EIF_TEST(loc6);
			}
			if (tb2) {
				tb2 = '\01';
				tb3 = '\01';
				tb4 = '\01';
				ti8_1 = *(EIF_INTEGER_64 *)(loc6 + RTVA(10735, "value", loc6));
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10689, dtype))(Current)).it_i4);
				ti8_2 = (EIF_INTEGER_64) ti4_2;
				if (!(EIF_BOOLEAN)(ti8_1 == ti8_2)) {
					ti8_1 = *(EIF_INTEGER_64 *)(loc6 + RTVA(10735, "value", loc6));
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10690, dtype))(Current)).it_i4);
					ti8_2 = (EIF_INTEGER_64) ti4_2;
					tb4 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
				}
				if (!tb4) {
					ti8_1 = *(EIF_INTEGER_64 *)(loc6 + RTVA(10735, "value", loc6));
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10691, dtype))(Current)).it_i4);
					ti8_2 = (EIF_INTEGER_64) ti4_2;
					tb3 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
				}
				if (!tb3) {
					ti8_1 = *(EIF_INTEGER_64 *)(loc6 + RTVA(10735, "value", loc6));
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10692, dtype))(Current)).it_i4);
					ti8_2 = (EIF_INTEGER_64) ti4_2;
					tb2 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
				}
				tb1 = tb2;
			}
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(10);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4639, "is_empty", Result))(Result)).it_b);
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(11);
					tr1 = RTMS_EX_H("\012",1,10);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
				}
				RTHOOK(12);
				tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
				ur1 = tr1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = RTMS_EX_H("new_game(level: LEVEL = {easy, medium, hard, advanced})",55,2134357545);
				ur1 = tr2;
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
			}
		} else {
			RTHOOK(13);
			if (RTEQ(loc3, RTMS_EX_H("debug_test",10,723132276))) {
				RTHOOK(14);
				tb1 = '\0';
				tb2 = '\0';
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", loc4))(loc4)).it_i4);
				if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 1L))) {
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc7 = RTCCL(tr1);
					loc7 = RTRV(eif_new_type(1260, 0x01),loc7);
					tb2 = EIF_TEST(loc7);
				}
				if (tb2) {
					tb2 = '\01';
					tb3 = '\01';
					tb4 = '\01';
					ti8_1 = *(EIF_INTEGER_64 *)(loc7 + RTVA(10735, "value", loc7));
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10689, dtype))(Current)).it_i4);
					ti8_2 = (EIF_INTEGER_64) ti4_2;
					if (!(EIF_BOOLEAN)(ti8_1 == ti8_2)) {
						ti8_1 = *(EIF_INTEGER_64 *)(loc7 + RTVA(10735, "value", loc7));
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10690, dtype))(Current)).it_i4);
						ti8_2 = (EIF_INTEGER_64) ti4_2;
						tb4 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
					}
					if (!tb4) {
						ti8_1 = *(EIF_INTEGER_64 *)(loc7 + RTVA(10735, "value", loc7));
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10691, dtype))(Current)).it_i4);
						ti8_2 = (EIF_INTEGER_64) ti4_2;
						tb3 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
					}
					if (!tb3) {
						ti8_1 = *(EIF_INTEGER_64 *)(loc7 + RTVA(10735, "value", loc7));
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10692, dtype))(Current)).it_i4);
						ti8_2 = (EIF_INTEGER_64) ti4_2;
						tb2 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
					}
					tb1 = tb2;
				}
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(15);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4639, "is_empty", Result))(Result)).it_b);
					if ((EIF_BOOLEAN) !tb1) {
						RTHOOK(16);
						tr1 = RTMS_EX_H("\012",1,10);
						ur1 = tr1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
					}
					RTHOOK(17);
					tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
					ur1 = tr1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr2 = RTMS_EX_H("debug_test(level: LEVEL = {easy, medium, hard, advanced})",57,1501775145);
					ur1 = tr2;
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
				}
			} else {
				RTHOOK(18);
				if (RTEQ(loc3, RTMS_EX_H("fire",4,1718186597))) {
					RTHOOK(19);
					tb1 = '\0';
					tb2 = '\0';
					tb3 = '\0';
					tb4 = '\0';
					tb5 = '\0';
					tb6 = '\0';
					tb7 = '\0';
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", loc4))(loc4)).it_i4);
					if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 1L))) {
						ui4_1 = ((EIF_INTEGER_32) 1L);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc8 = RTCCL(tr1);
						loc8 = RTRV(eif_new_type(1258, 0x01),loc8);
						tb7 = (EIF_TEST(loc8));
					}
					if (tb7) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10731, "value", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(19,1);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", tr1))(tr1)).it_i4);
						tb6 = (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 2L));
					}
					if (tb6) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10731, "value", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ui4_1 = ((EIF_INTEGER_32) 1L);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc9 = RTCCL(tr2);
						loc9 = RTRV(eif_new_type(1260, 0x01),loc9);
						tb5 = (EIF_TEST(loc9));
					}
					if (tb5) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10731, "value", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ui4_1 = ((EIF_INTEGER_32) 2L);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc10 = RTCCL(tr2);
						loc10 = RTRV(eif_new_type(1259, 0x01),loc10);
						tb4 = (EIF_TEST(loc10));
					}
					if (tb4) {
						tb4 = '\01';
						tb5 = '\01';
						tb6 = '\01';
						tb7 = '\01';
						tb8 = '\01';
						tb9 = '\01';
						tb10 = '\01';
						tb11 = '\01';
						tb12 = '\01';
						tb13 = '\01';
						tb14 = '\01';
						ti8_1 = *(EIF_INTEGER_64 *)(loc9 + RTVA(10735, "value", loc9));
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10677, dtype))(Current)).it_i4);
						ti8_2 = (EIF_INTEGER_64) ti4_2;
						if (!(EIF_BOOLEAN)(ti8_1 == ti8_2)) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc9 + RTVA(10735, "value", loc9));
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10678, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_2;
							tb14 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb14) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc9 + RTVA(10735, "value", loc9));
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10679, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_2;
							tb13 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb13) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc9 + RTVA(10735, "value", loc9));
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10680, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_2;
							tb12 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb12) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc9 + RTVA(10735, "value", loc9));
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10681, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_2;
							tb11 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb11) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc9 + RTVA(10735, "value", loc9));
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10682, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_2;
							tb10 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb10) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc9 + RTVA(10735, "value", loc9));
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10683, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_2;
							tb9 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb9) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc9 + RTVA(10735, "value", loc9));
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10684, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_2;
							tb8 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb8) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc9 + RTVA(10735, "value", loc9));
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10685, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_2;
							tb7 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb7) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc9 + RTVA(10735, "value", loc9));
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10686, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_2;
							tb6 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb6) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc9 + RTVA(10735, "value", loc9));
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10687, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_2;
							tb5 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						if (!tb5) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc9 + RTVA(10735, "value", loc9));
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10688, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_2;
							tb4 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
						}
						tb3 = tb4;
					}
					if (tb3) {
						ti8_1 = *(EIF_INTEGER_64 *)(loc10 + RTVA(10733, "value", loc10));
						tb2 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= ti8_1);
					}
					if (tb2) {
						ti8_1 = *(EIF_INTEGER_64 *)(loc10 + RTVA(10733, "value", loc10));
						tb1 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L));
					}
					if ((EIF_BOOLEAN) !tb1) {
						RTHOOK(20);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4639, "is_empty", Result))(Result)).it_b);
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(21);
							tr1 = RTMS_EX_H("\012",1,10);
							ur1 = tr1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
						}
						RTHOOK(22);
						tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr2 = RTMS_EX_H("fire(coordinate: COORDINATE = TUPLE[row: ROW = {A, B, C, D, E, F, G, H, I, J, K, L}; column: COLUMN = 1 .. 12])",111,988903721);
						ur1 = tr2;
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
					}
				} else {
					RTHOOK(23);
					if (RTEQ(loc3, RTMS_EX_H("bomb",4,1651469666))) {
						RTHOOK(24);
						tb1 = '\0';
						tb2 = '\0';
						tb3 = '\0';
						tb4 = '\0';
						tb5 = '\0';
						tb6 = '\0';
						tb7 = '\0';
						tb8 = '\0';
						tb9 = '\0';
						tb10 = '\0';
						tb11 = '\0';
						tb12 = '\0';
						tb13 = '\0';
						tb14 = '\0';
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", loc4))(loc4)).it_i4);
						if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 2L))) {
							ui4_1 = ((EIF_INTEGER_32) 1L);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc11 = RTCCL(tr1);
							loc11 = RTRV(eif_new_type(1258, 0x01),loc11);
							tb14 = (EIF_TEST(loc11));
						}
						if (tb14) {
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10731, "value", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(24,1);
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", tr1))(tr1)).it_i4);
							tb13 = (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 2L));
						}
						if (tb13) {
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10731, "value", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ui4_1 = ((EIF_INTEGER_32) 1L);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc12 = RTCCL(tr2);
							loc12 = RTRV(eif_new_type(1260, 0x01),loc12);
							tb12 = (EIF_TEST(loc12));
						}
						if (tb12) {
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10731, "value", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ui4_1 = ((EIF_INTEGER_32) 2L);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc13 = RTCCL(tr2);
							loc13 = RTRV(eif_new_type(1259, 0x01),loc13);
							tb11 = (EIF_TEST(loc13));
						}
						if (tb11) {
							tb11 = '\01';
							tb12 = '\01';
							tb13 = '\01';
							tb14 = '\01';
							tb15 = '\01';
							tb16 = '\01';
							tb17 = '\01';
							tb18 = '\01';
							tb19 = '\01';
							tb20 = '\01';
							tb21 = '\01';
							ti8_1 = *(EIF_INTEGER_64 *)(loc12 + RTVA(10735, "value", loc12));
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10677, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_2;
							if (!(EIF_BOOLEAN)(ti8_1 == ti8_2)) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc12 + RTVA(10735, "value", loc12));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10678, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb21 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							if (!tb21) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc12 + RTVA(10735, "value", loc12));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10679, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb20 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							if (!tb20) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc12 + RTVA(10735, "value", loc12));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10680, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb19 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							if (!tb19) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc12 + RTVA(10735, "value", loc12));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10681, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb18 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							if (!tb18) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc12 + RTVA(10735, "value", loc12));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10682, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb17 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							if (!tb17) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc12 + RTVA(10735, "value", loc12));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10683, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb16 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							if (!tb16) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc12 + RTVA(10735, "value", loc12));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10684, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb15 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							if (!tb15) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc12 + RTVA(10735, "value", loc12));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10685, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb14 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							if (!tb14) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc12 + RTVA(10735, "value", loc12));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10686, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb13 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							if (!tb13) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc12 + RTVA(10735, "value", loc12));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10687, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb12 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							if (!tb12) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc12 + RTVA(10735, "value", loc12));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10688, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb11 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							tb10 = tb11;
						}
						if (tb10) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc13 + RTVA(10733, "value", loc13));
							tb9 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= ti8_1);
						}
						if (tb9) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc13 + RTVA(10733, "value", loc13));
							tb8 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L));
						}
						if (tb8) {
							ui4_1 = ((EIF_INTEGER_32) 2L);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc14 = RTCCL(tr1);
							loc14 = RTRV(eif_new_type(1258, 0x01),loc14);
							tb7 = (EIF_TEST(loc14));
						}
						if (tb7) {
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10731, "value", loc14))(loc14)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(24,2);
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", tr1))(tr1)).it_i4);
							tb6 = (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 2L));
						}
						if (tb6) {
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10731, "value", loc14))(loc14)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ui4_1 = ((EIF_INTEGER_32) 1L);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc15 = RTCCL(tr2);
							loc15 = RTRV(eif_new_type(1260, 0x01),loc15);
							tb5 = (EIF_TEST(loc15));
						}
						if (tb5) {
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10731, "value", loc14))(loc14)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ui4_1 = ((EIF_INTEGER_32) 2L);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc16 = RTCCL(tr2);
							loc16 = RTRV(eif_new_type(1259, 0x01),loc16);
							tb4 = (EIF_TEST(loc16));
						}
						if (tb4) {
							tb4 = '\01';
							tb5 = '\01';
							tb6 = '\01';
							tb7 = '\01';
							tb8 = '\01';
							tb9 = '\01';
							tb10 = '\01';
							tb11 = '\01';
							tb12 = '\01';
							tb13 = '\01';
							tb14 = '\01';
							ti8_1 = *(EIF_INTEGER_64 *)(loc15 + RTVA(10735, "value", loc15));
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10677, dtype))(Current)).it_i4);
							ti8_2 = (EIF_INTEGER_64) ti4_2;
							if (!(EIF_BOOLEAN)(ti8_1 == ti8_2)) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc15 + RTVA(10735, "value", loc15));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10678, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb14 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							if (!tb14) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc15 + RTVA(10735, "value", loc15));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10679, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb13 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							if (!tb13) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc15 + RTVA(10735, "value", loc15));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10680, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb12 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							if (!tb12) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc15 + RTVA(10735, "value", loc15));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10681, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb11 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							if (!tb11) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc15 + RTVA(10735, "value", loc15));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10682, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb10 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							if (!tb10) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc15 + RTVA(10735, "value", loc15));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10683, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb9 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							if (!tb9) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc15 + RTVA(10735, "value", loc15));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10684, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb8 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							if (!tb8) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc15 + RTVA(10735, "value", loc15));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10685, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb7 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							if (!tb7) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc15 + RTVA(10735, "value", loc15));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10686, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb6 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							if (!tb6) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc15 + RTVA(10735, "value", loc15));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10687, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb5 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							if (!tb5) {
								ti8_1 = *(EIF_INTEGER_64 *)(loc15 + RTVA(10735, "value", loc15));
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10688, dtype))(Current)).it_i4);
								ti8_2 = (EIF_INTEGER_64) ti4_2;
								tb4 = (EIF_BOOLEAN)(ti8_1 == ti8_2);
							}
							tb3 = tb4;
						}
						if (tb3) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc16 + RTVA(10733, "value", loc16));
							tb2 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= ti8_1);
						}
						if (tb2) {
							ti8_1 = *(EIF_INTEGER_64 *)(loc16 + RTVA(10733, "value", loc16));
							tb1 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L));
						}
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(25);
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4639, "is_empty", Result))(Result)).it_b);
							if ((EIF_BOOLEAN) !tb1) {
								RTHOOK(26);
								tr1 = RTMS_EX_H("\012",1,10);
								ur1 = tr1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
							}
							RTHOOK(27);
							tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
							ur1 = tr1;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							tr2 = RTMS_EX_H("bomb(coordinate1: COORDINATE = TUPLE[row: ROW = {A, B, C, D, E, F, G, H, I, J, K, L}; column: COLUMN = 1 .. 12] ; coordinate2: COORDINATE = TUPLE[row: ROW = {A, B, C, D, E, F, G, H, I, J, K, L}; column: COLUMN = 1 .. 12])",221,536144169);
							ur1 = tr2;
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr2);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
						}
					} else {
						RTHOOK(28);
						if (RTEQ(loc3, RTMS_EX_H("undo",4,1970168943))) {
							RTHOOK(29);
							if ((EIF_BOOLEAN) 0) {
								RTHOOK(30);
								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4639, "is_empty", Result))(Result)).it_b);
								if ((EIF_BOOLEAN) !tb1) {
									RTHOOK(31);
									tr1 = RTMS_EX_H("\012",1,10);
									ur1 = tr1;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
								}
								RTHOOK(32);
								tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
								ur1 = tr1;
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								tr2 = RTMS_EX_H("undo",4,1970168943);
								ur1 = tr2;
								tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr2);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
							}
						} else {
							RTHOOK(33);
							if (RTEQ(loc3, RTMS_EX_H("redo",4,1919247471))) {
								RTHOOK(34);
								if ((EIF_BOOLEAN) 0) {
									RTHOOK(35);
									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4639, "is_empty", Result))(Result)).it_b);
									if ((EIF_BOOLEAN) !tb1) {
										RTHOOK(36);
										tr1 = RTMS_EX_H("\012",1,10);
										ur1 = tr1;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
									}
									RTHOOK(37);
									tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
									ur1 = tr1;
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									tr2 = RTMS_EX_H("redo",4,1919247471);
									ur1 = tr2;
									tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur1 = RTCCL(tr2);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
								}
							} else {
								RTHOOK(38);
								if (RTEQ(loc3, RTMS_EX_H("custom_setup",12,365685616))) {
									RTHOOK(39);
									tb1 = '\0';
									tb2 = '\0';
									tb3 = '\0';
									tb4 = '\0';
									tb5 = '\0';
									tb6 = '\0';
									tb7 = '\0';
									tb8 = '\0';
									tb9 = '\0';
									tb10 = '\0';
									tb11 = '\0';
									tb12 = '\0';
									ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", loc4))(loc4)).it_i4);
									if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 4L))) {
										ui4_1 = ((EIF_INTEGER_32) 1L);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										loc17 = RTCCL(tr1);
										loc17 = RTRV(eif_new_type(1259, 0x01),loc17);
										tb12 = EIF_TEST(loc17);
									}
									if (tb12) {
										ti8_1 = *(EIF_INTEGER_64 *)(loc17 + RTVA(10733, "value", loc17));
										tb11 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 4L) <= ti8_1);
									}
									if (tb11) {
										ti8_1 = *(EIF_INTEGER_64 *)(loc17 + RTVA(10733, "value", loc17));
										tb10 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L));
									}
									if (tb10) {
										ui4_1 = ((EIF_INTEGER_32) 2L);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										loc18 = RTCCL(tr1);
										loc18 = RTRV(eif_new_type(1259, 0x01),loc18);
										tb9 = EIF_TEST(loc18);
									}
									if (tb9) {
										ti8_1 = *(EIF_INTEGER_64 *)(loc18 + RTVA(10733, "value", loc18));
										tb8 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= ti8_1);
									}
									if (tb8) {
										ti8_1 = *(EIF_INTEGER_64 *)(loc18 + RTVA(10733, "value", loc18));
										tb7 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L));
									}
									if (tb7) {
										ui4_1 = ((EIF_INTEGER_32) 3L);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										loc19 = RTCCL(tr1);
										loc19 = RTRV(eif_new_type(1259, 0x01),loc19);
										tb6 = EIF_TEST(loc19);
									}
									if (tb6) {
										ti8_1 = *(EIF_INTEGER_64 *)(loc19 + RTVA(10733, "value", loc19));
										tb5 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= ti8_1);
									}
									if (tb5) {
										ti8_1 = *(EIF_INTEGER_64 *)(loc19 + RTVA(10733, "value", loc19));
										tb4 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 144L));
									}
									if (tb4) {
										ui4_1 = ((EIF_INTEGER_32) 4L);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										loc20 = RTCCL(tr1);
										loc20 = RTRV(eif_new_type(1259, 0x01),loc20);
										tb3 = EIF_TEST(loc20);
									}
									if (tb3) {
										ti8_1 = *(EIF_INTEGER_64 *)(loc20 + RTVA(10733, "value", loc20));
										tb2 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= ti8_1);
									}
									if (tb2) {
										ti8_1 = *(EIF_INTEGER_64 *)(loc20 + RTVA(10733, "value", loc20));
										tb1 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L));
									}
									if ((EIF_BOOLEAN) !tb1) {
										RTHOOK(40);
										tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4639, "is_empty", Result))(Result)).it_b);
										if ((EIF_BOOLEAN) !tb1) {
											RTHOOK(41);
											tr1 = RTMS_EX_H("\012",1,10);
											ur1 = tr1;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
										}
										RTHOOK(42);
										tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
										ur1 = tr1;
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										tr2 = RTMS_EX_H("custom_setup(dimension: GRID_SIZE = 4 .. 12 ; ships: NUMBER_OF_SHIPS = 1 .. 7 ; max_shots: MAX_SHOTS = 1 .. 144 ; num_bombs: NUMBER_OF_BOMBS = 1 .. 7)",150,452895529);
										ur1 = tr2;
										tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr2);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
									}
								} else {
									RTHOOK(43);
									if (RTEQ(loc3, RTMS_EX_H("custom_setup_test",17,1479641460))) {
										RTHOOK(44);
										tb1 = '\0';
										tb2 = '\0';
										tb3 = '\0';
										tb4 = '\0';
										tb5 = '\0';
										tb6 = '\0';
										tb7 = '\0';
										tb8 = '\0';
										tb9 = '\0';
										tb10 = '\0';
										tb11 = '\0';
										tb12 = '\0';
										ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", loc4))(loc4)).it_i4);
										if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 4L))) {
											ui4_1 = ((EIF_INTEGER_32) 1L);
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											loc21 = RTCCL(tr1);
											loc21 = RTRV(eif_new_type(1259, 0x01),loc21);
											tb12 = EIF_TEST(loc21);
										}
										if (tb12) {
											ti8_1 = *(EIF_INTEGER_64 *)(loc21 + RTVA(10733, "value", loc21));
											tb11 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 4L) <= ti8_1);
										}
										if (tb11) {
											ti8_1 = *(EIF_INTEGER_64 *)(loc21 + RTVA(10733, "value", loc21));
											tb10 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L));
										}
										if (tb10) {
											ui4_1 = ((EIF_INTEGER_32) 2L);
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											loc22 = RTCCL(tr1);
											loc22 = RTRV(eif_new_type(1259, 0x01),loc22);
											tb9 = EIF_TEST(loc22);
										}
										if (tb9) {
											ti8_1 = *(EIF_INTEGER_64 *)(loc22 + RTVA(10733, "value", loc22));
											tb8 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= ti8_1);
										}
										if (tb8) {
											ti8_1 = *(EIF_INTEGER_64 *)(loc22 + RTVA(10733, "value", loc22));
											tb7 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L));
										}
										if (tb7) {
											ui4_1 = ((EIF_INTEGER_32) 3L);
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											loc23 = RTCCL(tr1);
											loc23 = RTRV(eif_new_type(1259, 0x01),loc23);
											tb6 = EIF_TEST(loc23);
										}
										if (tb6) {
											ti8_1 = *(EIF_INTEGER_64 *)(loc23 + RTVA(10733, "value", loc23));
											tb5 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= ti8_1);
										}
										if (tb5) {
											ti8_1 = *(EIF_INTEGER_64 *)(loc23 + RTVA(10733, "value", loc23));
											tb4 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 144L));
										}
										if (tb4) {
											ui4_1 = ((EIF_INTEGER_32) 4L);
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											loc24 = RTCCL(tr1);
											loc24 = RTRV(eif_new_type(1259, 0x01),loc24);
											tb3 = EIF_TEST(loc24);
										}
										if (tb3) {
											ti8_1 = *(EIF_INTEGER_64 *)(loc24 + RTVA(10733, "value", loc24));
											tb2 = (EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= ti8_1);
										}
										if (tb2) {
											ti8_1 = *(EIF_INTEGER_64 *)(loc24 + RTVA(10733, "value", loc24));
											tb1 = (EIF_BOOLEAN) (ti8_1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L));
										}
										if ((EIF_BOOLEAN) !tb1) {
											RTHOOK(45);
											tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4639, "is_empty", Result))(Result)).it_b);
											if ((EIF_BOOLEAN) !tb1) {
												RTHOOK(46);
												tr1 = RTMS_EX_H("\012",1,10);
												ur1 = tr1;
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
											}
											RTHOOK(47);
											tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
											ur1 = tr1;
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											tr2 = RTMS_EX_H("custom_setup_test(dimension: GRID_SIZE = 4 .. 12 ; ships: NUMBER_OF_SHIPS = 1 .. 7 ; max_shots: MAX_SHOTS = 1 .. 144 ; num_bombs: NUMBER_OF_BOMBS = 1 .. 7)",155,190097705);
											ur1 = tr2;
											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											ur1 = RTCCL(tr2);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
										}
									} else {
										RTHOOK(48);
										if (RTEQ(loc3, RTMS_EX_H("give_up",7,62701680))) {
											RTHOOK(49);
											if ((EIF_BOOLEAN) 0) {
												RTHOOK(50);
												tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4639, "is_empty", Result))(Result)).it_b);
												if ((EIF_BOOLEAN) !tb1) {
													RTHOOK(51);
													tr1 = RTMS_EX_H("\012",1,10);
													ur1 = tr1;
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
												}
												RTHOOK(52);
												tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
												ur1 = tr1;
												tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												tr2 = RTMS_EX_H("give_up",7,62701680);
												ur1 = tr2;
												tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												ur1 = RTCCL(tr2);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
											}
										} else {
											RTHOOK(53);
											tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4639, "is_empty", Result))(Result)).it_b);
											if ((EIF_BOOLEAN) !tb1) {
												RTHOOK(54);
												tr1 = RTMS_EX_H("\012",1,10);
												ur1 = tr1;
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
											}
											RTHOOK(55);
											tr1 = RTMS_EX_H("Error: unknown event name ",26,1919922208);
											ur1 = RTCCL(loc3);
											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4701, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											ur1 = RTCCL(tr2);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4801, "append", Result))(Result, ur1x);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		RTHOOK(56);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(57);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(27);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

void EIF_Minit1248 (void)
{
	GTCX
	RTOTS (12993,F1248_12993)
	RTOTS (12994,F1248_12994)
}


#ifdef __cplusplus
}
#endif
