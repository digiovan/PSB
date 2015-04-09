 #ifndef __MAKECINT__
  #ifndef __CINT__
 
  #include "TROOT.h"
  #include "TCanvas.h"
  #include "Riostream.h"
 
  #include "TBRIK.h"
  #include "TShape.h"
  #include "TNode.h"
  #include "TCanvas.h"
  #include "TGLViewer.h"
  #include "TPoints3DABC.h"
  #include "TTUBE.h"
  #include "TRotMatrix.h"
 
  #endif
 #endif
 
 
 void BT1                                             ()
 {
 TShape* s;
 TNode* mn;
 TNode* n;
 Double_t rotmatrix[9];
 TRotMatrix* m;
 
 gSystem->Load("libGed");
 gSystem->Load("libRGL");
 
 TCanvas* c = new TCanvas("c","PTC Layout",10,10,800,600);
 
 s = new TBRIK("START","START","void",0.01,0.01,0.01);
 s->SetLineColor(2);
 mn = new TNode("NODE1","NODE1","START");
 mn->cd();
 
 
 c->Range(          -1 ,          -1 ,           1 ,          35 );
 
 
 //cout<<           1 <<" BT1$START               "<<endl;
 
 //cout<<           2 <<" BT1.START               "<<endl;
 
 //cout<<           3 <<" DRIFT_0                 "<<endl;
 s = new TTUBE("DRIFT00003","DRIFT00003","void",  5.000000000000000E-002 ,
   1.27448279326471      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.000000000000000E+000 ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =   0.000000000000000E+000 ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =    1.00000000000000      ;
 m = new TRotMatrix("mtx00003","mtx00003",rotmatrix);
 n = new TNode("NODE00003","NODE00003",s,  0.000000000000000E+000 ,
  0.000000000000000E+000 ,   1.27448279326471      ,m);
 
 //cout<<           4 <<" BT1.BVT10               "<<endl;
 s = new TBRIK("RECTA00004","RECTA00004","void",0.5,0.5,  0.453411423470588     
 );
 s->SetLineColor(           4 );
 rotmatrix[0] =   6.118719960058524E-017 ;
 rotmatrix[1] =   0.999262802028898      ;
 rotmatrix[2] =  -3.839078641231817E-002 ;
 rotmatrix[3] =   -1.00000000000000      ;
 rotmatrix[4] =   6.123233995736766E-017 ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =   2.350757684829757E-018 ;
 rotmatrix[7] =   3.839078641231817E-002 ;
 rotmatrix[8] =   0.999262802028898      ;
 m = new TRotMatrix("mtx00004","mtx00004",rotmatrix);
 n = new TNode("NODE00004","NODE00004",s,  1.065598458533329E-018 ,
  1.740254348070383E-002 ,   3.00193141468911      ,m);
 
 //cout<<           5 <<" DRIFT_1                 "<<endl;
 s = new TTUBE("DRIFT00005","DRIFT00005","void",  5.000000000000000E-002 ,
  7.745404826470570E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =  -1.387778780781446E-017 ;
 rotmatrix[3] =  -1.064772847738260E-018 ;
 rotmatrix[4] =   0.997052295037288      ;
 rotmatrix[5] =  -7.672496960493197E-002 ;
 rotmatrix[6] =   1.383688018382189E-017 ;
 rotmatrix[7] =   7.672496960493197E-002 ;
 rotmatrix[8] =   0.997052295037288      ;
 m = new TRotMatrix("mtx00005","mtx00005",rotmatrix);
 n = new TNode("NODE00005","NODE00005",s,  3.202919302657349E-018 ,
  4.074774646029614E-002 ,   3.53212297943106      ,m);
 
 //cout<<           6 <<" BT1.BPM00               "<<endl;
 s = new TTUBE("DRIFT00006","DRIFT00006","void",  5.000000000000000E-002 ,
  0.254000000000000      );
 s->SetLineColor(           6 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =  -1.387778780781446E-017 ;
 rotmatrix[3] =  -1.064772847738260E-018 ;
 rotmatrix[4] =   0.997052295037288      ;
 rotmatrix[5] =  -7.672496960493197E-002 ;
 rotmatrix[6] =   1.383688018382189E-017 ;
 rotmatrix[7] =   7.672496960493197E-002 ;
 rotmatrix[8] =   0.997052295037288      ;
 m = new TRotMatrix("mtx00006","mtx00006",rotmatrix);
 n = new TNode("NODE00006","NODE00006",s,  7.789209254938800E-018 ,
  6.617854823883733E-002 ,   3.86259999895279      ,m);
 
 //cout<<           7 <<" DRIFT_2                 "<<endl;
 s = new TTUBE("DRIFT00007","DRIFT00007","void",  5.000000000000000E-002 ,
  9.013692499999992E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =  -1.387778780781446E-017 ;
 rotmatrix[3] =  -1.064772847738260E-018 ;
 rotmatrix[4] =   0.997052295037288      ;
 rotmatrix[5] =  -7.672496960493197E-002 ;
 rotmatrix[6] =   1.383688018382189E-017 ;
 rotmatrix[7] =   7.672496960493197E-002 ;
 rotmatrix[8] =   0.997052295037288      ;
 m = new TRotMatrix("mtx00007","mtx00007",rotmatrix);
 n = new TNode("NODE00007","NODE00007",s,  1.255099065299270E-017 ,
  9.258244334939707E-002 ,   4.20572250983111      ,m);
 
 //cout<<           8 <<" BT1.DHZ10               "<<endl;
 s = new TBRIK("RECTA00008","RECTA00008","void",0.5,0.5,  0.167500000000000     
 );
 s->SetLineColor(          19 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =  -1.387778780781446E-017 ;
 rotmatrix[3] =  -1.064772847738260E-018 ;
 rotmatrix[4] =   0.997052295037288      ;
 rotmatrix[5] =  -7.672496960493197E-002 ;
 rotmatrix[6] =   1.383688018382189E-017 ;
 rotmatrix[7] =   7.672496960493197E-002 ;
 rotmatrix[8] =   0.997052295037288      ;
 m = new TRotMatrix("mtx00008","mtx00008",rotmatrix);
 n = new TNode("NODE00008","NODE00008",s,  1.611588191514601E-017 ,
  0.112349628589130      ,   4.46259999718871      ,m);
 
 //cout<<           9 <<" DRIFT_3                 "<<endl;
 s = new TTUBE("DRIFT00009","DRIFT00009","void",  5.000000000000000E-002 ,
  2.213581499999995E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =  -1.387778780781446E-017 ;
 rotmatrix[3] =  -1.064772847738260E-018 ;
 rotmatrix[4] =   0.997052295037288      ;
 rotmatrix[5] =  -7.672496960493197E-002 ;
 rotmatrix[6] =   1.383688018382189E-017 ;
 rotmatrix[7] =   7.672496960493197E-002 ;
 rotmatrix[8] =   0.997052295037288      ;
 m = new TRotMatrix("mtx00009","mtx00009",rotmatrix);
 n = new TNode("NODE00009","NODE00009",s,  1.873984996586242E-017 ,
  0.126899430731012      ,   4.65167682175573      ,m);
 
 //cout<<          10 <<" BT1.VVS10               "<<endl;
 s = new TTUBE("DRIFT00010","DRIFT00010","void",  5.000000000000000E-002 ,
  5.000000000000000E-002 );
 s->SetLineColor(           6 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =  -1.387778780781446E-017 ;
 rotmatrix[3] =  -1.064772847738260E-018 ;
 rotmatrix[4] =   0.997052295037288      ;
 rotmatrix[5] =  -7.672496960493197E-002 ;
 rotmatrix[6] =   1.383688018382189E-017 ;
 rotmatrix[7] =   7.672496960493197E-002 ;
 rotmatrix[8] =   0.997052295037288      ;
 m = new TRotMatrix("mtx00010","mtx00010",rotmatrix);
 n = new TNode("NODE00010","NODE00010",s,  1.973798459497976E-017 ,
  0.132434048944314      ,   4.72360000165587      ,m);
 
 //cout<<          11 <<" DRIFT_4                 "<<endl;
 s = new TTUBE("DRIFT00011","DRIFT00011","void",  5.000000000000000E-002 ,
  0.798126160685829      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =  -1.387778780781446E-017 ;
 rotmatrix[3] =  -1.064772847738260E-018 ;
 rotmatrix[4] =   0.997052295037288      ;
 rotmatrix[5] =  -7.672496960493197E-002 ;
 rotmatrix[6] =   1.383688018382189E-017 ;
 rotmatrix[7] =   7.672496960493197E-002 ;
 rotmatrix[8] =   0.997052295037288      ;
 m = new TRotMatrix("mtx00011","mtx00011",rotmatrix);
 n = new TNode("NODE00011","NODE00011",s,  3.147340466115444E-017 ,
  0.197506502844082      ,   5.56922613664883      ,m);
 
 //cout<<          12 <<" BT1.SMV10               "<<endl;
 s = new TBRIK("RECTA00012","RECTA00012","void",0.5,0.5,  0.498404088628343     
 );
 s->SetLineColor(           4 );
 rotmatrix[0] =   6.080698611821008E-017 ;
 rotmatrix[1] =   0.999199309628139      ;
 rotmatrix[2] =  -4.000924441487928E-002 ;
 rotmatrix[3] =   -1.00000000000000      ;
 rotmatrix[4] =   6.140925924165441E-017 ;
 rotmatrix[5] =   1.382438806119390E-017 ;
 rotmatrix[6] =   1.627025706911247E-017 ;
 rotmatrix[7] =   4.000924441487928E-002 ;
 rotmatrix[8] =   0.999199309628139      ;
 m = new TRotMatrix("mtx00012","mtx00012",rotmatrix);
 n = new TNode("NODE00012","NODE00012",s,  5.062431513322795E-017 ,
  0.278678983565748      ,   6.86289240167398      ,m);
 
 //cout<<          13 <<" DRIFT_5                 "<<endl;
 s = new TTUBE("DRIFT00013","DRIFT00013","void",  5.000000000000000E-002 ,
  5.090769568582809E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.778769189234030E-019 ;
 rotmatrix[2] =  -1.474514954580286E-017 ;
 rotmatrix[3] =   1.301105400124170E-019 ;
 rotmatrix[4] =   0.999994753128259      ;
 rotmatrix[5] =  -3.239400554415060E-003 ;
 rotmatrix[6] =   1.474564839448417E-017 ;
 rotmatrix[7] =   3.239400554415060E-003 ;
 rotmatrix[8] =   0.999994753128259      ;
 m = new TRotMatrix("mtx00013","mtx00013",rotmatrix);
 n = new TNode("NODE00013","NODE00013",s,  5.948231652947450E-017 ,
  0.298780169285521      ,   7.41169257503769      ,m);
 
 //cout<<          14 <<" BT2.BTV10               "<<endl;
 
 //cout<<          15 <<" DRIFT_6                 "<<endl;
 s = new TTUBE("DRIFT00015","DRIFT00015","void",  5.000000000000000E-002 ,
  0.340001780000000      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.778769189234030E-019 ;
 rotmatrix[2] =  -1.474514954580286E-017 ;
 rotmatrix[3] =   1.301105400124170E-019 ;
 rotmatrix[4] =   0.999994753128259      ;
 rotmatrix[5] =  -3.239400554415060E-003 ;
 rotmatrix[6] =   1.474564839448417E-017 ;
 rotmatrix[7] =   3.239400554415060E-003 ;
 rotmatrix[8] =   0.999994753128259      ;
 m = new TRotMatrix("mtx00015","mtx00015",rotmatrix);
 n = new TNode("NODE00015","NODE00015",s,  6.524653021200988E-017 ,
  0.300046481657784      ,   7.80259999967164      ,m);
 
 //cout<<          16 <<" BT.VPG11                "<<endl;
 
 //cout<<          17 <<" DRIFT_7                 "<<endl;
 s = new TTUBE("DRIFT00017","DRIFT00017","void",  5.000000000000000E-002 ,
  0.278751705000000      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.778769189234030E-019 ;
 rotmatrix[2] =  -1.474514954580286E-017 ;
 rotmatrix[3] =   1.301105400124170E-019 ;
 rotmatrix[4] =   0.999994753128259      ;
 rotmatrix[5] =  -3.239400554415060E-003 ;
 rotmatrix[6] =   1.474564839448417E-017 ;
 rotmatrix[7] =   3.239400554415060E-003 ;
 rotmatrix[8] =   0.999994753128259      ;
 m = new TRotMatrix("mtx00017","mtx00017",rotmatrix);
 n = new TNode("NODE00017","NODE00017",s,  7.437045154468162E-017 ,
  0.302050872040139      ,   8.42135023815146      ,m);
 
 //cout<<          18 <<" BT2.BPM10               "<<endl;
 s = new TTUBE("DRIFT00018","DRIFT00018","void",  5.000000000000000E-002 ,
  9.250000000000000E-002 );
 s->SetLineColor(           6 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.778769189234030E-019 ;
 rotmatrix[2] =  -1.474514954580286E-017 ;
 rotmatrix[3] =   1.301105400124170E-019 ;
 rotmatrix[4] =   0.999994753128259      ;
 rotmatrix[5] =  -3.239400554415060E-003 ;
 rotmatrix[6] =   1.474564839448417E-017 ;
 rotmatrix[7] =   3.239400554415060E-003 ;
 rotmatrix[8] =   0.999994753128259      ;
 m = new TRotMatrix("mtx00018","mtx00018",rotmatrix);
 n = new TNode("NODE00018","NODE00018",s,  7.984479865246439E-017 ,
  0.303253505019144      ,   8.79259999524139      ,m);
 
 //cout<<          19 <<" DRIFT_8                 "<<endl;
 s = new TTUBE("DRIFT00019","DRIFT00019","void",  5.000000000000000E-002 ,
  0.122250895417890      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.778769189234030E-019 ;
 rotmatrix[2] =  -1.474514954580286E-017 ;
 rotmatrix[3] =   1.301105400124170E-019 ;
 rotmatrix[4] =   0.999994753128259      ;
 rotmatrix[5] =  -3.239400554415060E-003 ;
 rotmatrix[6] =   1.474564839448417E-017 ;
 rotmatrix[7] =   3.239400554415060E-003 ;
 rotmatrix[8] =   0.999994753128259      ;
 m = new TRotMatrix("mtx00019","mtx00019",rotmatrix);
 n = new TNode("NODE00019","NODE00019",s,  8.301143984869725E-017 ,
  0.303949169188822      ,   9.00734976388887      ,m);
 
 //cout<<          20 <<" BT1.QNO10               "<<endl;
 s = new TBRIK("RECTA00020","RECTA00020","void",0.5,0.5,  0.233008719164221     
 );
 s->SetLineColor(           4 );
 rotmatrix[0] =   6.129016946190342E-017 ;
 rotmatrix[1] =   0.999966630740288      ;
 rotmatrix[2] =  -8.169296537494521E-003 ;
 rotmatrix[3] =   -1.00000000000000      ;
 rotmatrix[4] =   6.140913329071917E-017 ;
 rotmatrix[5] =   1.431147112381679E-017 ;
 rotmatrix[6] =   1.481266298058240E-017 ;
 rotmatrix[7] =   8.169296537494521E-003 ;
 rotmatrix[8] =   0.999966630740287      ;
 m = new TRotMatrix("mtx00020","mtx00020",rotmatrix);
 n = new TNode("NODE00020","NODE00020",s,  8.826557421576958E-017 ,
  0.306248698419159      ,   9.36260001787199      ,m);
 
 //cout<<          21 <<" DRIFT_9                 "<<endl;
 s = new TTUBE("DRIFT00021","DRIFT00021","void",  5.000000000000000E-002 ,
  0.574051385417889      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.355252715606880E-019 ;
 rotmatrix[2] =  -1.561251128379125E-017 ;
 rotmatrix[3] =  -6.899454703840560E-020 ;
 rotmatrix[4] =   0.999914204498072      ;
 rotmatrix[5] =  -1.309899396855613E-002 ;
 rotmatrix[6] =   1.561294704526406E-017 ;
 rotmatrix[7] =   1.309899396855613E-002 ;
 rotmatrix[8] =   0.999914204498072      ;
 m = new TRotMatrix("mtx00021","mtx00021",rotmatrix);
 n = new TNode("NODE00021","NODE00021",s,  1.006796737448888E-016 ,
  0.315671703666332      ,   10.1696021522631      ,m);
 
 //cout<<          22 <<" BT2.VVS30               "<<endl;
 s = new TTUBE("DRIFT00022","DRIFT00022","void",  5.000000000000000E-002 ,
  5.000000000000000E-002 );
 s->SetLineColor(           6 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.355252715606879E-019 ;
 rotmatrix[2] =  -1.561251128379124E-017 ;
 rotmatrix[3] =  -6.899454703840558E-020 ;
 rotmatrix[4] =   0.999914204498072      ;
 rotmatrix[5] =  -1.309899396855613E-002 ;
 rotmatrix[6] =   1.561294704526405E-017 ;
 rotmatrix[7] =   1.309899396855613E-002 ;
 rotmatrix[8] =   0.999914204498072      ;
 m = new TRotMatrix("mtx00022","mtx00022",rotmatrix);
 n = new TNode("NODE00022","NODE00022",s,  1.104229549789420E-016 ,
  0.323846148999990      ,   10.7935999968792      ,m);
 
 //cout<<          23 <<" DRIFT_10                "<<endl;
 s = new TTUBE("DRIFT00023","DRIFT00023","void",  5.000000000000000E-002 ,
  0.143014428866858      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.355252715606878E-019 ;
 rotmatrix[2] =  -1.561251128379123E-017 ;
 rotmatrix[3] =  -6.899454703840544E-020 ;
 rotmatrix[4] =   0.999914204498072      ;
 rotmatrix[5] =  -1.309899396855613E-002 ;
 rotmatrix[6] =   1.561294704526404E-017 ;
 rotmatrix[7] =   1.309899396855613E-002 ;
 rotmatrix[8] =   0.999914204498072      ;
 m = new TRotMatrix("mtx00023","mtx00023",rotmatrix);
 n = new TNode("NODE00023","NODE00023",s,  1.134364790358121E-016 ,
  0.326374443839561      ,   10.9865978659762      ,m);
 
 //cout<<          24 <<" BT1.QNO20               "<<endl;
 s = new TBRIK("RECTA00024","RECTA00024","void",0.5,0.5,  0.233013872266283     
 );
 s->SetLineColor(           4 );
 rotmatrix[0] =   6.120038801856245E-017 ;
 rotmatrix[1] =   0.999941321815126      ;
 rotmatrix[2] =  -1.083295558096989E-002 ;
 rotmatrix[3] =   -1.00000000000000      ;
 rotmatrix[4] =   6.137311789055825E-017 ;
 rotmatrix[5] =   1.561241598137834E-017 ;
 rotmatrix[6] =   1.627635213312109E-017 ;
 rotmatrix[7] =   1.083295558096989E-002 ;
 rotmatrix[8] =   0.999941321815126      ;
 m = new TRotMatrix("mtx00024","mtx00024",rotmatrix);
 n = new TNode("NODE00024","NODE00024",s,  1.194619683310590E-016 ,
  0.330772015748116      ,   11.3626000248484      ,m);
 
 //cout<<          25 <<" DRIFT_11                "<<endl;
 s = new TTUBE("DRIFT00025","DRIFT00025","void",  5.000000000000000E-002 ,
  0.956285078866858      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.355252715606880E-019 ;
 rotmatrix[2] =  -1.734723475976807E-017 ;
 rotmatrix[3] =  -1.309106032361763E-020 ;
 rotmatrix[4] =   0.999963303768208      ;
 rotmatrix[5] =  -8.566861558949335E-003 ;
 rotmatrix[6] =   1.734775920785958E-017 ;
 rotmatrix[7] =   8.566861558949335E-003 ;
 rotmatrix[8] =   0.999963303768208      ;
 m = new TRotMatrix("mtx00025","mtx00025",rotmatrix);
 n = new TNode("NODE00025","NODE00025",s,  1.398439842039502E-016 ,
  0.341488604397068      ,   12.5518500116563      ,m);
 
 //cout<<          26 <<" BT.VGP21                "<<endl;
 
 //cout<<          27 <<" BT.VGR21                "<<endl;
 
 //cout<<          28 <<" BT.VPI22                "<<endl;
 
 //cout<<          29 <<" BT.VPI22A               "<<endl;
 
 //cout<<          30 <<" DRIFT_12                "<<endl;
 s = new TTUBE("DRIFT00030","DRIFT00030","void",  5.000000000000000E-002 ,
  0.212257794419841      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.355252715606875E-019 ;
 rotmatrix[2] =  -1.734723475976807E-017 ;
 rotmatrix[3] =  -1.309106032361811E-020 ;
 rotmatrix[4] =   0.999963303768208      ;
 rotmatrix[5] =  -8.566861558949335E-003 ;
 rotmatrix[6] =   1.734775920785958E-017 ;
 rotmatrix[7] =   8.566861558949335E-003 ;
 rotmatrix[8] =   0.999963303768208      ;
 m = new TRotMatrix("mtx00030","mtx00030",rotmatrix);
 n = new TNode("NODE00030","NODE00030",s,  1.601155845937882E-016 ,
  0.351499349418212      ,   13.7203500038229      ,m);
 
 //cout<<          31 <<" BT1.KFA10               "<<endl;
 s = new TBRIK("RECTA00031","RECTA00031","void",0.5,0.5,  0.780009541160318     
 );
 s->SetLineColor(           4 );
 rotmatrix[0] =   6.129524277431736E-017 ;
 rotmatrix[1] =   0.999990825899972      ;
 rotmatrix[2] =  -4.283470075957641E-003 ;
 rotmatrix[3] =   -1.00000000000000      ;
 rotmatrix[4] =   6.137011199419590E-017 ;
 rotmatrix[5] =   1.734719818622397E-017 ;
 rotmatrix[6] =   1.760991607957791E-017 ;
 rotmatrix[7] =   4.283470075957641E-003 ;
 rotmatrix[8] =   0.999990825899972      ;
 m = new TRotMatrix("mtx00031","mtx00031",rotmatrix);
 n = new TNode("NODE00031","NODE00031",s,  1.775336422576045E-016 ,
  0.356658869868989      ,   14.7126000091815      ,m);
 
 //cout<<          32 <<" DRIFT_13                "<<endl;
 s = new TTUBE("DRIFT00032","DRIFT00032","void",  5.000000000000000E-002 ,
  0.203749994419841      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.377720368282426E-019 ;
 rotmatrix[2] =  -1.734719818610653E-017 ;
 rotmatrix[3] =   1.377720368455893E-019 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   9.999761435564027E-013 ;
 rotmatrix[6] =   1.734719818610640E-017 ;
 rotmatrix[7] =  -9.999761435564027E-013 ;
 rotmatrix[8] =    1.00000000000000      ;
 m = new TRotMatrix("mtx00032","mtx00032",rotmatrix);
 n = new TNode("NODE00032","NODE00032",s,  1.948039943474531E-016 ,
  0.360000007179961      ,   15.6963500036014      ,m);
 
 //cout<<          33 <<" BT.BTV20                "<<endl;
 
 //cout<<          34 <<" DRIFT_14                "<<endl;
 s = new TTUBE("DRIFT00034","DRIFT00034","void",  5.000000000000000E-002 ,
  0.128192832869307      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.377720368282426E-019 ;
 rotmatrix[2] =  -1.734719818610653E-017 ;
 rotmatrix[3] =   1.377720368455893E-019 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   9.999761435564027E-013 ;
 rotmatrix[6] =   1.734719818610640E-017 ;
 rotmatrix[7] =  -9.999761435564027E-013 ;
 rotmatrix[8] =    1.00000000000000      ;
 m = new TRotMatrix("mtx00034","mtx00034",rotmatrix);
 n = new TNode("NODE00034","NODE00034",s,  2.005622723588944E-016 ,
  0.360000007179629      ,   16.0282928308905      ,m);
 
 //cout<<          35 <<" BT2.BVT20               "<<endl;
 s = new TBRIK("RECTA00035","RECTA00035","void",0.5,0.5,  0.456904734261385     
 );
 s->SetLineColor(           4 );
 rotmatrix[0] =   6.068470245018653E-017 ;
 rotmatrix[1] =   0.999312354732010      ;
 rotmatrix[2] =  -3.707853395113134E-002 ;
 rotmatrix[3] =   -1.00000000000000      ;
 rotmatrix[4] =   6.137011199419590E-017 ;
 rotmatrix[5] =   1.734719818610653E-017 ;
 rotmatrix[6] =   1.961078324852250E-017 ;
 rotmatrix[7] =   3.707853395113134E-002 ;
 rotmatrix[8] =   0.999312354732010      ;
 m = new TRotMatrix("mtx00035","mtx00035",rotmatrix);
 n = new TNode("NODE00035","NODE00035",s,  2.117442646246418E-016 ,
  0.376937481488377      ,   16.6129715474014      ,m);
 
 //cout<<          36 <<" DRIFT_15                "<<endl;
 s = new TTUBE("DRIFT00036","DRIFT00036","void",  5.000000000000000E-002 ,
  0.145699072869306      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.925929944387236E-034 ;
 rotmatrix[2] =  -1.387778780781445E-017 ;
 rotmatrix[3] =  -1.028428372274305E-018 ;
 rotmatrix[4] =   0.997250364639996      ;
 rotmatrix[5] =  -7.410607414642892E-002 ;
 rotmatrix[6] =   1.383962895173945E-017 ;
 rotmatrix[7] =   7.410607414642892E-002 ;
 rotmatrix[8] =   0.997250364639996      ;
 m = new TRotMatrix("mtx00036","mtx00036",rotmatrix);
 n = new TNode("NODE00036","NODE00036",s,  2.227188915196905E-016 ,
  0.404672142094373      ,   17.2147558845896      ,m);
 
 //cout<<          37 <<" BT2.BPM20               "<<endl;
 s = new TTUBE("DRIFT00037","DRIFT00037","void",  5.000000000000000E-002 ,
  9.250000000000000E-002 );
 s->SetLineColor(           6 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.155557966632342E-033 ;
 rotmatrix[2] =  -1.387778780781445E-017 ;
 rotmatrix[3] =  -1.028428372274304E-018 ;
 rotmatrix[4] =   0.997250364639996      ;
 rotmatrix[5] =  -7.410607414642892E-002 ;
 rotmatrix[6] =   1.383962895173945E-017 ;
 rotmatrix[7] =   7.410607414642892E-002 ;
 rotmatrix[8] =   0.997250364639996      ;
 m = new TRotMatrix("mtx00037","mtx00037",rotmatrix);
 n = new TNode("NODE00037","NODE00037",s,  2.260154783048500E-016 ,
  0.422324140250036      ,   17.4522999968654      ,m);
 
 //cout<<          38 <<" DRIFT_16                "<<endl;
 s = new TTUBE("DRIFT00038","DRIFT00038","void",  5.000000000000000E-002 ,
  0.602814974999999      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.925929944387236E-033 ;
 rotmatrix[2] =  -1.387778780781445E-017 ;
 rotmatrix[3] =  -1.028428372274303E-018 ;
 rotmatrix[4] =   0.997250364639996      ;
 rotmatrix[5] =  -7.410607414642892E-002 ;
 rotmatrix[6] =   1.383962895173945E-017 ;
 rotmatrix[7] =   7.410607414642892E-002 ;
 rotmatrix[8] =   0.997250364639996      ;
 m = new TRotMatrix("mtx00038","mtx00038",rotmatrix);
 n = new TNode("NODE00038","NODE00038",s,  2.356383795634380E-016 ,
  0.473851203342509      ,   18.1457031092238      ,m);
 
 //cout<<          39 <<" BT2.DVT40               "<<endl;
 s = new TBRIK("RECTA00039","RECTA00039","void",0.5,0.5,  0.167500000000000     
 );
 s->SetLineColor(          19 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -2.696301922142130E-033 ;
 rotmatrix[2] =  -1.387778780781445E-017 ;
 rotmatrix[3] =  -1.028428372274302E-018 ;
 rotmatrix[4] =   0.997250364639996      ;
 rotmatrix[5] =  -7.410607414642892E-002 ;
 rotmatrix[6] =   1.383962895173945E-017 ;
 rotmatrix[7] =   7.410607414642892E-002 ;
 rotmatrix[8] =   0.997250364639996      ;
 m = new TRotMatrix("mtx00039","mtx00039",rotmatrix);
 n = new TNode("NODE00039","NODE00039",s,  2.462992529934065E-016 ,
  0.530936221995963      ,   18.9138999989302      ,m);
 
 //cout<<          40 <<" DRIFT_17                "<<endl;
 s = new TTUBE("DRIFT00040","DRIFT00040","void",  5.000000000000000E-002 ,
  0.493136225000001      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -3.466673899897025E-033 ;
 rotmatrix[2] =  -1.387778780781445E-017 ;
 rotmatrix[3] =  -1.028428372274302E-018 ;
 rotmatrix[4] =   0.997250364639996      ;
 rotmatrix[5] =  -7.410607414642892E-002 ;
 rotmatrix[6] =   1.383962895173945E-017 ;
 rotmatrix[7] =   7.410607414642892E-002 ;
 rotmatrix[8] =   0.997250364639996      ;
 m = new TRotMatrix("mtx00040","mtx00040",rotmatrix);
 n = new TNode("NODE00040","NODE00040",s,  2.554422132194843E-016 ,
  0.579893379069630      ,   19.5727197152059      ,m);
 
 //cout<<          41 <<" BT.VPI23                "<<endl;
 
 //cout<<          42 <<" DRIFT_18                "<<endl;
 s = new TTUBE("DRIFT00042","DRIFT00042","void",  5.000000000000000E-002 ,
  0.152554646941899      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -5.007417855406813E-033 ;
 rotmatrix[2] =  -1.387778780781445E-017 ;
 rotmatrix[3] =  -1.028428372274300E-018 ;
 rotmatrix[4] =   0.997250364639996      ;
 rotmatrix[5] =  -7.410607414642892E-002 ;
 rotmatrix[6] =   1.383962895173945E-017 ;
 rotmatrix[7] =   7.410607414642892E-002 ;
 rotmatrix[8] =   0.997250364639996      ;
 m = new TRotMatrix("mtx00042","mtx00042",rotmatrix);
 n = new TNode("NODE00042","NODE00042",s,  2.643783353046854E-016 ,
  0.627742994701429      ,   20.2166351726946      ,m);
 
 //cout<<          43 <<" BT2.SMV20               "<<endl;
 s = new TBRIK("RECTA00043","RECTA00043","void",0.5,0.5,  0.498422386116199     
 );
 s->SetLineColor(           4 );
 rotmatrix[0] =   6.081709690535200E-017 ;
 rotmatrix[1] =   0.999258236946057      ;
 rotmatrix[2] =  -3.850942605982649E-002 ;
 rotmatrix[3] =   -1.00000000000000      ;
 rotmatrix[4] =   6.139264100371339E-017 ;
 rotmatrix[5] =   1.376300193769381E-017 ;
 rotmatrix[6] =   1.611698842069506E-017 ;
 rotmatrix[7] =   3.850942605982648E-002 ;
 rotmatrix[8] =   0.999258236946057      ;
 m = new TRotMatrix("mtx00043","mtx00043",rotmatrix);
 n = new TNode("NODE00043","NODE00043",s,  2.745210008905004E-016 ,
  0.658238114121787      ,   20.8667175034675      ,m);
 
 //cout<<          44 <<" DRIFT_19                "<<endl;
 s = new TTUBE("DRIFT00044","DRIFT00044","void",  5.000000000000000E-002 ,
  4.346785194189984E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.609362599783170E-019 ;
 rotmatrix[2] =  -1.431146867680866E-017 ;
 rotmatrix[3] =   1.199500352730877E-019 ;
 rotmatrix[4] =   0.999995899240182      ;
 rotmatrix[5] =  -2.863826604371995E-003 ;
 rotmatrix[6] =   1.431187088245591E-017 ;
 rotmatrix[7] =   2.863826604371995E-003 ;
 rotmatrix[8] =   0.999995899240182      ;
 m = new TRotMatrix("mtx00044","mtx00044",rotmatrix);
 n = new TNode("NODE00044","NODE00044",s,  2.831744730523061E-016 ,
  0.677552491955312      ,   21.4081323306406      ,m);
 
 //cout<<          45 <<" BT2.BTV30               "<<endl;
 
 //cout<<          46 <<" DRIFT_20                "<<endl;
 s = new TTUBE("DRIFT00046","DRIFT00046","void",  5.000000000000000E-002 ,
  0.299001211016375      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.609362599783169E-019 ;
 rotmatrix[2] =  -1.431146867680869E-017 ;
 rotmatrix[3] =   1.199500352730875E-019 ;
 rotmatrix[4] =   0.999995899240182      ;
 rotmatrix[5] =  -2.863826604371995E-003 ;
 rotmatrix[6] =   1.431187088245593E-017 ;
 rotmatrix[7] =   2.863826604371995E-003 ;
 rotmatrix[8] =   0.999995899240182      ;
 m = new TRotMatrix("mtx00046","mtx00046",rotmatrix);
 n = new TNode("NODE00046","NODE00046",s,  2.880758460626006E-016 ,
  0.678533263968986      ,   21.7505999892155      ,m);
 
 //cout<<          47 <<" BT2.QNO30               "<<endl;
 s = new TBRIK("RECTA00047","RECTA00047","void",0.5,0.5,  0.233002057967252     
 );
 s->SetLineColor(           4 );
 rotmatrix[0] =   6.133378002873395E-017 ;
 rotmatrix[1] =   0.999991438211455      ;
 rotmatrix[2] =  -4.138055556240773E-003 ;
 rotmatrix[3] =   -1.00000000000000      ;
 rotmatrix[4] =   6.139352731274381E-017 ;
 rotmatrix[5] =   1.431146701779926E-017 ;
 rotmatrix[6] =   1.456539431285860E-017 ;
 rotmatrix[7] =   4.138055556240773E-003 ;
 rotmatrix[8] =   0.999991438211455      ;
 m = new TRotMatrix("mtx00047","mtx00047",rotmatrix);
 n = new TNode("NODE00047","NODE00047",s,  2.957488787199672E-016 ,
  0.680353726791503      ,   22.2825999740997      ,m);
 
 //cout<<          48 <<" DRIFT_21                "<<endl;
 s = new TTUBE("DRIFT00048","DRIFT00048","void",  5.000000000000000E-002 ,
   1.53327365101637      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.626303258728256E-019 ;
 rotmatrix[2] =  -1.474514954580285E-017 ;
 rotmatrix[3] =   8.282309852488520E-020 ;
 rotmatrix[4] =   0.999985353517306      ;
 rotmatrix[5] =  -5.412277789234306E-003 ;
 rotmatrix[6] =   1.474581378172579E-017 ;
 rotmatrix[7] =   5.412277789234307E-003 ;
 rotmatrix[8] =   0.999985353517306      ;
 m = new TRotMatrix("mtx00048","mtx00048",rotmatrix);
 n = new TNode("NODE00048","NODE00048",s,  3.217520123858838E-016 ,
  0.689616404917385      ,   24.0488511680501      ,m);
 
 //cout<<          49 <<" BT.BPM30                "<<endl;
 s = new TTUBE("DRIFT00049","DRIFT00049","void",  5.000000000000000E-002 ,
  0.161000000000000      );
 s->SetLineColor(           6 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.626303258728256E-019 ;
 rotmatrix[2] =  -1.474514954580284E-017 ;
 rotmatrix[3] =   8.282309852488532E-020 ;
 rotmatrix[4] =   0.999985353517306      ;
 rotmatrix[5] =  -5.412277789234303E-003 ;
 rotmatrix[6] =   1.474581378172577E-017 ;
 rotmatrix[7] =   5.412277789234304E-003 ;
 rotmatrix[8] =   0.999985353517306      ;
 m = new TRotMatrix("mtx00049","mtx00049",rotmatrix);
 n = new TNode("NODE00049","NODE00049",s,  3.467354561390560E-016 ,
  0.698786284567666      ,   25.7431000039168      ,m);
 
 //cout<<          50 <<" DRIFT_22                "<<endl;
 s = new TTUBE("DRIFT00050","DRIFT00050","void",  5.000000000000000E-002 ,
  0.122004114999999      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.626303258728256E-019 ;
 rotmatrix[2] =  -1.474514954580282E-017 ;
 rotmatrix[3] =   8.282309852488543E-020 ;
 rotmatrix[4] =   0.999985353517306      ;
 rotmatrix[5] =  -5.412277789234300E-003 ;
 rotmatrix[6] =   1.474581378172576E-017 ;
 rotmatrix[7] =   5.412277789234300E-003 ;
 rotmatrix[8] =   0.999985353517306      ;
 m = new TRotMatrix("mtx00050","mtx00050",rotmatrix);
 n = new TNode("NODE00050","NODE00050",s,  3.509085821183080E-016 ,
  0.700317981453542      ,   26.0260999739019      ,m);
 
 //cout<<          51 <<" BT.BCT10                "<<endl;
 s = new TTUBE("DRIFT00051","DRIFT00051","void",  5.000000000000000E-002 ,
  0.157000000000000      );
 s->SetLineColor(           6 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.626303258728256E-019 ;
 rotmatrix[2] =  -1.474514954580281E-017 ;
 rotmatrix[3] =   8.282309852488555E-020 ;
 rotmatrix[4] =   0.999985353517306      ;
 rotmatrix[5] =  -5.412277789234296E-003 ;
 rotmatrix[6] =   1.474581378172575E-017 ;
 rotmatrix[7] =   5.412277789234297E-003 ;
 rotmatrix[8] =   0.999985353517306      ;
 m = new TRotMatrix("mtx00051","mtx00051",rotmatrix);
 n = new TNode("NODE00051","NODE00051",s,  3.550227248424332E-016 ,
  0.701828029228262      ,   26.3051000024730      ,m);
 
 //cout<<          52 <<" DRIFT_23                "<<endl;
 s = new TTUBE("DRIFT00052","DRIFT00052","void",  5.000000000000000E-002 ,
  0.107004309999999      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.626303258728256E-019 ;
 rotmatrix[2] =  -1.474514954580280E-017 ;
 rotmatrix[3] =   8.282309852488567E-020 ;
 rotmatrix[4] =   0.999985353517306      ;
 rotmatrix[5] =  -5.412277789234293E-003 ;
 rotmatrix[6] =   1.474581378172574E-017 ;
 rotmatrix[7] =   5.412277789234293E-003 ;
 rotmatrix[8] =   0.999985353517306      ;
 m = new TRotMatrix("mtx00052","mtx00052",rotmatrix);
 n = new TNode("NODE00052","NODE00052",s,  3.589156832352662E-016 ,
  0.703256893891537      ,   26.5691004457384      ,m);
 
 //cout<<          53 <<" BT.DVT50                "<<endl;
 s = new TBRIK("RECTA00053","RECTA00053","void",0.5,0.5,  0.218000000000000     
 );
 s->SetLineColor(          19 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.626303258728256E-019 ;
 rotmatrix[2] =  -1.474514954580279E-017 ;
 rotmatrix[3] =   8.282309852488579E-020 ;
 rotmatrix[4] =   0.999985353517306      ;
 rotmatrix[5] =  -5.412277789234289E-003 ;
 rotmatrix[6] =   1.474581378172572E-017 ;
 rotmatrix[7] =   5.412277789234290E-003 ;
 rotmatrix[8] =   0.999985353517306      ;
 m = new TRotMatrix("mtx00053","mtx00053",rotmatrix);
 n = new TNode("NODE00053","NODE00053",s,  3.637081362687844E-016 ,
  0.705015907499956      ,   26.8940999955684      ,m);
 
 //cout<<          54 <<" DRIFT_24                "<<endl;
 s = new TTUBE("DRIFT00054","DRIFT00054","void",  5.000000000000000E-002 ,
  0.387107270000000      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.626303258728256E-019 ;
 rotmatrix[2] =  -1.474514954580277E-017 ;
 rotmatrix[3] =   8.282309852488590E-020 ;
 rotmatrix[4] =   0.999985353517306      ;
 rotmatrix[5] =  -5.412277789234286E-003 ;
 rotmatrix[6] =   1.474581378172571E-017 ;
 rotmatrix[7] =   5.412277789234286E-003 ;
 rotmatrix[8] =   0.999985353517306      ;
 m = new TRotMatrix("mtx00054","mtx00054",rotmatrix);
 n = new TNode("NODE00054","NODE00054",s,  3.726309353901729E-016 ,
  0.708290916137481      ,   27.4991984028752      ,m);
 
 //cout<<          55 <<" BT.VGP23                "<<endl;
 
 //cout<<          56 <<" BT.VPG22                "<<endl;
 
 //cout<<          57 <<" DRIFT_25                "<<endl;
 s = new TTUBE("DRIFT00057","DRIFT00057","void",  5.000000000000000E-002 ,
  0.498157300946094      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.626303258728256E-019 ;
 rotmatrix[2] =  -1.474514954580274E-017 ;
 rotmatrix[3] =   8.282309852488626E-020 ;
 rotmatrix[4] =   0.999985353517306      ;
 rotmatrix[5] =  -5.412277789234275E-003 ;
 rotmatrix[6] =   1.474581378172568E-017 ;
 rotmatrix[7] =   5.412277789234276E-003 ;
 rotmatrix[8] =   0.999985353517306      ;
 m = new TRotMatrix("mtx00057","mtx00057",rotmatrix);
 n = new TNode("NODE00057","NODE00057",s,  3.856848819009032E-016 ,
  0.713082213912408      ,   28.3844500078091      ,m);
 
 //cout<<          58 <<" BT2.KFA20               "<<endl;
 s = new TBRIK("RECTA00058","RECTA00058","void",0.5,0.5,  0.780003808107813     
 );
 s->SetLineColor(           4 );
 rotmatrix[0] =   6.135808693963084E-017 ;
 rotmatrix[1] =   0.999996338372626      ;
 rotmatrix[2] =  -2.706148802525725E-003 ;
 rotmatrix[3] =   -1.00000000000000      ;
 rotmatrix[4] =   6.140056148243567E-017 ;
 rotmatrix[5] =   1.561248841477682E-017 ;
 rotmatrix[6] =   1.577859030359196E-017 ;
 rotmatrix[7] =   2.706148802525725E-003 ;
 rotmatrix[8] =   0.999996338372626      ;
 m = new TRotMatrix("mtx00058","mtx00058",rotmatrix);
 n = new TNode("NODE00058","NODE00058",s,  4.053379621963764E-016 ,
  0.717889183402811      ,   29.6626000125029      ,m);
 
 //cout<<          59 <<" DRIFT_26                "<<endl;
 s = new TTUBE("DRIFT00059","DRIFT00059","void",  5.000000000000000E-002 ,
  0.203749995946092      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.682215250679896E-019 ;
 rotmatrix[2] =  -1.561248841434759E-017 ;
 rotmatrix[3] =   1.682215250992134E-019 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   1.999926699941534E-012 ;
 rotmatrix[6] =   1.561248841434725E-017 ;
 rotmatrix[7] =  -1.999926699941534E-012 ;
 rotmatrix[8] =    1.00000000000000      ;
 m = new TRotMatrix("mtx00059","mtx00059",rotmatrix);
 n = new TNode("NODE00059","NODE00059",s,  4.208263521492230E-016 ,
  0.719999987197350      ,   30.6463500084490      ,m);
 
 //cout<<          60 <<" BT.BTV40                "<<endl;
 
 //cout<<          61 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00061","DRIFT00061","void",  5.000000000000000E-002 ,
  7.475000000000165E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.682215250679896E-019 ;
 rotmatrix[2] =  -1.561248841434759E-017 ;
 rotmatrix[3] =   1.682215250992134E-019 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   1.999926699941534E-012 ;
 rotmatrix[6] =   1.561248841434725E-017 ;
 rotmatrix[7] =  -1.999926699941534E-012 ;
 rotmatrix[8] =    1.00000000000000      ;
 m = new TRotMatrix("mtx00061","mtx00061",rotmatrix);
 n = new TNode("NODE00061","NODE00061",s,  4.251744301093272E-016 ,
  0.719999987196793      ,   30.9248500043951      ,m);
 
 //cout<<          62 <<" BT.DVT60                "<<endl;
 s = new TBRIK("RECTA00062","RECTA00062","void",0.5,0.5,  0.218000000000000     
 );
 s->SetLineColor(          19 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.682215250679896E-019 ;
 rotmatrix[2] =  -1.561248841434759E-017 ;
 rotmatrix[3] =   1.682215250992134E-019 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   1.999926699941534E-012 ;
 rotmatrix[6] =   1.561248841434725E-017 ;
 rotmatrix[7] =  -1.999926699941534E-012 ;
 rotmatrix[8] =    1.00000000000000      ;
 m = new TRotMatrix("mtx00062","mtx00062",rotmatrix);
 n = new TNode("NODE00062","NODE00062",s,  4.297449860926274E-016 ,
  0.719999987196208      ,   31.2176000043951      ,m);
 
 //cout<<          63 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00063","DRIFT00063","void",  5.000000000000000E-002 ,
  1.947499999999991E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.682215250679896E-019 ;
 rotmatrix[2] =  -1.561248841434759E-017 ;
 rotmatrix[3] =   1.682215250992134E-019 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   1.999926699941534E-012 ;
 rotmatrix[6] =   1.561248841434725E-017 ;
 rotmatrix[7] =  -1.999926699941534E-012 ;
 rotmatrix[8] =    1.00000000000000      ;
 m = new TRotMatrix("mtx00063","mtx00063",rotmatrix);
 n = new TNode("NODE00063","NODE00063",s,  4.334525617788244E-016 ,
  0.719999987195733      ,   31.4550750043951      ,m);
 
 //cout<<          64 <<" BT.QNO40                "<<endl;
 s = new TBRIK("RECTA00064","RECTA00064","void",0.5,0.5,  0.233050000000000     
 );
 s->SetLineColor(           2 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.682215250679896E-019 ;
 rotmatrix[2] =  -1.561248841434759E-017 ;
 rotmatrix[3] =   1.682215250992134E-019 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   1.999926699941534E-012 ;
 rotmatrix[6] =   1.561248841434725E-017 ;
 rotmatrix[7] =  -1.999926699941534E-012 ;
 rotmatrix[8] =    1.00000000000000      ;
 m = new TRotMatrix("mtx00064","mtx00064",rotmatrix);
 n = new TNode("NODE00064","NODE00064",s,  4.373951054156575E-016 ,
  0.719999987195228      ,   31.7076000043951      ,m);
 
 //cout<<          65 <<" DRIFT_29                "<<endl;
 s = new TTUBE("DRIFT00065","DRIFT00065","void",  5.000000000000000E-002 ,
  0.125974999999999      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.682215250679896E-019 ;
 rotmatrix[2] =  -1.561248841434759E-017 ;
 rotmatrix[3] =   1.682215250992134E-019 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   1.999926699941534E-012 ;
 rotmatrix[6] =   1.561248841434725E-017 ;
 rotmatrix[7] =  -1.999926699941534E-012 ;
 rotmatrix[8] =    1.00000000000000      ;
 m = new TRotMatrix("mtx00065","mtx00065",rotmatrix);
 n = new TNode("NODE00065","NODE00065",s,  4.430003790686185E-016 ,
  0.719999987194510      ,   32.0666250043951      ,m);
 
 //cout<<          66 <<" BT.BPM40                "<<endl;
 s = new TTUBE("DRIFT00066","DRIFT00066","void",  5.000000000000000E-002 ,
  9.250000000000000E-002 );
 s->SetLineColor(           6 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.682215250679896E-019 ;
 rotmatrix[2] =  -1.561248841434759E-017 ;
 rotmatrix[3] =   1.682215250992134E-019 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   1.999926699941534E-012 ;
 rotmatrix[6] =   1.561248841434725E-017 ;
 rotmatrix[7] =  -1.999926699941534E-012 ;
 rotmatrix[8] =    1.00000000000000      ;
 m = new TRotMatrix("mtx00066","mtx00066",rotmatrix);
 n = new TNode("NODE00066","NODE00066",s,  4.464113174749430E-016 ,
  0.719999987194073      ,   32.2851000043951      ,m);
 
 //cout<<          67 <<" DRIFT_30                "<<endl;
 s = new TTUBE("DRIFT00067","DRIFT00067","void",  5.000000000000000E-002 ,
  0.253000000000000      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.682215250679896E-019 ;
 rotmatrix[2] =  -1.561248841434759E-017 ;
 rotmatrix[3] =   1.682215250992134E-019 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   1.999926699941534E-012 ;
 rotmatrix[6] =   1.561248841434725E-017 ;
 rotmatrix[7] =  -1.999926699941534E-012 ;
 rotmatrix[8] =    1.00000000000000      ;
 m = new TRotMatrix("mtx00067","mtx00067",rotmatrix);
 n = new TNode("NODE00067","NODE00067",s,  4.518054322221000E-016 ,
  0.719999987193382      ,   32.6306000043951      ,m);
 
 //cout<<          68 <<" BT.QNO50                "<<endl;
 s = new TBRIK("RECTA00068","RECTA00068","void",0.5,0.5,  0.194000000000000     
 );
 s->SetLineColor(           3 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.682215250679896E-019 ;
 rotmatrix[2] =  -1.561248841434759E-017 ;
 rotmatrix[3] =   1.682215250992134E-019 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   1.999926699941534E-012 ;
 rotmatrix[6] =   1.561248841434725E-017 ;
 rotmatrix[7] =  -1.999926699941534E-012 ;
 rotmatrix[8] =    1.00000000000000      ;
 m = new TRotMatrix("mtx00068","mtx00068",rotmatrix);
 n = new TNode("NODE00068","NODE00068",s,  4.587842145433132E-016 ,
  0.719999987192488      ,   33.0776000043951      ,m);
 
 //cout<<          69 <<" DRIFT_31                "<<endl;
 s = new TTUBE("DRIFT00069","DRIFT00069","void",  5.000000000000000E-002 ,
  0.478867399999999      );
 s->SetLineColor(          18 );
 rotmatrix[0] =    1.00000000000000      ;
 rotmatrix[1] =  -1.682215250679896E-019 ;
 rotmatrix[2] =  -1.561248841434759E-017 ;
 rotmatrix[3] =   1.682215250992134E-019 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   1.999926699941534E-012 ;
 rotmatrix[6] =   1.561248841434725E-017 ;
 rotmatrix[7] =  -1.999926699941534E-012 ;
 rotmatrix[8] =    1.00000000000000      ;
 m = new TRotMatrix("mtx00069","mtx00069",rotmatrix);
 n = new TNode("NODE00069","NODE00069",s,  4.692893490302052E-016 ,
  0.719999987191142      ,   33.7504674043951      ,m);
 
 //cout<<          70 <<" BT1.END                 "<<endl;
 
 //cout<<          71 <<" BT1$END                 "<<endl;
 
 mn->Draw("ogl");
 TGLViewer * v = (TGLViewer *)c->GetViewer3D();
 
 }
