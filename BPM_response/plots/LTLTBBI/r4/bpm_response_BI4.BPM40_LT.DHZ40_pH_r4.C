{
//=========Macro generated from canvas: canvas_BI4.BPM40_H_4/
//=========  (Wed Apr  1 22:34:46 2015) by ROOT version5.34/21
   TCanvas *canvas_BI4.BPM40_H_4 = new TCanvas("canvas_BI4.BPM40_H_4", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI4.BPM40_H_4->SetHighLightColor(2);
   canvas_BI4.BPM40_H_4->Range(-1050,-8.093048,1050,7.547828);
   canvas_BI4.BPM40_H_4->SetFillColor(0);
   canvas_BI4.BPM40_H_4->SetBorderMode(0);
   canvas_BI4.BPM40_H_4->SetBorderSize(2);
   canvas_BI4.BPM40_H_4->SetGridx();
   canvas_BI4.BPM40_H_4->SetGridy();
   canvas_BI4.BPM40_H_4->SetFrameBorderMode(0);
   canvas_BI4.BPM40_H_4->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DHZ40 Plane: H Ring: 4");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,2.73474);
   gre->SetPointError(0,0,0.4263227);
   gre->SetPoint(1,-500,3.69538);
   gre->SetPointError(1,0,0.734268);
   gre->SetPoint(2,-300,1.8336);
   gre->SetPointError(2,0,0.1804225);
   gre->SetPoint(3,-100,4.6882);
   gre->SetPointError(3,0,0.2528156);
   gre->SetPoint(4,100,4.46342);
   gre->SetPointError(4,0,0.4195032);
   gre->SetPoint(5,300,0.4774);
   gre->SetPointError(5,0,0.588502);
   gre->SetPoint(6,500,2.40222);
   gre->SetPointError(6,0,0.3470168);
   gre->SetPoint(7,700,-5.11658);
   gre->SetPointError(7,0,0.369655);
   
   TH1F *Graph_Graph55 = new TH1F("Graph_Graph55","Corr: LT.DHZ40 Plane: H Ring: 4",100,-840,840);
   Graph_Graph55->SetMinimum(-6.52896);
   Graph_Graph55->SetMaximum(5.983741);
   Graph_Graph55->SetDirectory(0);
   Graph_Graph55->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph55->SetLineColor(ci);
   Graph_Graph55->GetXaxis()->SetTitle("LT.DHZ40, Kick [#murad]");
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
   linear_fit->SetChisquare(388.7913);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.003526971);
   linear_fit->SetParError(0,0.0002916343);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,1.844562);
   linear_fit->SetParError(1,0.1147351);
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
   
   TPaveText *pt = new TPaveText(0.1966606,0.9336861,0.8033394,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LT.DHZ40 Plane: H Ring: 4");
   pt->Draw();
   canvas_BI4.BPM40_H_4->Modified();
   canvas_BI4.BPM40_H_4->cd();
   canvas_BI4.BPM40_H_4->SetSelected(canvas_BI4.BPM40_H_4);
}
