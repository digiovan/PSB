{
//=========Macro generated from canvas: canvas_BI3.BPM40_V_3/
//=========  (Wed Apr  1 22:35:00 2015) by ROOT version5.34/21
   TCanvas *canvas_BI3.BPM40_V_3 = new TCanvas("canvas_BI3.BPM40_V_3", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI3.BPM40_V_3->SetHighLightColor(2);
   canvas_BI3.BPM40_V_3->Range(-1050,-29.22984,1050,26.73565);
   canvas_BI3.BPM40_V_3->SetFillColor(0);
   canvas_BI3.BPM40_V_3->SetBorderMode(0);
   canvas_BI3.BPM40_V_3->SetBorderSize(2);
   canvas_BI3.BPM40_V_3->SetGridx();
   canvas_BI3.BPM40_V_3->SetGridy();
   canvas_BI3.BPM40_V_3->SetFrameBorderMode(0);
   canvas_BI3.BPM40_V_3->SetFrameBorderMode(0);
   
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
   gre->SetPoint(0,-700,17.2861);
   gre->SetPointError(0,0,0.1219698);
   gre->SetPoint(1,-500,14.24578);
   gre->SetPointError(1,0,0.2503637);
   gre->SetPoint(2,-300,6.91218);
   gre->SetPointError(2,0,0.1307446);
   gre->SetPoint(3,-100,-0.8385);
   gre->SetPointError(3,0,0.0338272);
   gre->SetPoint(4,100,-7.74518);
   gre->SetPointError(4,0,0.3299132);
   gre->SetPoint(5,300,-14.33018);
   gre->SetPointError(5,0,0.1961518);
   gre->SetPoint(6,500,-19.7985);
   gre->SetPointError(6,0,0.1037555);
   gre->SetPoint(7,700,-4.65252);
   gre->SetPointError(7,0,0.844732);
   
   TH1F *Graph_Graph41 = new TH1F("Graph_Graph41","Corr: LT.DVT50 Plane: V Ring: 3",100,-840,840);
   Graph_Graph41->SetMinimum(-23.63329);
   Graph_Graph41->SetMaximum(21.1391);
   Graph_Graph41->SetDirectory(0);
   Graph_Graph41->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph41->SetLineColor(ci);
   Graph_Graph41->GetXaxis()->SetTitle("LT.DVT50, Kick [#murad]");
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
   linear_fit->SetChisquare(922.3128);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.03138122);
   linear_fit->SetParError(0,0.0001213965);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-3.918324);
   linear_fit->SetParError(1,0.03153552);
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
   
   TPaveText *pt = new TPaveText(0.1989416,0.9336861,0.8010584,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LT.DVT50 Plane: V Ring: 3");
   pt->Draw();
   canvas_BI3.BPM40_V_3->Modified();
   canvas_BI3.BPM40_V_3->cd();
   canvas_BI3.BPM40_V_3->SetSelected(canvas_BI3.BPM40_V_3);
}
