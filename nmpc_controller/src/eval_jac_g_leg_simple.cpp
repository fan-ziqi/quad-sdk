/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) eval_jac_g_leg_simple_ ## ID
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
static const casadi_int casadi_s2[207] = {28, 36, 0, 4, 8, 11, 16, 21, 24, 26, 28, 30, 34, 40, 46, 52, 58, 65, 71, 77, 84, 90, 96, 103, 109, 115, 122, 126, 130, 133, 138, 143, 146, 148, 150, 152, 156, 162, 168, 0, 9, 10, 11, 1, 9, 10, 11, 2, 9, 10, 3, 4, 5, 10, 11, 3, 4, 5, 9, 11, 5, 9, 10, 0, 6, 1, 7, 2, 8, 3, 9, 10, 11, 3, 4, 5, 9, 10, 11, 3, 4, 5, 9, 10, 11, 6, 9, 10, 11, 12, 13, 7, 9, 10, 11, 14, 15, 8, 9, 10, 12, 13, 14, 15, 6, 9, 10, 11, 16, 17, 7, 9, 10, 11, 18, 19, 8, 9, 10, 16, 17, 18, 19, 6, 9, 10, 11, 20, 21, 7, 9, 10, 11, 22, 23, 8, 9, 10, 20, 21, 22, 23, 6, 9, 10, 11, 24, 25, 7, 9, 10, 11, 26, 27, 8, 9, 10, 24, 25, 26, 27, 0, 9, 10, 11, 1, 9, 10, 11, 2, 9, 10, 3, 4, 5, 10, 11, 3, 4, 5, 9, 11, 5, 9, 10, 0, 6, 1, 7, 2, 8, 3, 9, 10, 11, 3, 4, 5, 9, 10, 11, 3, 4, 5, 9, 10, 11};

/* eval_jac_g_leg_simple:(w[36],p[25])->(jac_g[28x36,168nz]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a100, a101, a102, a103, a104, a105, a106, a107, a108, a109, a11, a110, a111, a112, a113, a114, a115, a116, a117, a118, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95, a96, a97, a98, a99;
  a0=arg[1]? arg[1][0] : 0;
  a1=(1./a0);
  a2=(-a1);
  if (res[0]!=0) res[0][0]=a2;
  a2=5.0000000000000000e-01;
  a3=arg[0]? arg[0][4] : 0;
  a4=arg[0]? arg[0][28] : 0;
  a3=(a3+a4);
  a4=2.;
  a3=(a3/a4);
  a5=sin(a3);
  a6=arg[0]? arg[0][22] : 0;
  a7=(a5*a6);
  a8=arg[0]? arg[0][19] : 0;
  a9=(a5*a8);
  a7=(a7+a9);
  a9=arg[0]? arg[0][16] : 0;
  a10=(a5*a9);
  a7=(a7+a10);
  a10=arg[0]? arg[0][5] : 0;
  a11=arg[0]? arg[0][29] : 0;
  a10=(a10+a11);
  a10=(a10/a4);
  a11=sin(a10);
  a12=cos(a3);
  a13=arg[0]? arg[0][23] : 0;
  a14=(a12*a13);
  a15=arg[0]? arg[0][20] : 0;
  a16=(a12*a15);
  a17=(a14+a16);
  a18=arg[0]? arg[0][17] : 0;
  a19=(a12*a18);
  a17=(a17+a19);
  a20=arg[0]? arg[0][14] : 0;
  a21=(a12*a20);
  a17=(a17+a21);
  a22=(a11*a17);
  a7=(a7+a22);
  a22=arg[0]? arg[0][13] : 0;
  a23=(a5*a22);
  a7=(a7+a23);
  a7=(a2*a7);
  a7=(-a7);
  if (res[0]!=0) res[0][1]=a7;
  a23=cos(a10);
  a24=(a13+a15);
  a24=(a24+a18);
  a24=(a24+a20);
  a25=(a23*a24);
  a25=(a2*a25);
  a25=(-a25);
  if (res[0]!=0) res[0][2]=a25;
  a26=(a6+a8);
  a26=(a26+a9);
  a26=(a26+a22);
  a26=(a2*a26);
  if (res[0]!=0) res[0][3]=a26;
  a27=(1./a0);
  a28=(-a27);
  if (res[0]!=0) res[0][4]=a28;
  a28=arg[0]? arg[0][21] : 0;
  a29=(a5*a28);
  a30=arg[0]? arg[0][18] : 0;
  a31=(a5*a30);
  a29=(a29+a31);
  a31=arg[0]? arg[0][15] : 0;
  a32=(a5*a31);
  a29=(a29+a32);
  a32=(a14+a16);
  a32=(a32+a19);
  a32=(a32+a21);
  a33=(a23*a32);
  a29=(a29+a33);
  a33=arg[0]? arg[0][12] : 0;
  a34=(a5*a33);
  a29=(a29+a34);
  a29=(a2*a29);
  if (res[0]!=0) res[0][5]=a29;
  a34=(a13+a15);
  a34=(a34+a18);
  a34=(a34+a20);
  a35=(a11*a34);
  a35=(a2*a35);
  a35=(-a35);
  if (res[0]!=0) res[0][6]=a35;
  a36=(a28+a30);
  a36=(a36+a31);
  a36=(a36+a33);
  a36=(a2*a36);
  a36=(-a36);
  if (res[0]!=0) res[0][7]=a36;
  a37=(1./a0);
  a38=(-a37);
  if (res[0]!=0) res[0][8]=a38;
  a38=(a12*a23);
  a39=(a38*a6);
  a40=(a12*a11);
  a41=(a40*a28);
  a39=(a39-a41);
  a41=(a12*a23);
  a42=(a41*a8);
  a43=(a12*a11);
  a44=(a43*a30);
  a42=(a42-a44);
  a39=(a39+a42);
  a42=(a12*a23);
  a44=(a42*a9);
  a45=(a12*a11);
  a46=(a45*a31);
  a44=(a44-a46);
  a39=(a39+a44);
  a44=(a12*a23);
  a46=(a44*a22);
  a47=(a12*a11);
  a48=(a47*a33);
  a46=(a46-a48);
  a39=(a39+a46);
  a39=(a2*a39);
  a39=(-a39);
  if (res[0]!=0) res[0][9]=a39;
  a46=(a11*a6);
  a48=(a23*a28);
  a46=(a46+a48);
  a48=(a11*a8);
  a49=(a23*a30);
  a48=(a48+a49);
  a46=(a46+a48);
  a48=(a11*a9);
  a49=(a23*a31);
  a48=(a48+a49);
  a46=(a46+a48);
  a48=(a11*a22);
  a49=(a23*a33);
  a48=(a48+a49);
  a46=(a46+a48);
  a46=(a2*a46);
  if (res[0]!=0) res[0][10]=a46;
  a48=arg[0]? arg[0][3] : 0;
  a49=arg[0]? arg[0][27] : 0;
  a48=(a48+a49);
  a48=(a48/a4);
  a49=sin(a48);
  a50=arg[0]? arg[0][11] : 0;
  a51=arg[0]? arg[0][35] : 0;
  a52=(a50+a51);
  a52=(a52/a4);
  a53=(a5/a12);
  a54=(a52*a53);
  a54=(a49*a54);
  a55=cos(a48);
  a56=arg[0]? arg[0][10] : 0;
  a57=arg[0]? arg[0][34] : 0;
  a58=(a56+a57);
  a58=(a58/a4);
  a59=(a5/a12);
  a60=(a58*a59);
  a60=(a55*a60);
  a54=(a54-a60);
  a54=(a2*a54);
  a60=(1./a0);
  a61=(a54-a60);
  if (res[0]!=0) res[0][11]=a61;
  a61=(a55*a52);
  a62=(a49*a58);
  a61=(a61+a62);
  a61=(a2*a61);
  if (res[0]!=0) res[0][12]=a61;
  a62=(a52/a12);
  a62=(a49*a62);
  a63=(a58/a12);
  a63=(a55*a63);
  a62=(a62-a63);
  a62=(a2*a62);
  if (res[0]!=0) res[0][13]=a62;
  a63=10663971354041520.;
  a64=-2.7755575615628910e-17;
  a65=arg[0]? arg[0][9] : 0;
  a66=arg[0]? arg[0][33] : 0;
  a67=(a65+a66);
  a67=(a67/a4);
  a68=(a64*a67);
  a69=(a63*a68);
  a70=(a58*a69);
  a71=-4.5954235927999998e-01;
  a51=(a51-a50);
  a50=(a51/a0);
  a50=(a71*a50);
  a70=(a70+a50);
  a70=(a55*a70);
  a50=12709644943604120.;
  a68=(a50*a68);
  a72=(a52*a68);
  a73=4.0276351127999999e-01;
  a57=(a57-a56);
  a56=(a57/a0);
  a56=(a73*a56);
  a72=(a72+a56);
  a72=(a49*a72);
  a70=(a70-a72);
  a70=(a2*a70);
  if (res[0]!=0) res[0][14]=a70;
  a72=-3.5276351128000000e-01;
  a56=(a67*a52);
  a74=(a56*a12);
  a74=(a72*a74);
  a57=(a57/a0);
  a57=(a73*a57);
  a75=(a12*a57);
  a74=(a74+a75);
  a55=(a55*a74);
  a74=(a67*a58);
  a75=2.9598466328000000e-01;
  a76=(a75*a12);
  a77=(a74*a76);
  a78=4.5954235927999998e-01;
  a51=(a51/a0);
  a51=(a78*a51);
  a79=(a12*a51);
  a77=(a77+a79);
  a49=(a49*a77);
  a55=(a55-a49);
  a55=(a2*a55);
  if (res[0]!=0) res[0][15]=a55;
  a49=cos(a3);
  a77=sin(a48);
  a79=(a58*a77);
  a80=(a79/a12);
  a48=cos(a48);
  a81=(a52*a48);
  a82=(a81/a12);
  a80=(a80+a82);
  a80=(a49*a80);
  a3=sin(a3);
  a82=(a67*a12);
  a81=(a81*a5);
  a82=(a82+a81);
  a79=(a79*a5);
  a82=(a82+a79);
  a82=(a82/a12);
  a82=(a82/a12);
  a79=(a67/a12);
  a82=(a82-a79);
  a82=(a3*a82);
  a80=(a80+a82);
  a80=(a2*a80);
  a80=(-a80);
  if (res[0]!=0) res[0][16]=a80;
  a82=(1./a0);
  a79=(-a82);
  if (res[0]!=0) res[0][17]=a79;
  a79=(a52*a48);
  a81=(a58*a77);
  a79=(a79+a81);
  a79=(a79/a12);
  a79=(a79/a12);
  a79=(a3*a79);
  a79=(a2*a79);
  a79=(-a79);
  if (res[0]!=0) res[0][18]=a79;
  a81=arg[1]? arg[1][10] : 0;
  a83=arg[0]? arg[0][0] : 0;
  a84=arg[0]? arg[0][24] : 0;
  a83=(a83+a84);
  a83=(a83/a4);
  a84=(a81-a83);
  a85=(a84*a6);
  a86=arg[1]? arg[1][11] : 0;
  a87=arg[0]? arg[0][1] : 0;
  a88=arg[0]? arg[0][25] : 0;
  a87=(a87+a88);
  a87=(a87/a4);
  a88=(a86-a87);
  a89=(a88*a28);
  a85=(a85-a89);
  a89=arg[1]? arg[1][7] : 0;
  a90=(a89-a83);
  a91=(a90*a8);
  a85=(a85+a91);
  a91=arg[1]? arg[1][8] : 0;
  a92=(a91-a87);
  a93=(a92*a30);
  a85=(a85-a93);
  a93=arg[1]? arg[1][4] : 0;
  a94=(a93-a83);
  a95=(a94*a9);
  a85=(a85+a95);
  a95=arg[1]? arg[1][5] : 0;
  a96=(a95-a87);
  a97=(a96*a31);
  a85=(a85-a97);
  a97=arg[1]? arg[1][1] : 0;
  a98=(a97-a83);
  a99=(a98*a22);
  a85=(a85+a99);
  a99=arg[1]? arg[1][2] : 0;
  a100=(a99-a87);
  a101=(a100*a33);
  a85=(a85-a101);
  a85=(a49*a85);
  a101=(a87*a23);
  a102=(a83*a11);
  a103=(a101-a102);
  a104=(a86*a23);
  a103=(a103-a104);
  a104=(a81*a11);
  a103=(a103+a104);
  a104=(a103*a13);
  a105=arg[1]? arg[1][12] : 0;
  a106=arg[0]? arg[0][2] : 0;
  a107=arg[0]? arg[0][26] : 0;
  a106=(a106+a107);
  a106=(a106/a4);
  a105=(a105-a106);
  a4=(a105*a6);
  a107=(a23*a4);
  a104=(a104+a107);
  a107=(a105*a28);
  a108=(a11*a107);
  a104=(a104-a108);
  a108=(a101-a102);
  a109=(a91*a23);
  a108=(a108-a109);
  a109=(a89*a11);
  a108=(a108+a109);
  a109=(a108*a15);
  a104=(a104+a109);
  a109=arg[1]? arg[1][9] : 0;
  a109=(a109-a106);
  a110=(a109*a8);
  a111=(a23*a110);
  a104=(a104+a111);
  a111=(a109*a30);
  a112=(a11*a111);
  a104=(a104-a112);
  a112=(a101-a102);
  a113=(a95*a23);
  a112=(a112-a113);
  a113=(a93*a11);
  a112=(a112+a113);
  a113=(a112*a18);
  a104=(a104+a113);
  a113=arg[1]? arg[1][6] : 0;
  a113=(a113-a106);
  a114=(a113*a9);
  a115=(a23*a114);
  a104=(a104+a115);
  a115=(a113*a31);
  a116=(a11*a115);
  a104=(a104-a116);
  a101=(a101-a102);
  a102=(a99*a23);
  a101=(a101-a102);
  a102=(a97*a11);
  a101=(a101+a102);
  a102=(a101*a20);
  a104=(a104+a102);
  a102=arg[1]? arg[1][3] : 0;
  a102=(a102-a106);
  a106=(a102*a22);
  a116=(a23*a106);
  a104=(a104+a116);
  a116=(a102*a33);
  a117=(a11*a116);
  a104=(a104-a117);
  a104=(a3*a104);
  a85=(a85-a104);
  a85=(a2*a85);
  if (res[0]!=0) res[0][19]=a85;
  a104=-5.6778847999999993e-02;
  a117=(a58*a52);
  a117=(a104*a117);
  a118=-1.0677884800000000e-01;
  a66=(a66-a65);
  a66=(a66/a0);
  a66=(a118*a66);
  a117=(a117+a66);
  a49=(a49*a117);
  a72=(a72*a77);
  a56=(a56*a72);
  a74=(a74*a48);
  a75=(a75*a74);
  a56=(a56+a75);
  a51=(a48*a51);
  a56=(a56+a51);
  a57=(a77*a57);
  a56=(a56+a57);
  a3=(a3*a56);
  a49=(a49-a3);
  a49=(a2*a49);
  if (res[0]!=0) res[0][20]=a49;
  a3=(1./a0);
  a56=(-a3);
  if (res[0]!=0) res[0][21]=a56;
  a56=cos(a10);
  a57=(a81*a14);
  a107=(a12*a107);
  a57=(a57-a107);
  a107=(a89*a16);
  a57=(a57+a107);
  a111=(a12*a111);
  a57=(a57-a111);
  a111=(a93*a19);
  a57=(a57+a111);
  a115=(a12*a115);
  a57=(a57-a115);
  a115=(a97*a21);
  a57=(a57+a115);
  a17=(a83*a17);
  a57=(a57-a17);
  a116=(a12*a116);
  a57=(a57-a116);
  a57=(a56*a57);
  a10=sin(a10);
  a4=(a12*a4);
  a14=(a86*a14);
  a4=(a4-a14);
  a16=(a91*a16);
  a4=(a4-a16);
  a110=(a12*a110);
  a4=(a4+a110);
  a19=(a95*a19);
  a4=(a4-a19);
  a114=(a12*a114);
  a4=(a4+a114);
  a21=(a99*a21);
  a4=(a4-a21);
  a32=(a87*a32);
  a4=(a4+a32);
  a106=(a12*a106);
  a4=(a4+a106);
  a4=(a10*a4);
  a57=(a57-a4);
  a57=(a2*a57);
  if (res[0]!=0) res[0][22]=a57;
  a4=(a86*a13);
  a6=(a105*a6);
  a4=(a4-a6);
  a6=(a91*a15);
  a4=(a4+a6);
  a8=(a109*a8);
  a4=(a4-a8);
  a8=(a95*a18);
  a4=(a4+a8);
  a9=(a113*a9);
  a4=(a4-a9);
  a9=(a99*a20);
  a4=(a4+a9);
  a34=(a87*a34);
  a4=(a4-a34);
  a22=(a102*a22);
  a4=(a4-a22);
  a56=(a56*a4);
  a13=(a81*a13);
  a28=(a105*a28);
  a13=(a13-a28);
  a15=(a89*a15);
  a13=(a13+a15);
  a30=(a109*a30);
  a13=(a13-a30);
  a18=(a93*a18);
  a13=(a13+a18);
  a31=(a113*a31);
  a13=(a13-a31);
  a20=(a97*a20);
  a13=(a13+a20);
  a24=(a83*a24);
  a13=(a13-a24);
  a33=(a102*a33);
  a13=(a13-a33);
  a10=(a10*a13);
  a56=(a56-a10);
  a56=(a2*a56);
  if (res[0]!=0) res[0][23]=a56;
  a10=-5.0000000000000000e-01;
  if (res[0]!=0) res[0][24]=a10;
  a13=1.1662000000000001e+01;
  a33=(a13/a0);
  a24=(-a33);
  if (res[0]!=0) res[0][25]=a24;
  if (res[0]!=0) res[0][26]=a10;
  a24=(a13/a0);
  a20=(-a24);
  if (res[0]!=0) res[0][27]=a20;
  if (res[0]!=0) res[0][28]=a10;
  a13=(a13/a0);
  a20=(-a13);
  if (res[0]!=0) res[0][29]=a20;
  if (res[0]!=0) res[0][30]=a10;
  a20=1.0677884800000000e-01;
  a20=(a20/a0);
  a31=(-a20);
  if (res[0]!=0) res[0][31]=a31;
  a31=(a52*a48);
  a50=(a50*a31);
  a31=(a58*a77);
  a63=(a63*a31);
  a50=(a50+a63);
  a64=(a64*a50);
  a64=(a2*a64);
  if (res[0]!=0) res[0][32]=a64;
  a72=(a12*a72);
  a50=(a52*a72);
  a76=(a48*a76);
  a63=(a58*a76);
  a50=(a50+a63);
  a50=(a2*a50);
  a118=(a118*a5);
  a118=(a118/a0);
  a63=(a50-a118);
  if (res[0]!=0) res[0][33]=a63;
  a59=(a77*a59);
  a59=(a2*a59);
  a59=(-a59);
  if (res[0]!=0) res[0][34]=a59;
  a63=(a2*a48);
  a63=(-a63);
  if (res[0]!=0) res[0][35]=a63;
  a31=(a77/a12);
  a31=(a2*a31);
  a31=(-a31);
  if (res[0]!=0) res[0][36]=a31;
  a18=5.6778847999999993e-02;
  a30=(a18*a52);
  a30=(a2*a30);
  if (res[0]!=0) res[0][37]=a30;
  a69=(a77*a69);
  a69=(a2*a69);
  a15=(a73*a48);
  a15=(a15/a0);
  a28=(a69-a15);
  if (res[0]!=0) res[0][38]=a28;
  a76=(a67*a76);
  a104=(a104*a5);
  a52=(a52*a104);
  a76=(a76+a52);
  a76=(a2*a76);
  a52=(a12*a77);
  a73=(a73*a52);
  a73=(a73/a0);
  a52=(a76-a73);
  if (res[0]!=0) res[0][39]=a52;
  a53=(a48*a53);
  a53=(a2*a53);
  a53=(-a53);
  if (res[0]!=0) res[0][40]=a53;
  a52=(a2*a77);
  if (res[0]!=0) res[0][41]=a52;
  a28=(a48/a12);
  a28=(a2*a28);
  a28=(-a28);
  if (res[0]!=0) res[0][42]=a28;
  a18=(a18*a58);
  a18=(a2*a18);
  if (res[0]!=0) res[0][43]=a18;
  a68=(a48*a68);
  a68=(a2*a68);
  a71=(a71*a77);
  a71=(a71/a0);
  a77=(a68-a71);
  if (res[0]!=0) res[0][44]=a77;
  a67=(a67*a72);
  a58=(a58*a104);
  a67=(a67+a58);
  a2=(a2*a67);
  a48=(a48*a12);
  a78=(a78*a48);
  a78=(a78/a0);
  a0=(a2-a78);
  if (res[0]!=0) res[0][45]=a0;
  a0=-1.;
  if (res[0]!=0) res[0][46]=a0;
  a100=(a5*a100);
  a47=(a47*a102);
  a100=(a100+a47);
  a100=(-a100);
  if (res[0]!=0) res[0][47]=a100;
  a100=(a23*a102);
  a100=(-a100);
  if (res[0]!=0) res[0][48]=a100;
  a100=(a87-a99);
  a100=(-a100);
  if (res[0]!=0) res[0][49]=a100;
  a100=1.;
  if (res[0]!=0) res[0][50]=a100;
  if (res[0]!=0) res[0][51]=a0;
  if (res[0]!=0) res[0][52]=a0;
  a47=(a5*a98);
  a44=(a44*a102);
  a47=(a47+a44);
  if (res[0]!=0) res[0][53]=a47;
  a102=(a11*a102);
  a102=(-a102);
  if (res[0]!=0) res[0][54]=a102;
  a98=(-a98);
  if (res[0]!=0) res[0][55]=a98;
  if (res[0]!=0) res[0][56]=a100;
  if (res[0]!=0) res[0][57]=a0;
  if (res[0]!=0) res[0][58]=a0;
  a101=(a12*a101);
  if (res[0]!=0) res[0][59]=a101;
  a83=(a83*a23);
  a101=(a87*a11);
  a98=(a83+a101);
  a97=(a97*a23);
  a98=(a98-a97);
  a99=(a99*a11);
  a98=(a98-a99);
  a98=(-a98);
  if (res[0]!=0) res[0][60]=a98;
  a98=-2.0000000000000001e-01;
  if (res[0]!=0) res[0][61]=a98;
  if (res[0]!=0) res[0][62]=a98;
  if (res[0]!=0) res[0][63]=a98;
  if (res[0]!=0) res[0][64]=a98;
  if (res[0]!=0) res[0][65]=a0;
  a96=(a5*a96);
  a45=(a45*a113);
  a96=(a96+a45);
  a96=(-a96);
  if (res[0]!=0) res[0][66]=a96;
  a96=(a23*a113);
  a96=(-a96);
  if (res[0]!=0) res[0][67]=a96;
  a96=(a87-a95);
  a96=(-a96);
  if (res[0]!=0) res[0][68]=a96;
  if (res[0]!=0) res[0][69]=a100;
  if (res[0]!=0) res[0][70]=a0;
  if (res[0]!=0) res[0][71]=a0;
  a96=(a5*a94);
  a42=(a42*a113);
  a96=(a96+a42);
  if (res[0]!=0) res[0][72]=a96;
  a113=(a11*a113);
  a113=(-a113);
  if (res[0]!=0) res[0][73]=a113;
  a94=(-a94);
  if (res[0]!=0) res[0][74]=a94;
  if (res[0]!=0) res[0][75]=a100;
  if (res[0]!=0) res[0][76]=a0;
  if (res[0]!=0) res[0][77]=a0;
  a112=(a12*a112);
  if (res[0]!=0) res[0][78]=a112;
  a112=(a83+a101);
  a93=(a93*a23);
  a112=(a112-a93);
  a95=(a95*a11);
  a112=(a112-a95);
  a112=(-a112);
  if (res[0]!=0) res[0][79]=a112;
  if (res[0]!=0) res[0][80]=a98;
  if (res[0]!=0) res[0][81]=a98;
  if (res[0]!=0) res[0][82]=a98;
  if (res[0]!=0) res[0][83]=a98;
  if (res[0]!=0) res[0][84]=a0;
  a92=(a5*a92);
  a43=(a43*a109);
  a92=(a92+a43);
  a92=(-a92);
  if (res[0]!=0) res[0][85]=a92;
  a92=(a23*a109);
  a92=(-a92);
  if (res[0]!=0) res[0][86]=a92;
  a92=(a87-a91);
  a92=(-a92);
  if (res[0]!=0) res[0][87]=a92;
  if (res[0]!=0) res[0][88]=a100;
  if (res[0]!=0) res[0][89]=a0;
  if (res[0]!=0) res[0][90]=a0;
  a92=(a5*a90);
  a41=(a41*a109);
  a92=(a92+a41);
  if (res[0]!=0) res[0][91]=a92;
  a109=(a11*a109);
  a109=(-a109);
  if (res[0]!=0) res[0][92]=a109;
  a90=(-a90);
  if (res[0]!=0) res[0][93]=a90;
  if (res[0]!=0) res[0][94]=a100;
  if (res[0]!=0) res[0][95]=a0;
  if (res[0]!=0) res[0][96]=a0;
  a108=(a12*a108);
  if (res[0]!=0) res[0][97]=a108;
  a108=(a83+a101);
  a89=(a89*a23);
  a108=(a108-a89);
  a91=(a91*a11);
  a108=(a108-a91);
  a108=(-a108);
  if (res[0]!=0) res[0][98]=a108;
  if (res[0]!=0) res[0][99]=a98;
  if (res[0]!=0) res[0][100]=a98;
  if (res[0]!=0) res[0][101]=a98;
  if (res[0]!=0) res[0][102]=a98;
  if (res[0]!=0) res[0][103]=a0;
  a88=(a5*a88);
  a40=(a40*a105);
  a88=(a88+a40);
  a88=(-a88);
  if (res[0]!=0) res[0][104]=a88;
  a88=(a23*a105);
  a88=(-a88);
  if (res[0]!=0) res[0][105]=a88;
  a87=(a87-a86);
  a87=(-a87);
  if (res[0]!=0) res[0][106]=a87;
  if (res[0]!=0) res[0][107]=a100;
  if (res[0]!=0) res[0][108]=a0;
  if (res[0]!=0) res[0][109]=a0;
  a5=(a5*a84);
  a38=(a38*a105);
  a5=(a5+a38);
  if (res[0]!=0) res[0][110]=a5;
  a105=(a11*a105);
  a105=(-a105);
  if (res[0]!=0) res[0][111]=a105;
  a84=(-a84);
  if (res[0]!=0) res[0][112]=a84;
  if (res[0]!=0) res[0][113]=a100;
  if (res[0]!=0) res[0][114]=a0;
  if (res[0]!=0) res[0][115]=a0;
  a12=(a12*a103);
  if (res[0]!=0) res[0][116]=a12;
  a83=(a83+a101);
  a81=(a81*a23);
  a83=(a83-a81);
  a86=(a86*a11);
  a83=(a83-a86);
  a83=(-a83);
  if (res[0]!=0) res[0][117]=a83;
  if (res[0]!=0) res[0][118]=a98;
  if (res[0]!=0) res[0][119]=a98;
  if (res[0]!=0) res[0][120]=a98;
  if (res[0]!=0) res[0][121]=a98;
  if (res[0]!=0) res[0][122]=a1;
  if (res[0]!=0) res[0][123]=a7;
  if (res[0]!=0) res[0][124]=a25;
  if (res[0]!=0) res[0][125]=a26;
  if (res[0]!=0) res[0][126]=a27;
  if (res[0]!=0) res[0][127]=a29;
  if (res[0]!=0) res[0][128]=a35;
  if (res[0]!=0) res[0][129]=a36;
  if (res[0]!=0) res[0][130]=a37;
  if (res[0]!=0) res[0][131]=a39;
  if (res[0]!=0) res[0][132]=a46;
  a54=(a54+a60);
  if (res[0]!=0) res[0][133]=a54;
  if (res[0]!=0) res[0][134]=a61;
  if (res[0]!=0) res[0][135]=a62;
  if (res[0]!=0) res[0][136]=a70;
  if (res[0]!=0) res[0][137]=a55;
  if (res[0]!=0) res[0][138]=a80;
  if (res[0]!=0) res[0][139]=a82;
  if (res[0]!=0) res[0][140]=a79;
  if (res[0]!=0) res[0][141]=a85;
  if (res[0]!=0) res[0][142]=a49;
  if (res[0]!=0) res[0][143]=a3;
  if (res[0]!=0) res[0][144]=a57;
  if (res[0]!=0) res[0][145]=a56;
  if (res[0]!=0) res[0][146]=a10;
  if (res[0]!=0) res[0][147]=a33;
  if (res[0]!=0) res[0][148]=a10;
  if (res[0]!=0) res[0][149]=a24;
  if (res[0]!=0) res[0][150]=a10;
  if (res[0]!=0) res[0][151]=a13;
  if (res[0]!=0) res[0][152]=a10;
  if (res[0]!=0) res[0][153]=a20;
  if (res[0]!=0) res[0][154]=a64;
  a118=(a118+a50);
  if (res[0]!=0) res[0][155]=a118;
  if (res[0]!=0) res[0][156]=a59;
  if (res[0]!=0) res[0][157]=a63;
  if (res[0]!=0) res[0][158]=a31;
  if (res[0]!=0) res[0][159]=a30;
  a15=(a15+a69);
  if (res[0]!=0) res[0][160]=a15;
  a73=(a73+a76);
  if (res[0]!=0) res[0][161]=a73;
  if (res[0]!=0) res[0][162]=a53;
  if (res[0]!=0) res[0][163]=a52;
  if (res[0]!=0) res[0][164]=a28;
  if (res[0]!=0) res[0][165]=a18;
  a71=(a71+a68);
  if (res[0]!=0) res[0][166]=a71;
  a78=(a78+a2);
  if (res[0]!=0) res[0][167]=a78;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_jac_g_leg_simple(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int eval_jac_g_leg_simple_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_jac_g_leg_simple_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_jac_g_leg_simple_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int eval_jac_g_leg_simple_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_jac_g_leg_simple_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_jac_g_leg_simple_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_jac_g_leg_simple_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_jac_g_leg_simple_n_in(void) { return 2;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_jac_g_leg_simple_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real eval_jac_g_leg_simple_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_jac_g_leg_simple_name_in(casadi_int i){
  switch (i) {
    case 0: return "w";
    case 1: return "p";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_jac_g_leg_simple_name_out(casadi_int i){
  switch (i) {
    case 0: return "jac_g";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_jac_g_leg_simple_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_jac_g_leg_simple_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int eval_jac_g_leg_simple_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


