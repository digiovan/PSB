{
//=========Macro generated from canvas: canvas_LT.BPM20_V_2/
//=========  (Wed Apr  1 22:34:58 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM20_V_2 = new TCanvas("canvas_LT.BPM20_V_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM20_V_2->SetHighLightColor(2);
   canvas_LT.BPM20_V_2->Range(-1050,-6.603943,1050,-6.146605);
   canvas_LT.BPM20_V_2->SetFillColor(0);
   canvas_LT.BPM20_V_2->SetBorderMode(0);
   canvas_LT.BPM20_V_2->SetBorderSize(2);
   canvas_LT.BPM20_V_2->SetGridx();
   canvas_LT.BPM20_V_2->SetGridy();
   canvas_LT.BPM20_V_2->SetFrameBorderMode(0);
   canvas_LT.BPM20_V_2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DVT50 Plane: V Ring: 2");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-6.23318);
   gre->SetPointError(0,0,0.01035206);
   gre->SetPoint(1,-500,-6.30804);
   gre->SetPointError(1,0,0.07121012);
   gre->SetPoint(2,-300,-6.36246);
   gre->SetPointError(2,0,0.06253607);
   gre->SetPoint(3,-100,-6.35454);
   gre->SetPointError(3,0,0.02655817);
   gre->SetPoint(4,100,-6.28728);
   gre->SetPointError(4,0,0.02680035);
   gre->SetPoint(5,300,-6.41184);
   gre->SetPointError(5,0,0.02949585);
   gre->SetPoint(6,500,-6.3302);
   gre->SetPointError(6,0,0.01945734);
   gre->SetPoint(7,700,-6.4687);
   gre->SetPointError(7,0,0.05902032);
   
   TH1F *Graph_Graph16 = new TH1F("Graph_Graph16","Corr: LT.DVT50 Plane: V Ring: 2",100,-840,840);
   Graph_Graph16->SetMinimum(-6.55821);
   Graph_Graph16->SetMaximum(-6.192339);
   Graph_Graph16->SetDirectory(0);
   Graph_Graph16->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph16->SetLineColor(ci);
   Graph_Graph16->GetXaxis()->SetTitle("LT.DVT50, Kick [#murad]");
   Graph_Graph16->GetXaxis()->SetLabelFont(42);
   Graph_Graph16->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph16->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph16->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph16->GetXaxis()->SetTitleFont(42);
   Graph_Graph16->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph16->GetYaxis()->SetLabelFont(42);
   Graph_Graph16->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph16->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph16->GetYaxis()->SetTitleFont(42);
   Graph_Graph16->GetZaxis()->SetLabelFont(42);
   Graph_Graph16->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph16->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph16->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph16);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(18.57058);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.0001078115);
   linear_fit->SetParError(0,1.54853e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-6.31395);
   linear_fit->SetParError(1,0.008956398);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","LT.BPM20","lp");

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
   TText *text = pt->AddText("Corr: LT.DVT50 Plane: V Ring: 2");
   pt->Draw();
   canvas_LT.BPM20_V_2->Modified();
   canvas_LT.BPM20_V_2->cd();
   canvas_LT.BPM20_V_2->SetSelected(canvas_LT.BPM20_V_2);
}
