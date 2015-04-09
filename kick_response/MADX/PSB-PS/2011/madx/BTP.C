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
 
 
 void BTP                                             ()
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
 
 
 c->Range(          -6 ,          -1 ,           1 ,          35 );
 
 
 //cout<<           1 <<" BTP$START               "<<endl;
 
 //cout<<           2 <<" BTP.BHZ10               "<<endl;
 s = new TBRIK("RECTA00002","RECTA00002","void",0.5,0.5,  0.769510000000000     
 );
 s->SetLineColor(           4 );
 rotmatrix[0] =   0.996914830286137      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   7.849089855240202E-002 ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -7.849089855240202E-002 ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.996914830286137      ;
 m = new TRotMatrix("mtx00002","mtx00002",rotmatrix);
 n = new TNode("NODE00002","NODE00002",s, -6.033740429184915E-002 ,
  0.000000000000000E+000 ,  0.766346853824800      ,m);
 
 //cout<<           3 <<" DRIFT_0                 "<<endl;
 s = new TTUBE("DRIFT00003","DRIFT00003","void",  5.000000000000000E-002 ,
  0.266939500000000      );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00003","mtx00003",rotmatrix);
 n = new TNode("NODE00003","NODE00003",s, -0.162450168078266      ,
  0.000000000000000E+000 ,   1.79634407461189      ,m);
 
 //cout<<           4 <<" BTP.STP                 "<<endl;
 s = new TTUBE("DRIFT00004","DRIFT00004","void",  5.000000000000000E-002 ,
  0.728500000000000      );
 s->SetLineColor(           6 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00004","mtx00004",rotmatrix);
 n = new TNode("NODE00004","NODE00004",s, -0.318233942932092      ,
  0.000000000000000E+000 ,   2.77951812515052      ,m);
 
 //cout<<           5 <<" DRIFT_1                 "<<endl;
 s = new TTUBE("DRIFT00005","DRIFT00005","void",  5.000000000000000E-002 ,
  0.230250000000000      );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00005","mtx00005",rotmatrix);
 n = new TNode("NODE00005","NODE00005",s, -0.468275903434068      ,
  0.000000000000000E+000 ,   3.72645475058473      ,m);
 
 //cout<<           6 <<" BTP.UES00               "<<endl;
 s = new TTUBE("DRIFT00006","DRIFT00006","void",  5.000000000000000E-002 ,
  9.250000000000000E-002 );
 s->SetLineColor(           6 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00006","mtx00006",rotmatrix);
 n = new TNode("NODE00006","NODE00006",s, -0.518785465626519      ,
  0.000000000000000E+000 ,   4.04522794052881      ,m);
 
 //cout<<           7 <<" DRIFT_2                 "<<endl;
 s = new TTUBE("DRIFT00007","DRIFT00007","void",  5.000000000000000E-002 ,
  0.222000000000000      );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00007","mtx00007",rotmatrix);
 n = new TNode("NODE00007","NODE00007",s, -0.568003923595615      ,
  0.000000000000000E+000 ,   4.35585278402196      ,m);
 
 //cout<<           8 <<" BTP.DHZ10               "<<endl;
 s = new TBRIK("RECTA00008","RECTA00008","void",0.5,0.5,  0.181000000000000     
 );
 s->SetLineColor(          19 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00008","mtx00008",rotmatrix);
 n = new TNode("NODE00008","NODE00008",s, -0.631072408687970      ,
  0.000000000000000E+000 ,   4.75388716217058      ,m);
 
 //cout<<           9 <<" DRIFT_3                 "<<endl;
 s = new TTUBE("DRIFT00009","DRIFT00009","void",  5.000000000000000E-002 ,
  5.900000000000016E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00009","mtx00009",rotmatrix);
 n = new TNode("NODE00009","NODE00009",s, -0.668631804276470      ,
  0.000000000000000E+000 ,   4.99092996801591      ,m);
 
 //cout<<          10 <<" BTP.DVT10               "<<endl;
 s = new TBRIK("RECTA00010","RECTA00010","void",0.5,0.5,  0.181000000000000     
 );
 s->SetLineColor(          19 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00010","mtx00010",rotmatrix);
 n = new TNode("NODE00010","NODE00010",s, -0.706191199864970      ,
  0.000000000000000E+000 ,   5.22797277386123      ,m);
 
 //cout<<          11 <<" DRIFT_4                 "<<endl;
 s = new TTUBE("DRIFT00011","DRIFT00011","void",  5.000000000000000E-002 ,
  0.352175000000000      );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00011","mtx00011",rotmatrix);
 n = new TNode("NODE00011","NODE00011",s, -0.789631744627046      ,
  0.000000000000000E+000 ,   5.75457818222200      ,m);
 
 //cout<<          12 <<" BTP.QNO10               "<<endl;
 s = new TBRIK("RECTA00012","RECTA00012","void",0.5,0.5,  0.200000000000000     
 );
 s->SetLineColor(          19 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00012","mtx00012",rotmatrix);
 n = new TNode("NODE00012","NODE00012",s, -0.876045741539878      ,
  0.000000000000000E+000 ,   6.29994947937885      ,m);
 
 //cout<<          13 <<" DRIFT_5                 "<<endl;
 s = new TTUBE("DRIFT00013","DRIFT00013","void",  5.000000000000000E-002 ,
   2.30000000000000      );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00013","mtx00013",rotmatrix);
 n = new TNode("NODE00013","NODE00013",s,  -1.26728944558675      ,
  0.000000000000000E+000 ,   8.76914537360104      ,m);
 
 //cout<<          14 <<" BTP.QNO20               "<<endl;
 s = new TBRIK("RECTA00014","RECTA00014","void",0.5,0.5,  0.200000000000000     
 );
 s->SetLineColor(           2 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00014","mtx00014",rotmatrix);
 n = new TNode("NODE00014","NODE00014",s,  -1.65853314963362      ,
  0.000000000000000E+000 ,   11.2383412678232      ,m);
 
 //cout<<          15 <<" DRIFT_6                 "<<endl;
 s = new TTUBE("DRIFT00015","DRIFT00015","void",  5.000000000000000E-002 ,
  0.115825000000001      );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00015","mtx00015",rotmatrix);
 n = new TNode("NODE00015","NODE00015",s,  -1.70795896676586      ,
  0.000000000000000E+000 ,   11.5502747851403      ,m);
 
 //cout<<          16 <<" BTP.DHZ20               "<<endl;
 s = new TBRIK("RECTA00016","RECTA00016","void",0.5,0.5,  0.181000000000000     
 );
 s->SetLineColor(          19 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00016","mtx00016",rotmatrix);
 n = new TNode("NODE00016","NODE00016",s,  -1.75441133174735      ,
  0.000000000000000E+000 ,   11.8434424136613      ,m);
 
 //cout<<          17 <<" DRIFT_7                 "<<endl;
 s = new TTUBE("DRIFT00017","DRIFT00017","void",  5.000000000000000E-002 ,
  0.104750000000001      );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00017","mtx00017",rotmatrix);
 n = new TNode("NODE00017","NODE00017",s,  -1.79913048711990      ,
  0.000000000000000E+000 ,   12.1256715043709      ,m);
 
 //cout<<          18 <<" BTP.UES10               "<<endl;
 s = new TTUBE("DRIFT00018","DRIFT00018","void",  5.000000000000000E-002 ,
  9.250000000000000E-002 );
 s->SetLineColor(           6 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00018","mtx00018",rotmatrix);
 n = new TNode("NODE00018","NODE00018",s,  -1.82999961536920      ,
  0.000000000000000E+000 ,   12.3204910604250      ,m);
 
 //cout<<          19 <<" DRIFT_8                 "<<endl;
 s = new TTUBE("DRIFT00019","DRIFT00019","void",  5.000000000000000E-002 ,
  0.271750000000001      );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00019","mtx00019",rotmatrix);
 n = new TNode("NODE00019","NODE00019",s,  -1.88700382304883      ,
  0.000000000000000E+000 ,   12.6802529022132      ,m);
 
 //cout<<          20 <<" BTP.DVT20               "<<endl;
 s = new TBRIK("RECTA00020","RECTA00020","void",0.5,0.5,  0.181000000000000     
 );
 s->SetLineColor(          19 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00020","mtx00020",rotmatrix);
 n = new TNode("NODE00020","NODE00020",s,  -1.95785805785172      ,
  0.000000000000000E+000 ,   13.1274242786568      ,m);
 
 //cout<<          21 <<" DRIFT_9                 "<<endl;
 s = new TTUBE("DRIFT00021","DRIFT00021","void",  5.000000000000000E-002 ,
  0.103175000000000      );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00021","mtx00021",rotmatrix);
 n = new TNode("NODE00021","NODE00021",s,  -2.00233072969073      ,
  0.000000000000000E+000 ,   13.4080977759531      ,m);
 
 //cout<<          22 <<" BTP.QNO30               "<<endl;
 s = new TBRIK("RECTA00022","RECTA00022","void",0.5,0.5,  0.200000000000000     
 );
 s->SetLineColor(           3 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00022","mtx00022",rotmatrix);
 n = new TNode("NODE00022","NODE00022",s,  -2.04977685368049      ,
  0.000000000000000E+000 ,   13.7075371620454      ,m);
 
 //cout<<          23 <<" DRIFT_10                "<<endl;
 s = new TTUBE("DRIFT00023","DRIFT00023","void",  5.000000000000000E-002 ,
  0.451325000000001      );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00023","mtx00023",rotmatrix);
 n = new TNode("NODE00023","NODE00023",s,  -2.15170757589582      ,
  0.000000000000000E+000 ,   14.3508367683671      ,m);
 
 //cout<<          24 <<" BTP.VPI11               "<<endl;
 
 //cout<<          25 <<" DRIFT_11                "<<endl;
 s = new TTUBE("DRIFT00025","DRIFT00025","void",  5.000000000000000E-002 ,
   1.99867500000000      );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00025","mtx00025",rotmatrix);
 n = new TNode("NODE00025","NODE00025",s,  -2.53512640586176      ,
  0.000000000000000E+000 ,   16.7706487447049      ,m);
 
 //cout<<          26 <<" BTP.QNO40               "<<endl;
 s = new TBRIK("RECTA00026","RECTA00026","void",0.5,0.5,  0.200000000000000     
 );
 s->SetLineColor(           2 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00026","mtx00026",rotmatrix);
 n = new TNode("NODE00026","NODE00026",s,  -2.87921350625986      ,
  0.000000000000000E+000 ,   18.9422324577964      ,m);
 
 //cout<<          27 <<" DRIFT_12                "<<endl;
 s = new TTUBE("DRIFT00027","DRIFT00027","void",  5.000000000000000E-002 ,
  9.182499999999827E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00027","mtx00027",rotmatrix);
 n = new TNode("NODE00027","NODE00027",s,  -2.92488338383325      ,
  0.000000000000000E+000 ,   19.2304616945290      ,m);
 
 //cout<<          28 <<" BTP.DHZ30               "<<endl;
 s = new TBRIK("RECTA00028","RECTA00028","void",0.5,0.5,  0.181000000000000     
 );
 s->SetLineColor(          19 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00028","mtx00028",rotmatrix);
 n = new TNode("NODE00028","NODE00028",s,  -2.96757980925589      ,
  0.000000000000000E+000 ,   19.4999250424655      ,m);
 
 //cout<<          29 <<" DRIFT_13                "<<endl;
 s = new TTUBE("DRIFT00029","DRIFT00029","void",  5.000000000000000E-002 ,
  0.122750000000000      );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00029","mtx00029",rotmatrix);
 n = new TNode("NODE00029","NODE00029",s,  -3.01511591929758      ,
  0.000000000000000E+000 ,   19.7999323436135      ,m);
 
 //cout<<          30 <<" BTP.UES20               "<<endl;
 
 //cout<<          31 <<" DRIFT_14                "<<endl;
 s = new TTUBE("DRIFT00031","DRIFT00031","void",  5.000000000000000E-002 ,
  0.313750000000001      );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00031","mtx00031",rotmatrix);
 n = new TNode("NODE00031","NODE00031",s,  -3.08342707002417      ,
  0.000000000000000E+000 ,   20.2310539467447      ,m);
 
 //cout<<          32 <<" BTP.DVT30               "<<endl;
 s = new TBRIK("RECTA00032","RECTA00032","void",0.5,0.5,  0.181000000000000     
 );
 s->SetLineColor(          19 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00032","mtx00032",rotmatrix);
 n = new TNode("NODE00032","NODE00032",s,  -3.16085419905504      ,
  0.000000000000000E+000 ,   20.7197078142112      ,m);
 
 //cout<<          33 <<" DRIFT_15                "<<endl;
 s = new TTUBE("DRIFT00033","DRIFT00033","void",  5.000000000000000E-002 ,
  0.154674999999999      );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00033","mtx00033",rotmatrix);
 n = new TNode("NODE00033","NODE00033",s,  -3.21338649119741      ,
  0.000000000000000E+000 ,   21.0512467469284      ,m);
 
 //cout<<          34 <<" BTP.QNO50               "<<endl;
 s = new TBRIK("RECTA00034","RECTA00034","void",0.5,0.5,  0.200000000000000     
 );
 s->SetLineColor(           3 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00034","mtx00034",rotmatrix);
 n = new TNode("NODE00034","NODE00034",s,  -3.26889223549054      ,
  0.000000000000000E+000 ,   21.4015515684417      ,m);
 
 //cout<<          35 <<" DRIFT_16                "<<endl;
 s = new TTUBE("DRIFT00035","DRIFT00035","void",  5.000000000000000E-002 ,
   1.68482500000000      );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00035","mtx00035",rotmatrix);
 n = new TNode("NODE00035","NODE00035",s,  -3.56386260128260      ,
  0.000000000000000E+000 ,   23.2631524289727      ,m);
 
 //cout<<          36 <<" BTP.VPI12               "<<endl;
 
 //cout<<          37 <<" DRIFT_17                "<<endl;
 s = new TTUBE("DRIFT00037","DRIFT00037","void",  5.000000000000000E-002 ,
  0.373300000000000      );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00037","mtx00037",rotmatrix);
 n = new TNode("NODE00037","NODE00037",s,  -3.88595398063919      ,
  0.000000000000000E+000 ,   25.2959179488911      ,m);
 
 //cout<<          38 <<" BTP.BCT10               "<<endl;
 s = new TTUBE("DRIFT00038","DRIFT00038","void",  5.000000000000000E-002 ,
  0.224400000000000      );
 s->SetLineColor(           6 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00038","mtx00038",rotmatrix);
 n = new TNode("NODE00038","NODE00038",s,  -3.97949252540271      ,
  0.000000000000000E+000 ,   25.8862533032817      ,m);
 
 //cout<<          39 <<" DRIFT_18                "<<endl;
 s = new TTUBE("DRIFT00039","DRIFT00039","void",  5.000000000000000E-002 ,
  7.329999999999970E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00039","mtx00039",rotmatrix);
 n = new TNode("NODE00039","NODE00039",s,  -4.02608182568062      ,
  0.000000000000000E+000 ,   26.1802851503657      ,m);
 
 //cout<<          40 <<" BTP.DVT40               "<<endl;
 s = new TBRIK("RECTA00040","RECTA00040","void",0.5,0.5,  0.181000000000000     
 );
 s->SetLineColor(          19 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00040","mtx00040",rotmatrix);
 n = new TNode("NODE00040","NODE00040",s,  -4.06587913525626      ,
  0.000000000000000E+000 ,   26.4314517567260      ,m);
 
 //cout<<          41 <<" DRIFT_19                "<<endl;
 s = new TTUBE("DRIFT00041","DRIFT00041","void",  5.000000000000000E-002 ,
  0.112675000000001      );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00041","mtx00041",rotmatrix);
 n = new TNode("NODE00041","NODE00041",s,  -4.11183853317065      ,
  0.000000000000000E+000 ,   26.7215081984203      ,m);
 
 //cout<<          42 <<" BTP.QNO60               "<<endl;
 s = new TBRIK("RECTA00042","RECTA00042","void",0.5,0.5,  0.200000000000000     
 );
 s->SetLineColor(           2 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00042","mtx00042",rotmatrix);
 n = new TNode("NODE00042","NODE00042",s,  -4.16077138323579      ,
  0.000000000000000E+000 ,   27.0303305289106      ,m);
 
 //cout<<          43 <<" DRIFT_20                "<<endl;
 s = new TTUBE("DRIFT00043","DRIFT00043","void",  5.000000000000000E-002 ,
  0.117574999999999      );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00043","mtx00043",rotmatrix);
 n = new TNode("NODE00043","NODE00043",s,  -4.21047107096086      ,
  0.000000000000000E+000 ,   27.3439924833537      ,m);
 
 //cout<<          44 <<" BTP.UES30               "<<endl;
 s = new TTUBE("DRIFT00044","DRIFT00044","void",  5.000000000000000E-002 ,
  9.250000000000000E-002 );
 s->SetLineColor(           6 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00044","mtx00044",rotmatrix);
 n = new TNode("NODE00044","NODE00044",s,  -4.24334727941192      ,
  0.000000000000000E+000 ,   27.5514790143452      ,m);
 
 //cout<<          45 <<" DRIFT_21                "<<endl;
 s = new TTUBE("DRIFT00045","DRIFT00045","void",  5.000000000000000E-002 ,
  0.189249999999999      );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00045","mtx00045",rotmatrix);
 n = new TNode("NODE00045","NODE00045",s,  -4.28744044485800      ,
  0.000000000000000E+000 ,   27.8297573916240      ,m);
 
 //cout<<          46 <<" BTP.MTV10               "<<endl;
 s = new TTUBE("DRIFT00046","DRIFT00046","void",  5.000000000000000E-002 ,
  0.135000000000000      );
 s->SetLineColor(           6 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00046","mtx00046",rotmatrix);
 n = new TNode("NODE00046","NODE00046",s,  -4.33818475327288      ,
  0.000000000000000E+000 ,   28.1500120991046      ,m);
 
 //cout<<          47 <<" DRIFT_22                "<<endl;
 s = new TTUBE("DRIFT00047","DRIFT00047","void",  5.000000000000000E-002 ,
  2.544999999999931E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00047","mtx00047",rotmatrix);
 n = new TNode("NODE00047","NODE00047",s,  -4.36329477419861      ,
  0.000000000000000E+000 ,   28.3084850915958      ,m);
 
 //cout<<          48 <<" BTP.VVS20               "<<endl;
 
 //cout<<          49 <<" DRIFT_23                "<<endl;
 s = new TTUBE("DRIFT00049","DRIFT00049","void",  5.000000000000000E-002 ,
  6.304999999999872E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00049","mtx00049",rotmatrix);
 n = new TNode("NODE00049","NODE00049",s,  -4.37714480132187      ,
  0.000000000000000E+000 ,   28.3958946262513      ,m);
 
 //cout<<          50 <<" BTP.DHZ40               "<<endl;
 s = new TBRIK("RECTA00050","RECTA00050","void",0.5,0.5,  0.146000000000000     
 );
 s->SetLineColor(          19 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00050","mtx00050",rotmatrix);
 n = new TNode("NODE00050","NODE00050",s,  -4.40986059985427      ,
  0.000000000000000E+000 ,   28.6023687869261      ,m);
 
 //cout<<          51 <<" DRIFT_24                "<<endl;
 s = new TTUBE("DRIFT00051","DRIFT00051","void",  5.000000000000000E-002 ,
  4.749999999999943E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00051","mtx00051",rotmatrix);
 n = new TNode("NODE00051","NODE00051",s,  -4.44014286254750      ,
  0.000000000000000E+000 ,   28.7934845491389      ,m);
 
 //cout<<          52 <<" BTP.DVT50               "<<endl;
 s = new TBRIK("RECTA00052","RECTA00052","void",0.5,0.5,  0.146000000000000     
 );
 s->SetLineColor(          19 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00052","mtx00052",rotmatrix);
 n = new TNode("NODE00052","NODE00052",s,  -4.47042512524072      ,
  0.000000000000000E+000 ,   28.9846003113517      ,m);
 
 //cout<<          53 <<" DRIFT_25                "<<endl;
 s = new TTUBE("DRIFT00053","DRIFT00053","void",  5.000000000000000E-002 ,
  2.250049999999959E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00053","mtx00053",rotmatrix);
 n = new TNode("NODE00053","NODE00053",s,  -4.49679502914223      ,
  0.000000000000000E+000 ,   29.1510246084615      ,m);
 
 //cout<<          54 <<" STRAY1                  "<<endl;
 
 //cout<<          55 <<" DRIFT_26                "<<endl;
 s = new TTUBE("DRIFT00055","DRIFT00055","void",  5.000000000000000E-002 ,
  1.050000000000040E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00055","mtx00055",rotmatrix);
 n = new TNode("NODE00055","NODE00055",s,  -4.50195952428438      ,
  0.000000000000000E+000 ,   29.1836184881044      ,m);
 
 //cout<<          56 <<" STRAY2                  "<<endl;
 
 //cout<<          57 <<" DRIFT_26                "<<endl;
 s = new TTUBE("DRIFT00057","DRIFT00057","void",  5.000000000000000E-002 ,
  1.050000000000040E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00057","mtx00057",rotmatrix);
 n = new TNode("NODE00057","NODE00057",s,  -4.50524597139838      ,
  0.000000000000000E+000 ,   29.2043597336158      ,m);
 
 //cout<<          58 <<" STRAY3                  "<<endl;
 
 //cout<<          59 <<" DRIFT_26                "<<endl;
 s = new TTUBE("DRIFT00059","DRIFT00059","void",  5.000000000000000E-002 ,
  1.050000000000040E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00059","mtx00059",rotmatrix);
 n = new TNode("NODE00059","NODE00059",s,  -4.50853241851237      ,
  0.000000000000000E+000 ,   29.2251009791273      ,m);
 
 //cout<<          60 <<" STRAY4                  "<<endl;
 
 //cout<<          61 <<" DRIFT_26                "<<endl;
 s = new TTUBE("DRIFT00061","DRIFT00061","void",  5.000000000000000E-002 ,
  1.050000000000040E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00061","mtx00061",rotmatrix);
 n = new TNode("NODE00061","NODE00061",s,  -4.51181886562636      ,
  0.000000000000000E+000 ,   29.2458422246388      ,m);
 
 //cout<<          62 <<" STRAY5                  "<<endl;
 
 //cout<<          63 <<" DRIFT_26                "<<endl;
 s = new TTUBE("DRIFT00063","DRIFT00063","void",  5.000000000000000E-002 ,
  1.050000000000040E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00063","mtx00063",rotmatrix);
 n = new TNode("NODE00063","NODE00063",s,  -4.51510531274036      ,
  0.000000000000000E+000 ,   29.2665834701502      ,m);
 
 //cout<<          64 <<" STRAY6                  "<<endl;
 
 //cout<<          65 <<" DRIFT_26                "<<endl;
 s = new TTUBE("DRIFT00065","DRIFT00065","void",  5.000000000000000E-002 ,
  1.050000000000040E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00065","mtx00065",rotmatrix);
 n = new TNode("NODE00065","NODE00065",s,  -4.51839175985435      ,
  0.000000000000000E+000 ,   29.2873247156617      ,m);
 
 //cout<<          66 <<" STRAY7                  "<<endl;
 
 //cout<<          67 <<" DRIFT_26                "<<endl;
 s = new TTUBE("DRIFT00067","DRIFT00067","void",  5.000000000000000E-002 ,
  1.050000000000040E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00067","mtx00067",rotmatrix);
 n = new TNode("NODE00067","NODE00067",s,  -4.52167820696834      ,
  0.000000000000000E+000 ,   29.3080659611732      ,m);
 
 //cout<<          68 <<" STRAY8                  "<<endl;
 
 //cout<<          69 <<" DRIFT_26                "<<endl;
 s = new TTUBE("DRIFT00069","DRIFT00069","void",  5.000000000000000E-002 ,
  1.050000000000040E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00069","mtx00069",rotmatrix);
 n = new TNode("NODE00069","NODE00069",s,  -4.52496465408234      ,
  0.000000000000000E+000 ,   29.3288072066846      ,m);
 
 //cout<<          70 <<" STRAY9                  "<<endl;
 
 //cout<<          71 <<" DRIFT_26                "<<endl;
 s = new TTUBE("DRIFT00071","DRIFT00071","void",  5.000000000000000E-002 ,
  1.050000000000040E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00071","mtx00071",rotmatrix);
 n = new TNode("NODE00071","NODE00071",s,  -4.52825110119633      ,
  0.000000000000000E+000 ,   29.3495484521961      ,m);
 
 //cout<<          72 <<" STRAY10                 "<<endl;
 
 //cout<<          73 <<" DRIFT_26                "<<endl;
 s = new TTUBE("DRIFT00073","DRIFT00073","void",  5.000000000000000E-002 ,
  1.050000000000040E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00073","mtx00073",rotmatrix);
 n = new TNode("NODE00073","NODE00073",s,  -4.53153754831032      ,
  0.000000000000000E+000 ,   29.3702896977076      ,m);
 
 //cout<<          74 <<" STRAY11                 "<<endl;
 
 //cout<<          75 <<" DRIFT_26                "<<endl;
 s = new TTUBE("DRIFT00075","DRIFT00075","void",  5.000000000000000E-002 ,
  1.050000000000040E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00075","mtx00075",rotmatrix);
 n = new TNode("NODE00075","NODE00075",s,  -4.53482399542431      ,
  0.000000000000000E+000 ,   29.3910309432190      ,m);
 
 //cout<<          76 <<" STRAY12                 "<<endl;
 
 //cout<<          77 <<" DRIFT_26                "<<endl;
 s = new TTUBE("DRIFT00077","DRIFT00077","void",  5.000000000000000E-002 ,
  1.050000000000040E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00077","mtx00077",rotmatrix);
 n = new TNode("NODE00077","NODE00077",s,  -4.53811044253831      ,
  0.000000000000000E+000 ,   29.4117721887305      ,m);
 
 //cout<<          78 <<" STRAY13                 "<<endl;
 
 //cout<<          79 <<" DRIFT_26                "<<endl;
 s = new TTUBE("DRIFT00079","DRIFT00079","void",  5.000000000000000E-002 ,
  1.050000000000040E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00079","mtx00079",rotmatrix);
 n = new TNode("NODE00079","NODE00079",s,  -4.54139688965230      ,
  0.000000000000000E+000 ,   29.4325134342420      ,m);
 
 //cout<<          80 <<" STRAY14                 "<<endl;
 
 //cout<<          81 <<" DRIFT_26                "<<endl;
 s = new TTUBE("DRIFT00081","DRIFT00081","void",  5.000000000000000E-002 ,
  1.050000000000040E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00081","mtx00081",rotmatrix);
 n = new TNode("NODE00081","NODE00081",s,  -4.54468333676629      ,
  0.000000000000000E+000 ,   29.4532546797534      ,m);
 
 //cout<<          82 <<" STRAY15                 "<<endl;
 
 //cout<<          83 <<" DRIFT_26                "<<endl;
 s = new TTUBE("DRIFT00083","DRIFT00083","void",  5.000000000000000E-002 ,
  1.050000000000040E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00083","mtx00083",rotmatrix);
 n = new TNode("NODE00083","NODE00083",s,  -4.54796978388029      ,
  0.000000000000000E+000 ,   29.4739959252649      ,m);
 
 //cout<<          84 <<" STRAY16                 "<<endl;
 
 //cout<<          85 <<" DRIFT_26                "<<endl;
 s = new TTUBE("DRIFT00085","DRIFT00085","void",  5.000000000000000E-002 ,
  1.050000000000040E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00085","mtx00085",rotmatrix);
 n = new TNode("NODE00085","NODE00085",s,  -4.55125623099428      ,
  0.000000000000000E+000 ,   29.4947371707764      ,m);
 
 //cout<<          86 <<" STRAY17                 "<<endl;
 
 //cout<<          87 <<" DRIFT_26                "<<endl;
 s = new TTUBE("DRIFT00087","DRIFT00087","void",  5.000000000000000E-002 ,
  1.050000000000040E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00087","mtx00087",rotmatrix);
 n = new TNode("NODE00087","NODE00087",s,  -4.55454267810827      ,
  0.000000000000000E+000 ,   29.5154784162878      ,m);
 
 //cout<<          88 <<" STRAY18                 "<<endl;
 
 //cout<<          89 <<" DRIFT_26                "<<endl;
 s = new TTUBE("DRIFT00089","DRIFT00089","void",  5.000000000000000E-002 ,
  1.050000000000040E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00089","mtx00089",rotmatrix);
 n = new TNode("NODE00089","NODE00089",s,  -4.55782912522227      ,
  0.000000000000000E+000 ,   29.5362196617993      ,m);
 
 //cout<<          90 <<" STRAY19                 "<<endl;
 
 //cout<<          91 <<" DRIFT_26                "<<endl;
 s = new TTUBE("DRIFT00091","DRIFT00091","void",  5.000000000000000E-002 ,
  1.050000000000040E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00091","mtx00091",rotmatrix);
 n = new TNode("NODE00091","NODE00091",s,  -4.56111557233626      ,
  0.000000000000000E+000 ,   29.5569609073108      ,m);
 
 //cout<<          92 <<" STRAY20                 "<<endl;
 
 //cout<<          93 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00093","DRIFT00093","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00093","mtx00093",rotmatrix);
 n = new TNode("NODE00093","NODE00093",s,  -4.56610784199990      ,
  0.000000000000000E+000 ,   29.5884678469210      ,m);
 
 //cout<<          94 <<" STRAY21                 "<<endl;
 
 //cout<<          95 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00095","DRIFT00095","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00095","mtx00095",rotmatrix);
 n = new TNode("NODE00095","NODE00095",s,  -4.57279810933910      ,
  0.000000000000000E+000 ,   29.6306910967122      ,m);
 
 //cout<<          96 <<" STRAY22                 "<<endl;
 
 //cout<<          97 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00097","DRIFT00097","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00097","mtx00097",rotmatrix);
 n = new TNode("NODE00097","NODE00097",s,  -4.57948837667830      ,
  0.000000000000000E+000 ,   29.6729143465034      ,m);
 
 //cout<<          98 <<" STRAY23                 "<<endl;
 
 //cout<<          99 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00099","DRIFT00099","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00099","mtx00099",rotmatrix);
 n = new TNode("NODE00099","NODE00099",s,  -4.58618646889158      ,
  0.000000000000000E+000 ,   29.7151869802125      ,m);
 
 //cout<<         100 <<" STRAY24                 "<<endl;
 
 //cout<<         101 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00101","DRIFT00101","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00101","mtx00101",rotmatrix);
 n = new TNode("NODE00101","NODE00101",s,  -4.59287673623079      ,
  0.000000000000000E+000 ,   29.7574102300037      ,m);
 
 //cout<<         102 <<" STRAY25                 "<<endl;
 
 //cout<<         103 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00103","DRIFT00103","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00103","mtx00103",rotmatrix);
 n = new TNode("NODE00103","NODE00103",s,  -4.59956700356999      ,
  0.000000000000000E+000 ,   29.7996334797949      ,m);
 
 //cout<<         104 <<" STRAY26                 "<<endl;
 
 //cout<<         105 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00105","DRIFT00105","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00105","mtx00105",rotmatrix);
 n = new TNode("NODE00105","NODE00105",s,  -4.60625727090919      ,
  0.000000000000000E+000 ,   29.8418567295861      ,m);
 
 //cout<<         106 <<" STRAY27                 "<<endl;
 
 //cout<<         107 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00107","DRIFT00107","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00107","mtx00107",rotmatrix);
 n = new TNode("NODE00107","NODE00107",s,  -4.61294753824839      ,
  0.000000000000000E+000 ,   29.8840799793773      ,m);
 
 //cout<<         108 <<" STRAY28                 "<<endl;
 
 //cout<<         109 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00109","DRIFT00109","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00109","mtx00109",rotmatrix);
 n = new TNode("NODE00109","NODE00109",s,  -4.61963780558759      ,
  0.000000000000000E+000 ,   29.9263032291685      ,m);
 
 //cout<<         110 <<" STRAY29                 "<<endl;
 
 //cout<<         111 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00111","DRIFT00111","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00111","mtx00111",rotmatrix);
 n = new TNode("NODE00111","NODE00111",s,  -4.62632807292680      ,
  0.000000000000000E+000 ,   29.9685264789597      ,m);
 
 //cout<<         112 <<" STRAY30                 "<<endl;
 
 //cout<<         113 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00113","DRIFT00113","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00113","mtx00113",rotmatrix);
 n = new TNode("NODE00113","NODE00113",s,  -4.63301834026600      ,
  0.000000000000000E+000 ,   30.0107497287509      ,m);
 
 //cout<<         114 <<" STRAY31                 "<<endl;
 
 //cout<<         115 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00115","DRIFT00115","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00115","mtx00115",rotmatrix);
 n = new TNode("NODE00115","NODE00115",s,  -4.63970078273112      ,
  0.000000000000000E+000 ,   30.0529235946243      ,m);
 
 //cout<<         116 <<" STRAY32                 "<<endl;
 
 //cout<<         117 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00117","DRIFT00117","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00117","mtx00117",rotmatrix);
 n = new TNode("NODE00117","NODE00117",s,  -4.64639105007032      ,
  0.000000000000000E+000 ,   30.0951468444155      ,m);
 
 //cout<<         118 <<" STRAY33                 "<<endl;
 
 //cout<<         119 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00119","DRIFT00119","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00119","mtx00119",rotmatrix);
 n = new TNode("NODE00119","NODE00119",s,  -4.65308131740953      ,
  0.000000000000000E+000 ,   30.1373700942067      ,m);
 
 //cout<<         120 <<" STRAY34                 "<<endl;
 
 //cout<<         121 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00121","DRIFT00121","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00121","mtx00121",rotmatrix);
 n = new TNode("NODE00121","NODE00121",s,  -4.65976375987465      ,
  0.000000000000000E+000 ,   30.1795439600800      ,m);
 
 //cout<<         122 <<" STRAY35                 "<<endl;
 
 //cout<<         123 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00123","DRIFT00123","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00123","mtx00123",rotmatrix);
 n = new TNode("NODE00123","NODE00123",s,  -4.66644620233977      ,
  0.000000000000000E+000 ,   30.2217178259533      ,m);
 
 //cout<<         124 <<" STRAY36                 "<<endl;
 
 //cout<<         125 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00125","DRIFT00125","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00125","mtx00125",rotmatrix);
 n = new TNode("NODE00125","NODE00125",s,  -4.67313646967897      ,
  0.000000000000000E+000 ,   30.2639410757445      ,m);
 
 //cout<<         126 <<" STRAY37                 "<<endl;
 
 //cout<<         127 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00127","DRIFT00127","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00127","mtx00127",rotmatrix);
 n = new TNode("NODE00127","NODE00127",s,  -4.67982673701817      ,
  0.000000000000000E+000 ,   30.3061643255357      ,m);
 
 //cout<<         128 <<" STRAY38                 "<<endl;
 
 //cout<<         129 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00129","DRIFT00129","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00129","mtx00129",rotmatrix);
 n = new TNode("NODE00129","NODE00129",s,  -4.68650917948330      ,
  0.000000000000000E+000 ,   30.3483381914090      ,m);
 
 //cout<<         130 <<" STRAY39                 "<<endl;
 
 //cout<<         131 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00131","DRIFT00131","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00131","mtx00131",rotmatrix);
 n = new TNode("NODE00131","NODE00131",s,  -4.69319162194842      ,
  0.000000000000000E+000 ,   30.3905120572824      ,m);
 
 //cout<<         132 <<" STRAY40                 "<<endl;
 
 //cout<<         133 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00133","DRIFT00133","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00133","mtx00133",rotmatrix);
 n = new TNode("NODE00133","NODE00133",s,  -4.69987406441354      ,
  0.000000000000000E+000 ,   30.4326859231557      ,m);
 
 //cout<<         134 <<" STRAY41                 "<<endl;
 
 //cout<<         135 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00135","DRIFT00135","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00135","mtx00135",rotmatrix);
 n = new TNode("NODE00135","NODE00135",s,  -4.70655650687866      ,
  0.000000000000000E+000 ,   30.4748597890290      ,m);
 
 //cout<<         136 <<" STRAY42                 "<<endl;
 
 //cout<<         137 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00137","DRIFT00137","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00137","mtx00137",rotmatrix);
 n = new TNode("NODE00137","NODE00137",s,  -4.71323894934378      ,
  0.000000000000000E+000 ,   30.5170336549023      ,m);
 
 //cout<<         138 <<" STRAY43                 "<<endl;
 
 //cout<<         139 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00139","DRIFT00139","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00139","mtx00139",rotmatrix);
 n = new TNode("NODE00139","NODE00139",s,  -4.71992139180891      ,
  0.000000000000000E+000 ,   30.5592075207757      ,m);
 
 //cout<<         140 <<" STRAY44                 "<<endl;
 
 //cout<<         141 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00141","DRIFT00141","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00141","mtx00141",rotmatrix);
 n = new TNode("NODE00141","NODE00141",s,  -4.72660383427403      ,
  0.000000000000000E+000 ,   30.6013813866490      ,m);
 
 //cout<<         142 <<" STRAY45                 "<<endl;
 
 //cout<<         143 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00143","DRIFT00143","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00143","mtx00143",rotmatrix);
 n = new TNode("NODE00143","NODE00143",s,  -4.73328627673915      ,
  0.000000000000000E+000 ,   30.6435552525223      ,m);
 
 //cout<<         144 <<" STRAY46                 "<<endl;
 
 //cout<<         145 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00145","DRIFT00145","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00145","mtx00145",rotmatrix);
 n = new TNode("NODE00145","NODE00145",s,  -4.73996871920427      ,
  0.000000000000000E+000 ,   30.6857291183956      ,m);
 
 //cout<<         146 <<" STRAY47                 "<<endl;
 
 //cout<<         147 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00147","DRIFT00147","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00147","mtx00147",rotmatrix);
 n = new TNode("NODE00147","NODE00147",s,  -4.74665116166939      ,
  0.000000000000000E+000 ,   30.7279029842690      ,m);
 
 //cout<<         148 <<" STRAY48                 "<<endl;
 
 //cout<<         149 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00149","DRIFT00149","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00149","mtx00149",rotmatrix);
 n = new TNode("NODE00149","NODE00149",s,  -4.75333360413452      ,
  0.000000000000000E+000 ,   30.7700768501423      ,m);
 
 //cout<<         150 <<" STRAY49                 "<<endl;
 
 //cout<<         151 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00151","DRIFT00151","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00151","mtx00151",rotmatrix);
 n = new TNode("NODE00151","NODE00151",s,  -4.76001604659964      ,
  0.000000000000000E+000 ,   30.8122507160156      ,m);
 
 //cout<<         152 <<" STRAY50                 "<<endl;
 
 //cout<<         153 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00153","DRIFT00153","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00153","mtx00153",rotmatrix);
 n = new TNode("NODE00153","NODE00153",s,  -4.76669848906476      ,
  0.000000000000000E+000 ,   30.8544245818889      ,m);
 
 //cout<<         154 <<" STRAY51                 "<<endl;
 
 //cout<<         155 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00155","DRIFT00155","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00155","mtx00155",rotmatrix);
 n = new TNode("NODE00155","NODE00155",s,  -4.77338093152988      ,
  0.000000000000000E+000 ,   30.8965984477623      ,m);
 
 //cout<<         156 <<" STRAY52                 "<<endl;
 
 //cout<<         157 <<" DRIFT_29                "<<endl;
 s = new TTUBE("DRIFT00157","DRIFT00157","void",  5.000000000000000E-002 ,
  2.130000000000365E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00157","mtx00157",rotmatrix);
 n = new TNode("NODE00157","NODE00157",s,  -4.78005554912092      ,
  0.000000000000000E+000 ,   30.9387229297177      ,m);
 
 //cout<<         158 <<" STRAY53                 "<<endl;
 
 //cout<<         159 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00159","DRIFT00159","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00159","mtx00159",rotmatrix);
 n = new TNode("NODE00159","NODE00159",s,  -4.78673016671196      ,
  0.000000000000000E+000 ,   30.9808474116731      ,m);
 
 //cout<<         160 <<" STRAY54                 "<<endl;
 
 //cout<<         161 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00161","DRIFT00161","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00161","mtx00161",rotmatrix);
 n = new TNode("NODE00161","NODE00161",s,  -4.79341260917708      ,
  0.000000000000000E+000 ,   31.0230212775464      ,m);
 
 //cout<<         162 <<" STRAY55                 "<<endl;
 
 //cout<<         163 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00163","DRIFT00163","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00163","mtx00163",rotmatrix);
 n = new TNode("NODE00163","NODE00163",s,  -4.80009505164221      ,
  0.000000000000000E+000 ,   31.0651951434198      ,m);
 
 //cout<<         164 <<" STRAY56                 "<<endl;
 
 //cout<<         165 <<" DRIFT_29                "<<endl;
 s = new TTUBE("DRIFT00165","DRIFT00165","void",  5.000000000000000E-002 ,
  2.130000000000365E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00165","mtx00165",rotmatrix);
 n = new TNode("NODE00165","NODE00165",s,  -4.80676966923325      ,
  0.000000000000000E+000 ,   31.1073196253752      ,m);
 
 //cout<<         166 <<" STRAY57                 "<<endl;
 
 //cout<<         167 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00167","DRIFT00167","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00167","mtx00167",rotmatrix);
 n = new TNode("NODE00167","NODE00167",s,  -4.81344428682429      ,
  0.000000000000000E+000 ,   31.1494441073306      ,m);
 
 //cout<<         168 <<" STRAY58                 "<<endl;
 
 //cout<<         169 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00169","DRIFT00169","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00169","mtx00169",rotmatrix);
 n = new TNode("NODE00169","NODE00169",s,  -4.82012672928941      ,
  0.000000000000000E+000 ,   31.1916179732040      ,m);
 
 //cout<<         170 <<" STRAY59                 "<<endl;
 
 //cout<<         171 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00171","DRIFT00171","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00171","mtx00171",rotmatrix);
 n = new TNode("NODE00171","NODE00171",s,  -4.82680917175453      ,
  0.000000000000000E+000 ,   31.2337918390773      ,m);
 
 //cout<<         172 <<" STRAY60                 "<<endl;
 
 //cout<<         173 <<" DRIFT_30                "<<endl;
 s = new TTUBE("DRIFT00173","DRIFT00173","void",  5.000000000000000E-002 ,
  1.095000000000113E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00173","mtx00173",rotmatrix);
 n = new TNode("NODE00173","NODE00173",s,  -4.83186404041082      ,
  0.000000000000000E+000 ,   31.2656938500306      ,m);
 
 //cout<<         174 <<" STRAY61                 "<<endl;
 
 //cout<<         175 <<" DRIFT_30                "<<endl;
 s = new TTUBE("DRIFT00175","DRIFT00175","void",  5.000000000000000E-002 ,
  1.095000000000113E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00175","mtx00175",rotmatrix);
 n = new TNode("NODE00175","NODE00175",s,  -4.83529133525827      ,
  0.000000000000000E+000 ,   31.2873240060640      ,m);
 
 //cout<<         176 <<" STRAY62                 "<<endl;
 
 //cout<<         177 <<" DRIFT_31                "<<endl;
 s = new TTUBE("DRIFT00177","DRIFT00177","void",  5.000000000000000E-002 ,
  1.099999999999568E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00177","mtx00177",rotmatrix);
 n = new TNode("NODE00177","NODE00177",s,  -4.83872645497980      ,
  0.000000000000000E+000 ,   31.3090035460153      ,m);
 
 //cout<<         178 <<" STRAY63                 "<<endl;
 
 //cout<<         179 <<" DRIFT_30                "<<endl;
 s = new TTUBE("DRIFT00179","DRIFT00179","void",  5.000000000000000E-002 ,
  1.095000000000113E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00179","mtx00179",rotmatrix);
 n = new TNode("NODE00179","NODE00179",s,  -4.84216157470133      ,
  0.000000000000000E+000 ,   31.3306830859666      ,m);
 
 //cout<<         180 <<" STRAY64                 "<<endl;
 
 //cout<<         181 <<" DRIFT_31                "<<endl;
 s = new TTUBE("DRIFT00181","DRIFT00181","void",  5.000000000000000E-002 ,
  1.099999999999568E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00181","mtx00181",rotmatrix);
 n = new TNode("NODE00181","NODE00181",s,  -4.84559669442286      ,
  0.000000000000000E+000 ,   31.3523626259178      ,m);
 
 //cout<<         182 <<" STRAY65                 "<<endl;
 
 //cout<<         183 <<" DRIFT_30                "<<endl;
 s = new TTUBE("DRIFT00183","DRIFT00183","void",  5.000000000000000E-002 ,
  1.095000000000113E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00183","mtx00183",rotmatrix);
 n = new TNode("NODE00183","NODE00183",s,  -4.84903181414439      ,
  0.000000000000000E+000 ,   31.3740421658691      ,m);
 
 //cout<<         184 <<" STRAY66                 "<<endl;
 
 //cout<<         185 <<" DRIFT_30                "<<endl;
 s = new TTUBE("DRIFT00185","DRIFT00185","void",  5.000000000000000E-002 ,
  1.095000000000113E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00185","mtx00185",rotmatrix);
 n = new TNode("NODE00185","NODE00185",s,  -4.85245910899185      ,
  0.000000000000000E+000 ,   31.3956723219025      ,m);
 
 //cout<<         186 <<" STRAY67                 "<<endl;
 
 //cout<<         187 <<" DRIFT_31                "<<endl;
 s = new TTUBE("DRIFT00187","DRIFT00187","void",  5.000000000000000E-002 ,
  1.099999999999568E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00187","mtx00187",rotmatrix);
 n = new TNode("NODE00187","NODE00187",s,  -4.85589422871338      ,
  0.000000000000000E+000 ,   31.4173518618538      ,m);
 
 //cout<<         188 <<" STRAY68                 "<<endl;
 
 //cout<<         189 <<" DRIFT_30                "<<endl;
 s = new TTUBE("DRIFT00189","DRIFT00189","void",  5.000000000000000E-002 ,
  1.095000000000113E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00189","mtx00189",rotmatrix);
 n = new TNode("NODE00189","NODE00189",s,  -4.85932934843491      ,
  0.000000000000000E+000 ,   31.4390314018050      ,m);
 
 //cout<<         190 <<" STRAY69                 "<<endl;
 
 //cout<<         191 <<" DRIFT_31                "<<endl;
 s = new TTUBE("DRIFT00191","DRIFT00191","void",  5.000000000000000E-002 ,
  1.099999999999568E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00191","mtx00191",rotmatrix);
 n = new TNode("NODE00191","NODE00191",s,  -4.86276446815644      ,
  0.000000000000000E+000 ,   31.4607109417563      ,m);
 
 //cout<<         192 <<" STRAY70                 "<<endl;
 
 //cout<<         193 <<" DRIFT_30                "<<endl;
 s = new TTUBE("DRIFT00193","DRIFT00193","void",  5.000000000000000E-002 ,
  1.095000000000113E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00193","mtx00193",rotmatrix);
 n = new TNode("NODE00193","NODE00193",s,  -4.86619958787797      ,
  0.000000000000000E+000 ,   31.4823904817076      ,m);
 
 //cout<<         194 <<" STRAY71                 "<<endl;
 
 //cout<<         195 <<" DRIFT_30                "<<endl;
 s = new TTUBE("DRIFT00195","DRIFT00195","void",  5.000000000000000E-002 ,
  1.095000000000113E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00195","mtx00195",rotmatrix);
 n = new TNode("NODE00195","NODE00195",s,  -4.86962688272542      ,
  0.000000000000000E+000 ,   31.5040206377410      ,m);
 
 //cout<<         196 <<" STRAY72                 "<<endl;
 
 //cout<<         197 <<" DRIFT_31                "<<endl;
 s = new TTUBE("DRIFT00197","DRIFT00197","void",  5.000000000000000E-002 ,
  1.099999999999568E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00197","mtx00197",rotmatrix);
 n = new TNode("NODE00197","NODE00197",s,  -4.87306200244695      ,
  0.000000000000000E+000 ,   31.5257001776922      ,m);
 
 //cout<<         198 <<" STRAY73                 "<<endl;
 
 //cout<<         199 <<" DRIFT_30                "<<endl;
 s = new TTUBE("DRIFT00199","DRIFT00199","void",  5.000000000000000E-002 ,
  1.095000000000113E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00199","mtx00199",rotmatrix);
 n = new TNode("NODE00199","NODE00199",s,  -4.87649712216848      ,
  0.000000000000000E+000 ,   31.5473797176435      ,m);
 
 //cout<<         200 <<" STRAY74                 "<<endl;
 
 //cout<<         201 <<" DRIFT_30                "<<endl;
 s = new TTUBE("DRIFT00201","DRIFT00201","void",  5.000000000000000E-002 ,
  1.095000000000113E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00201","mtx00201",rotmatrix);
 n = new TNode("NODE00201","NODE00201",s,  -4.87992441701594      ,
  0.000000000000000E+000 ,   31.5690098736769      ,m);
 
 //cout<<         202 <<" STRAY75                 "<<endl;
 
 //cout<<         203 <<" DRIFT_31                "<<endl;
 s = new TTUBE("DRIFT00203","DRIFT00203","void",  5.000000000000000E-002 ,
  1.099999999999568E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00203","mtx00203",rotmatrix);
 n = new TNode("NODE00203","NODE00203",s,  -4.88335953673747      ,
  0.000000000000000E+000 ,   31.5906894136282      ,m);
 
 //cout<<         204 <<" STRAY76                 "<<endl;
 
 //cout<<         205 <<" DRIFT_30                "<<endl;
 s = new TTUBE("DRIFT00205","DRIFT00205","void",  5.000000000000000E-002 ,
  1.095000000000113E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00205","mtx00205",rotmatrix);
 n = new TNode("NODE00205","NODE00205",s,  -4.88679465645900      ,
  0.000000000000000E+000 ,   31.6123689535794      ,m);
 
 //cout<<         206 <<" STRAY77                 "<<endl;
 
 //cout<<         207 <<" DRIFT_30                "<<endl;
 s = new TTUBE("DRIFT00207","DRIFT00207","void",  5.000000000000000E-002 ,
  1.095000000000113E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00207","mtx00207",rotmatrix);
 n = new TNode("NODE00207","NODE00207",s,  -4.89022195130645      ,
  0.000000000000000E+000 ,   31.6339991096128      ,m);
 
 //cout<<         208 <<" STRAY78                 "<<endl;
 
 //cout<<         209 <<" DRIFT_31                "<<endl;
 s = new TTUBE("DRIFT00209","DRIFT00209","void",  5.000000000000000E-002 ,
  1.099999999999568E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00209","mtx00209",rotmatrix);
 n = new TNode("NODE00209","NODE00209",s,  -4.89365707102798      ,
  0.000000000000000E+000 ,   31.6556786495641      ,m);
 
 //cout<<         210 <<" STRAY79                 "<<endl;
 
 //cout<<         211 <<" DRIFT_30                "<<endl;
 s = new TTUBE("DRIFT00211","DRIFT00211","void",  5.000000000000000E-002 ,
  1.095000000000113E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00211","mtx00211",rotmatrix);
 n = new TNode("NODE00211","NODE00211",s,  -4.89709219074951      ,
  0.000000000000000E+000 ,   31.6773581895153      ,m);
 
 //cout<<         212 <<" STRAY80                 "<<endl;
 
 //cout<<         213 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00213","DRIFT00213","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00213","mtx00213",rotmatrix);
 n = new TNode("NODE00213","NODE00213",s,  -4.90215488427988      ,
  0.000000000000000E+000 ,   31.7093095843866      ,m);
 
 //cout<<         214 <<" STRAY81                 "<<endl;
 
 //cout<<         215 <<" DRIFT_32                "<<endl;
 s = new TTUBE("DRIFT00215","DRIFT00215","void",  5.000000000000000E-002 ,
  2.145000000000152E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00215","mtx00215",rotmatrix);
 n = new TNode("NODE00215","NODE00215",s,  -4.90886080136724      ,
  0.000000000000000E+000 ,   31.7516316020136      ,m);
 
 //cout<<         216 <<" STRAY82                 "<<endl;
 
 //cout<<         217 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00217","DRIFT00217","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00217","mtx00217",rotmatrix);
 n = new TNode("NODE00217","NODE00217",s,  -4.91556671845461      ,
  0.000000000000000E+000 ,   31.7939536196405      ,m);
 
 //cout<<         218 <<" STRAY83                 "<<endl;
 
 //cout<<         219 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00219","DRIFT00219","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00219","mtx00219",rotmatrix);
 n = new TNode("NODE00219","NODE00219",s,  -4.92226481066789      ,
  0.000000000000000E+000 ,   31.8362262533496      ,m);
 
 //cout<<         220 <<" STRAY84                 "<<endl;
 
 //cout<<         221 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00221","DRIFT00221","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00221","mtx00221",rotmatrix);
 n = new TNode("NODE00221","NODE00221",s,  -4.92896290288117      ,
  0.000000000000000E+000 ,   31.8784988870587      ,m);
 
 //cout<<         222 <<" STRAY85                 "<<endl;
 
 //cout<<         223 <<" DRIFT_32                "<<endl;
 s = new TTUBE("DRIFT00223","DRIFT00223","void",  5.000000000000000E-002 ,
  2.145000000000152E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00223","mtx00223",rotmatrix);
 n = new TNode("NODE00223","NODE00223",s,  -4.93566881996853      ,
  0.000000000000000E+000 ,   31.9208209046857      ,m);
 
 //cout<<         224 <<" STRAY86                 "<<endl;
 
 //cout<<         225 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00225","DRIFT00225","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00225","mtx00225",rotmatrix);
 n = new TNode("NODE00225","NODE00225",s,  -4.94237473705590      ,
  0.000000000000000E+000 ,   31.9631429223126      ,m);
 
 //cout<<         226 <<" STRAY87                 "<<endl;
 
 //cout<<         227 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00227","DRIFT00227","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00227","mtx00227",rotmatrix);
 n = new TNode("NODE00227","NODE00227",s,  -4.94907282926918      ,
  0.000000000000000E+000 ,   32.0054155560217      ,m);
 
 //cout<<         228 <<" STRAY88                 "<<endl;
 
 //cout<<         229 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00229","DRIFT00229","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00229","mtx00229",rotmatrix);
 n = new TNode("NODE00229","NODE00229",s,  -4.95577092148246      ,
  0.000000000000000E+000 ,   32.0476881897308      ,m);
 
 //cout<<         230 <<" STRAY89                 "<<endl;
 
 //cout<<         231 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00231","DRIFT00231","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00231","mtx00231",rotmatrix);
 n = new TNode("NODE00231","NODE00231",s,  -4.96246901369574      ,
  0.000000000000000E+000 ,   32.0899608234399      ,m);
 
 //cout<<         232 <<" STRAY90                 "<<endl;
 
 //cout<<         233 <<" DRIFT_32                "<<endl;
 s = new TTUBE("DRIFT00233","DRIFT00233","void",  5.000000000000000E-002 ,
  2.145000000000152E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00233","mtx00233",rotmatrix);
 n = new TNode("NODE00233","NODE00233",s,  -4.96917493078311      ,
  0.000000000000000E+000 ,   32.1322828410669      ,m);
 
 //cout<<         234 <<" STRAY91                 "<<endl;
 
 //cout<<         235 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00235","DRIFT00235","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00235","mtx00235",rotmatrix);
 n = new TNode("NODE00235","NODE00235",s,  -4.97588084787047      ,
  0.000000000000000E+000 ,   32.1746048586938      ,m);
 
 //cout<<         236 <<" STRAY92                 "<<endl;
 
 //cout<<         237 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00237","DRIFT00237","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00237","mtx00237",rotmatrix);
 n = new TNode("NODE00237","NODE00237",s,  -4.98257894008375      ,
  0.000000000000000E+000 ,   32.2168774924029      ,m);
 
 //cout<<         238 <<" STRAY93                 "<<endl;
 
 //cout<<         239 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00239","DRIFT00239","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00239","mtx00239",rotmatrix);
 n = new TNode("NODE00239","NODE00239",s,  -4.98927703229704      ,
  0.000000000000000E+000 ,   32.2591501261120      ,m);
 
 //cout<<         240 <<" STRAY94                 "<<endl;
 
 //cout<<         241 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00241","DRIFT00241","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00241","mtx00241",rotmatrix);
 n = new TNode("NODE00241","NODE00241",s,  -4.99597512451032      ,
  0.000000000000000E+000 ,   32.3014227598211      ,m);
 
 //cout<<         242 <<" STRAY95                 "<<endl;
 
 //cout<<         243 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00243","DRIFT00243","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00243","mtx00243",rotmatrix);
 n = new TNode("NODE00243","NODE00243",s,  -5.00267321672360      ,
  0.000000000000000E+000 ,   32.3436953935302      ,m);
 
 //cout<<         244 <<" STRAY96                 "<<endl;
 
 //cout<<         245 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00245","DRIFT00245","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00245","mtx00245",rotmatrix);
 n = new TNode("NODE00245","NODE00245",s,  -5.00937130893688      ,
  0.000000000000000E+000 ,   32.3859680272393      ,m);
 
 //cout<<         246 <<" STRAY97                 "<<endl;
 
 //cout<<         247 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00247","DRIFT00247","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00247","mtx00247",rotmatrix);
 n = new TNode("NODE00247","NODE00247",s,  -5.01606940115017      ,
  0.000000000000000E+000 ,   32.4282406609484      ,m);
 
 //cout<<         248 <<" STRAY98                 "<<endl;
 
 //cout<<         249 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00249","DRIFT00249","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00249","mtx00249",rotmatrix);
 n = new TNode("NODE00249","NODE00249",s,  -5.02276749336345      ,
  0.000000000000000E+000 ,   32.4705132946575      ,m);
 
 //cout<<         250 <<" STRAY99                 "<<endl;
 
 //cout<<         251 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00251","DRIFT00251","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00251","mtx00251",rotmatrix);
 n = new TNode("NODE00251","NODE00251",s,  -5.02946558557673      ,
  0.000000000000000E+000 ,   32.5127859283665      ,m);
 
 //cout<<         252 <<" STRAY100                "<<endl;
 
 //cout<<         253 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00253","DRIFT00253","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00253","mtx00253",rotmatrix);
 n = new TNode("NODE00253","NODE00253",s,  -5.03616367779001      ,
  0.000000000000000E+000 ,   32.5550585620756      ,m);
 
 //cout<<         254 <<" STRAY101                "<<endl;
 
 //cout<<         255 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00255","DRIFT00255","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00255","mtx00255",rotmatrix);
 n = new TNode("NODE00255","NODE00255",s,  -5.04286177000330      ,
  0.000000000000000E+000 ,   32.5973311957847      ,m);
 
 //cout<<         256 <<" STRAY102                "<<endl;
 
 //cout<<         257 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00257","DRIFT00257","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00257","mtx00257",rotmatrix);
 n = new TNode("NODE00257","NODE00257",s,  -5.04955986221658      ,
  0.000000000000000E+000 ,   32.6396038294938      ,m);
 
 //cout<<         258 <<" STRAY103                "<<endl;
 
 //cout<<         259 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00259","DRIFT00259","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00259","mtx00259",rotmatrix);
 n = new TNode("NODE00259","NODE00259",s,  -5.05625795442986      ,
  0.000000000000000E+000 ,   32.6818764632029      ,m);
 
 //cout<<         260 <<" STRAY104                "<<endl;
 
 //cout<<         261 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00261","DRIFT00261","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00261","mtx00261",rotmatrix);
 n = new TNode("NODE00261","NODE00261",s,  -5.06294822176906      ,
  0.000000000000000E+000 ,   32.7240997129941      ,m);
 
 //cout<<         262 <<" STRAY105                "<<endl;
 
 //cout<<         263 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00263","DRIFT00263","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00263","mtx00263",rotmatrix);
 n = new TNode("NODE00263","NODE00263",s,  -5.06963848910827      ,
  0.000000000000000E+000 ,   32.7663229627853      ,m);
 
 //cout<<         264 <<" STRAY106                "<<endl;
 
 //cout<<         265 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00265","DRIFT00265","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00265","mtx00265",rotmatrix);
 n = new TNode("NODE00265","NODE00265",s,  -5.07633658132155      ,
  0.000000000000000E+000 ,   32.8085955964944      ,m);
 
 //cout<<         266 <<" STRAY107                "<<endl;
 
 //cout<<         267 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00267","DRIFT00267","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00267","mtx00267",rotmatrix);
 n = new TNode("NODE00267","NODE00267",s,  -5.08303467353483      ,
  0.000000000000000E+000 ,   32.8508682302035      ,m);
 
 //cout<<         268 <<" STRAY108                "<<endl;
 
 //cout<<         269 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00269","DRIFT00269","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00269","mtx00269",rotmatrix);
 n = new TNode("NODE00269","NODE00269",s,  -5.08973276574811      ,
  0.000000000000000E+000 ,   32.8931408639126      ,m);
 
 //cout<<         270 <<" STRAY109                "<<endl;
 
 //cout<<         271 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00271","DRIFT00271","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00271","mtx00271",rotmatrix);
 n = new TNode("NODE00271","NODE00271",s,  -5.09643085796140      ,
  0.000000000000000E+000 ,   32.9354134976217      ,m);
 
 //cout<<         272 <<" STRAY110                "<<endl;
 
 //cout<<         273 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00273","DRIFT00273","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00273","mtx00273",rotmatrix);
 n = new TNode("NODE00273","NODE00273",s,  -5.10312112530060      ,
  0.000000000000000E+000 ,   32.9776367474129      ,m);
 
 //cout<<         274 <<" STRAY111                "<<endl;
 
 //cout<<         275 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00275","DRIFT00275","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00275","mtx00275",rotmatrix);
 n = new TNode("NODE00275","NODE00275",s,  -5.10981139263980      ,
  0.000000000000000E+000 ,   33.0198599972041      ,m);
 
 //cout<<         276 <<" STRAY112                "<<endl;
 
 //cout<<         277 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00277","DRIFT00277","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00277","mtx00277",rotmatrix);
 n = new TNode("NODE00277","NODE00277",s,  -5.11650165997900      ,
  0.000000000000000E+000 ,   33.0620832469953      ,m);
 
 //cout<<         278 <<" STRAY113                "<<endl;
 
 //cout<<         279 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00279","DRIFT00279","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00279","mtx00279",rotmatrix);
 n = new TNode("NODE00279","NODE00279",s,  -5.12319192731820      ,
  0.000000000000000E+000 ,   33.1043064967865      ,m);
 
 //cout<<         280 <<" STRAY114                "<<endl;
 
 //cout<<         281 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00281","DRIFT00281","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00281","mtx00281",rotmatrix);
 n = new TNode("NODE00281","NODE00281",s,  -5.12989001953149      ,
  0.000000000000000E+000 ,   33.1465791304956      ,m);
 
 //cout<<         282 <<" STRAY115                "<<endl;
 
 //cout<<         283 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00283","DRIFT00283","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00283","mtx00283",rotmatrix);
 n = new TNode("NODE00283","NODE00283",s,  -5.13658028687069      ,
  0.000000000000000E+000 ,   33.1888023802868      ,m);
 
 //cout<<         284 <<" STRAY116                "<<endl;
 
 //cout<<         285 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00285","DRIFT00285","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00285","mtx00285",rotmatrix);
 n = new TNode("NODE00285","NODE00285",s,  -5.14327055420989      ,
  0.000000000000000E+000 ,   33.2310256300780      ,m);
 
 //cout<<         286 <<" STRAY117                "<<endl;
 
 //cout<<         287 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00287","DRIFT00287","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00287","mtx00287",rotmatrix);
 n = new TNode("NODE00287","NODE00287",s,  -5.14996864642317      ,
  0.000000000000000E+000 ,   33.2732982637871      ,m);
 
 //cout<<         288 <<" STRAY118                "<<endl;
 
 //cout<<         289 <<" DRIFT_28                "<<endl;
 s = new TTUBE("DRIFT00289","DRIFT00289","void",  5.000000000000000E-002 ,
  2.135000000000531E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00289","mtx00289",rotmatrix);
 n = new TNode("NODE00289","NODE00289",s,  -5.15665891376238      ,
  0.000000000000000E+000 ,   33.3155215135783      ,m);
 
 //cout<<         290 <<" STRAY119                "<<endl;
 
 //cout<<         291 <<" DRIFT_27                "<<endl;
 s = new TTUBE("DRIFT00291","DRIFT00291","void",  5.000000000000000E-002 ,
  2.139999999999986E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00291","mtx00291",rotmatrix);
 n = new TNode("NODE00291","NODE00291",s,  -5.16334918110158      ,
  0.000000000000000E+000 ,   33.3577447633695      ,m);
 
 //cout<<         292 <<" STRAY120                "<<endl;
 
 //cout<<         293 <<" DRIFT_33                "<<endl;
 s = new TTUBE("DRIFT00293","DRIFT00293","void",  5.000000000000000E-002 ,
  1.045000000000584E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00293","mtx00293",rotmatrix);
 n = new TNode("NODE00293","NODE00293",s,  -5.16833362589114      ,
  0.000000000000000E+000 ,   33.3892023190619      ,m);
 
 //cout<<         294 <<" STRAY121                "<<endl;
 
 //cout<<         295 <<" DRIFT_33                "<<endl;
 s = new TTUBE("DRIFT00295","DRIFT00295","void",  5.000000000000000E-002 ,
  1.045000000000584E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00295","mtx00295",rotmatrix);
 n = new TNode("NODE00295","NODE00295",s,  -5.17160442325697      ,
  0.000000000000000E+000 ,   33.4098447967376      ,m);
 
 //cout<<         296 <<" STRAY122                "<<endl;
 
 //cout<<         297 <<" DRIFT_33                "<<endl;
 s = new TTUBE("DRIFT00297","DRIFT00297","void",  5.000000000000000E-002 ,
  1.045000000000584E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00297","mtx00297",rotmatrix);
 n = new TNode("NODE00297","NODE00297",s,  -5.17487522062280      ,
  0.000000000000000E+000 ,   33.4304872744133      ,m);
 
 //cout<<         298 <<" STRAY123                "<<endl;
 
 //cout<<         299 <<" DRIFT_33                "<<endl;
 s = new TTUBE("DRIFT00299","DRIFT00299","void",  5.000000000000000E-002 ,
  1.045000000000584E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00299","mtx00299",rotmatrix);
 n = new TNode("NODE00299","NODE00299",s,  -5.17814601798864      ,
  0.000000000000000E+000 ,   33.4511297520890      ,m);
 
 //cout<<         300 <<" STRAY124                "<<endl;
 
 //cout<<         301 <<" DRIFT_33                "<<endl;
 s = new TTUBE("DRIFT00301","DRIFT00301","void",  5.000000000000000E-002 ,
  1.045000000000584E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00301","mtx00301",rotmatrix);
 n = new TNode("NODE00301","NODE00301",s,  -5.18141681535447      ,
  0.000000000000000E+000 ,   33.4717722297647      ,m);
 
 //cout<<         302 <<" STRAY125                "<<endl;
 
 //cout<<         303 <<" DRIFT_34                "<<endl;
 s = new TTUBE("DRIFT00303","DRIFT00303","void",  5.000000000000000E-002 ,
  1.040000000000418E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00303","mtx00303",rotmatrix);
 n = new TNode("NODE00303","NODE00303",s,  -5.18467978784623      ,
  0.000000000000000E+000 ,   33.4923653235226      ,m);
 
 //cout<<         304 <<" STRAY126                "<<endl;
 
 //cout<<         305 <<" DRIFT_33                "<<endl;
 s = new TTUBE("DRIFT00305","DRIFT00305","void",  5.000000000000000E-002 ,
  1.045000000000584E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00305","mtx00305",rotmatrix);
 n = new TNode("NODE00305","NODE00305",s,  -5.18794276033798      ,
  0.000000000000000E+000 ,   33.5129584172804      ,m);
 
 //cout<<         306 <<" STRAY127                "<<endl;
 
 //cout<<         307 <<" DRIFT_33                "<<endl;
 s = new TTUBE("DRIFT00307","DRIFT00307","void",  5.000000000000000E-002 ,
  1.045000000000584E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00307","mtx00307",rotmatrix);
 n = new TNode("NODE00307","NODE00307",s,  -5.19121355770381      ,
  0.000000000000000E+000 ,   33.5336008949561      ,m);
 
 //cout<<         308 <<" STRAY128                "<<endl;
 
 //cout<<         309 <<" DRIFT_33                "<<endl;
 s = new TTUBE("DRIFT00309","DRIFT00309","void",  5.000000000000000E-002 ,
  1.045000000000584E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00309","mtx00309",rotmatrix);
 n = new TNode("NODE00309","NODE00309",s,  -5.19448435506965      ,
  0.000000000000000E+000 ,   33.5542433726318      ,m);
 
 //cout<<         310 <<" STRAY129                "<<endl;
 
 //cout<<         311 <<" DRIFT_33                "<<endl;
 s = new TTUBE("DRIFT00311","DRIFT00311","void",  5.000000000000000E-002 ,
  1.045000000000584E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00311","mtx00311",rotmatrix);
 n = new TNode("NODE00311","NODE00311",s,  -5.19775515243548      ,
  0.000000000000000E+000 ,   33.5748858503075      ,m);
 
 //cout<<         312 <<" STRAY130                "<<endl;
 
 //cout<<         313 <<" DRIFT_35                "<<endl;
 s = new TTUBE("DRIFT00313","DRIFT00313","void",  5.000000000000000E-002 ,
  2.090000000000458E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00313","mtx00313",rotmatrix);
 n = new TNode("NODE00313","NODE00313",s,  -5.20266134848423      ,
  0.000000000000000E+000 ,   33.6058495668211      ,m);
 
 //cout<<         314 <<" STRAY131                "<<endl;
 
 //cout<<         315 <<" DRIFT_35                "<<endl;
 s = new TTUBE("DRIFT00315","DRIFT00315","void",  5.000000000000000E-002 ,
  2.090000000000458E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00315","mtx00315",rotmatrix);
 n = new TNode("NODE00315","NODE00315",s,  -5.20920294321590      ,
  0.000000000000000E+000 ,   33.6471345221725      ,m);
 
 //cout<<         316 <<" STRAY132                "<<endl;
 
 //cout<<         317 <<" DRIFT_36                "<<endl;
 s = new TTUBE("DRIFT00317","DRIFT00317","void",  5.000000000000000E-002 ,
  2.085000000000292E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00317","mtx00317",rotmatrix);
 n = new TNode("NODE00317","NODE00317",s,  -5.21573671307348      ,
  0.000000000000000E+000 ,   33.6883700936060      ,m);
 
 //cout<<         318 <<" STRAY133                "<<endl;
 
 //cout<<         319 <<" DRIFT_35                "<<endl;
 s = new TTUBE("DRIFT00319","DRIFT00319","void",  5.000000000000000E-002 ,
  2.090000000000458E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00319","mtx00319",rotmatrix);
 n = new TNode("NODE00319","NODE00319",s,  -5.22227048293107      ,
  0.000000000000000E+000 ,   33.7296056650395      ,m);
 
 //cout<<         320 <<" STRAY134                "<<endl;
 
 //cout<<         321 <<" DRIFT_35                "<<endl;
 s = new TTUBE("DRIFT00321","DRIFT00321","void",  5.000000000000000E-002 ,
  2.090000000000458E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00321","mtx00321",rotmatrix);
 n = new TNode("NODE00321","NODE00321",s,  -5.22881207766273      ,
  0.000000000000000E+000 ,   33.7708906203909      ,m);
 
 //cout<<         322 <<" STRAY135                "<<endl;
 
 //cout<<         323 <<" DRIFT_35                "<<endl;
 s = new TTUBE("DRIFT00323","DRIFT00323","void",  5.000000000000000E-002 ,
  2.090000000000458E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00323","mtx00323",rotmatrix);
 n = new TNode("NODE00323","NODE00323",s,  -5.23535367239440      ,
  0.000000000000000E+000 ,   33.8121755757423      ,m);
 
 //cout<<         324 <<" STRAY136                "<<endl;
 
 //cout<<         325 <<" DRIFT_35                "<<endl;
 s = new TTUBE("DRIFT00325","DRIFT00325","void",  5.000000000000000E-002 ,
  2.090000000000458E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00325","mtx00325",rotmatrix);
 n = new TNode("NODE00325","NODE00325",s,  -5.24189526712606      ,
  0.000000000000000E+000 ,   33.8534605310937      ,m);
 
 //cout<<         326 <<" STRAY137                "<<endl;
 
 //cout<<         327 <<" DRIFT_36                "<<endl;
 s = new TTUBE("DRIFT00327","DRIFT00327","void",  5.000000000000000E-002 ,
  2.085000000000292E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00327","mtx00327",rotmatrix);
 n = new TNode("NODE00327","NODE00327",s,  -5.24842903698365      ,
  0.000000000000000E+000 ,   33.8946961025272      ,m);
 
 //cout<<         328 <<" STRAY138                "<<endl;
 
 //cout<<         329 <<" DRIFT_35                "<<endl;
 s = new TTUBE("DRIFT00329","DRIFT00329","void",  5.000000000000000E-002 ,
  2.090000000000458E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00329","mtx00329",rotmatrix);
 n = new TNode("NODE00329","NODE00329",s,  -5.25496280684123      ,
  0.000000000000000E+000 ,   33.9359316739607      ,m);
 
 //cout<<         330 <<" STRAY139                "<<endl;
 
 //cout<<         331 <<" DRIFT_35                "<<endl;
 s = new TTUBE("DRIFT00331","DRIFT00331","void",  5.000000000000000E-002 ,
  2.090000000000458E-002 );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00331","mtx00331",rotmatrix);
 n = new TNode("NODE00331","NODE00331",s,  -5.26150440157289      ,
  0.000000000000000E+000 ,   33.9772166293121      ,m);
 
 //cout<<         332 <<" STRAY140                "<<endl;
 
 //cout<<         333 <<" DRIFT_37                "<<endl;
 s = new TTUBE("DRIFT00333","DRIFT00333","void",  5.000000000000000E-002 ,
  0.338051484500003      );
 s->SetLineColor(          18 );
 rotmatrix[0] =   0.987678357688873      ;
 rotmatrix[1] =   0.000000000000000E+000 ;
 rotmatrix[2] =   0.156497481618748      ;
 rotmatrix[3] =   0.000000000000000E+000 ;
 rotmatrix[4] =    1.00000000000000      ;
 rotmatrix[5] =   0.000000000000000E+000 ;
 rotmatrix[6] =  -0.156497481618748      ;
 rotmatrix[7] =   0.000000000000000E+000 ;
 rotmatrix[8] =   0.987678357688873      ;
 m = new TRotMatrix("mtx00333","mtx00333",rotmatrix);
 n = new TNode("NODE00333","NODE00333",s,  -5.31767940492046      ,
  0.000000000000000E+000 ,   34.3317452420131      ,m);
 
 //cout<<         334 <<" POINTS                  "<<endl;
 
 //cout<<         335 <<" BTP$END                 "<<endl;
 
 mn->Draw("ogl");
 TGLViewer * v = (TGLViewer *)c->GetViewer3D();
 
 }
