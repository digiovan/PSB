{
//=========Macro generated from canvas: canvas_LTB.BPM20_V_1/
//=========  (Wed Apr  1 22:35:49 2015) by ROOT version5.34/21
   TCanvas *canvas_LTB.BPM20_V_1 = new TCanvas("canvas_LTB.BPM20_V_1", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LTB.BPM20_V_1->SetHighLightColor(2);
   canvas_LTB.BPM20_V_1->Range(-1050,1.516322,1050,2.09256);
   canvas_LTB.BPM20_V_1->SetFillColor(0);
   canvas_LTB.BPM20_V_1->SetBorderMode(0);
   canvas_LTB.BPM20_V_1->SetBorderSize(2);
   canvas_LTB.BPM20_V_1->SetGridx();
   canvas_LTB.BPM20_V_1->SetGridy();
   canvas_LTB.BPM20_V_1->SetFrameBorderMode(0);
   canvas_LTB.BPM20_V_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: BI.DVT10 Plane: V Ring: 1");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,1.75906);
   gre->SetPointError(0,0,0.0435874);
   gre->SetPoint(1,-500,1.6719);
   gre->SetPointError(1,0,0.05377453);
   gre->SetPoint(2,-300,1.80658);
   gre->SetPointError(2,0,0.08042907);
   gre->SetPoint(3,-100,1.67958);
   gre->SetPointError(3,0,0.06721865);
   gre->SetPoint(4,100,1.87478);
   gre->SetPointError(4,0,0.08310607);
   gre->SetPoint(5,300,1.82252);
   gre->SetPointError(5,0,0.04738531);
   gre->SetPoint(6,500,1.74892);
   gre->SetPointError(6,0,0.05781961);
   gre->SetPoint(7,700,1.95446);
   gre->SetPointError(7,0,0.0420602);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Corr: BI.DVT10 Plane: V Ring: 1",100,-840,840);
   Graph_Graph7->SetMinimum(1.573945);
   Graph_Graph7->SetMaximum(2.034936);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph7->SetLineColor(ci);
   Graph_Graph7->GetXaxis()->SetTitle("BI.DVT10, Kick [#murad]");
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
   linear_fit->SetChisquare(12.51813);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.000129291);
   linear_fit->SetParError(0,3.648542e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,1.796527);
   linear_fit->SetParError(1,0.01926865);
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
   TText *text = pt->AddText("Corr: BI.DVT10 Plane: V Ring: 1");
   pt->Draw();
   canvas_LTB.BPM20_V_1->Modified();
   canvas_LTB.BPM20_V_1->cd();
   canvas_LTB.BPM20_V_1->SetSelected(canvas_LTB.BPM20_V_1);
}
