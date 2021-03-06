{
//=========Macro generated from canvas: c1/
//=========  (Tue Mar 31 15:19:15 2015) by ROOT version5.34/21
   TCanvas *c1 = new TCanvas("c1", "",0,20,1920,1025);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(-17.74317,-0.01,159.6885,0.01);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(26);
   gre->SetName("Graph0");
   gre->SetTitle("LT/LTB/BI Vertical Ecarts - Faisceaux - Theorique Bumpees");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,1.987315,0.00415);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,2.7862,0.003335);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,7.46629,0.00308);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,8.47002,0.00309);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,13.34911,0.00191);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,14.34386,0.00171);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,18.96816,0.000775);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,19.96541,0.000575);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,30.68048,-0.00069);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,34.82417,-0.001385);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,39.72032,-0.00216);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,46.73237,0.00025);
   gre->SetPointError(11,0,0);
   gre->SetPoint(12,50.12322,0.000925);
   gre->SetPointError(12,0,0);
   gre->SetPoint(13,58.30445,0.000835);
   gre->SetPointError(13,0,0);
   gre->SetPoint(14,59.30445,0.000815);
   gre->SetPointError(14,0,0);
   gre->SetPoint(15,69.04862,-0.00073);
   gre->SetPointError(15,0,0);
   gre->SetPoint(16,70.04038,-0.000705);
   gre->SetPointError(16,0,0);
   gre->SetPoint(17,79.59029,-0.00208);
   gre->SetPointError(17,0,0);
   gre->SetPoint(18,80.89107,-0.002375);
   gre->SetPointError(18,0,0);
   gre->SetPoint(19,96.33849,-0.001735);
   gre->SetPointError(19,0,0);
   gre->SetPoint(20,97.33886,-0.00178);
   gre->SetPointError(20,0,0);
   gre->SetPoint(21,106.6452,-0.00269);
   gre->SetPointError(21,0,0);
   gre->SetPoint(22,107.9424,-0.001765);
   gre->SetPointError(22,0,0);
   gre->SetPoint(23,122.5931,-0.000105);
   gre->SetPointError(23,0,0);
   gre->SetPoint(24,123.344,-0.000395);
   gre->SetPointError(24,0,0);
   gre->SetPoint(25,129.2219,0.000985);
   gre->SetPointError(25,0,0);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","LT/LTB/BI Vertical Ecarts - Faisceaux - Theorique Bumpees",100,0,141.9453);
   Graph_Graph1->SetMinimum(-0.008);
   Graph_Graph1->SetMaximum(0.008);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("mechanical position [m]");
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("vertical offset [m]");
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1);
   
   gre->Draw("al");
   
   gre = new TGraphErrors(26);
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
   gre->SetPoint(0,1.86972,0.00426);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,2.10491,0.00404);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,2.6686,0.00354);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,2.9038,0.00313);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,7.34869,0.0031);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,7.58389,0.00306);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,8.35242,0.00315);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,8.58762,0.00303);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,13.23151,0.00202);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,13.46671,0.0018);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,14.22626,0.00182);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,14.46146,0.0016);
   gre->SetPointError(11,0,0);
   gre->SetPoint(12,18.85056,0.00081);
   gre->SetPointError(12,0,0);
   gre->SetPoint(13,19.08576,0.00074);
   gre->SetPointError(13,0,0);
   gre->SetPoint(14,19.84781,0.00062);
   gre->SetPointError(14,0,0);
   gre->SetPoint(15,20.08301,0.00053);
   gre->SetPointError(15,0,0);
   gre->SetPoint(16,30.56288,-0.00066);
   gre->SetPointError(16,0,0);
   gre->SetPoint(17,30.79808,-0.00072);
   gre->SetPointError(17,0,0);
   gre->SetPoint(18,34.70657,-0.00139);
   gre->SetPointError(18,0,0);
   gre->SetPoint(19,34.94177,-0.00138);
   gre->SetPointError(19,0,0);
   gre->SetPoint(20,39.60272,-0.00228);
   gre->SetPointError(20,0,0);
   gre->SetPoint(21,39.83792,-0.00204);
   gre->SetPointError(21,0,0);
   gre->SetPoint(22,46.53237,0.00015);
   gre->SetPointError(22,0,0);
   gre->SetPoint(23,46.93237,0.00035);
   gre->SetPointError(23,0,0);
   gre->SetPoint(24,50.00562,0.00088);
   gre->SetPointError(24,0,0);
   gre->SetPoint(25,50.24082,0.00097);
   gre->SetPointError(25,0,0);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0,55.07793);
   Graph_Graph2->SetMinimum(-0.002934);
   Graph_Graph2->SetMaximum(0.004914);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph2);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(13);
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
   gre->SetPoint(0,1.987315,0.00415);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,2.7862,0.003335);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,7.46629,0.00308);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,8.47002,0.00309);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,13.34911,0.00191);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,14.34386,0.00171);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,18.96816,0.000775);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,19.96541,0.000575);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,30.68048,-0.00069);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,34.82417,-0.001385);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,39.72032,-0.00216);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,46.73237,0.00025);
   gre->SetPointError(11,0,0);
   gre->SetPoint(12,50.12322,0.000925);
   gre->SetPointError(12,0,0);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,0,54.93681);
   Graph_Graph3->SetMinimum(-0.002791);
   Graph_Graph3->SetMaximum(0.004781);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph3);
   
   gre->Draw("l");
   
   gre = new TGraphErrors(12);
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
   gre->SetPoint(0,58.18685,0.00085);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,58.42205,0.00082);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,59.18685,0.0008);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,59.42205,0.00083);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,68.84862,-0.00069);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,69.24862,-0.00077);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,69.84038,-0.00068);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,70.24038,-0.00073);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,79.39029,-0.00206);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,79.79029,-0.0021);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,80.69107,-0.00232);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,81.09107,-0.00243);
   gre->SetPointError(11,0,0);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,55.89643,83.38149);
   Graph_Graph4->SetMinimum(-0.002758);
   Graph_Graph4->SetMaximum(0.001178);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph4);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
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
   gre->SetPoint(0,58.30445,0.000835);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,59.30445,0.000815);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,69.04862,-0.00073);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,70.04038,-0.000705);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,79.59029,-0.00208);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,80.89107,-0.002375);
   gre->SetPointError(5,0,0);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,56.04579,83.14973);
   Graph_Graph5->SetMinimum(-0.002696);
   Graph_Graph5->SetMaximum(0.001156);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph5);
   
   gre->Draw("l");
   
   gre = new TGraphErrors(12);
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
   gre->SetPoint(0,96.13848,-0.0018);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,96.53849,-0.00167);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,97.13886,-0.00179);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,97.53886,-0.00177);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,106.4452,-0.00276);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,106.8452,-0.00262);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,107.7424,-0.00177);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,108.1424,-0.00176);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,122.3931,0);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,122.7931,-0.00021);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,123.144,-0.00016);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,123.544,-0.00063);
   gre->SetPointError(11,0,0);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,93.39793,126.2846);
   Graph_Graph6->SetMinimum(-0.003036);
   Graph_Graph6->SetMaximum(0.000276);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph6);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
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
   gre->SetPoint(0,96.33849,-0.001735);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,97.33886,-0.00178);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,106.6452,-0.00269);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,107.9424,-0.001765);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,122.5931,-0.000105);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,123.344,-0.000395);
   gre->SetPointError(5,0,0);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,93.63793,126.0446);
   Graph_Graph7->SetMinimum(-0.0029485);
   Graph_Graph7->SetMaximum(0.0001535);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph7->SetLineColor(ci);
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph7);
   
   gre->Draw("l");
   
   gre = new TGraphErrors(2);
   gre->SetName("Graph7");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineStyle(0);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,129.2219,0.00131);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,129.2219,0.00066);
   gre->SetPointError(1,0,0);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,129.1219,130.3219);
   Graph_Graph8->SetMinimum(0.000595);
   Graph_Graph8->SetMaximum(0.001375);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph8->SetLineColor(ci);
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph8);
   
   gre->Draw("p");
   TLatex *   tex = new TLatex(2.277907,0.004352227,"LT.QFN10");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(3.91228,0.00340081,"LT.QDN12");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(1.665017,0.002449393,"LT.QFN20");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(9.42829,0.003097166,"LT.QDN22");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(5.955246,0.001538462,"LT.QFN30");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(15.25074,0.001720648,"LT.QDN32");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(11.06266,0.0005870446,"LT.QFN40");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(20.35816,0.0007692308,"LT.QDN42");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(31.28803,-0.0006072875,"LT.QFN50");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(27.2021,-0.001740891,"LT.QDN55");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(38.74486,-0.002834008,"LT.QFN60");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(48.24466,-2.024292e-05,"LT.QFW70");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(48.7554,0.001194332,"LT.QDN75");

   ci = TColor::GetColor("#0066cc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(56.72297,0.001356275,"LTB.QFN10");

   ci = TColor::GetColor("#009900");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(61.2175,0.0008502025,"LTB.QDN20");

   ci = TColor::GetColor("#009900");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(62.34113,-0.001153846,"LTB.QFW30");

   ci = TColor::GetColor("#009900");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(71.12589,-0.0004655871,"LTB.QDW40");

   ci = TColor::GetColor("#009900");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(79.6042,-0.001720648,"LTB.QFW50");

   ci = TColor::GetColor("#009900");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(77.25479,-0.002834008,"LTB.QDW60");

   ci = TColor::GetColor("#009900");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(89.41044,-0.001417004,"BI.QNO10");

   ci = TColor::GetColor("#990000");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(98.29734,-0.001619433,"BI.QNO20");

   ci = TColor::GetColor("#990000");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(104.937,-0.003481781,"BI.QNO30");

   ci = TColor::GetColor("#990000");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(109.2272,-0.002226721,"BI.QNO40");

   ci = TColor::GetColor("#990000");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(116.684,0.0002834008,"BI.QNO50");

   ci = TColor::GetColor("#990000");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(124.8559,-0.0006680162,"BI.QNO60");

   ci = TColor::GetColor("#990000");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(129.3504,0.0008906883,"PSB.BRMB1620");
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
   
   gre = new TGraphErrors(14);
   gre->SetName("Graph8");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,1.358571,0.0005668016);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,17.08942,-0.001012146);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,20.97105,-0.003016194);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,33.94389,-0.002004049);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,52.43274,0.0008299595);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,60.40031,0.0007489879);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,67.65284,-0.000708502);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,81.95361,-0.00242915);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,89.71688,-0.002348178);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,95.13075,-0.002368421);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,104.3241,-0.002631579);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,107.2864,-0.00257085);
   gre->SetPointError(11,0,0);
   gre->SetPoint(12,124.243,-0.002145749);
   gre->SetPointError(12,0,0);
   gre->SetPoint(13,126.8989,-0.001882591);
   gre->SetPointError(13,0,0);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","Graph",100,0,139.4592);
   Graph_Graph9->SetMinimum(-0.003415);
   Graph_Graph9->SetMaximum(0.001205);
   Graph_Graph9->SetDirectory(0);
   Graph_Graph9->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph9->SetLineColor(ci);
   Graph_Graph9->GetXaxis()->SetLabelFont(42);
   Graph_Graph9->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetXaxis()->SetTitleFont(42);
   Graph_Graph9->GetYaxis()->SetLabelFont(42);
   Graph_Graph9->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetYaxis()->SetTitleFont(42);
   Graph_Graph9->GetZaxis()->SetLabelFont(42);
   Graph_Graph9->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph9);
   
   gre->Draw("p");
      tex = new TLatex(1.68926,-0.006,"LT.BPM10");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(17.46646,-0.006,"LT.BPM20");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(21.28577,-0.0055,"LT.BPM30");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(34.33365,-0.006,"LT.BPM40");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(52.80411,-0.006,"LT.BPM50");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(60.74875,-0.006,"LTB.BPM10");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(67.9627,-0.0055,"LTB.BPM20");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(82.34308,-0.006,"LTB.BPM30");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(90.05921,-0.0055,"BI.BPM00");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(95.52322,-0.006,"BI.BPM10");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(104.7187,-0.006,"BI.BPM20");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(107.594,-0.0055,"BI.BPM30");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(124.6393,-0.006,"BI.BPM40");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(127.2074,-0.0055,"BI.BPM50");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.015);
   tex->SetLineWidth(2);
   tex->Draw();
   TLine *line = new TLine(1.38926,-0.008,1.38926,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(17.16646,-0.008,17.16646,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(20.98577,-0.008,20.98577,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(34.03365,-0.008,34.03365,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(52.50411,-0.008,52.50411,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(60.44875,-0.008,60.44875,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(67.6627,-0.008,67.6627,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(82.04308,-0.008,82.04308,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(89.75921,-0.008,89.75921,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(95.22322,-0.008,95.22322,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(104.4187,-0.008,104.4187,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(107.294,-0.008,107.294,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(124.3393,-0.008,124.3393,0.008);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(126.9074,-0.008,126.9074,0.008);

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
   
   TPaveText *pt = new TPaveText(0.15,0.9356716,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("LT/LTB/BI Vertical Ecarts - Faisceaux - Theorique Bumpees");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
