{
//=========Macro generated from canvas: canvas_BI4.BPM40_H_4/
//=========  (Wed Apr  1 22:35:48 2015) by ROOT version5.34/21
   TCanvas *canvas_BI4.BPM40_H_4 = new TCanvas("canvas_BI4.BPM40_H_4", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI4.BPM40_H_4->SetHighLightColor(2);
   canvas_BI4.BPM40_H_4->Range(-1050,-24.13694,1050,-17.15651);
   canvas_BI4.BPM40_H_4->SetFillColor(0);
   canvas_BI4.BPM40_H_4->SetBorderMode(0);
   canvas_BI4.BPM40_H_4->SetBorderSize(2);
   canvas_BI4.BPM40_H_4->SetGridx();
   canvas_BI4.BPM40_H_4->SetGridy();
   canvas_BI4.BPM40_H_4->SetFrameBorderMode(0);
   canvas_BI4.BPM40_H_4->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: BI.DHZ10 Plane: H Ring: 4");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-20.11996);
   gre->SetPointError(0,0,0.9690699);
   gre->SetPoint(1,-500,-18.92348);
   gre->SetPointError(1,0,0.6035653);
   gre->SetPoint(2,-300,-21.29634);
   gre->SetPointError(2,0,1.314571);
   gre->SetPoint(3,-100,-21.73042);
   gre->SetPointError(3,0,1.243117);
   gre->SetPoint(4,100,-18.64318);
   gre->SetPointError(4,0,0.1909305);
   gre->SetPoint(5,300,-20.5591);
   gre->SetPointError(5,0,0.7280304);
   gre->SetPoint(6,500,-19.2579);
   gre->SetPointError(6,0,0.7502327);
   gre->SetPoint(7,700,-19.94868);
   gre->SetPointError(7,0,1.403202);
   
   TH1F *Graph_Graph55 = new TH1F("Graph_Graph55","Corr: BI.DHZ10 Plane: H Ring: 4",100,-840,840);
   Graph_Graph55->SetMinimum(-23.4389);
   Graph_Graph55->SetMaximum(-17.85455);
   Graph_Graph55->SetDirectory(0);
   Graph_Graph55->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph55->SetLineColor(ci);
   Graph_Graph55->GetXaxis()->SetTitle("BI.DHZ10, Kick [#murad]");
   Graph_Graph55->GetXaxis()->SetLabelFont(42);
   Graph_Graph55->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph55->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph55->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph55->GetXaxis()->SetTitleFont(42);
   Graph_Graph55->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph55->GetYaxis()->SetLabelFont(42);
   Graph_Graph55->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph55->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph55->GetYaxis()->SetTitleFont(42);
   Graph_Graph55->GetZaxis()->SetLabelFont(42);
   Graph_Graph55->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph55->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph55->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph55);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(17.55859);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.000319309);
   linear_fit->SetParError(0,0.0006634273);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-18.96924);
   linear_fit->SetParError(1,0.1699295);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI4.BPM40","lp");

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
   
   TPaveText *pt = new TPaveText(0.2007664,0.9336861,0.7992336,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: BI.DHZ10 Plane: H Ring: 4");
   pt->Draw();
   canvas_BI4.BPM40_H_4->Modified();
   canvas_BI4.BPM40_H_4->cd();
   canvas_BI4.BPM40_H_4->SetSelected(canvas_BI4.BPM40_H_4);
}
