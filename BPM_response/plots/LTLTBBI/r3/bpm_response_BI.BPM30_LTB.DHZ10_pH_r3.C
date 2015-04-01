{
//=========Macro generated from canvas: canvas_BI.BPM30_H_3/
//=========  (Wed Apr  1 22:35:05 2015) by ROOT version5.34/21
   TCanvas *canvas_BI.BPM30_H_3 = new TCanvas("canvas_BI.BPM30_H_3", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI.BPM30_H_3->SetHighLightColor(2);
   canvas_BI.BPM30_H_3->Range(-1050,1.247825,1050,14.97454);
   canvas_BI.BPM30_H_3->SetFillColor(0);
   canvas_BI.BPM30_H_3->SetBorderMode(0);
   canvas_BI.BPM30_H_3->SetBorderSize(2);
   canvas_BI.BPM30_H_3->SetGridx();
   canvas_BI.BPM30_H_3->SetGridy();
   canvas_BI.BPM30_H_3->SetFrameBorderMode(0);
   canvas_BI.BPM30_H_3->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LTB.DHZ10 Plane: H Ring: 3");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,12.62134);
   gre->SetPointError(0,0,0.06541187);
   gre->SetPoint(1,-500,11.19874);
   gre->SetPointError(1,0,0.05233145);
   gre->SetPoint(2,-300,9.87884);
   gre->SetPointError(2,0,0.05898577);
   gre->SetPoint(3,-100,8.40618);
   gre->SetPointError(3,0,0.02990455);
   gre->SetPoint(4,100,7.16568);
   gre->SetPointError(4,0,0.03986778);
   gre->SetPoint(5,300,6.0261);
   gre->SetPointError(5,0,0.08081704);
   gre->SetPoint(6,500,4.93218);
   gre->SetPointError(6,0,0.09145853);
   gre->SetPoint(7,700,3.607);
   gre->SetPointError(7,0,0.0713895);
   
   TH1F *Graph_Graph40 = new TH1F("Graph_Graph40","Corr: LTB.DHZ10 Plane: H Ring: 3",100,-840,840);
   Graph_Graph40->SetMinimum(2.620496);
   Graph_Graph40->SetMaximum(13.60187);
   Graph_Graph40->SetDirectory(0);
   Graph_Graph40->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph40->SetLineColor(ci);
   Graph_Graph40->GetXaxis()->SetTitle("LTB.DHZ10, Kick [#murad]");
   Graph_Graph40->GetXaxis()->SetLabelFont(42);
   Graph_Graph40->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph40->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph40->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph40->GetXaxis()->SetTitleFont(42);
   Graph_Graph40->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph40->GetYaxis()->SetLabelFont(42);
   Graph_Graph40->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph40->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph40->GetYaxis()->SetTitleFont(42);
   Graph_Graph40->GetZaxis()->SetLabelFont(42);
   Graph_Graph40->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph40->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph40->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph40);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(56.63551);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.006437856);
   linear_fit->SetParError(0,5.194079e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,7.888035);
   linear_fit->SetParError(1,0.01839097);
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
   
   TPaveText *pt = new TPaveText(0.1829745,0.9336861,0.8170255,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LTB.DHZ10 Plane: H Ring: 3");
   pt->Draw();
   canvas_BI.BPM30_H_3->Modified();
   canvas_BI.BPM30_H_3->cd();
   canvas_BI.BPM30_H_3->SetSelected(canvas_BI.BPM30_H_3);
}
