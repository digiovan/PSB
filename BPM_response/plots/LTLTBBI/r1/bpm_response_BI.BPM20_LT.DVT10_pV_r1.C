{
//=========Macro generated from canvas: canvas_BI.BPM20_V_1/
//=========  (Wed Apr  1 22:34:16 2015) by ROOT version5.34/21
   TCanvas *canvas_BI.BPM20_V_1 = new TCanvas("canvas_BI.BPM20_V_1", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI.BPM20_V_1->SetHighLightColor(2);
   canvas_BI.BPM20_V_1->Range(-1050,-4.893722,1050,0.3796153);
   canvas_BI.BPM20_V_1->SetFillColor(0);
   canvas_BI.BPM20_V_1->SetBorderMode(0);
   canvas_BI.BPM20_V_1->SetBorderSize(2);
   canvas_BI.BPM20_V_1->SetGridx();
   canvas_BI.BPM20_V_1->SetGridy();
   canvas_BI.BPM20_V_1->SetFrameBorderMode(0);
   canvas_BI.BPM20_V_1->SetFrameBorderMode(0);
   
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
   gre->SetPoint(0,-700,-3.95328);
   gre->SetPointError(0,0,0.06155244);
   gre->SetPoint(1,-500,-3.40082);
   gre->SetPointError(1,0,0.02248923);
   gre->SetPoint(2,-300,-2.97596);
   gre->SetPointError(2,0,0.04566429);
   gre->SetPoint(3,-100,-2.61596);
   gre->SetPointError(3,0,0.03811719);
   gre->SetPoint(4,100,-1.95638);
   gre->SetPointError(4,0,0.1040724);
   gre->SetPoint(5,300,-1.59458);
   gre->SetPointError(5,0,0.03031488);
   gre->SetPoint(6,500,-1.00414);
   gre->SetPointError(6,0,0.1063252);
   gre->SetPoint(7,700,-0.61434);
   gre->SetPointError(7,0,0.1150657);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Corr: LT.DVT10 Plane: V Ring: 1",100,-840,840);
   Graph_Graph11->SetMinimum(-4.366388);
   Graph_Graph11->SetMaximum(-0.1477185);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11->SetLineColor(ci);
   Graph_Graph11->GetXaxis()->SetTitle("LT.DVT10, Kick [#murad]");
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(12.87098);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.002293294);
   linear_fit->SetParError(0,3.951371e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-2.284668);
   linear_fit->SetParError(1,0.01652782);
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
   
   TPaveText *pt = new TPaveText(0.2016788,0.9336861,0.7983212,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LT.DVT10 Plane: V Ring: 1");
   pt->Draw();
   canvas_BI.BPM20_V_1->Modified();
   canvas_BI.BPM20_V_1->cd();
   canvas_BI.BPM20_V_1->SetSelected(canvas_BI.BPM20_V_1);
}
