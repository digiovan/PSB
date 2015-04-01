{
//=========Macro generated from canvas: canvas_LT.BPM20_H_2/
//=========  (Wed Apr  1 22:35:55 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM20_H_2 = new TCanvas("canvas_LT.BPM20_H_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM20_H_2->SetHighLightColor(2);
   canvas_LT.BPM20_H_2->Range(-1050,-8.266969,1050,-7.867732);
   canvas_LT.BPM20_H_2->SetFillColor(0);
   canvas_LT.BPM20_H_2->SetBorderMode(0);
   canvas_LT.BPM20_H_2->SetBorderSize(2);
   canvas_LT.BPM20_H_2->SetGridx();
   canvas_LT.BPM20_H_2->SetGridy();
   canvas_LT.BPM20_H_2->SetFrameBorderMode(0);
   canvas_LT.BPM20_H_2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: BI.DHZ20 Plane: H Ring: 2");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-8.11984);
   gre->SetPointError(0,0,0.03070034);
   gre->SetPoint(1,-500,-8.08352);
   gre->SetPointError(1,0,0.02528185);
   gre->SetPoint(2,-300,-8.08612);
   gre->SetPointError(2,0,0.1008336);
   gre->SetPoint(3,-100,-8.10118);
   gre->SetPointError(3,0,0.03722388);
   gre->SetPoint(4,100,-8.00292);
   gre->SetPointError(4,0,0.06864865);
   gre->SetPoint(5,300,-8.12218);
   gre->SetPointError(5,0,0.07824976);
   gre->SetPoint(6,500,-8.07032);
   gre->SetPointError(6,0,0.08655262);
   gre->SetPoint(7,700,-8.07264);
   gre->SetPointError(7,0,0.04998365);
   
   TH1F *Graph_Graph16 = new TH1F("Graph_Graph16","Corr: BI.DHZ20 Plane: H Ring: 2",100,-840,840);
   Graph_Graph16->SetMinimum(-8.227046);
   Graph_Graph16->SetMaximum(-7.907656);
   Graph_Graph16->SetDirectory(0);
   Graph_Graph16->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph16->SetLineColor(ci);
   Graph_Graph16->GetXaxis()->SetTitle("BI.DHZ20, Kick [#murad]");
   Graph_Graph16->GetXaxis()->SetLabelFont(42);
   Graph_Graph16->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph16->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph16->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph16->GetXaxis()->SetTitleFont(42);
   Graph_Graph16->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph16->GetYaxis()->SetLabelFont(42);
   Graph_Graph16->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph16->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph16->GetYaxis()->SetTitleFont(42);
   Graph_Graph16->GetZaxis()->SetLabelFont(42);
   Graph_Graph16->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph16->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph16->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph16);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(2.441209);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,2.681045e-05);
   linear_fit->SetParError(0,3.455496e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-8.084026);
   linear_fit->SetParError(1,0.01793697);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","LT.BPM20","lp");

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
   TText *text = pt->AddText("Corr: BI.DHZ20 Plane: H Ring: 2");
   pt->Draw();
   canvas_LT.BPM20_H_2->Modified();
   canvas_LT.BPM20_H_2->cd();
   canvas_LT.BPM20_H_2->SetSelected(canvas_LT.BPM20_H_2);
}
