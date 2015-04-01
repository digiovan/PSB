{
//=========Macro generated from canvas: canvas_LTB.BPM10_H_4/
//=========  (Wed Apr  1 22:35:37 2015) by ROOT version5.34/21
   TCanvas *canvas_LTB.BPM10_H_4 = new TCanvas("canvas_LTB.BPM10_H_4", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LTB.BPM10_H_4->SetHighLightColor(2);
   canvas_LTB.BPM10_H_4->Range(-1050,2.048206,1050,3.486113);
   canvas_LTB.BPM10_H_4->SetFillColor(0);
   canvas_LTB.BPM10_H_4->SetBorderMode(0);
   canvas_LTB.BPM10_H_4->SetBorderSize(2);
   canvas_LTB.BPM10_H_4->SetGridx();
   canvas_LTB.BPM10_H_4->SetGridy();
   canvas_LTB.BPM10_H_4->SetFrameBorderMode(0);
   canvas_LTB.BPM10_H_4->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LTB.DHZ40 Plane: H Ring: 4");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,2.9599);
   gre->SetPointError(0,0,0.2865616);
   gre->SetPoint(1,-500,2.4313);
   gre->SetPointError(1,0,0.1434428);
   gre->SetPoint(2,-300,2.68484);
   gre->SetPointError(2,0,0.1231328);
   gre->SetPoint(3,-100,2.81544);
   gre->SetPointError(3,0,0.1249397);
   gre->SetPoint(4,100,2.85186);
   gre->SetPointError(4,0,0.07338188);
   gre->SetPoint(5,300,2.61014);
   gre->SetPointError(5,0,0.138198);
   gre->SetPoint(6,500,2.47626);
   gre->SetPointError(6,0,0.07722319);
   gre->SetPoint(7,700,2.9306);
   gre->SetPointError(7,0,0.08163491);
   
   TH1F *Graph_Graph48 = new TH1F("Graph_Graph48","Corr: LTB.DHZ40 Plane: H Ring: 4",100,-840,840);
   Graph_Graph48->SetMinimum(2.191997);
   Graph_Graph48->SetMaximum(3.342322);
   Graph_Graph48->SetDirectory(0);
   Graph_Graph48->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph48->SetLineColor(ci);
   Graph_Graph48->GetXaxis()->SetTitle("LTB.DHZ40, Kick [#murad]");
   Graph_Graph48->GetXaxis()->SetLabelFont(42);
   Graph_Graph48->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph48->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph48->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph48->GetXaxis()->SetTitleFont(42);
   Graph_Graph48->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph48->GetYaxis()->SetLabelFont(42);
   Graph_Graph48->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph48->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph48->GetYaxis()->SetTitleFont(42);
   Graph_Graph48->GetZaxis()->SetLabelFont(42);
   Graph_Graph48->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph48->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph48->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph48);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(25.44711);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,6.318741e-05);
   linear_fit->SetParError(0,9.507668e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,2.708987);
   linear_fit->SetParError(1,0.04214655);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","LTB.BPM10","lp");

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
   TText *text = pt->AddText("Corr: LTB.DHZ40 Plane: H Ring: 4");
   pt->Draw();
   canvas_LTB.BPM10_H_4->Modified();
   canvas_LTB.BPM10_H_4->cd();
   canvas_LTB.BPM10_H_4->SetSelected(canvas_LTB.BPM10_H_4);
}
