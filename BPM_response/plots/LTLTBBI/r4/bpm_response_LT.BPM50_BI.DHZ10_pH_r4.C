{
//=========Macro generated from canvas: canvas_LT.BPM50_H_4/
//=========  (Wed Apr  1 22:35:47 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM50_H_4 = new TCanvas("canvas_LT.BPM50_H_4", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM50_H_4->SetHighLightColor(2);
   canvas_LT.BPM50_H_4->Range(-1050,-1.831723,1050,-1.700842);
   canvas_LT.BPM50_H_4->SetFillColor(0);
   canvas_LT.BPM50_H_4->SetBorderMode(0);
   canvas_LT.BPM50_H_4->SetBorderSize(2);
   canvas_LT.BPM50_H_4->SetGridx();
   canvas_LT.BPM50_H_4->SetGridy();
   canvas_LT.BPM50_H_4->SetFrameBorderMode(0);
   canvas_LT.BPM50_H_4->SetFrameBorderMode(0);
   
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
   gre->SetPoint(0,-700,-1.74856);
   gre->SetPointError(0,0,0.006500692);
   gre->SetPoint(1,-500,-1.7572);
   gre->SetPointError(1,0,0.008073651);
   gre->SetPoint(2,-300,-1.7668);
   gre->SetPointError(2,0,0.02474749);
   gre->SetPoint(3,-100,-1.77514);
   gre->SetPointError(3,0,0.01505057);
   gre->SetPoint(4,100,-1.72898);
   gre->SetPointError(4,0,0.006324539);
   gre->SetPoint(5,300,-1.79226);
   gre->SetPointError(5,0,0.01764936);
   gre->SetPoint(6,500,-1.7439);
   gre->SetPointError(6,0,0.008279261);
   gre->SetPoint(7,700,-1.78012);
   gre->SetPointError(7,0,0.01740643);
   
   TH1F *Graph_Graph47 = new TH1F("Graph_Graph47","Corr: BI.DHZ10 Plane: H Ring: 4",100,-840,840);
   Graph_Graph47->SetMinimum(-1.818635);
   Graph_Graph47->SetMaximum(-1.71393);
   Graph_Graph47->SetDirectory(0);
   Graph_Graph47->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph47->SetLineColor(ci);
   Graph_Graph47->GetXaxis()->SetTitle("BI.DHZ10, Kick [#murad]");
   Graph_Graph47->GetXaxis()->SetLabelFont(42);
   Graph_Graph47->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph47->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph47->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph47->GetXaxis()->SetTitleFont(42);
   Graph_Graph47->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph47->GetYaxis()->SetLabelFont(42);
   Graph_Graph47->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph47->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph47->GetYaxis()->SetTitleFont(42);
   Graph_Graph47->GetZaxis()->SetLabelFont(42);
   Graph_Graph47->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph47->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph47->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph47);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(23.93696);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,2.992652e-06);
   linear_fit->SetParError(0,7.103272e-06);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-1.747797);
   linear_fit->SetParError(1,0.003443779);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","LT.BPM50","lp");

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
   canvas_LT.BPM50_H_4->Modified();
   canvas_LT.BPM50_H_4->cd();
   canvas_LT.BPM50_H_4->SetSelected(canvas_LT.BPM50_H_4);
}
