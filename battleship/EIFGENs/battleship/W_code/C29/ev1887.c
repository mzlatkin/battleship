/*
 * Code for class EV_INTERNAL_SILLY_WINDOW_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1887_22701(EIF_REFERENCE);
extern void F1887_22702(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1887_22703(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1887_22704(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1887_22705(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1887_22706(EIF_REFERENCE);
extern void EIF_Minit1887(void);

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

/* {EV_INTERNAL_SILLY_WINDOW_IMP}.default_style */
EIF_TYPED_VALUE F1887_22701 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_style";
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
	
	RTEAA(l_feature_name, 1886, Current, 0, 0, 28769);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1886, Current, 28769);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10311, Dtype(Current)))(Current)).it_i4);
	Result = (EIF_INTEGER_32) Result;
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

/* {EV_INTERNAL_SILLY_WINDOW_IMP}.on_wm_vscroll */
void F1887_22702 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "on_wm_vscroll";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
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
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_POINTER, &loc2);
	
	RTEAA(l_feature_name, 1886, Current, 2, 2, 28770);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1886, Current, 28770);
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
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11290, dtype))(Current, up1x)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11587, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
		RTHOOK(3);
		RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
		up1 = arg1;
		up2 = arg2;
		loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18794, dtype))(Current, up1x, up2x)).it_p);
		RTHOOK(4);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc2 != tp1)) {
			RTHOOK(5);
			RTDBGAL(Current, 1, 0xF80007AE, 0, 0); /* loc1 */
			up1 = loc2;
			loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18203, dtype))(Current, up1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = RTRV(eif_new_type(1966, 0x00), loc1);
			RTHOOK(6);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				if (RTAL & CK_CHECK) {
					RTHOOK(7);
					RTCT("range_exists", EX_CHECK);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(19589, "exists", loc1))(loc1)).it_b);
					if (tb1) {
						RTCK;
					} else {
						RTCF;
					}
				}
				RTHOOK(8);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8033, "change_actions_internal", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				if ((EIF_BOOLEAN)(tr1 != NULL)) {
					RTHOOK(9);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8032, "change_actions", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(9,1);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,218,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
						tr2 = RTLNTS(typres0.id, 2, 1);
					}
					tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15733, "attached_interface", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(9,2);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15536, "value", tr3))(tr3)).it_i4);
					((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ti4_1;
					ur1 = RTCCL(tr2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3111, "call", tr1))(tr1, ur1x);
				}
			}
		} else {
			RTHOOK(10);
			up1 = arg1;
			up2 = arg2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18792, dtype))(Current, up1x, up2x)).it_i4);
			ui4_1 = ti4_1;
			up1 = arg1;
			up2 = arg2;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18793, dtype))(Current, up1x, up2x)).it_i4);
			ui4_2 = ti4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18758, dtype))(Current, ui4_1x, ui4_2x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {EV_INTERNAL_SILLY_WINDOW_IMP}.on_wm_hscroll */
void F1887_22703 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "on_wm_hscroll";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
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
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_POINTER, &loc2);
	
	RTEAA(l_feature_name, 1886, Current, 2, 2, 28771);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1886, Current, 28771);
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
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11290, dtype))(Current, up1x)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11587, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
		RTHOOK(3);
		RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
		up1 = arg1;
		up2 = arg2;
		loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18797, dtype))(Current, up1x, up2x)).it_p);
		RTHOOK(4);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc2 != tp1)) {
			RTHOOK(5);
			RTDBGAL(Current, 1, 0xF80007AE, 0, 0); /* loc1 */
			up1 = loc2;
			loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18203, dtype))(Current, up1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = RTRV(eif_new_type(1966, 0x00), loc1);
			RTHOOK(6);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				if (RTAL & CK_CHECK) {
					RTHOOK(7);
					RTCT("range_exists", EX_CHECK);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(19589, "exists", loc1))(loc1)).it_b);
					if (tb1) {
						RTCK;
					} else {
						RTCF;
					}
				}
				RTHOOK(8);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8033, "change_actions_internal", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				if ((EIF_BOOLEAN)(tr1 != NULL)) {
					RTHOOK(9);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8032, "change_actions", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(9,1);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,218,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
						tr2 = RTLNTS(typres0.id, 2, 1);
					}
					tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15733, "attached_interface", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(9,2);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15536, "value", tr3))(tr3)).it_i4);
					((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ti4_1;
					ur1 = RTCCL(tr2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3111, "call", tr1))(tr1, ur1x);
				}
			}
		} else {
			RTHOOK(10);
			up1 = arg1;
			up2 = arg2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18795, dtype))(Current, up1x, up2x)).it_i4);
			ui4_1 = ti4_1;
			up1 = arg1;
			up2 = arg2;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18796, dtype))(Current, up1x, up2x)).it_i4);
			ui4_2 = ti4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18759, dtype))(Current, ui4_1x, ui4_2x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {EV_INTERNAL_SILLY_WINDOW_IMP}.on_wm_notify */
void F1887_22704 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "on_wm_notify";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,ur1);
	RTLR(5,loc4);
	RTLR(6,loc2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1886, Current, 4, 2, 28772);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1886, Current, 28772);
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
	RTDBGAL(Current, 1, 0xF800074D, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1869, 0x01).id);
	up1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12359, Dtype(tr1)))(tr1, up1x);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18338, "window_from", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = RTCCL(tr1);
	if (EIF_TEST(loc3)) {
		ur1 = RTCCL(loc3);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18849, dtype))(Current, ur1x)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		up1 = arg1;
		up2 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18650, 1882))(Current, up1x, up2x);
	} else {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18338, "window_from", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = RTCCL(tr1);
		if (EIF_TEST(loc4)) {
			RTHOOK(6);
			RTDBGAL(Current, 2, 0xF8000755, 0, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18490, "parent", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(7);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != NULL) && !RTCEQ(loc2, Current))) {
				RTHOOK(8);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8995, "increment_level", loc2))(loc2);
				RTHOOK(9);
				up1 = arg1;
				up2 = arg2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18650, "on_wm_notify", loc2))(loc2, up1x, up2x);
				RTHOOK(10);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8990, "has_return_value", loc2))(loc2)).it_b);
				if (tb1) {
					RTHOOK(11);
					tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8991, "message_return_value", loc2))(loc2)).it_p);
					up1 = tp1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8993, dtype))(Current, up1x);
				}
				RTHOOK(12);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8996, "decrement_level", loc2))(loc2);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef arg2
#undef arg1
}

/* {EV_INTERNAL_SILLY_WINDOW_IMP}.has_child */
EIF_TYPED_VALUE F1887_22705 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "has_child";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	
	RTEAA(l_feature_name, 1886, Current, 2, 1, 28773);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1886, Current, 28773);
	RTCC(arg1, 1886, l_feature_name, 1, eif_new_type(1877, 0x01), 0x01);
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
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12362, "exists", arg1))(arg1)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up1 = tp1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8492, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18228, dtype))(Current, up1x, ui4_1x)).it_p);
		RTHOOK(4);
		RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
		tp1 = *(EIF_POINTER *)(arg1 + RTVA(12360, "item", arg1));
		loc2 = (EIF_POINTER) tp1;
		for (;;) {
			RTHOOK(5);
			tb1 = '\01';
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
			if (!(EIF_BOOLEAN)(loc1 == tp1)) {
				tb1 = Result;
			}
			if (tb1) break;
			RTHOOK(6);
			RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc2 == loc1);
			RTHOOK(7);
			RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
			up1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8489, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18228, dtype))(Current, up1x, ui4_1x)).it_p);
			loc1 = (EIF_POINTER) tp1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {EV_INTERNAL_SILLY_WINDOW_IMP}.class_requires_icon */
EIF_TYPED_VALUE F1887_22706 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "class_requires_icon";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1886, Current, 0, 0, 28774);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1886, Current, 28774);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

void EIF_Minit1887 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
