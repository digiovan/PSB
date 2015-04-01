{
//=========Macro generated from canvas: canvas_LTB.BPM20_H_2/
//=========  (Wed Apr  1 22:35:14 2015) by ROOT version5.34/21
   TCanvas *canvas_LTB.BPM20_H_2 = new TCanvas("canvas_LTB.BPM20_H_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LTB.BPM20_H_2->SetHighLightColor(2);
   canvas_LTB.BPM20_H_2->Range(-1050,-2.319881,1050,10.01082);
   canvas_LTB.BPM20_H_2->SetFillColor(0);
   canvas_LTB.BPM20_H_2->SetBorderMode(0);
   canvas_LTB.BPM20_H_2->SetBorderSize(2);
   canvas_LTB.BPM20_H_2->SetGridx();
   canvas_LTB.BPM20_H_2->SetGridy();
   canvas_LTB.BPM20_H_2->SetFrameBorderMode(0);
   canvas_LTB.BPM20_H_2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LTB.DHZ20 Plane: H Ring: 2");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-0.04814);
   gre->SetPointError(0,0,0.2166233);
   gre->SetPoint(1,-500,1.1564);
   gre->SetPointError(1,0,0.07280734);
   gre->SetPoint(2,-300,2.17318);
   gre->SetPointError(2,0,0.0959288);
   gre->SetPoint(3,-100,3.15174);
   gre->SetPointError(3,0,0.1131354);
   gre->SetPoint(4,100,4.44768);
   gre->SetPointError(4,0,0.1497139);
   gre->SetPoint(5,300,5.498);
   gre->SetPointError(5,0,0.1410906);
   gre->SetPoint(6,500,6.87772);
   gre->SetPointError(6,0,0.1269928);
   gre->SetPoint(7,700,7.893);
   gre->SetPointError(7,0,0.06270633);
   
   TH1F *Graph_Graph21 = new TH1F("Graph_Graph21","Corr: LTB.DHZ20 Plane: H Ring: 2",100,-840,840);
   Graph_Graph21->SetMinimum(-1.08681);
   Graph_Graph21->SetMaximum(8.777753);
   Graph_Graph21->SetDirectory(0);
   Graph_Graph21->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21->SetLineColor(ci);
   Graph_Graph21->GetXaxis()->SetTitle("LTB.DHZ20, Kick [#murad]");
   Graph_Graph21->GetXaxis()->SetLabelFont(42);
   Graph_Graph21->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph21->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph21->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph21->GetXaxis()->SetTitleFont(42);
   Graph_Graph21->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph21->GetYaxis()->SetLabelFont(42);
   Graph_Graph21->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph21->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph21->GetYaxis()->SetTitleFont(42);
   Graph_Graph21->GetZaxis()->SetLabelFont(42);
   Graph_Graph21->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph21->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph21->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(6.067203);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.005667292);
   linear_fit->SetParError(0,6.975053e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,3.912192);
   linear_fit->SetParError(1,0.03583489);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","LTB.BPM20","lp");

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
   
   TPaveText *pt = new TPaveText(0.1829745,0.9336861,0.8170255,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LTB.DHZ20 Plane: H Ring: 2");
   pt->Draw();
   canvas_LTB.BPM20_H_2->Modified();
   canvas_LTB.BPM20_H_2->cd();
   canvas_LTB.BPM20_H_2->SetSelected(canvas_LTB.BPM20_H_2);
}
