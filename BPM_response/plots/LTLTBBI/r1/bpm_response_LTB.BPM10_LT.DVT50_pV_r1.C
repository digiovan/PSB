{
//=========Macro generated from canvas: canvas_LTB.BPM10_V_1/
//=========  (Wed Apr  1 22:34:57 2015) by ROOT version5.34/21
   TCanvas *canvas_LTB.BPM10_V_1 = new TCanvas("canvas_LTB.BPM10_V_1", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LTB.BPM10_V_1->SetHighLightColor(2);
   canvas_LTB.BPM10_V_1->Range(-1050,-8.143856,1050,9.473381);
   canvas_LTB.BPM10_V_1->SetFillColor(0);
   canvas_LTB.BPM10_V_1->SetBorderMode(0);
   canvas_LTB.BPM10_V_1->SetBorderSize(2);
   canvas_LTB.BPM10_V_1->SetGridx();
   canvas_LTB.BPM10_V_1->SetGridy();
   canvas_LTB.BPM10_V_1->SetFrameBorderMode(0);
   canvas_LTB.BPM10_V_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DVT50 Plane: V Ring: 1");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-5.15136);
   gre->SetPointError(0,0,0.05629008);
   gre->SetPoint(1,-500,-3.42848);
   gre->SetPointError(1,0,0.004369875);
   gre->SetPoint(2,-300,-1.64212);
   gre->SetPointError(2,0,0.01359392);
   gre->SetPoint(3,-100,0.05824);
   gre->SetPointError(3,0,0.03547649);
   gre->SetPoint(4,100,1.68802);
   gre->SetPointError(4,0,0.04570204);
   gre->SetPoint(5,300,3.23222);
   gre->SetPointError(5,0,0.02858141);
   gre->SetPoint(6,500,4.84856);
   gre->SetPointError(6,0,0.06066355);
   gre->SetPoint(7,700,6.47476);
   gre->SetPointError(7,0,0.06241459);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Corr: LT.DVT50 Plane: V Ring: 1",100,-840,840);
   Graph_Graph6->SetMinimum(-6.382133);
   Graph_Graph6->SetMaximum(7.711657);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetTitle("LT.DVT50, Kick [#murad]");
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
   linear_fit->SetChisquare(88.86074);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.008403129);
   linear_fit->SetParError(0,2.365181e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,0.7818867);
   linear_fit->SetParError(1,0.01133997);
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
   
   TPaveText *pt = new TPaveText(0.2016788,0.9336861,0.7983212,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LT.DVT50 Plane: V Ring: 1");
   pt->Draw();
   canvas_LTB.BPM10_V_1->Modified();
   canvas_LTB.BPM10_V_1->cd();
   canvas_LTB.BPM10_V_1->SetSelected(canvas_LTB.BPM10_V_1);
}
