{
//=========Macro generated from canvas: canvas_BI.BPM30_H_2/
//=========  (Wed Apr  1 22:35:56 2015) by ROOT version5.34/21
   TCanvas *canvas_BI.BPM30_H_2 = new TCanvas("canvas_BI.BPM30_H_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI.BPM30_H_2->SetHighLightColor(2);
   canvas_BI.BPM30_H_2->Range(-1050,-16.44629,1050,10.48266);
   canvas_BI.BPM30_H_2->SetFillColor(0);
   canvas_BI.BPM30_H_2->SetBorderMode(0);
   canvas_BI.BPM30_H_2->SetBorderSize(2);
   canvas_BI.BPM30_H_2->SetGridx();
   canvas_BI.BPM30_H_2->SetGridy();
   canvas_BI.BPM30_H_2->SetFrameBorderMode(0);
   canvas_BI.BPM30_H_2->SetFrameBorderMode(0);
   
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
   gre->SetPoint(0,-700,-11.90304);
   gre->SetPointError(0,0,0.05509378);
   gre->SetPoint(1,-500,-9.19152);
   gre->SetPointError(1,0,0.0125526);
   gre->SetPoint(2,-300,-6.52774);
   gre->SetPointError(2,0,0.03485224);
   gre->SetPoint(3,-100,-3.93348);
   gre->SetPointError(3,0,0.04644531);
   gre->SetPoint(4,100,-1.32548);
   gre->SetPointError(4,0,0.01852432);
   gre->SetPoint(5,300,1.19138);
   gre->SetPointError(5,0,0.03932926);
   gre->SetPoint(6,500,3.61542);
   gre->SetPointError(6,0,0.01108721);
   gre->SetPoint(7,700,5.98408);
   gre->SetPointError(7,0,0.01042151);
   
   TH1F *Graph_Graph26 = new TH1F("Graph_Graph26","Corr: BI.DHZ20 Plane: H Ring: 2",100,-840,840);
   Graph_Graph26->SetMinimum(-13.7534);
   Graph_Graph26->SetMaximum(7.789765);
   Graph_Graph26->SetDirectory(0);
   Graph_Graph26->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph26->SetLineColor(ci);
   Graph_Graph26->GetXaxis()->SetTitle("BI.DHZ20, Kick [#murad]");
   Graph_Graph26->GetXaxis()->SetLabelFont(42);
   Graph_Graph26->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph26->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph26->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph26->GetXaxis()->SetTitleFont(42);
   Graph_Graph26->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph26->GetYaxis()->SetLabelFont(42);
   Graph_Graph26->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph26->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph26->GetYaxis()->SetTitleFont(42);
   Graph_Graph26->GetZaxis()->SetLabelFont(42);
   Graph_Graph26->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph26->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph26->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph26);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(316.0695);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.01267208);
   linear_fit->SetParError(0,1.229711e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-2.790599);
   linear_fit->SetParError(1,0.00665707);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI.BPM30","lp");

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
   canvas_BI.BPM30_H_2->Modified();
   canvas_BI.BPM30_H_2->cd();
   canvas_BI.BPM30_H_2->SetSelected(canvas_BI.BPM30_H_2);
}
