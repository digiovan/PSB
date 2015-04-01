{
//=========Macro generated from canvas: canvas_LT.BPM20_H_4/
//=========  (Wed Apr  1 22:34:45 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM20_H_4 = new TCanvas("canvas_LT.BPM20_H_4", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM20_H_4->SetHighLightColor(2);
   canvas_LT.BPM20_H_4->Range(-1050,-8.655378,1050,-4.967571);
   canvas_LT.BPM20_H_4->SetFillColor(0);
   canvas_LT.BPM20_H_4->SetBorderMode(0);
   canvas_LT.BPM20_H_4->SetBorderSize(2);
   canvas_LT.BPM20_H_4->SetGridx();
   canvas_LT.BPM20_H_4->SetGridy();
   canvas_LT.BPM20_H_4->SetFrameBorderMode(0);
   canvas_LT.BPM20_H_4->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DHZ40 Plane: H Ring: 4");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-7.70048);
   gre->SetPointError(0,0,0.07211261);
   gre->SetPoint(1,-500,-7.87792);
   gre->SetPointError(1,0,0.04038929);
   gre->SetPoint(2,-300,-7.63606);
   gre->SetPointError(2,0,0.03329007);
   gre->SetPoint(3,-100,-7.9897);
   gre->SetPointError(3,0,0.0510432);
   gre->SetPoint(4,100,-7.96106);
   gre->SetPointError(4,0,0.04778754);
   gre->SetPoint(5,300,-7.69082);
   gre->SetPointError(5,0,0.1543936);
   gre->SetPoint(6,500,-6.41788);
   gre->SetPointError(6,0,0.8356745);
   gre->SetPoint(7,700,-7.69962);
   gre->SetPointError(7,0,0.0245574);
   
   TH1F *Graph_Graph44 = new TH1F("Graph_Graph44","Corr: LT.DHZ40 Plane: H Ring: 4",100,-840,840);
   Graph_Graph44->SetMinimum(-8.286597);
   Graph_Graph44->SetMaximum(-5.336352);
   Graph_Graph44->SetDirectory(0);
   Graph_Graph44->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph44->SetLineColor(ci);
   Graph_Graph44->GetXaxis()->SetTitle("LT.DHZ40, Kick [#murad]");
   Graph_Graph44->GetXaxis()->SetLabelFont(42);
   Graph_Graph44->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph44->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph44->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph44->GetXaxis()->SetTitleFont(42);
   Graph_Graph44->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph44->GetYaxis()->SetLabelFont(42);
   Graph_Graph44->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph44->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph44->GetYaxis()->SetTitleFont(42);
   Graph_Graph44->GetZaxis()->SetLabelFont(42);
   Graph_Graph44->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph44->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph44->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph44);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(65.45813);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,6.239281e-05);
   linear_fit->SetParError(0,3.012553e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-7.771686);
   linear_fit->SetParError(1,0.01573025);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","LT.BPM20","lp");

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
   
   TPaveText *pt = new TPaveText(0.1966606,0.9336861,0.8033394,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LT.DHZ40 Plane: H Ring: 4");
   pt->Draw();
   canvas_LT.BPM20_H_4->Modified();
   canvas_LT.BPM20_H_4->cd();
   canvas_LT.BPM20_H_4->SetSelected(canvas_LT.BPM20_H_4);
}
