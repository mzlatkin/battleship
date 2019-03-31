/*
 * Code for class ETF_BOMB
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1395_14754(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit1395(void);

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

/* {ETF_BOMB}.bomb */
void F1395_14754 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "bomb";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
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
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,ur2);
	RTLR(4,Current);
	RTLR(5,loc5);
	RTLR(6,tr1);
	RTLR(7,tr2);
	RTLR(8,tr3);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1394, Current, 5, 2, 21439);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1394, Current, 21439);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,200,200,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1394, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,200,200,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 1394, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("bomb_precond(coordinate1, coordinate2)", EX_PRE);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12233, dtype))(Current, ur1x, ur2x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("bomb_precond(coordinate1, coordinate2)", EX_PRE);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12233, dtype))(Current, ur1x, ur2x)).it_b);
		RTTE(tb1, label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	ti8_1 = eif_integer_64_item(RTCW(arg1),1);
	RTNHOOK(3,1);
	ti4_1 = (EIF_INTEGER_32) ti8_1;
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	ti8_1 = eif_integer_64_item(RTCW(arg1),2);
	RTNHOOK(4,1);
	ti4_1 = (EIF_INTEGER_32) ti8_1;
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	ti8_1 = eif_integer_64_item(RTCW(arg2),1);
	RTNHOOK(5,1);
	ti4_1 = (EIF_INTEGER_32) ti8_1;
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	ti8_1 = eif_integer_64_item(RTCW(arg2),2);
	RTNHOOK(6,1);
	ti4_1 = (EIF_INTEGER_32) ti8_1;
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAL(Current, 5, 0xF80004CE, 0, 0); /* loc5 */
	tr1 = RTLN(eif_new_type(1230, 0x01).id);
	ui4_1 = loc1;
	ui4_2 = loc2;
	ui4_3 = loc3;
	ui4_4 = loc4;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12227, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(7,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7782, "game", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10647, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur1x);
	RTNHOOK(7,2);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12227, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(8,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7782, "game", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(8,2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7750, "history", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(8,3);
	ur1 = RTCCL(loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7703, "extend_history", tr1))(tr1, ur1x);
	RTHOOK(9);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(10644, "execute", loc5))(loc5);
	RTHOOK(10);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12227, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(10,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7785, "default_update", tr1))(tr1);
	RTHOOK(11);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12217, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(11,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9443, "on_change", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(11,2);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[5] = Dftype(Current);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7774, "notify", tr2))(tr2, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg2
#undef arg1
}

void EIF_Minit1395 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
