{
//=========Macro generated from canvas: canvas_BI.BPM30_V_4/
//=========  (Wed Apr  1 22:35:11 2015) by ROOT version5.34/21
   TCanvas *canvas_BI.BPM30_V_4 = new TCanvas("canvas_BI.BPM30_V_4", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI.BPM30_V_4->SetHighLightColor(2);
   canvas_BI.BPM30_V_4->Range(-1050,-30.60418,1050,25.98716);
   canvas_BI.BPM30_V_4->SetFillColor(0);
   canvas_BI.BPM30_V_4->SetBorderMode(0);
   canvas_BI.BPM30_V_4->SetBorderSize(2);
   canvas_BI.BPM30_V_4->SetGridx();
   canvas_BI.BPM30_V_4->SetGridy();
   canvas_BI.BPM30_V_4->SetFrameBorderMode(0);
   canvas_BI.BPM30_V_4->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LTB.DVT10 Plane: V Ring: 4");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-19.91112);
   gre->SetPointError(0,0,1.261171);
   gre->SetPoint(1,-500,-19.1316);
   gre->SetPointError(1,0,0.3849484);
   gre->SetPoint(2,-300,-11.5283);
   gre->SetPointError(2,0,0.1792623);
   gre->SetPoint(3,-100,-3.81488);
   gre->SetPointError(3,0,0.3205898);
   gre->SetPoint(4,100,4.48328);
   gre->SetPointError(4,0,0.1404341);
   gre->SetPoint(5,300,11.83594);
   gre->SetPointError(5,0,0.3358898);
   gre->SetPoint(6,500,13.7365);
   gre->SetPointError(6,0,1.598331);
   gre->SetPoint(7,700,16.35296);
   gre->SetPointError(7,0,0.2023134);
   
   TH1F *Graph_Graph54 = new TH1F("Graph_Graph54","Corr: LTB.DVT10 Plane: V Ring: 4",100,-840,840);
   Graph_Graph54->SetMinimum(-24.94505);
   Graph_Graph54->SetMaximum(20.32803);
   Graph_Graph54->SetDirectory(0);
   Graph_Graph54->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph54->SetLineColor(ci);
   Graph_Graph54->GetXaxis()->SetTitle("LTB.DVT10, Kick [#murad]");
   Graph_Graph54->GetXaxis()->SetLabelFont(42);
   Graph_Graph54->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph54->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph54->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph54->GetXaxis()->SetTitleFont(42);
   Graph_Graph54->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph54->GetYaxis()->SetLabelFont(42);
   Graph_Graph54->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph54->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph54->GetYaxis()->SetTitleFont(42);
   Graph_Graph54->GetZaxis()->SetLabelFont(42);
   Graph_Graph54->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph54->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph54->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph54);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(894.5056);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.02906052);
   linear_fit->SetParError(0,0.0002399346);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-0.884048);
   linear_fit->SetParError(1,0.08904891);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI.BPM30","lp");

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
   
   TPaveText *pt = new TPaveText(0.1847993,0.9336861,0.8152007,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LTB.DVT10 Plane: V Ring: 4");
   pt->Draw();
   canvas_BI.BPM30_V_4->Modified();
   canvas_BI.BPM30_V_4->cd();
   canvas_BI.BPM30_V_4->SetSelected(canvas_BI.BPM30_V_4);
}
