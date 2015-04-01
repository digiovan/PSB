{
//=========Macro generated from canvas: canvas_LT.BPM10_V_1/
//=========  (Wed Apr  1 22:36:00 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM10_V_1 = new TCanvas("canvas_LT.BPM10_V_1", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM10_V_1->SetHighLightColor(2);
   canvas_LT.BPM10_V_1->Range(-1050,0.5136225,1050,0.9230236);
   canvas_LT.BPM10_V_1->SetFillColor(0);
   canvas_LT.BPM10_V_1->SetBorderMode(0);
   canvas_LT.BPM10_V_1->SetBorderSize(2);
   canvas_LT.BPM10_V_1->SetGridx();
   canvas_LT.BPM10_V_1->SetGridy();
   canvas_LT.BPM10_V_1->SetFrameBorderMode(0);
   canvas_LT.BPM10_V_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: BI.DVT20 Plane: V Ring: 1");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,0.61048);
   gre->SetPointError(0,0,0.02862395);
   gre->SetPoint(1,-500,0.73206);
   gre->SetPointError(1,0,0.03517448);
   gre->SetPoint(2,-300,0.66862);
   gre->SetPointError(2,0,0.05615595);
   gre->SetPoint(3,-100,0.7776);
   gre->SetPointError(3,0,0.07719009);
   gre->SetPoint(4,100,0.68148);
   gre->SetPointError(4,0,0.03572794);
   gre->SetPoint(5,300,0.70784);
   gre->SetPointError(5,0,0.04421652);
   gre->SetPoint(6,500,0.74748);
   gre->SetPointError(6,0,0.04994061);
   gre->SetPoint(7,700,0.69446);
   gre->SetPointError(7,0,0.02636522);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Corr: BI.DVT20 Plane: V Ring: 1",100,-840,840);
   Graph_Graph1->SetMinimum(0.5545626);
   Graph_Graph1->SetMaximum(0.8820835);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("BI.DVT20, Kick [#murad]");
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(9.166572);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,4.138132e-05);
   linear_fit->SetParError(0,2.433598e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,0.6853835);
   linear_fit->SetParError(1,0.01330932);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","LT.BPM10","lp");

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
   
   TPaveText *pt = new TPaveText(0.2057847,0.9336861,0.7942153,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: BI.DVT20 Plane: V Ring: 1");
   pt->Draw();
   canvas_LT.BPM10_V_1->Modified();
   canvas_LT.BPM10_V_1->cd();
   canvas_LT.BPM10_V_1->SetSelected(canvas_LT.BPM10_V_1);
}
