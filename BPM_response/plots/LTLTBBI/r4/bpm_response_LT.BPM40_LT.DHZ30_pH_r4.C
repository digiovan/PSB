{
//=========Macro generated from canvas: canvas_LT.BPM40_H_4/
//=========  (Wed Apr  1 22:34:34 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM40_H_4 = new TCanvas("canvas_LT.BPM40_H_4", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM40_H_4->SetHighLightColor(2);
   canvas_LT.BPM40_H_4->Range(-1050,-1.647392,1050,0.8794957);
   canvas_LT.BPM40_H_4->SetFillColor(0);
   canvas_LT.BPM40_H_4->SetBorderMode(0);
   canvas_LT.BPM40_H_4->SetBorderSize(2);
   canvas_LT.BPM40_H_4->SetGridx();
   canvas_LT.BPM40_H_4->SetGridy();
   canvas_LT.BPM40_H_4->SetFrameBorderMode(0);
   canvas_LT.BPM40_H_4->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DHZ30 Plane: H Ring: 4");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-1.22164);
   gre->SetPointError(0,0,0.004603716);
   gre->SetPoint(1,-500,-1.04958);
   gre->SetPointError(1,0,0.007311894);
   gre->SetPoint(2,-300,-0.75278);
   gre->SetPointError(2,0,0.01791414);
   gre->SetPoint(3,-100,-0.59404);
   gre->SetPointError(3,0,0.01088799);
   gre->SetPoint(4,100,-0.29654);
   gre->SetPointError(4,0,0.002328797);
   gre->SetPoint(5,300,-0.0996);
   gre->SetPointError(5,0,0.009854426);
   gre->SetPoint(6,500,0.13178);
   gre->SetPointError(6,0,0.007084645);
   gre->SetPoint(7,700,0.45562);
   gre->SetPointError(7,0,0.002727796);
   
   TH1F *Graph_Graph46 = new TH1F("Graph_Graph46","Corr: LT.DHZ30 Plane: H Ring: 4",100,-840,840);
   Graph_Graph46->SetMinimum(-1.394703);
   Graph_Graph46->SetMaximum(0.6268069);
   Graph_Graph46->SetDirectory(0);
   Graph_Graph46->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph46->SetLineColor(ci);
   Graph_Graph46->GetXaxis()->SetTitle("LT.DHZ30, Kick [#murad]");
   Graph_Graph46->GetXaxis()->SetLabelFont(42);
   Graph_Graph46->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph46->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph46->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph46->GetXaxis()->SetTitleFont(42);
   Graph_Graph46->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph46->GetYaxis()->SetLabelFont(42);
   Graph_Graph46->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph46->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph46->GetYaxis()->SetTitleFont(42);
   Graph_Graph46->GetZaxis()->SetLabelFont(42);
   Graph_Graph46->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph46->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph46->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph46);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(281.2957);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.00121042);
   linear_fit->SetParError(0,3.405536e-06);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-0.4103997);
   linear_fit->SetParError(1,0.001663618);
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
   
   TPaveText *pt = new TPaveText(0.1966606,0.9336861,0.8033394,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LT.DHZ30 Plane: H Ring: 4");
   pt->Draw();
   canvas_LT.BPM40_H_4->Modified();
   canvas_LT.BPM40_H_4->cd();
   canvas_LT.BPM40_H_4->SetSelected(canvas_LT.BPM40_H_4);
}
