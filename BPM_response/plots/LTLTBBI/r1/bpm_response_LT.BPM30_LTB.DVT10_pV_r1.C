{
//=========Macro generated from canvas: canvas_LT.BPM30_V_1/
//=========  (Wed Apr  1 22:35:07 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM30_V_1 = new TCanvas("canvas_LT.BPM30_V_1", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM30_V_1->SetHighLightColor(2);
   canvas_LT.BPM30_V_1->Range(-1050,-10.47824,1050,-9.652728);
   canvas_LT.BPM30_V_1->SetFillColor(0);
   canvas_LT.BPM30_V_1->SetBorderMode(0);
   canvas_LT.BPM30_V_1->SetBorderSize(2);
   canvas_LT.BPM30_V_1->SetGridx();
   canvas_LT.BPM30_V_1->SetGridy();
   canvas_LT.BPM30_V_1->SetFrameBorderMode(0);
   canvas_LT.BPM30_V_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LTB.DVT10 Plane: V Ring: 1");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-10.00676);
   gre->SetPointError(0,0,0.05562197);
   gre->SetPoint(1,-500,-10.08942);
   gre->SetPointError(1,0,0.1193798);
   gre->SetPoint(2,-300,-10.06624);
   gre->SetPointError(2,0,0.1592011);
   gre->SetPoint(3,-100,-9.93308);
   gre->SetPointError(3,0,0.04019115);
   gre->SetPoint(4,100,-9.85434);
   gre->SetPointError(4,0,0.06402751);
   gre->SetPoint(5,300,-10.22288);
   gre->SetPointError(5,0,0.1177715);
   gre->SetPoint(6,500,-10.08322);
   gre->SetPointError(6,0,0.2135988);
   gre->SetPoint(7,700,-10.159);
   gre->SetPointError(7,0,0.04138769);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Corr: LTB.DVT10 Plane: V Ring: 1",100,-840,840);
   Graph_Graph3->SetMinimum(-10.39569);
   Graph_Graph3->SetMaximum(-9.735279);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetTitle("LTB.DVT10, Kick [#murad]");
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph3);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(17.88948);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.0001316922);
   linear_fit->SetParError(0,4.576313e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-10.014);
   linear_fit->SetParError(1,0.02271204);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","LT.BPM30","lp");

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
   
   TPaveText *pt = new TPaveText(0.1875365,0.9336861,0.8124635,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LTB.DVT10 Plane: V Ring: 1");
   pt->Draw();
   canvas_LT.BPM30_V_1->Modified();
   canvas_LT.BPM30_V_1->cd();
   canvas_LT.BPM30_V_1->SetSelected(canvas_LT.BPM30_V_1);
}
