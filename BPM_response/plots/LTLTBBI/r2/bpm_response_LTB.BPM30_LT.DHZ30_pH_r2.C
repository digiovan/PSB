{
//=========Macro generated from canvas: canvas_LTB.BPM30_H_2/
//=========  (Wed Apr  1 22:34:32 2015) by ROOT version5.34/21
   TCanvas *canvas_LTB.BPM30_H_2 = new TCanvas("canvas_LTB.BPM30_H_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LTB.BPM30_H_2->SetHighLightColor(2);
   canvas_LTB.BPM30_H_2->Range(-1050,-3.618556,1050,5.176072);
   canvas_LTB.BPM30_H_2->SetFillColor(0);
   canvas_LTB.BPM30_H_2->SetBorderMode(0);
   canvas_LTB.BPM30_H_2->SetBorderSize(2);
   canvas_LTB.BPM30_H_2->SetGridx();
   canvas_LTB.BPM30_H_2->SetGridy();
   canvas_LTB.BPM30_H_2->SetFrameBorderMode(0);
   canvas_LTB.BPM30_H_2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DHZ30 Plane: H Ring: 2");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-2.0915);
   gre->SetPointError(0,0,0.06128488);
   gre->SetPoint(1,-500,-1.39818);
   gre->SetPointError(1,0,0.07502339);
   gre->SetPoint(2,-300,-0.53602);
   gre->SetPointError(2,0,0.0563868);
   gre->SetPoint(3,-100,0.01128);
   gre->SetPointError(3,0,0.1074206);
   gre->SetPoint(4,100,0.8608);
   gre->SetPointError(4,0,0.1739939);
   gre->SetPoint(5,300,1.67142);
   gre->SetPointError(5,0,0.06379185);
   gre->SetPoint(6,500,2.52596);
   gre->SetPointError(6,0,0.07236052);
   gre->SetPoint(7,700,3.63688);
   gre->SetPointError(7,0,0.07342082);
   
   TH1F *Graph_Graph22 = new TH1F("Graph_Graph22","Corr: LT.DHZ30 Plane: H Ring: 2",100,-840,840);
   Graph_Graph22->SetMinimum(-2.739093);
   Graph_Graph22->SetMaximum(4.296609);
   Graph_Graph22->SetDirectory(0);
   Graph_Graph22->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph22->SetLineColor(ci);
   Graph_Graph22->GetXaxis()->SetTitle("LT.DHZ30, Kick [#murad]");
   Graph_Graph22->GetXaxis()->SetLabelFont(42);
   Graph_Graph22->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph22->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph22->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph22->GetXaxis()->SetTitleFont(42);
   Graph_Graph22->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph22->GetYaxis()->SetLabelFont(42);
   Graph_Graph22->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph22->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph22->GetYaxis()->SetTitleFont(42);
   Graph_Graph22->GetZaxis()->SetLabelFont(42);
   Graph_Graph22->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph22->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph22->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph22);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(22.93683);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.003973183);
   linear_fit->SetParError(0,5.260905e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,0.6163648);
   linear_fit->SetParError(1,0.02595348);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","LTB.BPM30","lp");

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
   TText *text = pt->AddText("Corr: LT.DHZ30 Plane: H Ring: 2");
   pt->Draw();
   canvas_LTB.BPM30_H_2->Modified();
   canvas_LTB.BPM30_H_2->cd();
   canvas_LTB.BPM30_H_2->SetSelected(canvas_LTB.BPM30_H_2);
}
