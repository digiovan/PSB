{
//=========Macro generated from canvas: canvas_LT.BPM10_H_2/
//=========  (Wed Apr  1 22:34:21 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM10_H_2 = new TCanvas("canvas_LT.BPM10_H_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM10_H_2->SetHighLightColor(2);
   canvas_LT.BPM10_H_2->Range(-1050,1.935932,1050,2.157435);
   canvas_LT.BPM10_H_2->SetFillColor(0);
   canvas_LT.BPM10_H_2->SetBorderMode(0);
   canvas_LT.BPM10_H_2->SetBorderSize(2);
   canvas_LT.BPM10_H_2->SetGridx();
   canvas_LT.BPM10_H_2->SetGridy();
   canvas_LT.BPM10_H_2->SetFrameBorderMode(0);
   canvas_LT.BPM10_H_2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DHZ20 Plane: H Ring: 2");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,1.97796);
   gre->SetPointError(0,0,0.005110934);
   gre->SetPoint(1,-500,2.06538);
   gre->SetPointError(1,0,0.02590082);
   gre->SetPoint(2,-300,2.1076);
   gre->SetPointError(2,0,0.01291774);
   gre->SetPoint(3,-100,2.04152);
   gre->SetPointError(3,0,0.004771733);
   gre->SetPoint(4,100,2.0895);
   gre->SetPointError(4,0,0.01299175);
   gre->SetPoint(5,300,2.096);
   gre->SetPointError(5,0,0.01562029);
   gre->SetPoint(6,500,2.07198);
   gre->SetPointError(6,0,0.01952142);
   gre->SetPoint(7,700,2.04098);
   gre->SetPointError(7,0,0.0136687);
   
   TH1F *Graph_Graph15 = new TH1F("Graph_Graph15","Corr: LT.DHZ20 Plane: H Ring: 2",100,-840,840);
   Graph_Graph15->SetMinimum(1.958082);
   Graph_Graph15->SetMaximum(2.135285);
   Graph_Graph15->SetDirectory(0);
   Graph_Graph15->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph15->SetLineColor(ci);
   Graph_Graph15->GetXaxis()->SetTitle("LT.DHZ20, Kick [#murad]");
   Graph_Graph15->GetXaxis()->SetLabelFont(42);
   Graph_Graph15->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph15->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph15->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph15->GetXaxis()->SetTitleFont(42);
   Graph_Graph15->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph15->GetYaxis()->SetLabelFont(42);
   Graph_Graph15->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph15->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph15->GetYaxis()->SetTitleFont(42);
   Graph_Graph15->GetZaxis()->SetLabelFont(42);
   Graph_Graph15->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph15->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph15->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph15);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(85.33785);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,7.865805e-05);
   linear_fit->SetParError(0,7.642595e-06);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,2.047975);
   linear_fit->SetParError(1,0.003594208);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","LT.BPM10","lp");

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
   
   TPaveText *pt = new TPaveText(0.1966606,0.9336861,0.8033394,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LT.DHZ20 Plane: H Ring: 2");
   pt->Draw();
   canvas_LT.BPM10_H_2->Modified();
   canvas_LT.BPM10_H_2->cd();
   canvas_LT.BPM10_H_2->SetSelected(canvas_LT.BPM10_H_2);
}
