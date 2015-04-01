{
//=========Macro generated from canvas: canvas_BI2.BPM50_V_2/
//=========  (Wed Apr  1 22:34:17 2015) by ROOT version5.34/21
   TCanvas *canvas_BI2.BPM50_V_2 = new TCanvas("canvas_BI2.BPM50_V_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI2.BPM50_V_2->SetHighLightColor(2);
   canvas_BI2.BPM50_V_2->Range(-1050,-11.68464,1050,-2.926857);
   canvas_BI2.BPM50_V_2->SetFillColor(0);
   canvas_BI2.BPM50_V_2->SetBorderMode(0);
   canvas_BI2.BPM50_V_2->SetBorderSize(2);
   canvas_BI2.BPM50_V_2->SetGridx();
   canvas_BI2.BPM50_V_2->SetGridy();
   canvas_BI2.BPM50_V_2->SetFrameBorderMode(0);
   canvas_BI2.BPM50_V_2->SetFrameBorderMode(0);
   
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
   gre->SetPoint(0,-700,-5.22196);
   gre->SetPointError(0,0,0.8354728);
   gre->SetPoint(1,-500,-8.5319);
   gre->SetPointError(1,0,0.8805299);
   gre->SetPoint(2,-300,-7.81168);
   gre->SetPointError(2,0,0.1763632);
   gre->SetPoint(3,-100,-8.57474);
   gre->SetPointError(3,0,0.4537618);
   gre->SetPoint(4,100,-9.3236);
   gre->SetPointError(4,0,0.5971938);
   gre->SetPoint(5,300,-9.83744);
   gre->SetPointError(5,0,0.3875665);
   gre->SetPoint(6,500,-9.16514);
   gre->SetPointError(6,0,0.1098259);
   gre->SetPoint(7,700,-9.38726);
   gre->SetPointError(7,0,0.5498389);
   
   TH1F *Graph_Graph28 = new TH1F("Graph_Graph28","Corr: LT.DVT10 Plane: V Ring: 2",100,-840,840);
   Graph_Graph28->SetMinimum(-10.80886);
   Graph_Graph28->SetMaximum(-3.802635);
   Graph_Graph28->SetDirectory(0);
   Graph_Graph28->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph28->SetLineColor(ci);
   Graph_Graph28->GetXaxis()->SetTitle("LT.DVT10, Kick [#murad]");
   Graph_Graph28->GetXaxis()->SetLabelFont(42);
   Graph_Graph28->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph28->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph28->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph28->GetXaxis()->SetTitleFont(42);
   Graph_Graph28->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph28->GetYaxis()->SetLabelFont(42);
   Graph_Graph28->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph28->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph28->GetYaxis()->SetTitleFont(42);
   Graph_Graph28->GetZaxis()->SetLabelFont(42);
   Graph_Graph28->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph28->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph28->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph28);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(15.69353);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.001726909);
   linear_fit->SetParError(0,0.0002339619);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-8.379571);
   linear_fit->SetParError(1,0.1043605);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI2.BPM50","lp");

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
   canvas_BI2.BPM50_V_2->Modified();
   canvas_BI2.BPM50_V_2->cd();
   canvas_BI2.BPM50_V_2->SetSelected(canvas_BI2.BPM50_V_2);
}
