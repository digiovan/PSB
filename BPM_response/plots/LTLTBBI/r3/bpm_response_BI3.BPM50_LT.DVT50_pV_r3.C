{
//=========Macro generated from canvas: canvas_BI3.BPM50_V_3/
//=========  (Wed Apr  1 22:35:00 2015) by ROOT version5.34/21
   TCanvas *canvas_BI3.BPM50_V_3 = new TCanvas("canvas_BI3.BPM50_V_3", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI3.BPM50_V_3->SetHighLightColor(2);
   canvas_BI3.BPM50_V_3->Range(-1050,-26.04185,1050,19.30243);
   canvas_BI3.BPM50_V_3->SetFillColor(0);
   canvas_BI3.BPM50_V_3->SetBorderMode(0);
   canvas_BI3.BPM50_V_3->SetBorderSize(2);
   canvas_BI3.BPM50_V_3->SetGridx();
   canvas_BI3.BPM50_V_3->SetGridy();
   canvas_BI3.BPM50_V_3->SetFrameBorderMode(0);
   canvas_BI3.BPM50_V_3->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DVT50 Plane: V Ring: 3");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,11.45998);
   gre->SetPointError(0,0,0.2850691);
   gre->SetPoint(1,-500,8.63668);
   gre->SetPointError(1,0,0.150446);
   gre->SetPoint(2,-300,2.8192);
   gre->SetPointError(2,0,0.1377242);
   gre->SetPoint(3,-100,-3.55048);
   gre->SetPointError(3,0,0.05295115);
   gre->SetPoint(4,100,-8.97994);
   gre->SetPointError(4,0,0.3456557);
   gre->SetPoint(5,300,-14.295);
   gre->SetPointError(5,0,0.2495891);
   gre->SetPoint(6,500,-17.44712);
   gre->SetPointError(6,0,1.037347);
   gre->SetPoint(7,700,-5.9653);
   gre->SetPointError(7,0,0.7856412);
   
   TH1F *Graph_Graph42 = new TH1F("Graph_Graph42","Corr: LT.DVT50 Plane: V Ring: 3",100,-840,840);
   Graph_Graph42->SetMinimum(-21.50742);
   Graph_Graph42->SetMaximum(14.768);
   Graph_Graph42->SetDirectory(0);
   Graph_Graph42->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph42->SetLineColor(ci);
   Graph_Graph42->GetXaxis()->SetTitle("LT.DVT50, Kick [#murad]");
   Graph_Graph42->GetXaxis()->SetLabelFont(42);
   Graph_Graph42->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph42->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph42->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph42->GetXaxis()->SetTitleFont(42);
   Graph_Graph42->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph42->GetYaxis()->SetLabelFont(42);
   Graph_Graph42->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph42->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph42->GetYaxis()->SetTitleFont(42);
   Graph_Graph42->GetZaxis()->SetLabelFont(42);
   Graph_Graph42->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph42->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph42->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph42);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(714.8831);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.02655567);
   linear_fit->SetParError(0,0.0002458303);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-5.915817);
   linear_fit->SetParError(1,0.05853373);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI3.BPM50","lp");

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
   TText *text = pt->AddText("Corr: LT.DVT50 Plane: V Ring: 3");
   pt->Draw();
   canvas_BI3.BPM50_V_3->Modified();
   canvas_BI3.BPM50_V_3->cd();
   canvas_BI3.BPM50_V_3->SetSelected(canvas_BI3.BPM50_V_3);
}
