{
//=========Macro generated from canvas: canvas_LT.BPM20_H_3/
//=========  (Wed Apr  1 22:34:33 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM20_H_3 = new TCanvas("canvas_LT.BPM20_H_3", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM20_H_3->SetHighLightColor(2);
   canvas_LT.BPM20_H_3->Range(-1050,-8.273704,1050,-7.838668);
   canvas_LT.BPM20_H_3->SetFillColor(0);
   canvas_LT.BPM20_H_3->SetBorderMode(0);
   canvas_LT.BPM20_H_3->SetBorderSize(2);
   canvas_LT.BPM20_H_3->SetGridx();
   canvas_LT.BPM20_H_3->SetGridy();
   canvas_LT.BPM20_H_3->SetFrameBorderMode(0);
   canvas_LT.BPM20_H_3->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DHZ30 Plane: H Ring: 3");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-7.99348);
   gre->SetPointError(0,0,0.01709554);
   gre->SetPoint(1,-500,-8.16156);
   gre->SetPointError(1,0,0.01948604);
   gre->SetPoint(2,-300,-8.01684);
   gre->SetPointError(2,0,0.1056661);
   gre->SetPoint(3,-100,-8.18484);
   gre->SetPointError(3,0,0.01635766);
   gre->SetPoint(4,100,-7.98256);
   gre->SetPointError(4,0,0.0273255);
   gre->SetPoint(5,300,-8.14152);
   gre->SetPointError(5,0,0.05331244);
   gre->SetPoint(6,500,-8.13402);
   gre->SetPointError(6,0,0.05461784);
   gre->SetPoint(7,700,-8.09932);
   gre->SetPointError(7,0,0.02849157);
   
   TH1F *Graph_Graph30 = new TH1F("Graph_Graph30","Corr: LT.DHZ30 Plane: H Ring: 3",100,-840,840);
   Graph_Graph30->SetMinimum(-8.2302);
   Graph_Graph30->SetMaximum(-7.882172);
   Graph_Graph30->SetDirectory(0);
   Graph_Graph30->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph30->SetLineColor(ci);
   Graph_Graph30->GetXaxis()->SetTitle("LT.DHZ30, Kick [#murad]");
   Graph_Graph30->GetXaxis()->SetLabelFont(42);
   Graph_Graph30->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph30->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph30->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph30->GetXaxis()->SetTitleFont(42);
   Graph_Graph30->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph30->GetYaxis()->SetLabelFont(42);
   Graph_Graph30->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph30->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph30->GetYaxis()->SetTitleFont(42);
   Graph_Graph30->GetZaxis()->SetLabelFont(42);
   Graph_Graph30->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph30->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph30->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph30);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(88.66211);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-5.324501e-05);
   linear_fit->SetParError(0,2.000899e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-8.109631);
   linear_fit->SetParError(1,0.009738825);
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
   TText *text = pt->AddText("Corr: LT.DHZ30 Plane: H Ring: 3");
   pt->Draw();
   canvas_LT.BPM20_H_3->Modified();
   canvas_LT.BPM20_H_3->cd();
   canvas_LT.BPM20_H_3->SetSelected(canvas_LT.BPM20_H_3);
}
