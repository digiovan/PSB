{
//=========Macro generated from canvas: canvas_BI4.BPM50_H_4/
//=========  (Wed Apr  1 22:35:38 2015) by ROOT version5.34/21
   TCanvas *canvas_BI4.BPM50_H_4 = new TCanvas("canvas_BI4.BPM50_H_4", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI4.BPM50_H_4->SetHighLightColor(2);
   canvas_BI4.BPM50_H_4->Range(-1050,-11.94662,1050,10.56298);
   canvas_BI4.BPM50_H_4->SetFillColor(0);
   canvas_BI4.BPM50_H_4->SetBorderMode(0);
   canvas_BI4.BPM50_H_4->SetBorderSize(2);
   canvas_BI4.BPM50_H_4->SetGridx();
   canvas_BI4.BPM50_H_4->SetGridy();
   canvas_BI4.BPM50_H_4->SetFrameBorderMode(0);
   canvas_BI4.BPM50_H_4->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LTB.DHZ40 Plane: H Ring: 4");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,6.316);
   gre->SetPointError(0,0,0.4953792);
   gre->SetPoint(1,-500,4.48576);
   gre->SetPointError(1,0,0.06730929);
   gre->SetPoint(2,-300,3.1664);
   gre->SetPointError(2,0,0.2100767);
   gre->SetPoint(3,-100,1.53722);
   gre->SetPointError(3,0,0.1597997);
   gre->SetPoint(4,100,1.71106);
   gre->SetPointError(4,0,0.1568941);
   gre->SetPoint(5,300,-1.19022);
   gre->SetPointError(5,0,0.662246);
   gre->SetPoint(6,500,-4.81464);
   gre->SetPointError(6,0,0.4646718);
   gre->SetPoint(7,700,-7.9731);
   gre->SetPointError(7,0,0.2219223);
   
   TH1F *Graph_Graph56 = new TH1F("Graph_Graph56","Corr: LTB.DHZ40 Plane: H Ring: 4",100,-840,840);
   Graph_Graph56->SetMinimum(-9.695662);
   Graph_Graph56->SetMaximum(8.312019);
   Graph_Graph56->SetDirectory(0);
   Graph_Graph56->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph56->SetLineColor(ci);
   Graph_Graph56->GetXaxis()->SetTitle("LTB.DHZ40, Kick [#murad]");
   Graph_Graph56->GetXaxis()->SetLabelFont(42);
   Graph_Graph56->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph56->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph56->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph56->GetXaxis()->SetTitleFont(42);
   Graph_Graph56->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph56->GetYaxis()->SetLabelFont(42);
   Graph_Graph56->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph56->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph56->GetYaxis()->SetTitleFont(42);
   Graph_Graph56->GetZaxis()->SetLabelFont(42);
   Graph_Graph56->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph56->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph56->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph56);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(323.7092);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.008667231);
   linear_fit->SetParError(0,0.0001550459);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,0.3969141);
   linear_fit->SetParError(1,0.06955127);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI4.BPM50","lp");

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
   TText *text = pt->AddText("Corr: LTB.DHZ40 Plane: H Ring: 4");
   pt->Draw();
   canvas_BI4.BPM50_H_4->Modified();
   canvas_BI4.BPM50_H_4->cd();
   canvas_BI4.BPM50_H_4->SetSelected(canvas_BI4.BPM50_H_4);
}
