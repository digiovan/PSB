{
//=========Macro generated from canvas: canvas_BI1.BPM50_H_1/
//=========  (Wed Apr  1 22:35:03 2015) by ROOT version5.34/21
   TCanvas *canvas_BI1.BPM50_H_1 = new TCanvas("canvas_BI1.BPM50_H_1", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI1.BPM50_H_1->SetHighLightColor(2);
   canvas_BI1.BPM50_H_1->Range(-1050,-2.71789,1050,4.751269);
   canvas_BI1.BPM50_H_1->SetFillColor(0);
   canvas_BI1.BPM50_H_1->SetBorderMode(0);
   canvas_BI1.BPM50_H_1->SetBorderSize(2);
   canvas_BI1.BPM50_H_1->SetGridx();
   canvas_BI1.BPM50_H_1->SetGridy();
   canvas_BI1.BPM50_H_1->SetFrameBorderMode(0);
   canvas_BI1.BPM50_H_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LTB.DHZ10 Plane: H Ring: 1");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,0.33398);
   gre->SetPointError(0,0,0.6488589);
   gre->SetPoint(1,-500,2.2379);
   gre->SetPointError(1,0,0.2670606);
   gre->SetPoint(2,-300,2.35402);
   gre->SetPointError(2,0,0.2552044);
   gre->SetPoint(3,-100,3.34346);
   gre->SetPointError(3,0,0.1629488);
   gre->SetPoint(4,100,2.25746);
   gre->SetPointError(4,0,1.044215);
   gre->SetPoint(5,300,1.3848);
   gre->SetPointError(5,0,0.3097965);
   gre->SetPoint(6,500,0.7574);
   gre->SetPointError(6,0,0.7863882);
   gre->SetPoint(7,700,-1.26634);
   gre->SetPointError(7,0,0.2066904);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","Corr: LTB.DHZ10 Plane: H Ring: 1",100,-840,840);
   Graph_Graph14->SetMinimum(-1.970974);
   Graph_Graph14->SetMaximum(4.004353);
   Graph_Graph14->SetDirectory(0);
   Graph_Graph14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph14->SetLineColor(ci);
   Graph_Graph14->GetXaxis()->SetTitle("LTB.DHZ10, Kick [#murad]");
   Graph_Graph14->GetXaxis()->SetLabelFont(42);
   Graph_Graph14->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph14->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph14->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph14->GetXaxis()->SetTitleFont(42);
   Graph_Graph14->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph14->GetYaxis()->SetLabelFont(42);
   Graph_Graph14->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph14->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph14->GetYaxis()->SetTitleFont(42);
   Graph_Graph14->GetZaxis()->SetLabelFont(42);
   Graph_Graph14->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph14->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph14->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph14);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(130.5247);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.003191069);
   linear_fit->SetParError(0,0.0002285665);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,1.825201);
   linear_fit->SetParError(1,0.09750432);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI1.BPM50","lp");

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
   
   TPaveText *pt = new TPaveText(0.1857117,0.9336861,0.8142883,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LTB.DHZ10 Plane: H Ring: 1");
   pt->Draw();
   canvas_BI1.BPM50_H_1->Modified();
   canvas_BI1.BPM50_H_1->cd();
   canvas_BI1.BPM50_H_1->SetSelected(canvas_BI1.BPM50_H_1);
}
