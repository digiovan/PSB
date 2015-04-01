{
//=========Macro generated from canvas: canvas_BI.BPM10_H_3/
//=========  (Wed Apr  1 22:35:26 2015) by ROOT version5.34/21
   TCanvas *canvas_BI.BPM10_H_3 = new TCanvas("canvas_BI.BPM10_H_3", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI.BPM10_H_3->SetHighLightColor(2);
   canvas_BI.BPM10_H_3->Range(-1050,-18.79905,1050,8.876334);
   canvas_BI.BPM10_H_3->SetFillColor(0);
   canvas_BI.BPM10_H_3->SetBorderMode(0);
   canvas_BI.BPM10_H_3->SetBorderSize(2);
   canvas_BI.BPM10_H_3->SetGridx();
   canvas_BI.BPM10_H_3->SetGridy();
   canvas_BI.BPM10_H_3->SetFrameBorderMode(0);
   canvas_BI.BPM10_H_3->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LTB.DHZ30 Plane: H Ring: 3");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-14.07088);
   gre->SetPointError(0,0,0.1156086);
   gre->SetPoint(1,-500,-11.14876);
   gre->SetPointError(1,0,0.1053683);
   gre->SetPoint(2,-300,-8.60874);
   gre->SetPointError(2,0,0.1492883);
   gre->SetPoint(3,-100,-5.77326);
   gre->SetPointError(3,0,0.06684363);
   gre->SetPoint(4,100,-3.05164);
   gre->SetPointError(4,0,0.1086972);
   gre->SetPoint(5,300,-0.9245);
   gre->SetPointError(5,0,0.2303555);
   gre->SetPoint(6,500,1.44552);
   gre->SetPointError(6,0,0.2523343);
   gre->SetPoint(7,700,3.95244);
   gre->SetPointError(7,0,0.311329);
   
   TH1F *Graph_Graph38 = new TH1F("Graph_Graph38","Corr: LTB.DHZ30 Plane: H Ring: 3",100,-840,840);
   Graph_Graph38->SetMinimum(-16.03151);
   Graph_Graph38->SetMaximum(6.108795);
   Graph_Graph38->SetDirectory(0);
   Graph_Graph38->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph38->SetLineColor(ci);
   Graph_Graph38->GetXaxis()->SetTitle("LTB.DHZ30, Kick [#murad]");
   Graph_Graph38->GetXaxis()->SetLabelFont(42);
   Graph_Graph38->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph38->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph38->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph38->GetXaxis()->SetTitleFont(42);
   Graph_Graph38->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph38->GetYaxis()->SetLabelFont(42);
   Graph_Graph38->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph38->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph38->GetYaxis()->SetTitleFont(42);
   Graph_Graph38->GetZaxis()->SetLabelFont(42);
   Graph_Graph38->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph38->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph38->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph38);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(24.30901);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.01321987);
   linear_fit->SetParError(0,0.000131591);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-4.567628);
   linear_fit->SetParError(1,0.0486555);
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
   
   TPaveText *pt = new TPaveText(0.1829745,0.9336861,0.8170255,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LTB.DHZ30 Plane: H Ring: 3");
   pt->Draw();
   canvas_BI.BPM10_H_3->Modified();
   canvas_BI.BPM10_H_3->cd();
   canvas_BI.BPM10_H_3->SetSelected(canvas_BI.BPM10_H_3);
}
