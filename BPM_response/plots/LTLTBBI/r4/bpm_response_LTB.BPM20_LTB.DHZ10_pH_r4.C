{
//=========Macro generated from canvas: canvas_LTB.BPM20_H_4/
//=========  (Wed Apr  1 22:35:06 2015) by ROOT version5.34/21
   TCanvas *canvas_LTB.BPM20_H_4 = new TCanvas("canvas_LTB.BPM20_H_4", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LTB.BPM20_H_4->SetHighLightColor(2);
   canvas_LTB.BPM20_H_4->Range(-1050,-2.488018,1050,11.81703);
   canvas_LTB.BPM20_H_4->SetFillColor(0);
   canvas_LTB.BPM20_H_4->SetBorderMode(0);
   canvas_LTB.BPM20_H_4->SetBorderSize(2);
   canvas_LTB.BPM20_H_4->SetGridx();
   canvas_LTB.BPM20_H_4->SetGridy();
   canvas_LTB.BPM20_H_4->SetFrameBorderMode(0);
   canvas_LTB.BPM20_H_4->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LTB.DHZ10 Plane: H Ring: 4");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-0.02046);
   gre->SetPointError(0,0,0.08338367);
   gre->SetPoint(1,-500,1.46738);
   gre->SetPointError(1,0,0.2488716);
   gre->SetPoint(2,-300,2.97162);
   gre->SetPointError(2,0,0.01771775);
   gre->SetPoint(3,-100,4.54126);
   gre->SetPointError(3,0,0.08177496);
   gre->SetPoint(4,100,5.72464);
   gre->SetPointError(4,0,0.125463);
   gre->SetPoint(5,300,6.97564);
   gre->SetPointError(5,0,0.2316687);
   gre->SetPoint(6,500,8.03324);
   gre->SetPointError(6,0,0.02209516);
   gre->SetPoint(7,700,9.27102);
   gre->SetPointError(7,0,0.1618344);
   
   TH1F *Graph_Graph49 = new TH1F("Graph_Graph49","Corr: LTB.DHZ10 Plane: H Ring: 4",100,-840,840);
   Graph_Graph49->SetMinimum(-1.057513);
   Graph_Graph49->SetMaximum(10.38652);
   Graph_Graph49->SetDirectory(0);
   Graph_Graph49->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph49->SetLineColor(ci);
   Graph_Graph49->GetXaxis()->SetTitle("LTB.DHZ10, Kick [#murad]");
   Graph_Graph49->GetXaxis()->SetLabelFont(42);
   Graph_Graph49->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph49->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph49->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph49->GetXaxis()->SetTitleFont(42);
   Graph_Graph49->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph49->GetYaxis()->SetLabelFont(42);
   Graph_Graph49->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph49->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph49->GetYaxis()->SetTitleFont(42);
   Graph_Graph49->GetZaxis()->SetLabelFont(42);
   Graph_Graph49->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph49->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph49->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph49);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(46.9997);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.006377965);
   linear_fit->SetParError(0,3.341199e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,4.868504);
   linear_fit->SetParError(1,0.013288);
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
   TText *text = pt->AddText("Corr: LTB.DHZ10 Plane: H Ring: 4");
   pt->Draw();
   canvas_LTB.BPM20_H_4->Modified();
   canvas_LTB.BPM20_H_4->cd();
   canvas_LTB.BPM20_H_4->SetSelected(canvas_LTB.BPM20_H_4);
}
