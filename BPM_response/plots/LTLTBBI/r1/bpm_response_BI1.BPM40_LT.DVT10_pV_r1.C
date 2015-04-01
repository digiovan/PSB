{
//=========Macro generated from canvas: canvas_BI1.BPM40_V_1/
//=========  (Wed Apr  1 22:34:16 2015) by ROOT version5.34/21
   TCanvas *canvas_BI1.BPM40_V_1 = new TCanvas("canvas_BI1.BPM40_V_1", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI1.BPM40_V_1->SetHighLightColor(2);
   canvas_BI1.BPM40_V_1->Range(-1050,-9.158439,1050,0.1185848);
   canvas_BI1.BPM40_V_1->SetFillColor(0);
   canvas_BI1.BPM40_V_1->SetBorderMode(0);
   canvas_BI1.BPM40_V_1->SetBorderSize(2);
   canvas_BI1.BPM40_V_1->SetGridx();
   canvas_BI1.BPM40_V_1->SetGridy();
   canvas_BI1.BPM40_V_1->SetFrameBorderMode(0);
   canvas_BI1.BPM40_V_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DVT10 Plane: V Ring: 1");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-1.69172);
   gre->SetPointError(0,0,0.2641341);
   gre->SetPoint(1,-500,-2.68314);
   gre->SetPointError(1,0,0.3356473);
   gre->SetPoint(2,-300,-3.47758);
   gre->SetPointError(2,0,0.1856332);
   gre->SetPoint(3,-100,-3.70798);
   gre->SetPointError(3,0,0.116071);
   gre->SetPoint(4,100,-4.87148);
   gre->SetPointError(4,0,0.2769444);
   gre->SetPoint(5,300,-5.2558);
   gre->SetPointError(5,0,0.3783284);
   gre->SetPoint(6,500,-5.84236);
   gre->SetPointError(6,0,0.1758411);
   gre->SetPoint(7,700,-7.55032);
   gre->SetPointError(7,0,0.06194841);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","Corr: LT.DVT10 Plane: V Ring: 1",100,-840,840);
   Graph_Graph13->SetMinimum(-8.230737);
   Graph_Graph13->SetMaximum(-0.8091176);
   Graph_Graph13->SetDirectory(0);
   Graph_Graph13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph13->SetLineColor(ci);
   Graph_Graph13->GetXaxis()->SetTitle("LT.DVT10, Kick [#murad]");
   Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph13->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph13->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph13->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph13->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph13->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph13->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph13->GetYaxis()->SetTitleFont(42);
   Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph13->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph13->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph13->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph13);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(34.291);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.004336062);
   linear_fit->SetParError(0,0.0001102406);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-4.409998);
   linear_fit->SetParError(1,0.06422241);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI1.BPM40","lp");

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
   
   TPaveText *pt = new TPaveText(0.2016788,0.9336861,0.7983212,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LT.DVT10 Plane: V Ring: 1");
   pt->Draw();
   canvas_BI1.BPM40_V_1->Modified();
   canvas_BI1.BPM40_V_1->cd();
   canvas_BI1.BPM40_V_1->SetSelected(canvas_BI1.BPM40_V_1);
}
