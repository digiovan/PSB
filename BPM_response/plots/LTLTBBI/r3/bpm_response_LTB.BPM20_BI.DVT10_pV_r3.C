{
//=========Macro generated from canvas: canvas_LTB.BPM20_V_3/
//=========  (Wed Apr  1 22:35:52 2015) by ROOT version5.34/21
   TCanvas *canvas_LTB.BPM20_V_3 = new TCanvas("canvas_LTB.BPM20_V_3", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LTB.BPM20_V_3->SetHighLightColor(2);
   canvas_LTB.BPM20_V_3->Range(-1050,2.198399,1050,2.629983);
   canvas_LTB.BPM20_V_3->SetFillColor(0);
   canvas_LTB.BPM20_V_3->SetBorderMode(0);
   canvas_LTB.BPM20_V_3->SetBorderSize(2);
   canvas_LTB.BPM20_V_3->SetGridx();
   canvas_LTB.BPM20_V_3->SetGridy();
   canvas_LTB.BPM20_V_3->SetFrameBorderMode(0);
   canvas_LTB.BPM20_V_3->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: BI.DVT10 Plane: V Ring: 3");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,2.35734);
   gre->SetPointError(0,0,0.08222171);
   gre->SetPoint(1,-500,2.35012);
   gre->SetPointError(1,0,0.07979062);
   gre->SetPoint(2,-300,2.41258);
   gre->SetPointError(2,0,0.08628008);
   gre->SetPoint(3,-100,2.43128);
   gre->SetPointError(3,0,0.05699402);
   gre->SetPoint(4,100,2.37202);
   gre->SetPointError(4,0,0.06461862);
   gre->SetPoint(5,300,2.5169);
   gre->SetPointError(5,0,0.01736701);
   gre->SetPoint(6,500,2.46212);
   gre->SetPointError(6,0,0.09593191);
   gre->SetPoint(7,700,2.42102);
   gre->SetPointError(7,0,0.03217406);
   
   TH1F *Graph_Graph35 = new TH1F("Graph_Graph35","Corr: BI.DVT10 Plane: V Ring: 3",100,-840,840);
   Graph_Graph35->SetMinimum(2.241557);
   Graph_Graph35->SetMaximum(2.586824);
   Graph_Graph35->SetDirectory(0);
   Graph_Graph35->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph35->SetLineColor(ci);
   Graph_Graph35->GetXaxis()->SetTitle("BI.DVT10, Kick [#murad]");
   Graph_Graph35->GetXaxis()->SetLabelFont(42);
   Graph_Graph35->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph35->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph35->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph35->GetXaxis()->SetTitleFont(42);
   Graph_Graph35->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph35->GetYaxis()->SetLabelFont(42);
   Graph_Graph35->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph35->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph35->GetYaxis()->SetTitleFont(42);
   Graph_Graph35->GetZaxis()->SetLabelFont(42);
   Graph_Graph35->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph35->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph35->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph35);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(15.34138);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,5.340883e-05);
   linear_fit->SetParError(0,4.419408e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,2.460484);
   linear_fit->SetParError(1,0.01836228);
   linear_fit->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(linear_fit);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.075,0.86,0.24,0.94,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","LTB.BPM20","lp");

   ci = TColor::GetColor("#0066cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("linear_fit","linear fit","l");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.2030474,0.9336861,0.7969526,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: BI.DVT10 Plane: V Ring: 3");
   pt->Draw();
   canvas_LTB.BPM20_V_3->Modified();
   canvas_LTB.BPM20_V_3->cd();
   canvas_LTB.BPM20_V_3->SetSelected(canvas_LTB.BPM20_V_3);
}
