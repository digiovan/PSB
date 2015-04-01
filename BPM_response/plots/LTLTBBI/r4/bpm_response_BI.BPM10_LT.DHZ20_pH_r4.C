{
//=========Macro generated from canvas: canvas_BI.BPM10_H_4/
//=========  (Wed Apr  1 22:34:24 2015) by ROOT version5.34/21
   TCanvas *canvas_BI.BPM10_H_4 = new TCanvas("canvas_BI.BPM10_H_4", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI.BPM10_H_4->SetHighLightColor(2);
   canvas_BI.BPM10_H_4->Range(-1050,-19.30311,1050,11.94731);
   canvas_BI.BPM10_H_4->SetFillColor(0);
   canvas_BI.BPM10_H_4->SetBorderMode(0);
   canvas_BI.BPM10_H_4->SetBorderSize(2);
   canvas_BI.BPM10_H_4->SetGridx();
   canvas_BI.BPM10_H_4->SetGridy();
   canvas_BI.BPM10_H_4->SetFrameBorderMode(0);
   canvas_BI.BPM10_H_4->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DHZ20 Plane: H Ring: 4");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,6.55494);
   gre->SetPointError(0,0,0.1839689);
   gre->SetPoint(1,-500,3.92348);
   gre->SetPointError(1,0,0.1346402);
   gre->SetPoint(2,-300,0.67522);
   gre->SetPointError(2,0,0.2150058);
   gre->SetPoint(3,-100,-2.94582);
   gre->SetPointError(3,0,0.06747413);
   gre->SetPoint(4,100,-6.23166);
   gre->SetPointError(4,0,0.1811905);
   gre->SetPoint(5,300,-8.65658);
   gre->SetPointError(5,0,0.1903618);
   gre->SetPoint(6,500,-10.9338);
   gre->SetPointError(6,0,0.04870277);
   gre->SetPoint(7,700,-14.06682);
   gre->SetPointError(7,0,0.02788448);
   
   TH1F *Graph_Graph52 = new TH1F("Graph_Graph52","Corr: LT.DHZ20 Plane: H Ring: 4",100,-840,840);
   Graph_Graph52->SetMinimum(-16.17807);
   Graph_Graph52->SetMaximum(8.82227);
   Graph_Graph52->SetDirectory(0);
   Graph_Graph52->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph52->SetLineColor(ci);
   Graph_Graph52->GetXaxis()->SetTitle("LT.DHZ20, Kick [#murad]");
   Graph_Graph52->GetXaxis()->SetLabelFont(42);
   Graph_Graph52->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph52->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph52->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph52->GetXaxis()->SetTitleFont(42);
   Graph_Graph52->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph52->GetYaxis()->SetLabelFont(42);
   Graph_Graph52->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph52->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph52->GetYaxis()->SetTitleFont(42);
   Graph_Graph52->GetZaxis()->SetLabelFont(42);
   Graph_Graph52->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph52->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph52->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph52);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(120.7222);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.01438851);
   linear_fit->SetParError(0,6.349369e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-3.971008);
   linear_fit->SetParError(1,0.0385429);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI.BPM10","lp");

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
   TText *text = pt->AddText("Corr: LT.DHZ20 Plane: H Ring: 4");
   pt->Draw();
   canvas_BI.BPM10_H_4->Modified();
   canvas_BI.BPM10_H_4->cd();
   canvas_BI.BPM10_H_4->SetSelected(canvas_BI.BPM10_H_4);
}
