{
//=========Macro generated from canvas: canvas_LT.BPM40_V_3/
//=========  (Wed Apr  1 22:35:51 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM40_V_3 = new TCanvas("canvas_LT.BPM40_V_3", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM40_V_3->SetHighLightColor(2);
   canvas_LT.BPM40_V_3->Range(-1050,-7.899413,1050,-7.477037);
   canvas_LT.BPM40_V_3->SetFillColor(0);
   canvas_LT.BPM40_V_3->SetBorderMode(0);
   canvas_LT.BPM40_V_3->SetBorderSize(2);
   canvas_LT.BPM40_V_3->SetGridx();
   canvas_LT.BPM40_V_3->SetGridy();
   canvas_LT.BPM40_V_3->SetFrameBorderMode(0);
   canvas_LT.BPM40_V_3->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: BI.DVT10 Plane: V Ring: 3");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-7.67522);
   gre->SetPointError(0,0,0.09200848);
   gre->SetPoint(1,-500,-7.61);
   gre->SetPointError(1,0,0.06256743);
   gre->SetPoint(2,-300,-7.67654);
   gre->SetPointError(2,0,0.09866856);
   gre->SetPoint(3,-100,-7.7475);
   gre->SetPointError(3,0,0.05360924);
   gre->SetPoint(4,100,-7.62406);
   gre->SetPointError(4,0,0.05114636);
   gre->SetPoint(5,300,-7.78124);
   gre->SetPointError(5,0,0.04777658);
   gre->SetPoint(6,500,-7.74952);
   gre->SetPointError(6,0,0.07344334);
   gre->SetPoint(7,700,-7.70436);
   gre->SetPointError(7,0,0.08344149);
   
   TH1F *Graph_Graph32 = new TH1F("Graph_Graph32","Corr: BI.DVT10 Plane: V Ring: 3",100,-840,840);
   Graph_Graph32->SetMinimum(-7.857175);
   Graph_Graph32->SetMaximum(-7.519274);
   Graph_Graph32->SetDirectory(0);
   Graph_Graph32->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph32->SetLineColor(ci);
   Graph_Graph32->GetXaxis()->SetTitle("BI.DVT10, Kick [#murad]");
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
   linear_fit->SetChisquare(6.338036);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-8.676678e-05);
   linear_fit->SetParError(0,5.865922e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-7.698496);
   linear_fit->SetParError(1,0.02265714);
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
   
   TPaveText *pt = new TPaveText(0.2030474,0.9336861,0.7969526,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: BI.DVT10 Plane: V Ring: 3");
   pt->Draw();
   canvas_LT.BPM40_V_3->Modified();
   canvas_LT.BPM40_V_3->cd();
   canvas_LT.BPM40_V_3->SetSelected(canvas_LT.BPM40_V_3);
}
