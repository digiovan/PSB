{
//=========Macro generated from canvas: canvas_BI.BPM10_V_2/
//=========  (Wed Apr  1 22:35:30 2015) by ROOT version5.34/21
   TCanvas *canvas_BI.BPM10_V_2 = new TCanvas("canvas_BI.BPM10_V_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI.BPM10_V_2->SetHighLightColor(2);
   canvas_BI.BPM10_V_2->Range(-1050,1.07072,1050,7.644265);
   canvas_BI.BPM10_V_2->SetFillColor(0);
   canvas_BI.BPM10_V_2->SetBorderMode(0);
   canvas_BI.BPM10_V_2->SetBorderSize(2);
   canvas_BI.BPM10_V_2->SetGridx();
   canvas_BI.BPM10_V_2->SetGridy();
   canvas_BI.BPM10_V_2->SetFrameBorderMode(0);
   canvas_BI.BPM10_V_2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LTB.DVT30 Plane: V Ring: 2");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,6.46436);
   gre->SetPointError(0,0,0.08431378);
   gre->SetPoint(1,-500,5.71212);
   gre->SetPointError(1,0,0.2198735);
   gre->SetPoint(2,-300,5.15254);
   gre->SetPointError(2,0,0.02767612);
   gre->SetPoint(3,-100,4.51946);
   gre->SetPointError(3,0,0.1100031);
   gre->SetPoint(4,100,4.2173);
   gre->SetPointError(4,0,0.08427343);
   gre->SetPoint(5,300,3.33694);
   gre->SetPointError(5,0,0.06504491);
   gre->SetPoint(6,500,2.9847);
   gre->SetPointError(6,0,0.09247991);
   gre->SetPoint(7,700,2.27068);
   gre->SetPointError(7,0,0.1043689);
   
   TH1F *Graph_Graph24 = new TH1F("Graph_Graph24","Corr: LTB.DVT30 Plane: V Ring: 2",100,-840,840);
   Graph_Graph24->SetMinimum(1.728075);
   Graph_Graph24->SetMaximum(6.98691);
   Graph_Graph24->SetDirectory(0);
   Graph_Graph24->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph24->SetLineColor(ci);
   Graph_Graph24->GetXaxis()->SetTitle("LTB.DVT30, Kick [#murad]");
   Graph_Graph24->GetXaxis()->SetLabelFont(42);
   Graph_Graph24->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph24->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph24->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph24->GetXaxis()->SetTitleFont(42);
   Graph_Graph24->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph24->GetYaxis()->SetLabelFont(42);
   Graph_Graph24->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph24->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph24->GetYaxis()->SetTitleFont(42);
   Graph_Graph24->GetZaxis()->SetLabelFont(42);
   Graph_Graph24->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph24->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph24->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph24);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(13.52313);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.002897637);
   linear_fit->SetParError(0,6.364327e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,4.306186);
   linear_fit->SetParError(1,0.02342606);
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
   
   TPaveText *pt = new TPaveText(0.1847993,0.9336861,0.8152007,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LTB.DVT30 Plane: V Ring: 2");
   pt->Draw();
   canvas_BI.BPM10_V_2->Modified();
   canvas_BI.BPM10_V_2->cd();
   canvas_BI.BPM10_V_2->SetSelected(canvas_BI.BPM10_V_2);
}
