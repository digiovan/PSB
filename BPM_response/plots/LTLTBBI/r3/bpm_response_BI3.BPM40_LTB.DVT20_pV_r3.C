{
//=========Macro generated from canvas: canvas_BI3.BPM40_V_3/
//=========  (Wed Apr  1 22:35:21 2015) by ROOT version5.34/21
   TCanvas *canvas_BI3.BPM40_V_3 = new TCanvas("canvas_BI3.BPM40_V_3", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI3.BPM40_V_3->SetHighLightColor(2);
   canvas_BI3.BPM40_V_3->Range(-1050,-15.9534,1050,6.780782);
   canvas_BI3.BPM40_V_3->SetFillColor(0);
   canvas_BI3.BPM40_V_3->SetBorderMode(0);
   canvas_BI3.BPM40_V_3->SetBorderSize(2);
   canvas_BI3.BPM40_V_3->SetGridx();
   canvas_BI3.BPM40_V_3->SetGridy();
   canvas_BI3.BPM40_V_3->SetFrameBorderMode(0);
   canvas_BI3.BPM40_V_3->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LTB.DVT20 Plane: V Ring: 3");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,2.73592);
   gre->SetPointError(0,0,0.2558313);
   gre->SetPoint(1,-500,0.13144);
   gre->SetPointError(1,0,0.222721);
   gre->SetPoint(2,-300,-1.69636);
   gre->SetPointError(2,0,0.1379546);
   gre->SetPoint(3,-100,-3.71126);
   gre->SetPointError(3,0,0.3734866);
   gre->SetPoint(4,100,-4.98864);
   gre->SetPointError(4,0,0.246259);
   gre->SetPoint(5,300,-7.13064);
   gre->SetPointError(5,0,0.1251044);
   gre->SetPoint(6,500,-8.83294);
   gre->SetPointError(6,0,0.6075149);
   gre->SetPoint(7,700,-11.7507);
   gre->SetPointError(7,0,0.4136703);
   
   TH1F *Graph_Graph41 = new TH1F("Graph_Graph41","Corr: LTB.DVT20 Plane: V Ring: 3",100,-840,840);
   Graph_Graph41->SetMinimum(-13.67998);
   Graph_Graph41->SetMaximum(4.507363);
   Graph_Graph41->SetDirectory(0);
   Graph_Graph41->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph41->SetLineColor(ci);
   Graph_Graph41->GetXaxis()->SetTitle("LTB.DVT20, Kick [#murad]");
   Graph_Graph41->GetXaxis()->SetLabelFont(42);
   Graph_Graph41->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph41->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph41->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph41->GetXaxis()->SetTitleFont(42);
   Graph_Graph41->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph41->GetYaxis()->SetLabelFont(42);
   Graph_Graph41->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph41->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph41->GetYaxis()->SetTitleFont(42);
   Graph_Graph41->GetZaxis()->SetLabelFont(42);
   Graph_Graph41->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph41->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph41->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph41);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(12.31079);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.009493318);
   linear_fit->SetParError(0,0.0001956394);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-4.378935);
   linear_fit->SetParError(1,0.07462352);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI3.BPM40","lp");

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
   TText *text = pt->AddText("Corr: LTB.DVT20 Plane: V Ring: 3");
   pt->Draw();
   canvas_BI3.BPM40_V_3->Modified();
   canvas_BI3.BPM40_V_3->cd();
   canvas_BI3.BPM40_V_3->SetSelected(canvas_BI3.BPM40_V_3);
}
