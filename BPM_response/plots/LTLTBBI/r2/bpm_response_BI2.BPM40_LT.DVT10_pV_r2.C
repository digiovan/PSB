{
//=========Macro generated from canvas: canvas_BI2.BPM40_V_2/
//=========  (Wed Apr  1 22:34:17 2015) by ROOT version5.34/21
   TCanvas *canvas_BI2.BPM40_V_2 = new TCanvas("canvas_BI2.BPM40_V_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI2.BPM40_V_2->SetHighLightColor(2);
   canvas_BI2.BPM40_V_2->Range(-1050,-10.28218,1050,0.6856188);
   canvas_BI2.BPM40_V_2->SetFillColor(0);
   canvas_BI2.BPM40_V_2->SetBorderMode(0);
   canvas_BI2.BPM40_V_2->SetBorderSize(2);
   canvas_BI2.BPM40_V_2->SetGridx();
   canvas_BI2.BPM40_V_2->SetGridy();
   canvas_BI2.BPM40_V_2->SetFrameBorderMode(0);
   canvas_BI2.BPM40_V_2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DVT10 Plane: V Ring: 2");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-1.67102);
   gre->SetPointError(0,0,0.5286716);
   gre->SetPoint(1,-500,-4.16012);
   gre->SetPointError(1,0,0.5117405);
   gre->SetPoint(2,-300,-4.30016);
   gre->SetPointError(2,0,0.3325279);
   gre->SetPoint(3,-100,-5.09032);
   gre->SetPointError(3,0,0.2398204);
   gre->SetPoint(4,100,-6.14674);
   gre->SetPointError(4,0,0.4586383);
   gre->SetPoint(5,300,-7.10206);
   gre->SetPointError(5,0,0.199236);
   gre->SetPoint(6,500,-7.25878);
   gre->SetPointError(6,0,0.1513259);
   gre->SetPoint(7,700,-8.11212);
   gre->SetPointError(7,0,0.3420971);
   
   TH1F *Graph_Graph27 = new TH1F("Graph_Graph27","Corr: LT.DVT10 Plane: V Ring: 2",100,-840,840);
   Graph_Graph27->SetMinimum(-9.185404);
   Graph_Graph27->SetMaximum(-0.4111616);
   Graph_Graph27->SetDirectory(0);
   Graph_Graph27->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph27->SetLineColor(ci);
   Graph_Graph27->GetXaxis()->SetTitle("LT.DVT10, Kick [#murad]");
   Graph_Graph27->GetXaxis()->SetLabelFont(42);
   Graph_Graph27->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph27->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph27->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph27->GetXaxis()->SetTitleFont(42);
   Graph_Graph27->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph27->GetYaxis()->SetLabelFont(42);
   Graph_Graph27->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph27->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph27->GetYaxis()->SetTitleFont(42);
   Graph_Graph27->GetZaxis()->SetLabelFont(42);
   Graph_Graph27->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph27->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph27->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph27);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(12.48613);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.003905784);
   linear_fit->SetParError(0,0.0002596111);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-5.50325);
   linear_fit->SetParError(1,0.110767);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI2.BPM40","lp");

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
   
   TPaveText *pt = new TPaveText(0.1989416,0.9336861,0.8010584,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LT.DVT10 Plane: V Ring: 2");
   pt->Draw();
   canvas_BI2.BPM40_V_2->Modified();
   canvas_BI2.BPM40_V_2->cd();
   canvas_BI2.BPM40_V_2->SetSelected(canvas_BI2.BPM40_V_2);
}
