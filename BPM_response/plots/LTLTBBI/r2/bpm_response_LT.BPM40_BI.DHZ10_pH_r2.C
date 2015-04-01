{
//=========Macro generated from canvas: canvas_LT.BPM40_H_2/
//=========  (Wed Apr  1 22:35:45 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM40_H_2 = new TCanvas("canvas_LT.BPM40_H_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM40_H_2->SetHighLightColor(2);
   canvas_LT.BPM40_H_2->Range(-1050,-0.3654015,1050,-0.2849912);
   canvas_LT.BPM40_H_2->SetFillColor(0);
   canvas_LT.BPM40_H_2->SetBorderMode(0);
   canvas_LT.BPM40_H_2->SetBorderSize(2);
   canvas_LT.BPM40_H_2->SetGridx();
   canvas_LT.BPM40_H_2->SetGridy();
   canvas_LT.BPM40_H_2->SetFrameBorderMode(0);
   canvas_LT.BPM40_H_2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: BI.DHZ10 Plane: H Ring: 2");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-0.34176);
   gre->SetPointError(0,0,0.007467363);
   gre->SetPoint(1,-500,-0.33504);
   gre->SetPointError(1,0,0.01695977);
   gre->SetPoint(2,-300,-0.32568);
   gre->SetPointError(2,0,0.0166296);
   gre->SetPoint(3,-100,-0.31064);
   gre->SetPointError(3,0,0.005734037);
   gre->SetPoint(4,100,-0.34736);
   gre->SetPointError(4,0,0.003651224);
   gre->SetPoint(5,300,-0.3172);
   gre->SetPointError(5,0,0.005004831);
   gre->SetPoint(6,500,-0.32412);
   gre->SetPointError(6,0,0.004931117);
   gre->SetPoint(7,700,-0.31044);
   gre->SetPointError(7,0,0.01204708);
   
   TH1F *Graph_Graph18 = new TH1F("Graph_Graph18","Corr: BI.DHZ10 Plane: H Ring: 2",100,-840,840);
   Graph_Graph18->SetMinimum(-0.3573605);
   Graph_Graph18->SetMaximum(-0.2930322);
   Graph_Graph18->SetDirectory(0);
   Graph_Graph18->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph18->SetLineColor(ci);
   Graph_Graph18->GetXaxis()->SetTitle("BI.DHZ10, Kick [#murad]");
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
   linear_fit->SetChisquare(42.73774);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,1.338779e-05);
   linear_fit->SetParError(0,6.313897e-06);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-0.3317977);
   linear_fit->SetParError(1,0.002272344);
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
   
   TPaveText *pt = new TPaveText(0.2007664,0.9336861,0.7992336,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: BI.DHZ10 Plane: H Ring: 2");
   pt->Draw();
   canvas_LT.BPM40_H_2->Modified();
   canvas_LT.BPM40_H_2->cd();
   canvas_LT.BPM40_H_2->SetSelected(canvas_LT.BPM40_H_2);
}
