{
//=========Macro generated from canvas: canvas_BI.BPM10_V_1/
//=========  (Wed Apr  1 22:34:58 2015) by ROOT version5.34/21
   TCanvas *canvas_BI.BPM10_V_1 = new TCanvas("canvas_BI.BPM10_V_1", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI.BPM10_V_1->SetHighLightColor(2);
   canvas_BI.BPM10_V_1->Range(-1050,-18.8757,1050,27.83383);
   canvas_BI.BPM10_V_1->SetFillColor(0);
   canvas_BI.BPM10_V_1->SetBorderMode(0);
   canvas_BI.BPM10_V_1->SetBorderSize(2);
   canvas_BI.BPM10_V_1->SetGridx();
   canvas_BI.BPM10_V_1->SetGridy();
   canvas_BI.BPM10_V_1->SetFrameBorderMode(0);
   canvas_BI.BPM10_V_1->SetFrameBorderMode(0);
   
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
   gre->SetPoint(0,-700,19.89506);
   gre->SetPointError(0,0,0.1538518);
   gre->SetPoint(1,-500,16.4214);
   gre->SetPointError(1,0,0.1015244);
   gre->SetPoint(2,-300,11.6765);
   gre->SetPointError(2,0,0.06264133);
   gre->SetPoint(3,-100,7.24198);
   gre->SetPointError(3,0,0.09900591);
   gre->SetPoint(4,100,2.78778);
   gre->SetPointError(4,0,0.1615311);
   gre->SetPoint(5,300,-1.67696);
   gre->SetPointError(5,0,0.07407763);
   gre->SetPoint(6,500,-6.2415);
   gre->SetPointError(6,0,0.1328635);
   gre->SetPoint(7,700,-10.86518);
   gre->SetPointError(7,0,0.2255943);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","Corr: LT.DVT50 Plane: V Ring: 1",100,-840,840);
   Graph_Graph10->SetMinimum(-14.20474);
   Graph_Graph10->SetMaximum(23.16288);
   Graph_Graph10->SetDirectory(0);
   Graph_Graph10->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph10->SetLineColor(ci);
   Graph_Graph10->GetXaxis()->SetTitle("LT.DVT50, Kick [#murad]");
   Graph_Graph10->GetXaxis()->SetLabelFont(42);
   Graph_Graph10->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph10->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph10->GetXaxis()->SetTitleFont(42);
   Graph_Graph10->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph10->GetYaxis()->SetLabelFont(42);
   Graph_Graph10->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph10->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetYaxis()->SetTitleFont(42);
   Graph_Graph10->GetZaxis()->SetLabelFont(42);
   Graph_Graph10->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph10->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph10);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(30.31778);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.02227607);
   linear_fit->SetParError(0,9.791887e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,4.985252);
   linear_fit->SetParError(1,0.0363843);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI.BPM10","lp");

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
   canvas_BI.BPM10_V_1->Modified();
   canvas_BI.BPM10_V_1->cd();
   canvas_BI.BPM10_V_1->SetSelected(canvas_BI.BPM10_V_1);
}
