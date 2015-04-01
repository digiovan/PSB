{
//=========Macro generated from canvas: canvas_BI.BPM20_V_4/
//=========  (Wed Apr  1 22:34:51 2015) by ROOT version5.34/21
   TCanvas *canvas_BI.BPM20_V_4 = new TCanvas("canvas_BI.BPM20_V_4", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI.BPM20_V_4->SetHighLightColor(2);
   canvas_BI.BPM20_V_4->Range(-1050,-5.575097,1050,2.929845);
   canvas_BI.BPM20_V_4->SetFillColor(0);
   canvas_BI.BPM20_V_4->SetBorderMode(0);
   canvas_BI.BPM20_V_4->SetBorderSize(2);
   canvas_BI.BPM20_V_4->SetGridx();
   canvas_BI.BPM20_V_4->SetGridy();
   canvas_BI.BPM20_V_4->SetFrameBorderMode(0);
   canvas_BI.BPM20_V_4->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DVT40 Plane: V Ring: 4");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-4.11686);
   gre->SetPointError(0,0,0.04074622);
   gre->SetPoint(1,-500,-3.31458);
   gre->SetPointError(1,0,0.07411519);
   gre->SetPoint(2,-300,-2.5347);
   gre->SetPointError(2,0,0.05977348);
   gre->SetPoint(3,-100,-1.65276);
   gre->SetPointError(3,0,0.1314012);
   gre->SetPoint(4,100,-1.04916);
   gre->SetPointError(4,0,0.1968979);
   gre->SetPoint(5,300,-0.22534);
   gre->SetPointError(5,0,0.01412435);
   gre->SetPoint(6,500,0.58032);
   gre->SetPointError(6,0,0.02795976);
   gre->SetPoint(7,700,1.44542);
   gre->SetPointError(7,0,0.06693486);
   
   TH1F *Graph_Graph53 = new TH1F("Graph_Graph53","Corr: LT.DVT40 Plane: V Ring: 4",100,-840,840);
   Graph_Graph53->SetMinimum(-4.724602);
   Graph_Graph53->SetMaximum(2.079351);
   Graph_Graph53->SetDirectory(0);
   Graph_Graph53->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph53->SetLineColor(ci);
   Graph_Graph53->GetXaxis()->SetTitle("LT.DVT40, Kick [#murad]");
   Graph_Graph53->GetXaxis()->SetLabelFont(42);
   Graph_Graph53->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph53->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph53->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph53->GetXaxis()->SetTitleFont(42);
   Graph_Graph53->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph53->GetYaxis()->SetLabelFont(42);
   Graph_Graph53->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph53->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph53->GetYaxis()->SetTitleFont(42);
   Graph_Graph53->GetZaxis()->SetLabelFont(42);
   Graph_Graph53->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph53->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph53->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph53);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(4.185683);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.0039062);
   linear_fit->SetParError(0,3.390459e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-1.385835);
   linear_fit->SetParError(1,0.01367695);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI.BPM20","lp");

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
   TText *text = pt->AddText("Corr: LT.DVT40 Plane: V Ring: 4");
   pt->Draw();
   canvas_BI.BPM20_V_4->Modified();
   canvas_BI.BPM20_V_4->cd();
   canvas_BI.BPM20_V_4->SetSelected(canvas_BI.BPM20_V_4);
}
