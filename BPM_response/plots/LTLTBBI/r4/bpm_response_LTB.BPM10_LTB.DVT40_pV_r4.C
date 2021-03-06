{
//=========Macro generated from canvas: canvas_LTB.BPM10_V_4/
//=========  (Wed Apr  1 22:35:42 2015) by ROOT version5.34/21
   TCanvas *canvas_LTB.BPM10_V_4 = new TCanvas("canvas_LTB.BPM10_V_4", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LTB.BPM10_V_4->SetHighLightColor(2);
   canvas_LTB.BPM10_V_4->Range(-1050,1.020479,1050,1.216721);
   canvas_LTB.BPM10_V_4->SetFillColor(0);
   canvas_LTB.BPM10_V_4->SetBorderMode(0);
   canvas_LTB.BPM10_V_4->SetBorderSize(2);
   canvas_LTB.BPM10_V_4->SetGridx();
   canvas_LTB.BPM10_V_4->SetGridy();
   canvas_LTB.BPM10_V_4->SetFrameBorderMode(0);
   canvas_LTB.BPM10_V_4->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LTB.DVT40 Plane: V Ring: 4");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,1.08976);
   gre->SetPointError(0,0,0.03216859);
   gre->SetPoint(1,-500,1.13308);
   gre->SetPointError(1,0,0.04034334);
   gre->SetPoint(2,-300,1.10622);
   gre->SetPointError(2,0,0.0275891);
   gre->SetPoint(3,-100,1.15578);
   gre->SetPointError(3,0,0.02823395);
   gre->SetPoint(4,100,1.089);
   gre->SetPointError(4,0,0.01008936);
   gre->SetPoint(5,300,1.1338);
   gre->SetPointError(5,0,0.03823385);
   gre->SetPoint(6,500,1.14466);
   gre->SetPointError(6,0,0.02687712);
   gre->SetPoint(7,700,1.08956);
   gre->SetPointError(7,0,0.03637378);
   
   TH1F *Graph_Graph48 = new TH1F("Graph_Graph48","Corr: LTB.DVT40 Plane: V Ring: 4",100,-840,840);
   Graph_Graph48->SetMinimum(1.040103);
   Graph_Graph48->SetMaximum(1.197097);
   Graph_Graph48->SetDirectory(0);
   Graph_Graph48->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph48->SetLineColor(ci);
   Graph_Graph48->GetXaxis()->SetTitle("LTB.DVT40, Kick [#murad]");
   Graph_Graph48->GetXaxis()->SetLabelFont(42);
   Graph_Graph48->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph48->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph48->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph48->GetXaxis()->SetTitleFont(42);
   Graph_Graph48->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph48->GetYaxis()->SetLabelFont(42);
   Graph_Graph48->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph48->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph48->GetYaxis()->SetTitleFont(42);
   Graph_Graph48->GetZaxis()->SetLabelFont(42);
   Graph_Graph48->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph48->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph48->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph48);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(9.3232);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,3.614742e-06);
   linear_fit->SetParError(0,2.511553e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,1.103232);
   linear_fit->SetParError(1,0.007833802);
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
   
   TPaveText *pt = new TPaveText(0.1847993,0.9336861,0.8152007,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LTB.DVT40 Plane: V Ring: 4");
   pt->Draw();
   canvas_LTB.BPM10_V_4->Modified();
   canvas_LTB.BPM10_V_4->cd();
   canvas_LTB.BPM10_V_4->SetSelected(canvas_LTB.BPM10_V_4);
}
