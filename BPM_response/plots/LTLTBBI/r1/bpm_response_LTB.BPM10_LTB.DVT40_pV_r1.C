{
//=========Macro generated from canvas: canvas_LTB.BPM10_V_1/
//=========  (Wed Apr  1 22:35:39 2015) by ROOT version5.34/21
   TCanvas *canvas_LTB.BPM10_V_1 = new TCanvas("canvas_LTB.BPM10_V_1", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LTB.BPM10_V_1->SetHighLightColor(2);
   canvas_LTB.BPM10_V_1->Range(-1050,0.5328061,1050,0.825756);
   canvas_LTB.BPM10_V_1->SetFillColor(0);
   canvas_LTB.BPM10_V_1->SetBorderMode(0);
   canvas_LTB.BPM10_V_1->SetBorderSize(2);
   canvas_LTB.BPM10_V_1->SetGridx();
   canvas_LTB.BPM10_V_1->SetGridy();
   canvas_LTB.BPM10_V_1->SetFrameBorderMode(0);
   canvas_LTB.BPM10_V_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LTB.DVT40 Plane: V Ring: 1");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,0.60222);
   gre->SetPointError(0,0,0.01037117);
   gre->SetPoint(1,-500,0.69334);
   gre->SetPointError(1,0,0.02485401);
   gre->SetPoint(2,-300,0.70718);
   gre->SetPointError(2,0,0.02310467);
   gre->SetPoint(3,-100,0.64206);
   gre->SetPointError(3,0,0.03128028);
   gre->SetPoint(4,100,0.7342);
   gre->SetPointError(4,0,0.04273103);
   gre->SetPoint(5,300,0.68974);
   gre->SetPointError(5,0,0.04534762);
   gre->SetPoint(6,500,0.72964);
   gre->SetPointError(6,0,0.006924292);
   gre->SetPoint(7,700,0.62862);
   gre->SetPointError(7,0,0.04698889);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Corr: LTB.DVT40 Plane: V Ring: 1",100,-840,840);
   Graph_Graph6->SetMinimum(0.5621011);
   Graph_Graph6->SetMaximum(0.796461);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetTitle("LTB.DVT40, Kick [#murad]");
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph6);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(21.24243);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,9.251939e-05);
   linear_fit->SetParError(0,9.8146e-06);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,0.6822906);
   linear_fit->SetParError(1,0.005320377);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","LTB.BPM10","lp");

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
   
   TPaveText *pt = new TPaveText(0.1875365,0.9336861,0.8124635,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LTB.DVT40 Plane: V Ring: 1");
   pt->Draw();
   canvas_LTB.BPM10_V_1->Modified();
   canvas_LTB.BPM10_V_1->cd();
   canvas_LTB.BPM10_V_1->SetSelected(canvas_LTB.BPM10_V_1);
}
