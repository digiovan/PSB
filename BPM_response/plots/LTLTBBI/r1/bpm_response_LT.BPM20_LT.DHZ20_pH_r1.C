{
//=========Macro generated from canvas: canvas_LT.BPM20_H_1/
//=========  (Wed Apr  1 22:34:20 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM20_H_1 = new TCanvas("canvas_LT.BPM20_H_1", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM20_H_1->SetHighLightColor(2);
   canvas_LT.BPM20_H_1->Range(-1050,-14.72096,1050,-1.823868);
   canvas_LT.BPM20_H_1->SetFillColor(0);
   canvas_LT.BPM20_H_1->SetBorderMode(0);
   canvas_LT.BPM20_H_1->SetBorderSize(2);
   canvas_LT.BPM20_H_1->SetGridx();
   canvas_LT.BPM20_H_1->SetGridy();
   canvas_LT.BPM20_H_1->SetFrameBorderMode(0);
   canvas_LT.BPM20_H_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DHZ20 Plane: H Ring: 1");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-12.49292);
   gre->SetPointError(0,0,0.07852649);
   gre->SetPoint(1,-500,-11.45654);
   gre->SetPointError(1,0,0.08666098);
   gre->SetPoint(2,-300,-10.33198);
   gre->SetPointError(2,0,0.03987931);
   gre->SetPoint(3,-100,-8.99592);
   gre->SetPointError(3,0,0.0454717);
   gre->SetPoint(4,100,-7.8069);
   gre->SetPointError(4,0,0.02735002);
   gre->SetPoint(5,300,-6.69696);
   gre->SetPointError(5,0,0.05808591);
   gre->SetPoint(6,500,-5.34856);
   gre->SetPointError(6,0,0.06647616);
   gre->SetPoint(7,700,-4.02826);
   gre->SetPointError(7,0,0.05487586);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Corr: LT.DHZ20 Plane: H Ring: 1",100,-840,840);
   Graph_Graph2->SetMinimum(-13.43125);
   Graph_Graph2->SetMaximum(-3.113578);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetTitle("LT.DHZ20, Kick [#murad]");
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph2);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(19.15598);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.006126893);
   linear_fit->SetParError(0,4.838386e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-8.41657);
   linear_fit->SetParError(1,0.01679147);
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
   
   TPaveText *pt = new TPaveText(0.1993978,0.9336861,0.8006022,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LT.DHZ20 Plane: H Ring: 1");
   pt->Draw();
   canvas_LT.BPM20_H_1->Modified();
   canvas_LT.BPM20_H_1->cd();
   canvas_LT.BPM20_H_1->SetSelected(canvas_LT.BPM20_H_1);
}
