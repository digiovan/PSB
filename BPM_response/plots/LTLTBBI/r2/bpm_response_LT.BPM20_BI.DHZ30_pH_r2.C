{
//=========Macro generated from canvas: canvas_LT.BPM20_H_2/
//=========  (Wed Apr  1 22:36:06 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM20_H_2 = new TCanvas("canvas_LT.BPM20_H_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM20_H_2->SetHighLightColor(2);
   canvas_LT.BPM20_H_2->Range(-1050,-8.303459,1050,-7.864734);
   canvas_LT.BPM20_H_2->SetFillColor(0);
   canvas_LT.BPM20_H_2->SetBorderMode(0);
   canvas_LT.BPM20_H_2->SetBorderSize(2);
   canvas_LT.BPM20_H_2->SetGridx();
   canvas_LT.BPM20_H_2->SetGridy();
   canvas_LT.BPM20_H_2->SetFrameBorderMode(0);
   canvas_LT.BPM20_H_2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: BI.DHZ30 Plane: H Ring: 2");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-8.04276);
   gre->SetPointError(0,0,0.04372702);
   gre->SetPoint(1,-500,-8.07734);
   gre->SetPointError(1,0,0.04449027);
   gre->SetPoint(2,-300,-8.0117);
   gre->SetPointError(2,0,0.03610193);
   gre->SetPoint(3,-100,-8.19218);
   gre->SetPointError(3,0,0.03057341);
   gre->SetPoint(4,100,-8.12522);
   gre->SetPointError(4,0,0.06438664);
   gre->SetPoint(5,300,-8.02648);
   gre->SetPointError(5,0,0.08862558);
   gre->SetPoint(6,500,-8.06512);
   gre->SetPointError(6,0,0.0198731);
   gre->SetPoint(7,700,-8.16226);
   gre->SetPointError(7,0,0.06807806);
   
   TH1F *Graph_Graph16 = new TH1F("Graph_Graph16","Corr: BI.DHZ30 Plane: H Ring: 2",100,-840,840);
   Graph_Graph16->SetMinimum(-8.259586);
   Graph_Graph16->SetMaximum(-7.908606);
   Graph_Graph16->SetDirectory(0);
   Graph_Graph16->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph16->SetLineColor(ci);
   Graph_Graph16->GetXaxis()->SetTitle("BI.DHZ30, Kick [#murad]");
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
   linear_fit->SetChisquare(20.43543);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-6.798855e-06);
   linear_fit->SetParError(0,2.92464e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-8.08458);
   linear_fit->SetParError(1,0.01318069);
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
   TText *text = pt->AddText("Corr: BI.DHZ30 Plane: H Ring: 2");
   pt->Draw();
   canvas_LT.BPM20_H_2->Modified();
   canvas_LT.BPM20_H_2->cd();
   canvas_LT.BPM20_H_2->SetSelected(canvas_LT.BPM20_H_2);
}
