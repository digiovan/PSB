{
//=========Macro generated from canvas: canvas_BI.BPM00_H_3/
//=========  (Wed Apr  1 22:34:44 2015) by ROOT version5.34/21
   TCanvas *canvas_BI.BPM00_H_3 = new TCanvas("canvas_BI.BPM00_H_3", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI.BPM00_H_3->SetHighLightColor(2);
   canvas_BI.BPM00_H_3->Range(-1050,-11.91486,1050,0.2372106);
   canvas_BI.BPM00_H_3->SetFillColor(0);
   canvas_BI.BPM00_H_3->SetBorderMode(0);
   canvas_BI.BPM00_H_3->SetBorderSize(2);
   canvas_BI.BPM00_H_3->SetGridx();
   canvas_BI.BPM00_H_3->SetGridy();
   canvas_BI.BPM00_H_3->SetFrameBorderMode(0);
   canvas_BI.BPM00_H_3->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DHZ40 Plane: H Ring: 3");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-9.83288);
   gre->SetPointError(0,0,0.05663453);
   gre->SetPoint(1,-500,-8.45078);
   gre->SetPointError(1,0,0.04928356);
   gre->SetPoint(2,-300,-7.66478);
   gre->SetPointError(2,0,0.105265);
   gre->SetPoint(3,-100,-6.31998);
   gre->SetPointError(3,0,0.1125576);
   gre->SetPoint(4,100,-5.21442);
   gre->SetPointError(4,0,0.08709315);
   gre->SetPoint(5,300,-4.4818);
   gre->SetPointError(5,0,0.1800769);
   gre->SetPoint(6,500,-2.15128);
   gre->SetPointError(6,0,0.3018043);
   gre->SetPoint(7,700,-1.88948);
   gre->SetPointError(7,0,0.1013455);
   
   TH1F *Graph_Graph37 = new TH1F("Graph_Graph37","Corr: LT.DHZ40 Plane: H Ring: 3",100,-840,840);
   Graph_Graph37->SetMinimum(-10.69965);
   Graph_Graph37->SetMaximum(-0.9779965);
   Graph_Graph37->SetDirectory(0);
   Graph_Graph37->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph37->SetLineColor(ci);
   Graph_Graph37->GetXaxis()->SetTitle("LT.DHZ40, Kick [#murad]");
   Graph_Graph37->GetXaxis()->SetLabelFont(42);
   Graph_Graph37->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph37->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph37->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph37->GetXaxis()->SetTitleFont(42);
   Graph_Graph37->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph37->GetYaxis()->SetLabelFont(42);
   Graph_Graph37->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph37->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph37->GetYaxis()->SetTitleFont(42);
   Graph_Graph37->GetZaxis()->SetLabelFont(42);
   Graph_Graph37->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph37->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph37->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph37);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(28.16595);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.005618291);
   linear_fit->SetParError(0,6.968552e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-5.782834);
   linear_fit->SetParError(1,0.03649441);
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
   
   TPaveText *pt = new TPaveText(0.1966606,0.9336861,0.8033394,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LT.DHZ40 Plane: H Ring: 3");
   pt->Draw();
   canvas_BI.BPM00_H_3->Modified();
   canvas_BI.BPM00_H_3->cd();
   canvas_BI.BPM00_H_3->SetSelected(canvas_BI.BPM00_H_3);
}
