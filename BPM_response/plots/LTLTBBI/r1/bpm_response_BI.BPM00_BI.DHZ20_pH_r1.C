{
//=========Macro generated from canvas: canvas_BI.BPM00_H_1/
//=========  (Wed Apr  1 22:35:55 2015) by ROOT version5.34/21
   TCanvas *canvas_BI.BPM00_H_1 = new TCanvas("canvas_BI.BPM00_H_1", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI.BPM00_H_1->SetHighLightColor(2);
   canvas_BI.BPM00_H_1->Range(-1050,-5.290092,1050,-4.718441);
   canvas_BI.BPM00_H_1->SetFillColor(0);
   canvas_BI.BPM00_H_1->SetBorderMode(0);
   canvas_BI.BPM00_H_1->SetBorderSize(2);
   canvas_BI.BPM00_H_1->SetGridx();
   canvas_BI.BPM00_H_1->SetGridy();
   canvas_BI.BPM00_H_1->SetFrameBorderMode(0);
   canvas_BI.BPM00_H_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: BI.DHZ20 Plane: H Ring: 1");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-5.02196);
   gre->SetPointError(0,0,0.04602182);
   gre->SetPoint(1,-500,-5.00834);
   gre->SetPointError(1,0,0.05316221);
   gre->SetPoint(2,-300,-5.05458);
   gre->SetPointError(2,0,0.09217489);
   gre->SetPoint(3,-100,-4.90054);
   gre->SetPointError(3,0,0.08682353);
   gre->SetPoint(4,100,-5.15786);
   gre->SetPointError(4,0,0.03695661);
   gre->SetPoint(5,300,-5.07752);
   gre->SetPointError(5,0,0.01999498);
   gre->SetPoint(6,500,-5.06596);
   gre->SetPointError(6,0,0.1125384);
   gre->SetPoint(7,700,-5.0814);
   gre->SetPointError(7,0,0.05133079);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","Corr: BI.DHZ20 Plane: H Ring: 1",100,-840,840);
   Graph_Graph9->SetMinimum(-5.232927);
   Graph_Graph9->SetMaximum(-4.775606);
   Graph_Graph9->SetDirectory(0);
   Graph_Graph9->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph9->SetLineColor(ci);
   Graph_Graph9->GetXaxis()->SetTitle("BI.DHZ20, Kick [#murad]");
   Graph_Graph9->GetXaxis()->SetLabelFont(42);
   Graph_Graph9->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph9->GetXaxis()->SetTitleFont(42);
   Graph_Graph9->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph9->GetYaxis()->SetLabelFont(42);
   Graph_Graph9->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetYaxis()->SetTitleFont(42);
   Graph_Graph9->GetZaxis()->SetLabelFont(42);
   Graph_Graph9->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph9);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(9.491185);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-6.036276e-05);
   linear_fit->SetParError(0,3.776756e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-5.066598);
   linear_fit->SetParError(1,0.01517568);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI.BPM00","lp");

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
   
   TPaveText *pt = new TPaveText(0.2035036,0.9336861,0.7964964,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: BI.DHZ20 Plane: H Ring: 1");
   pt->Draw();
   canvas_BI.BPM00_H_1->Modified();
   canvas_BI.BPM00_H_1->cd();
   canvas_BI.BPM00_H_1->SetSelected(canvas_BI.BPM00_H_1);
}
