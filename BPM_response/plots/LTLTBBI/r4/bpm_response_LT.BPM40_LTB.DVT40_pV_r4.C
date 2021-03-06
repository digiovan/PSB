{
//=========Macro generated from canvas: canvas_LT.BPM40_V_4/
//=========  (Wed Apr  1 22:35:42 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM40_V_4 = new TCanvas("canvas_LT.BPM40_V_4", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM40_V_4->SetHighLightColor(2);
   canvas_LT.BPM40_V_4->Range(-1050,-8.241224,1050,-7.843128);
   canvas_LT.BPM40_V_4->SetFillColor(0);
   canvas_LT.BPM40_V_4->SetBorderMode(0);
   canvas_LT.BPM40_V_4->SetBorderSize(2);
   canvas_LT.BPM40_V_4->SetGridx();
   canvas_LT.BPM40_V_4->SetGridy();
   canvas_LT.BPM40_V_4->SetFrameBorderMode(0);
   canvas_LT.BPM40_V_4->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LTB.DVT40 Plane: V Ring: 4");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-8.02346);
   gre->SetPointError(0,0,0.04653329);
   gre->SetPoint(1,-500,-8.07614);
   gre->SetPointError(1,0,0.09873479);
   gre->SetPoint(2,-300,-7.9693);
   gre->SetPointError(2,0,0.05982276);
   gre->SetPoint(3,-100,-8.06552);
   gre->SetPointError(3,0,0.02670987);
   gre->SetPoint(4,100,-7.98264);
   gre->SetPointError(4,0,0.03745023);
   gre->SetPoint(5,300,-8.00742);
   gre->SetPointError(5,0,0.07160628);
   gre->SetPoint(6,500,-8.06686);
   gre->SetPointError(6,0,0.02175663);
   gre->SetPoint(7,700,-8.0149);
   gre->SetPointError(7,0,0.03534812);
   
   TH1F *Graph_Graph46 = new TH1F("Graph_Graph46","Corr: LTB.DVT40 Plane: V Ring: 4",100,-840,840);
   Graph_Graph46->SetMinimum(-8.201415);
   Graph_Graph46->SetMaximum(-7.882937);
   Graph_Graph46->SetDirectory(0);
   Graph_Graph46->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph46->SetLineColor(ci);
   Graph_Graph46->GetXaxis()->SetTitle("LTB.DVT40, Kick [#murad]");
   Graph_Graph46->GetXaxis()->SetLabelFont(42);
   Graph_Graph46->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph46->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph46->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph46->GetXaxis()->SetTitleFont(42);
   Graph_Graph46->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph46->GetYaxis()->SetLabelFont(42);
   Graph_Graph46->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph46->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph46->GetYaxis()->SetTitleFont(42);
   Graph_Graph46->GetZaxis()->SetLabelFont(42);
   Graph_Graph46->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph46->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph46->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph46);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(6.96188);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-1.361767e-05);
   linear_fit->SetParError(0,3.132756e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-8.037669);
   linear_fit->SetParError(1,0.01414112);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","LT.BPM40","lp");

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
   
   TPaveText *pt = new TPaveText(0.1847993,0.9336861,0.8152007,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LTB.DVT40 Plane: V Ring: 4");
   pt->Draw();
   canvas_LT.BPM40_V_4->Modified();
   canvas_LT.BPM40_V_4->cd();
   canvas_LT.BPM40_V_4->SetSelected(canvas_LT.BPM40_V_4);
}
