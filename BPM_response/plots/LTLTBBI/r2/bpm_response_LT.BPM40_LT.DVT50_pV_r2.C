{
//=========Macro generated from canvas: canvas_LT.BPM40_V_2/
//=========  (Wed Apr  1 22:34:58 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM40_V_2 = new TCanvas("canvas_LT.BPM40_V_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM40_V_2->SetHighLightColor(2);
   canvas_LT.BPM40_V_2->Range(-1050,-7.239597,1050,-6.719506);
   canvas_LT.BPM40_V_2->SetFillColor(0);
   canvas_LT.BPM40_V_2->SetBorderMode(0);
   canvas_LT.BPM40_V_2->SetBorderSize(2);
   canvas_LT.BPM40_V_2->SetGridx();
   canvas_LT.BPM40_V_2->SetGridy();
   canvas_LT.BPM40_V_2->SetFrameBorderMode(0);
   canvas_LT.BPM40_V_2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DVT50 Plane: V Ring: 2");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-6.93768);
   gre->SetPointError(0,0,0.03688655);
   gre->SetPoint(1,-500,-6.93224);
   gre->SetPointError(1,0,0.05358997);
   gre->SetPoint(2,-300,-6.8854);
   gre->SetPointError(2,0,0.04704109);
   gre->SetPoint(3,-100,-6.8668);
   gre->SetPointError(3,0,0.02016188);
   gre->SetPoint(4,100,-6.8816);
   gre->SetPointError(4,0,0.06972239);
   gre->SetPoint(5,300,-7.00824);
   gre->SetPointError(5,0,0.04008267);
   gre->SetPoint(6,500,-6.88152);
   gre->SetPointError(6,0,0.07533182);
   gre->SetPoint(7,700,-7.0845);
   gre->SetPointError(7,0,0.06841552);
   
   TH1F *Graph_Graph18 = new TH1F("Graph_Graph18","Corr: LT.DVT50 Plane: V Ring: 2",100,-840,840);
   Graph_Graph18->SetMinimum(-7.187588);
   Graph_Graph18->SetMaximum(-6.771515);
   Graph_Graph18->SetDirectory(0);
   Graph_Graph18->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph18->SetLineColor(ci);
   Graph_Graph18->GetXaxis()->SetTitle("LT.DVT50, Kick [#murad]");
   Graph_Graph18->GetXaxis()->SetLabelFont(42);
   Graph_Graph18->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph18->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph18->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph18->GetXaxis()->SetTitleFont(42);
   Graph_Graph18->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph18->GetYaxis()->SetLabelFont(42);
   Graph_Graph18->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph18->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph18->GetYaxis()->SetTitleFont(42);
   Graph_Graph18->GetZaxis()->SetLabelFont(42);
   Graph_Graph18->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph18->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph18->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph18);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(16.29712);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-5.741025e-05);
   linear_fit->SetParError(0,3.939664e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-6.916552);
   linear_fit->SetParError(1,0.01463381);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","LT.BPM40","lp");

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
   
   TPaveText *pt = new TPaveText(0.1989416,0.9336861,0.8010584,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LT.DVT50 Plane: V Ring: 2");
   pt->Draw();
   canvas_LT.BPM40_V_2->Modified();
   canvas_LT.BPM40_V_2->cd();
   canvas_LT.BPM40_V_2->SetSelected(canvas_LT.BPM40_V_2);
}
