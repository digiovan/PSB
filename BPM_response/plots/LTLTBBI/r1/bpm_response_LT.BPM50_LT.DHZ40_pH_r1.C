{
//=========Macro generated from canvas: canvas_LT.BPM50_H_1/
//=========  (Wed Apr  1 22:34:42 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM50_H_1 = new TCanvas("canvas_LT.BPM50_H_1", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM50_H_1->SetHighLightColor(2);
   canvas_LT.BPM50_H_1->Range(-1050,-2.159188,1050,-0.336701);
   canvas_LT.BPM50_H_1->SetFillColor(0);
   canvas_LT.BPM50_H_1->SetBorderMode(0);
   canvas_LT.BPM50_H_1->SetBorderSize(2);
   canvas_LT.BPM50_H_1->SetGridx();
   canvas_LT.BPM50_H_1->SetGridy();
   canvas_LT.BPM50_H_1->SetFrameBorderMode(0);
   canvas_LT.BPM50_H_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DHZ40 Plane: H Ring: 1");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-1.84008);
   gre->SetPointError(0,0,0.0153604);
   gre->SetPoint(1,-500,-1.52672);
   gre->SetPointError(1,0,0.02429951);
   gre->SetPoint(2,-300,-1.61818);
   gre->SetPointError(2,0,0.01921933);
   gre->SetPoint(3,-100,-1.34032);
   gre->SetPointError(3,0,0.01698545);
   gre->SetPoint(4,100,-1.18632);
   gre->SetPointError(4,0,0.05848566);
   gre->SetPoint(5,300,-1.26544);
   gre->SetPointError(5,0,0.001667524);
   gre->SetPoint(6,500,-0.73482);
   gre->SetPointError(6,0,0.09437108);
   gre->SetPoint(7,700,-1.0347);
   gre->SetPointError(7,0,0.03483729);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Corr: LT.DHZ40 Plane: H Ring: 1",100,-840,840);
   Graph_Graph5->SetMinimum(-1.97694);
   Graph_Graph5->SetMaximum(-0.5189498);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetTitle("LT.DHZ40, Kick [#murad]");
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph5);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(148.1891);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.0005084238);
   linear_fit->SetParError(0,1.21141e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-1.41688);
   linear_fit->SetParError(1,0.003741624);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","LT.BPM50","lp");

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
   TText *text = pt->AddText("Corr: LT.DHZ40 Plane: H Ring: 1");
   pt->Draw();
   canvas_LT.BPM50_H_1->Modified();
   canvas_LT.BPM50_H_1->cd();
   canvas_LT.BPM50_H_1->SetSelected(canvas_LT.BPM50_H_1);
}
