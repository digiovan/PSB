{
//=========Macro generated from canvas: canvas_LTB.BPM20_V_1/
//=========  (Wed Apr  1 22:36:00 2015) by ROOT version5.34/21
   TCanvas *canvas_LTB.BPM20_V_1 = new TCanvas("canvas_LTB.BPM20_V_1", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LTB.BPM20_V_1->SetHighLightColor(2);
   canvas_LTB.BPM20_V_1->Range(-1050,1.367911,1050,2.144647);
   canvas_LTB.BPM20_V_1->SetFillColor(0);
   canvas_LTB.BPM20_V_1->SetBorderMode(0);
   canvas_LTB.BPM20_V_1->SetBorderSize(2);
   canvas_LTB.BPM20_V_1->SetGridx();
   canvas_LTB.BPM20_V_1->SetGridy();
   canvas_LTB.BPM20_V_1->SetFrameBorderMode(0);
   canvas_LTB.BPM20_V_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: BI.DVT20 Plane: V Ring: 1");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,1.56506);
   gre->SetPointError(0,0,0.0676931);
   gre->SetPoint(1,-500,1.87522);
   gre->SetPointError(1,0,0.06340164);
   gre->SetPoint(2,-300,1.675);
   gre->SetPointError(2,0,0.06265641);
   gre->SetPoint(3,-100,1.88346);
   gre->SetPointError(3,0,0.1317309);
   gre->SetPoint(4,100,1.80884);
   gre->SetPointError(4,0,0.03877754);
   gre->SetPoint(5,300,1.79338);
   gre->SetPointError(5,0,0.03823513);
   gre->SetPoint(6,500,1.83618);
   gre->SetPointError(6,0,0.1040503);
   gre->SetPoint(7,700,1.79862);
   gre->SetPointError(7,0,0.01704599);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Corr: BI.DVT20 Plane: V Ring: 1",100,-840,840);
   Graph_Graph7->SetMinimum(1.445584);
   Graph_Graph7->SetMaximum(2.066973);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph7->SetLineColor(ci);
   Graph_Graph7->GetXaxis()->SetTitle("BI.DVT20, Kick [#murad]");
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph7);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(13.96966);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,5.929008e-05);
   linear_fit->SetParError(0,3.193935e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,1.764674);
   linear_fit->SetParError(1,0.01884057);
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
   
   TPaveText *pt = new TPaveText(0.2057847,0.9336861,0.7942153,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: BI.DVT20 Plane: V Ring: 1");
   pt->Draw();
   canvas_LTB.BPM20_V_1->Modified();
   canvas_LTB.BPM20_V_1->cd();
   canvas_LTB.BPM20_V_1->SetSelected(canvas_LTB.BPM20_V_1);
}
