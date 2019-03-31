/*
 * Code for class WEL_MESSAGE_INFORMATION_CREATOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1783_20208(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1783_20209(EIF_REFERENCE);
extern void EIF_Minit1783(void);

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

/* {WEL_MESSAGE_INFORMATION_CREATOR}.make */
void F1783_20208 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
#define arg4 arg4x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_INTEGER_32 ti4_9;
	EIF_INTEGER_32 ti4_10;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1782, Current, 1, 4, 26409);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1782, Current, 26409);
	RTCC(arg1, 1782, l_feature_name, 1, eif_new_type(1877, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("window_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("positive_message", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11082, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN)(arg2 == ti4_1)) {
		RTHOOK(4);
		RTDBGAL(Current, 1, 0xF800071B, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(1829, 0x01).id);
		ur1 = RTCCL(arg1);
		ui4_1 = arg2;
		up1 = arg3;
		up2 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17379, Dtype(tr1)))(tr1, ur1x, ui4_1x, up1x, up2x);
		RTNHOOK(4,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(5);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11081, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(arg2 == ti4_1)) {
			RTHOOK(6);
			RTDBGAL(Current, 1, 0xF800071B, 0, 0); /* loc1 */
			tr1 = RTLN(eif_new_type(1828, 0x01).id);
			ur1 = RTCCL(arg1);
			ui4_1 = arg2;
			up1 = arg3;
			up2 = arg4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17379, Dtype(tr1)))(tr1, ur1x, ui4_1x, up1x, up2x);
			RTNHOOK(6,1);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(7);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11184, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN)(arg2 == ti4_1)) {
				RTHOOK(8);
				RTDBGAL(Current, 1, 0xF800071B, 0, 0); /* loc1 */
				tr1 = RTLN(eif_new_type(1864, 0x01).id);
				ur1 = RTCCL(arg1);
				ui4_1 = arg2;
				up1 = arg3;
				up2 = arg4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17379, Dtype(tr1)))(tr1, ur1x, ui4_1x, up1x, up2x);
				RTNHOOK(8,1);
				loc1 = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(9);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11185, dtype))(Current)).it_i4);
				if ((EIF_BOOLEAN)(arg2 == ti4_1)) {
					RTHOOK(10);
					RTDBGAL(Current, 1, 0xF800071B, 0, 0); /* loc1 */
					tr1 = RTLN(eif_new_type(1827, 0x01).id);
					ur1 = RTCCL(arg1);
					ui4_1 = arg2;
					up1 = arg3;
					up2 = arg4;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17379, Dtype(tr1)))(tr1, ur1x, ui4_1x, up1x, up2x);
					RTNHOOK(10,1);
					loc1 = (EIF_REFERENCE) RTCCL(tr1);
				} else {
					RTHOOK(11);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11186, dtype))(Current)).it_i4);
					if ((EIF_BOOLEAN)(arg2 == ti4_1)) {
						RTHOOK(12);
						RTDBGAL(Current, 1, 0xF800071B, 0, 0); /* loc1 */
						tr1 = RTLN(eif_new_type(1826, 0x01).id);
						ur1 = RTCCL(arg1);
						ui4_1 = arg2;
						up1 = arg3;
						up2 = arg4;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17379, Dtype(tr1)))(tr1, ur1x, ui4_1x, up1x, up2x);
						RTNHOOK(12,1);
						loc1 = (EIF_REFERENCE) RTCCL(tr1);
					} else {
						RTHOOK(13);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11099, dtype))(Current)).it_i4);
						if ((EIF_BOOLEAN)(arg2 == ti4_1)) {
							RTHOOK(14);
							RTDBGAL(Current, 1, 0xF800071B, 0, 0); /* loc1 */
							tr1 = RTLN(eif_new_type(1825, 0x01).id);
							ur1 = RTCCL(arg1);
							ui4_1 = arg2;
							up1 = arg3;
							up2 = arg4;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17379, Dtype(tr1)))(tr1, ur1x, ui4_1x, up1x, up2x);
							RTNHOOK(14,1);
							loc1 = (EIF_REFERENCE) RTCCL(tr1);
						} else {
							RTHOOK(15);
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11191, dtype))(Current)).it_i4);
							if ((EIF_BOOLEAN)(arg2 == ti4_1)) {
								RTHOOK(16);
								RTDBGAL(Current, 1, 0xF800071B, 0, 0); /* loc1 */
								tr1 = RTLN(eif_new_type(1824, 0x01).id);
								ur1 = RTCCL(arg1);
								ui4_1 = arg2;
								up1 = arg3;
								up2 = arg4;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17379, Dtype(tr1)))(tr1, ur1x, ui4_1x, up1x, up2x);
								RTNHOOK(16,1);
								loc1 = (EIF_REFERENCE) RTCCL(tr1);
							} else {
								RTHOOK(17);
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11131, dtype))(Current)).it_i4);
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11130, dtype))(Current)).it_i4);
								if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg2 == ti4_1) || (EIF_BOOLEAN)(arg2 == ti4_2))) {
									RTHOOK(18);
									RTDBGAL(Current, 1, 0xF800071B, 0, 0); /* loc1 */
									tr1 = RTLN(eif_new_type(1823, 0x01).id);
									ur1 = RTCCL(arg1);
									ui4_1 = arg2;
									up1 = arg3;
									up2 = arg4;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17379, Dtype(tr1)))(tr1, ur1x, ui4_1x, up1x, up2x);
									RTNHOOK(18,1);
									loc1 = (EIF_REFERENCE) RTCCL(tr1);
								} else {
									RTHOOK(19);
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11135, dtype))(Current)).it_i4);
									if ((EIF_BOOLEAN)(arg2 == ti4_1)) {
										RTHOOK(20);
										RTDBGAL(Current, 1, 0xF800071B, 0, 0); /* loc1 */
										tr1 = RTLN(eif_new_type(1820, 0x01).id);
										ur1 = RTCCL(arg1);
										ui4_1 = arg2;
										up1 = arg3;
										up2 = arg4;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17379, Dtype(tr1)))(tr1, ur1x, ui4_1x, up1x, up2x);
										RTNHOOK(20,1);
										loc1 = (EIF_REFERENCE) RTCCL(tr1);
									} else {
										RTHOOK(21);
										ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11172, dtype))(Current)).it_i4);
										ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11176, dtype))(Current)).it_i4);
										ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11169, dtype))(Current)).it_i4);
										ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11171, dtype))(Current)).it_i4);
										ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11174, dtype))(Current)).it_i4);
										ti4_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11175, dtype))(Current)).it_i4);
										if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg2 == ti4_1) || (EIF_BOOLEAN)(arg2 == ti4_2)) || (EIF_BOOLEAN)(arg2 == ti4_3)) || (EIF_BOOLEAN)(arg2 == ti4_4)) || (EIF_BOOLEAN)(arg2 == ti4_5)) || (EIF_BOOLEAN)(arg2 == ti4_6))) {
											RTHOOK(22);
											RTDBGAL(Current, 1, 0xF800071B, 0, 0); /* loc1 */
											tr1 = RTLN(eif_new_type(1822, 0x01).id);
											ur1 = RTCCL(arg1);
											ui4_1 = arg2;
											up1 = arg3;
											up2 = arg4;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17379, Dtype(tr1)))(tr1, ur1x, ui4_1x, up1x, up2x);
											RTNHOOK(22,1);
											loc1 = (EIF_REFERENCE) RTCCL(tr1);
										} else {
											RTHOOK(23);
											ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11203, dtype))(Current)).it_i4);
											ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11205, dtype))(Current)).it_i4);
											ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11211, dtype))(Current)).it_i4);
											ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11208, dtype))(Current)).it_i4);
											ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11206, dtype))(Current)).it_i4);
											ti4_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11212, dtype))(Current)).it_i4);
											ti4_7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11209, dtype))(Current)).it_i4);
											ti4_8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11207, dtype))(Current)).it_i4);
											ti4_9 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11213, dtype))(Current)).it_i4);
											ti4_10 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11210, dtype))(Current)).it_i4);
											if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg2 == ti4_1) || (EIF_BOOLEAN)(arg2 == ti4_2)) || (EIF_BOOLEAN)(arg2 == ti4_3)) || (EIF_BOOLEAN)(arg2 == ti4_4)) || (EIF_BOOLEAN)(arg2 == ti4_5)) || (EIF_BOOLEAN)(arg2 == ti4_6)) || (EIF_BOOLEAN)(arg2 == ti4_7)) || (EIF_BOOLEAN)(arg2 == ti4_8)) || (EIF_BOOLEAN)(arg2 == ti4_9)) || (EIF_BOOLEAN)(arg2 == ti4_10))) {
												RTHOOK(24);
												RTDBGAL(Current, 1, 0xF800071B, 0, 0); /* loc1 */
												tr1 = RTLN(eif_new_type(1821, 0x01).id);
												ur1 = RTCCL(arg1);
												ui4_1 = arg2;
												up1 = arg3;
												up2 = arg4;
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17379, Dtype(tr1)))(tr1, ur1x, ui4_1x, up1x, up2x);
												RTNHOOK(24,1);
												loc1 = (EIF_REFERENCE) RTCCL(tr1);
											} else {
												RTHOOK(25);
												RTDBGAL(Current, 1, 0xF800071B, 0, 0); /* loc1 */
												tr1 = RTLNSMART(RTWCT(16872, dtype, Dftype(Current)).id);
												ur1 = RTCCL(arg1);
												ui4_1 = arg2;
												up1 = arg3;
												up2 = arg4;
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17379, Dtype(tr1)))(tr1, ur1x, ui4_1x, up1x, up2x);
												RTNHOOK(25,1);
												loc1 = (EIF_REFERENCE) RTCCL(tr1);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTHOOK(26);
	RTDBGAA(Current, dtype, 16872, 0xF800071B, 0); /* message_information */
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(16872, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_MESSAGE_INFORMATION_CREATOR}.message_information */
EIF_TYPED_VALUE F1783_20209 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(16872,Dtype(Current)));
	return r;
}


void EIF_Minit1783 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
