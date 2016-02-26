void LT_LTB_BI_Offsets_Vertical_2016()
{
//=========Macro generated from canvas: c1/
//=========  (Fri Feb 26 14:22:52 2016) by ROOT version6.02/08
   TCanvas *c1 = new TCanvas("c1", "",4,29,1900,1021);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(-17.74317,-0.01,159.6885,0.01);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[26] = {
   1.987315,
   2.7862,
   7.46619,
   8.46992,
   13.34888,
   14.35363,
   18.9679,
   19.96515,
   30.68854,
   34.83638,
   39.73132,
   46.72771,
   50.12223,
   56.58132,
   57.58832,
   67.33099,
   68.32275,
   77.87266,
   79.17344,
   96.32748,
   97.32786,
   106.6121,
   107.9063,
   122.5766,
   123.3268,
   129.2219};
   Double_t Graph0_fy1001[26] = {
   0.00415,
   0.003335,
   0.00308,
   0.00309,
   0.00191,
   0.00171,
   0.000775,
   0.000575,
   -0.00069,
   -0.001385,
   -0.00216,
   0.00025,
   0.000925,
   0.000835,
   0.000815,
   -0.00073,
   -0.000705,
   -0.00208,
   -0.002375,
   -0.001735,
   -0.00178,
   -0.00269,
   -0.001765,
   -0.000105,
   -0.000395,
   0.000985};
   Double_t Graph0_fex1001[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(26,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("LT/LTB/BI Vertical Ecarts - Faisceaux - Theorique Bumpees");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","LT/LTB/BI Vertical Ecarts - Faisceaux - Theorique Bumpees",100,0,141.9453);
   Graph_Graph1001->SetMinimum(-0.008);
   Graph_Graph1001->SetMaximum(0.008);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("mechanical position [m]");
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("vertical offset [m]");
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("al");
   
   Double_t Graph1_fx1002[26] = {
   1.86972,
   2.10491,
   2.6587,
   2.9137,
   7.33869,
   7.59369,
   8.34242,
   8.59742,
   13.22138,
   13.47638,
   14.22613,
   14.48113,
   18.8404,
   19.0954,
   19.83765,
   20.09265,
   30.56105,
   30.81604,
   34.70888,
   34.96388,
   39.60383,
   39.85883,
   46.49671,
   46.95871,
   49.99473,
   50.24973};
   Double_t Graph1_fy1002[26] = {
   0.00426,
   0.00404,
   0.00354,
   0.00313,
   0.0031,
   0.00306,
   0.00315,
   0.00303,
   0.00202,
   0.0018,
   0.00182,
   0.0016,
   0.00081,
   0.00074,
   0.00062,
   0.00053,
   -0.00066,
   -0.00072,
   -0.00139,
   -0.00138,
   -0.00228,
   -0.00204,
   0.00015,
   0.00035,
   0.00088,
   0.00097};
   Double_t Graph1_fex1002[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1002[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(26,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineStyle(0);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,0,55.08773);
   Graph_Graph1002->SetMinimum(-0.002934);
   Graph_Graph1002->SetMaximum(0.004914);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("p");
   
   Double_t Graph2_fx1003[13] = {
   1.987315,
   2.7862,
   7.46619,
   8.46992,
   13.34888,
   14.35363,
   18.9679,
   19.96515,
   30.68854,
   34.83638,
   39.73132,
   46.72771,
   50.12223};
   Double_t Graph2_fy1003[13] = {
   0.00415,
   0.003335,
   0.00308,
   0.00309,
   0.00191,
   0.00171,
   0.000775,
   0.000575,
   -0.00069,
   -0.001385,
   -0.00216,
   0.00025,
   0.000925};
   Double_t Graph2_fex1003[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1003[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(13,Graph2_fx1003,Graph2_fy1003,Graph2_fex1003,Graph2_fey1003);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineStyle(0);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,0,54.93572);
   Graph_Graph1003->SetMinimum(-0.002791);
   Graph_Graph1003->SetMaximum(0.004781);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("l");
   
   Double_t Graph3_fx1004[12] = {
   56.45382,
   56.70882,
   57.46082,
   57.71582,
   67.10049,
   67.56149,
   68.09225,
   68.55325,
   77.64216,
   78.10316,
   78.94294,
   79.40394};
   Double_t Graph3_fy1004[12] = {
   0.00085,
   0.00082,
   0.0008,
   0.00083,
   -0.00069,
   -0.00077,
   -0.00068,
   -0.00073,
   -0.00206,
   -0.0021,
   -0.00232,
   -0.00243};
   Double_t Graph3_fex1004[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1004[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(12,Graph3_fx1004,Graph3_fy1004,Graph3_fex1004,Graph3_fey1004);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#009900");
   gre->SetLineColor(ci);
   gre->SetLineStyle(0);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,54.15881,81.69895);
   Graph_Graph1004->SetMinimum(-0.002758);
   Graph_Graph1004->SetMaximum(0.001178);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   gre->Draw("p");
   
   Double_t Graph4_fx1005[6] = {
   56.58132,
   57.58832,
   67.33099,
   68.32275,
   77.87266,
   79.17344};
   Double_t Graph4_fy1005[6] = {
   0.000835,
   0.000815,
   -0.00073,
   -0.000705,
   -0.00208,
   -0.002375};
   Double_t Graph4_fex1005[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph4_fey1005[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(6,Graph4_fx1005,Graph4_fy1005,Graph4_fex1005,Graph4_fey1005);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#009900");
   gre->SetLineColor(ci);
   gre->SetLineStyle(0);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","Graph",100,54.32211,81.43265);
   Graph_Graph1005->SetMinimum(-0.002696);
   Graph_Graph1005->SetMaximum(0.001156);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   gre->Draw("l");
   
   Double_t Graph5_fx1006[12] = {
   96.09648,
   96.55849,
   97.09686,
   97.55886,
   106.3811,
   106.8431,
   107.6753,
   108.1373,
   122.3436,
   122.8096,
   123.0938,
   123.5598};
   Double_t Graph5_fy1006[12] = {
   -0.0018,
   -0.00167,
   -0.00179,
   -0.00177,
   -0.00276,
   -0.00262,
   -0.00177,
   -0.00176,
   0,
   -0.00021,
   -0.00016,
   -0.00063};
   Double_t Graph5_fex1006[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph5_fey1006[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(12,Graph5_fx1006,Graph5_fy1006,Graph5_fex1006,Graph5_fey1006);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#990000");
   gre->SetLineColor(ci);
   gre->SetLineStyle(0);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#990000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","Graph",100,93.35015,126.3062);
   Graph_Graph1006->SetMinimum(-0.003036);
   Graph_Graph1006->SetMaximum(0.000276);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1006->SetLineColor(ci);
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);
   
   gre->Draw("p");
   
   Double_t Graph6_fx1007[6] = {
   96.32748,
   97.32786,
   106.6121,
   107.9063,
   122.5766,
   123.3268};
   Double_t Graph6_fy1007[6] = {
   -0.001735,
   -0.00178,
   -0.00269,
   -0.001765,
   -0.000105,
   -0.000395};
   Double_t Graph6_fex1007[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph6_fey1007[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(6,Graph6_fx1007,Graph6_fy1007,Graph6_fex1007,Graph6_fey1007);
   gre->SetName("Graph6");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#990000");
   gre->SetLineColor(ci);
   gre->SetLineStyle(0);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#990000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","Graph",100,93.62755,126.0268);
   Graph_Graph1007->SetMinimum(-0.0029485);
   Graph_Graph1007->SetMaximum(0.0001535);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
   gre->Draw("l");
   
   Double_t Graph7_fx1008[2] = {
   129.2219,
   129.2219};
   Double_t Graph7_fy1008[2] = {
   0.00131,
   0.00066};
   Double_t Graph7_fex1008[2] = {
   0,
   0};
   Double_t Graph7_fey1008[2] = {
   0,
   0};
   gre = new TGraphErrors(2,Graph7_fx1008,Graph7_fy1008,Graph7_fex1008,Graph7_fey1008);
   gre->SetName("Graph7");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineStyle(0);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1008 = new TH1F("Graph_Graph1008","Graph",100,129.1219,130.3219);
   Graph_Graph1008->SetMinimum(0.000595);
   Graph_Graph1008->SetMaximum(0.001375);
   Graph_Graph1008->SetDirectory(0);
   Graph_Graph1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1008->SetLineColor(ci);
   Graph_Graph1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph1008->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph1008->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1008);
   
   gre->Draw("p");
   TLatex *   tex = new TLatex(3.987315,0.00415,"LT.QFN10");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.3181781,0.002683417,"LT.QDN12");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(6.307433,0.003547739,"LT.QFN20");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(9.30206,0.002984925,"LT.QDN22");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(14.26191,0.002120603,"LT.QFN30");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(15.29131,0.00161809,"LT.QDN32");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(18.47311,0.0009547739,"LT.QFN40");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(21.18699,0.0004522613,"LT.QDN42");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(30.07729,-0.0003718593,"LT.QFN50");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(35.03714,-0.001175879,"LT.QDN55");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(41.30714,-0.002341709,"LT.QFN60");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(47.85789,0.0001306533,"LT.QFW70");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(44.48893,0.001175879,"LT.QDN75");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(54.87654,0.00121608,"LTB.QFN10");

   ci = TColor::GetColor("#009900");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(58.52624,0.0005929648,"LTB.QDN20");

   ci = TColor::GetColor("#009900");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(66.01281,-0.0002311558,"LTB.QFW30");

   ci = TColor::GetColor("#009900");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(69.7561,-0.0009145729,"LTB.QDW40");

   ci = TColor::GetColor("#009900");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(76.96192,-0.001658291,"LTB.QFW50");

   ci = TColor::GetColor("#009900");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(78.0849,-0.002864322,"LTB.QDW60");

   ci = TColor::GetColor("#009900");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(91.27998,-0.001477387,"BI.QNO10");

   ci = TColor::GetColor("#990000");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(97.73714,-0.001658291,"BI.QNO20");

   ci = TColor::GetColor("#990000");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(108.6121,-0.00269,"BI.QNO30");

   ci = TColor::GetColor("#990000");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(109.2477,-0.0019799,"BI.QNO40");

   ci = TColor::GetColor("#990000");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(118.0445,0.0002512563,"BI.QNO50");

   ci = TColor::GetColor("#990000");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(124.9695,-0.0007939699,"BI.QNO60");

   ci = TColor::GetColor("#990000");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(131.2219,0.000985,"PSB.BRMB1620");
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t Graph8_fx1009[14] = {
   1.393855,
   17.17622,
   20.99014,
   34.05046,
   52.50181,
   58.73026,
   65.94507,
   80.33016,
   89.76386,
   95.22779,
   104.4166,
   107.2773,
   124.3227,
   126.8928};
   Double_t Graph8_fy1009[14] = {
   0.00055,
   -0.00102,
   -0.00304,
   -0.00202,
   0.00082,
   0.00073,
   -0.00072,
   -0.00245,
   -0.00235,
   -0.00237,
   -0.002645,
   -0.00259,
   -0.00021,
   -0.00178};
   Double_t Graph8_fex1009[14] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph8_fey1009[14] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(14,Graph8_fx1009,Graph8_fy1009,Graph8_fex1009,Graph8_fey1009);
   gre->SetName("Graph8");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","Graph",100,0,139.4427);
   Graph_Graph1009->SetMinimum(-0.003426);
   Graph_Graph1009->SetMaximum(0.001206);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
   gre->Draw("p");
      tex = new TLatex(1.693855,-0.006,"LT.BPM10");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(17.47622,-0.006,"LT.BPM20");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(21.29014,-0.0055,"LT.BPM30");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(34.35046,-0.006,"LT.BPM40");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(52.80181,-0.006,"LT.BPM50");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(59.03026,-0.006,"LTB.BPM10");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(66.24507,-0.0055,"LTB.BPM20");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(80.63016,-0.006,"LTB.BPM30");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(90.06386,-0.0055,"BI.BPM00");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(95.52779,-0.006,"BI.BPM10");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(104.7166,-0.006,"BI.BPM20");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(107.5773,-0.0055,"BI.BPM30");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(124.6227,-0.006,"BI.BPM40");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(127.1928,-0.0055,"BI.BPM50");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
   TLine *line = new TLine(1.393855,-0.008,1.393855,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(17.17622,-0.008,17.17622,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(20.99014,-0.008,20.99014,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(34.05046,-0.008,34.05046,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(52.50181,-0.008,52.50181,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(58.73026,-0.008,58.73026,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(65.94507,-0.008,65.94507,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(80.33016,-0.008,80.33016,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(89.76386,-0.008,89.76386,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(95.22779,-0.008,95.22779,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(104.4166,-0.008,104.4166,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(107.2773,-0.008,107.2773,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(124.3227,-0.008,124.3227,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(126.8928,-0.008,126.8928,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TLegend *leg = new TLegend(0.13,0.78,0.33,0.93,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.015);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph1"," LT Line Offsets","l");

   ci = TColor::GetColor("#0066cc");
   entry->SetLineColor(ci);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","LTB Line Offsets","l");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph5"," BI Line Offsets","l");

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph8"," BPM Offsets (Middle Points)","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.15,0.9357821,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("LT/LTB/BI Vertical Ecarts - Faisceaux - Theorique Bumpees");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
