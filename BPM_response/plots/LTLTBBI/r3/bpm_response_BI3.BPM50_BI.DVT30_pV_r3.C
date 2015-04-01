{
//=========Macro generated from canvas: canvas_BI3.BPM50_V_3/
//=========  (Wed Apr  1 22:36:14 2015) by ROOT version5.34/21
   TCanvas *canvas_BI3.BPM50_V_3 = new TCanvas("canvas_BI3.BPM50_V_3", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI3.BPM50_V_3->SetHighLightColor(2);
   canvas_BI3.BPM50_V_3->Range(-1050,-12.13665,1050,0.3458883);
   canvas_BI3.BPM50_V_3->SetFillColor(0);
   canvas_BI3.BPM50_V_3->SetBorderMode(0);
   canvas_BI3.BPM50_V_3->SetBorderSize(2);
   canvas_BI3.BPM50_V_3->SetGridx();
   canvas_BI3.BPM50_V_3->SetGridy();
   canvas_BI3.BPM50_V_3->SetFrameBorderMode(0);
   canvas_BI3.BPM50_V_3->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: BI.DVT30 Plane: V Ring: 3");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-6.1085);
   gre->SetPointError(0,0,2.224576);
   gre->SetPoint(1,-500,-9.26068);
   gre->SetPointError(1,0,0.3628832);
   gre->SetPoint(2,-300,-9.8147);
   gre->SetPointError(2,0,0.2415296);
   gre->SetPoint(3,-100,-8.82492);
   gre->SetPointError(3,0,1.06063);
   gre->SetPoint(4,100,-7.5054);
   gre->SetPointError(4,0,1.160641);
   gre->SetPoint(5,300,-7.48312);
   gre->SetPointError(5,0,0.5980946);
   gre->SetPoint(6,500,-7.70342);
   gre->SetPointError(6,0,0.2815573);
   gre->SetPoint(7,700,-3.07234);
   gre->SetPointError(7,0,1.337805);
   
   TH1F *Graph_Graph42 = new TH1F("Graph_Graph42","Corr: BI.DVT30 Plane: V Ring: 3",100,-840,840);
   Graph_Graph42->SetMinimum(-10.8884);
   Graph_Graph42->SetMaximum(-0.9023659);
   Graph_Graph42->SetDirectory(0);
   Graph_Graph42->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph42->SetLineColor(ci);
   Graph_Graph42->GetXaxis()->SetTitle("BI.DVT30, Kick [#murad]");
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
   linear_fit->SetChisquare(20.04682);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.002367348);
   linear_fit->SetParError(0,0.000373237);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-8.682581);
   linear_fit->SetParError(1,0.1539335);
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
   
   TPaveText *pt = new TPaveText(0.2030474,0.9336861,0.7969526,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: BI.DVT30 Plane: V Ring: 3");
   pt->Draw();
   canvas_BI3.BPM50_V_3->Modified();
   canvas_BI3.BPM50_V_3->cd();
   canvas_BI3.BPM50_V_3->SetSelected(canvas_BI3.BPM50_V_3);
}
