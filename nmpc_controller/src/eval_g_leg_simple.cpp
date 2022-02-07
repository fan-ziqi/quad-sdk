/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) eval_g_leg_simple_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[40] = {36, 1, 0, 36, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35};
static const casadi_int casadi_s1[29] = {25, 1, 0, 25, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
static const casadi_int casadi_s2[32] = {28, 1, 0, 28, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27};

/* eval_g_leg_simple:(w[36],p[25])->(g[28]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a6, a7, a8, a9;
  a0=arg[0]? arg[0][24] : 0;
  a1=arg[0]? arg[0][0] : 0;
  a2=(a0-a1);
  a3=arg[1]? arg[1][0] : 0;
  a2=(a2/a3);
  a4=arg[0]? arg[0][6] : 0;
  a5=arg[0]? arg[0][30] : 0;
  a6=(a4+a5);
  a7=2.;
  a6=(a6/a7);
  a2=(a2-a6);
  if (res[0]!=0) res[0][0]=a2;
  a2=arg[0]? arg[0][25] : 0;
  a6=arg[0]? arg[0][1] : 0;
  a8=(a2-a6);
  a8=(a8/a3);
  a9=arg[0]? arg[0][7] : 0;
  a10=arg[0]? arg[0][31] : 0;
  a11=(a9+a10);
  a11=(a11/a7);
  a8=(a8-a11);
  if (res[0]!=0) res[0][1]=a8;
  a8=arg[0]? arg[0][26] : 0;
  a11=arg[0]? arg[0][2] : 0;
  a12=(a8-a11);
  a12=(a12/a3);
  a13=arg[0]? arg[0][8] : 0;
  a14=arg[0]? arg[0][32] : 0;
  a15=(a13+a14);
  a15=(a15/a7);
  a12=(a12-a15);
  if (res[0]!=0) res[0][2]=a12;
  a12=arg[0]? arg[0][27] : 0;
  a15=arg[0]? arg[0][3] : 0;
  a16=(a12-a15);
  a16=(a16/a3);
  a17=arg[0]? arg[0][9] : 0;
  a18=arg[0]? arg[0][33] : 0;
  a19=(a17+a18);
  a19=(a19/a7);
  a20=arg[0]? arg[0][4] : 0;
  a21=arg[0]? arg[0][28] : 0;
  a22=(a20+a21);
  a22=(a22/a7);
  a23=cos(a22);
  a24=(a19*a23);
  a25=arg[0]? arg[0][11] : 0;
  a26=arg[0]? arg[0][35] : 0;
  a27=(a25+a26);
  a27=(a27/a7);
  a15=(a15+a12);
  a15=(a15/a7);
  a12=cos(a15);
  a28=(a27*a12);
  a22=sin(a22);
  a28=(a28*a22);
  a24=(a24+a28);
  a28=arg[0]? arg[0][10] : 0;
  a29=arg[0]? arg[0][34] : 0;
  a30=(a28+a29);
  a30=(a30/a7);
  a15=sin(a15);
  a31=(a30*a15);
  a31=(a31*a22);
  a24=(a24+a31);
  a24=(a24/a23);
  a16=(a16-a24);
  if (res[0]!=0) res[0][3]=a16;
  a21=(a21-a20);
  a21=(a21/a3);
  a20=(a30*a12);
  a16=(a27*a15);
  a20=(a20-a16);
  a21=(a21-a20);
  if (res[0]!=0) res[0][4]=a21;
  a21=arg[0]? arg[0][29] : 0;
  a20=arg[0]? arg[0][5] : 0;
  a16=(a21-a20);
  a16=(a16/a3);
  a24=(a27*a12);
  a31=(a30*a15);
  a24=(a24+a31);
  a24=(a24/a23);
  a16=(a16-a24);
  if (res[0]!=0) res[0][5]=a16;
  a16=1.1662000000000001e+01;
  a5=(a5-a4);
  a5=(a16*a5);
  a5=(a5/a3);
  a4=arg[0]? arg[0][12] : 0;
  a24=arg[0]? arg[0][15] : 0;
  a31=(a4+a24);
  a32=arg[0]? arg[0][18] : 0;
  a31=(a31+a32);
  a33=arg[0]? arg[0][21] : 0;
  a31=(a31+a33);
  a5=(a5-a31);
  if (res[0]!=0) res[0][6]=a5;
  a10=(a10-a9);
  a10=(a16*a10);
  a10=(a10/a3);
  a9=arg[0]? arg[0][13] : 0;
  a5=arg[0]? arg[0][16] : 0;
  a31=(a9+a5);
  a34=arg[0]? arg[0][19] : 0;
  a31=(a31+a34);
  a35=arg[0]? arg[0][22] : 0;
  a31=(a31+a35);
  a10=(a10-a31);
  if (res[0]!=0) res[0][7]=a10;
  a14=(a14-a13);
  a16=(a16*a14);
  a16=(a16/a3);
  a14=1.1440422000000000e+02;
  a16=(a16+a14);
  a14=arg[0]? arg[0][14] : 0;
  a13=arg[0]? arg[0][17] : 0;
  a10=(a14+a13);
  a31=arg[0]? arg[0][20] : 0;
  a10=(a10+a31);
  a36=arg[0]? arg[0][23] : 0;
  a10=(a10+a36);
  a16=(a16-a10);
  if (res[0]!=0) res[0][8]=a16;
  a16=1.0677884800000000e-01;
  a18=(a18-a17);
  a16=(a16*a18);
  a16=(a16/a3);
  a17=5.6778847999999993e-02;
  a10=(a30*a27);
  a17=(a17*a10);
  a16=(a16+a17);
  a17=arg[1]? arg[1][2] : 0;
  a6=(a6+a2);
  a6=(a6/a7);
  a2=(a17-a6);
  a2=(a22*a2);
  a20=(a20+a21);
  a20=(a20/a7);
  a21=sin(a20);
  a10=(a23*a21);
  a37=arg[1]? arg[1][3] : 0;
  a11=(a11+a8);
  a11=(a11/a7);
  a37=(a37-a11);
  a10=(a10*a37);
  a2=(a2+a10);
  a2=(a2*a4);
  a10=arg[1]? arg[1][1] : 0;
  a1=(a1+a0);
  a1=(a1/a7);
  a7=(a10-a1);
  a0=(a22*a7);
  a20=cos(a20);
  a8=(a23*a20);
  a8=(a8*a37);
  a0=(a0+a8);
  a0=(a0*a9);
  a2=(a2-a0);
  a0=(a6*a20);
  a8=(a1*a21);
  a38=(a0-a8);
  a39=(a17*a20);
  a38=(a38-a39);
  a39=(a10*a21);
  a38=(a38+a39);
  a38=(a23*a38);
  a38=(a38*a14);
  a2=(a2-a38);
  a38=arg[1]? arg[1][5] : 0;
  a39=(a38-a6);
  a39=(a22*a39);
  a40=(a23*a21);
  a41=arg[1]? arg[1][6] : 0;
  a41=(a41-a11);
  a40=(a40*a41);
  a39=(a39+a40);
  a39=(a39*a24);
  a2=(a2+a39);
  a39=arg[1]? arg[1][4] : 0;
  a40=(a39-a1);
  a42=(a22*a40);
  a43=(a23*a20);
  a43=(a43*a41);
  a42=(a42+a43);
  a42=(a42*a5);
  a2=(a2-a42);
  a42=(a0-a8);
  a43=(a38*a20);
  a42=(a42-a43);
  a43=(a39*a21);
  a42=(a42+a43);
  a42=(a23*a42);
  a42=(a42*a13);
  a2=(a2-a42);
  a42=arg[1]? arg[1][8] : 0;
  a43=(a42-a6);
  a43=(a22*a43);
  a44=(a23*a21);
  a45=arg[1]? arg[1][9] : 0;
  a45=(a45-a11);
  a44=(a44*a45);
  a43=(a43+a44);
  a43=(a43*a32);
  a2=(a2+a43);
  a43=arg[1]? arg[1][7] : 0;
  a44=(a43-a1);
  a46=(a22*a44);
  a47=(a23*a20);
  a47=(a47*a45);
  a46=(a46+a47);
  a46=(a46*a34);
  a2=(a2-a46);
  a46=(a0-a8);
  a47=(a42*a20);
  a46=(a46-a47);
  a47=(a43*a21);
  a46=(a46+a47);
  a46=(a23*a46);
  a46=(a46*a31);
  a2=(a2-a46);
  a46=arg[1]? arg[1][11] : 0;
  a47=(a46-a6);
  a47=(a22*a47);
  a48=(a23*a21);
  a49=arg[1]? arg[1][12] : 0;
  a49=(a49-a11);
  a48=(a48*a49);
  a47=(a47+a48);
  a47=(a47*a33);
  a2=(a2+a47);
  a47=arg[1]? arg[1][10] : 0;
  a48=(a47-a1);
  a11=(a22*a48);
  a50=(a23*a20);
  a50=(a50*a49);
  a11=(a11+a50);
  a11=(a11*a35);
  a2=(a2-a11);
  a0=(a0-a8);
  a8=(a46*a20);
  a0=(a0-a8);
  a8=(a47*a21);
  a0=(a0+a8);
  a0=(a23*a0);
  a0=(a0*a36);
  a2=(a2-a0);
  a16=(a16-a2);
  if (res[0]!=0) res[0][9]=a16;
  a16=4.0276351127999999e-01;
  a2=(a16*a12);
  a29=(a29-a28);
  a2=(a2*a29);
  a28=-4.5954235927999998e-01;
  a28=(a28*a15);
  a26=(a26-a25);
  a28=(a28*a26);
  a2=(a2+a28);
  a2=(a2/a3);
  a28=-2.7755575615628910e-17;
  a25=12709644943604120.;
  a0=(a27*a12);
  a25=(a25*a0);
  a0=10663971354041520.;
  a8=(a30*a15);
  a0=(a0*a8);
  a25=(a25+a0);
  a25=(a19*a25);
  a28=(a28*a25);
  a2=(a2+a28);
  a28=(a20*a37);
  a28=(a28*a4);
  a37=(a21*a37);
  a37=(a37*a9);
  a28=(a28+a37);
  a1=(a1*a20);
  a37=(a6*a21);
  a25=(a1+a37);
  a10=(a10*a20);
  a25=(a25-a10);
  a10=(a17*a21);
  a25=(a25-a10);
  a25=(a25*a14);
  a28=(a28+a25);
  a25=(a20*a41);
  a25=(a25*a24);
  a28=(a28+a25);
  a41=(a21*a41);
  a41=(a41*a5);
  a28=(a28+a41);
  a41=(a1+a37);
  a39=(a39*a20);
  a41=(a41-a39);
  a39=(a38*a21);
  a41=(a41-a39);
  a41=(a41*a13);
  a28=(a28+a41);
  a41=(a20*a45);
  a41=(a41*a32);
  a28=(a28+a41);
  a45=(a21*a45);
  a45=(a45*a34);
  a28=(a28+a45);
  a45=(a1+a37);
  a43=(a43*a20);
  a45=(a45-a43);
  a43=(a42*a21);
  a45=(a45-a43);
  a45=(a45*a31);
  a28=(a28+a45);
  a45=(a20*a49);
  a45=(a45*a33);
  a28=(a28+a45);
  a49=(a21*a49);
  a49=(a49*a35);
  a28=(a28+a49);
  a1=(a1+a37);
  a47=(a47*a20);
  a1=(a1-a47);
  a21=(a46*a21);
  a1=(a1-a21);
  a1=(a1*a36);
  a28=(a28+a1);
  a2=(a2-a28);
  if (res[0]!=0) res[0][10]=a2;
  a2=-1.0677884800000000e-01;
  a2=(a2*a22);
  a2=(a2*a18);
  a18=(a23*a15);
  a16=(a16*a18);
  a16=(a16*a29);
  a2=(a2+a16);
  a16=4.5954235927999998e-01;
  a29=(a12*a23);
  a16=(a16*a29);
  a16=(a16*a26);
  a2=(a2+a16);
  a2=(a2/a3);
  a3=-5.6778847999999993e-02;
  a16=(a30*a27);
  a16=(a16*a22);
  a3=(a3*a16);
  a16=2.9598466328000000e-01;
  a30=(a19*a30);
  a30=(a30*a12);
  a30=(a30*a23);
  a16=(a16*a30);
  a3=(a3+a16);
  a16=3.5276351128000000e-01;
  a19=(a19*a27);
  a19=(a19*a23);
  a19=(a19*a15);
  a16=(a16*a19);
  a3=(a3-a16);
  a2=(a2+a3);
  a17=(a6-a17);
  a17=(a17*a4);
  a7=(a7*a9);
  a17=(a17+a7);
  a38=(a6-a38);
  a38=(a38*a24);
  a17=(a17+a38);
  a40=(a40*a5);
  a17=(a17+a40);
  a42=(a6-a42);
  a42=(a42*a32);
  a17=(a17+a42);
  a44=(a44*a34);
  a17=(a17+a44);
  a6=(a6-a46);
  a6=(a6*a33);
  a17=(a17+a6);
  a48=(a48*a35);
  a17=(a17+a48);
  a2=(a2-a17);
  if (res[0]!=0) res[0][11]=a2;
  a2=-2.0000000000000001e-01;
  a17=(a2*a14);
  a17=(a4+a17);
  if (res[0]!=0) res[0][12]=a17;
  a17=(a2*a14);
  a17=(a17-a4);
  if (res[0]!=0) res[0][13]=a17;
  a17=(a2*a14);
  a17=(a9+a17);
  if (res[0]!=0) res[0][14]=a17;
  a14=(a2*a14);
  a14=(a14-a9);
  if (res[0]!=0) res[0][15]=a14;
  a14=(a2*a13);
  a14=(a24+a14);
  if (res[0]!=0) res[0][16]=a14;
  a14=(a2*a13);
  a14=(a14-a24);
  if (res[0]!=0) res[0][17]=a14;
  a14=(a2*a13);
  a14=(a5+a14);
  if (res[0]!=0) res[0][18]=a14;
  a13=(a2*a13);
  a13=(a13-a5);
  if (res[0]!=0) res[0][19]=a13;
  a13=(a2*a31);
  a13=(a32+a13);
  if (res[0]!=0) res[0][20]=a13;
  a13=(a2*a31);
  a13=(a13-a32);
  if (res[0]!=0) res[0][21]=a13;
  a13=(a2*a31);
  a13=(a34+a13);
  if (res[0]!=0) res[0][22]=a13;
  a31=(a2*a31);
  a31=(a31-a34);
  if (res[0]!=0) res[0][23]=a31;
  a31=(a2*a36);
  a31=(a33+a31);
  if (res[0]!=0) res[0][24]=a31;
  a31=(a2*a36);
  a31=(a31-a33);
  if (res[0]!=0) res[0][25]=a31;
  a31=(a2*a36);
  a31=(a35+a31);
  if (res[0]!=0) res[0][26]=a31;
  a2=(a2*a36);
  a2=(a2-a35);
  if (res[0]!=0) res[0][27]=a2;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_simple(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_simple_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_simple_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_simple_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_simple_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_simple_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_simple_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_simple_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_g_leg_simple_n_in(void) { return 2;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_g_leg_simple_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real eval_g_leg_simple_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_g_leg_simple_name_in(casadi_int i){
  switch (i) {
    case 0: return "w";
    case 1: return "p";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_g_leg_simple_name_out(casadi_int i){
  switch (i) {
    case 0: return "g";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_g_leg_simple_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_g_leg_simple_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_simple_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


