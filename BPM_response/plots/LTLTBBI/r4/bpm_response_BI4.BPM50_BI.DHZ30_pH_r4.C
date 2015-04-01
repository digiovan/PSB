{
//=========Macro generated from canvas: canvas_BI4.BPM50_H_4/
//=========  (Wed Apr  1 22:36:09 2015) by ROOT version5.34/21
   TCanvas *canvas_BI4.BPM50_H_4 = new TCanvas("canvas_BI4.BPM50_H_4", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI4.BPM50_H_4->SetHighLightColor(2);
   canvas_BI4.BPM50_H_4->Range(-1050,-20.75034,1050,-11.20505);
   canvas_BI4.BPM50_H_4->SetFillColor(0);
   canvas_BI4.BPM50_H_4->SetBorderMode(0);
   canvas_BI4.BPM50_H_4->SetBorderSize(2);
   canvas_BI4.BPM50_H_4->SetGridx();
   canvas_BI4.BPM50_H_4->SetGridy();
   canvas_BI4.BPM50_H_4->SetFrameBorderMode(0);
   canvas_BI4.BPM50_H_4->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: BI.DHZ30 Plane: H Ring: 4");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-17.99872);
   gre->SetPointError(0,0,0.7420966);
   gre->SetPoint(1,-500,-17.0051);
   gre->SetPointError(1,0,1.609286);
   gre->SetPoint(2,-300,-17.10864);
   gre->SetPointError(2,0,2.050814);
   gre->SetPoint(3,-100,-14.06814);
   gre->SetPointError(3,0,1.272213);
   gre->SetPoint(4,100,-15.33996);
   gre->SetPointError(4,0,0.7518924);
   gre->SetPoint(5,300,-15.9437);
   gre->SetPointError(5,0,0.2649172);
   gre->SetPoint(6,500,-15.02034);
   gre->SetPointError(6,0,1.33729);
   gre->SetPoint(7,700,-13.2394);
   gre->SetPointError(7,0,0.2229851);
   
   TH1F *Graph_Graph56 = new TH1F("Graph_Graph56","Corr: BI.DHZ30 Plane: H Ring: 4",100,-840,840);
   Graph_Graph56->SetMinimum(-19.79581);
   Graph_Graph56->SetMaximum(-12.15957);
   Graph_Graph56->SetDirectory(0);
   Graph_Graph56->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph56->SetLineColor(ci);
   Graph_Graph56->GetXaxis()->SetTitle("BI.DHZ30, Kick [#murad]");
   Graph_Graph56->GetXaxis()->SetLabelFont(42);
   Graph_Graph56->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph56->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph56->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph56->GetXaxis()->SetTitleFont(42);
   Graph_Graph56->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph56->GetYaxis()->SetLabelFont(42);
   Graph_Graph56->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph56->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph56->GetYaxis()->SetTitleFont(42);
   Graph_Graph56->GetZaxis()->SetLabelFont(42);
   Graph_Graph56->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph56->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph56->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph56);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(19.2046);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.003788739);
   linear_fit->SetParError(0,0.0004538512);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-16.25818);
   linear_fit->SetParError(1,0.2525621);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI4.BPM50","lp");

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
   TText *text = pt->AddText("Corr: BI.DHZ30 Plane: H Ring: 4");
   pt->Draw();
   canvas_BI4.BPM50_H_4->Modified();
   canvas_BI4.BPM50_H_4->cd();
   canvas_BI4.BPM50_H_4->SetSelected(canvas_BI4.BPM50_H_4);
}
