{
//=========Macro generated from canvas: canvas_LT.BPM40_V_3/
//=========  (Wed Apr  1 22:34:18 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM40_V_3 = new TCanvas("canvas_LT.BPM40_V_3", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM40_V_3->SetHighLightColor(2);
   canvas_LT.BPM40_V_3->Range(-1050,-13.44647,1050,-0.1858269);
   canvas_LT.BPM40_V_3->SetFillColor(0);
   canvas_LT.BPM40_V_3->SetBorderMode(0);
   canvas_LT.BPM40_V_3->SetBorderSize(2);
   canvas_LT.BPM40_V_3->SetGridx();
   canvas_LT.BPM40_V_3->SetGridy();
   canvas_LT.BPM40_V_3->SetFrameBorderMode(0);
   canvas_LT.BPM40_V_3->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DVT10 Plane: V Ring: 3");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-2.51956);
   gre->SetPointError(0,0,0.1236251);
   gre->SetPoint(1,-500,-4.41834);
   gre->SetPointError(1,0,0.08444437);
   gre->SetPoint(2,-300,-5.57844);
   gre->SetPointError(2,0,0.05170364);
   gre->SetPoint(3,-100,-6.63718);
   gre->SetPointError(3,0,0.07651797);
   gre->SetPoint(4,100,-7.91686);
   gre->SetPointError(4,0,0.0338811);
   gre->SetPoint(5,300,-9.16874);
   gre->SetPointError(5,0,0.01907439);
   gre->SetPoint(6,500,-10.64654);
   gre->SetPointError(6,0,0.08450693);
   gre->SetPoint(7,700,-11.17294);
   gre->SetPointError(7,0,0.06342656);
   
   TH1F *Graph_Graph32 = new TH1F("Graph_Graph32","Corr: LT.DVT10 Plane: V Ring: 3",100,-840,840);
   Graph_Graph32->SetMinimum(-12.12041);
   Graph_Graph32->SetMaximum(-1.511892);
   Graph_Graph32->SetDirectory(0);
   Graph_Graph32->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph32->SetLineColor(ci);
   Graph_Graph32->GetXaxis()->SetTitle("LT.DVT10, Kick [#murad]");
   Graph_Graph32->GetXaxis()->SetLabelFont(42);
   Graph_Graph32->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph32->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph32->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph32->GetXaxis()->SetTitleFont(42);
   Graph_Graph32->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph32->GetYaxis()->SetLabelFont(42);
   Graph_Graph32->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph32->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph32->GetYaxis()->SetTitleFont(42);
   Graph_Graph32->GetZaxis()->SetLabelFont(42);
   Graph_Graph32->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph32->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph32->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph32);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(77.64365);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.00601144);
   linear_fit->SetParError(0,5.413799e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-7.33313);
   linear_fit->SetParError(1,0.01781633);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","LT.BPM40","lp");

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
   TText *text = pt->AddText("Corr: LT.DVT10 Plane: V Ring: 3");
   pt->Draw();
   canvas_LT.BPM40_V_3->Modified();
   canvas_LT.BPM40_V_3->cd();
   canvas_LT.BPM40_V_3->SetSelected(canvas_LT.BPM40_V_3);
}
