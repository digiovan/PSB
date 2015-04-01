{
//=========Macro generated from canvas: canvas_BI.BPM20_H_1/
//=========  (Wed Apr  1 22:34:42 2015) by ROOT version5.34/21
   TCanvas *canvas_BI.BPM20_H_1 = new TCanvas("canvas_BI.BPM20_H_1", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI.BPM20_H_1->SetHighLightColor(2);
   canvas_BI.BPM20_H_1->Range(-1050,5.357587,1050,9.64246);
   canvas_BI.BPM20_H_1->SetFillColor(0);
   canvas_BI.BPM20_H_1->SetBorderMode(0);
   canvas_BI.BPM20_H_1->SetBorderSize(2);
   canvas_BI.BPM20_H_1->SetGridx();
   canvas_BI.BPM20_H_1->SetGridy();
   canvas_BI.BPM20_H_1->SetFrameBorderMode(0);
   canvas_BI.BPM20_H_1->SetFrameBorderMode(0);
   
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
   gre->SetPoint(0,-700,8.63924);
   gre->SetPointError(0,0,0.07591512);
   gre->SetPoint(1,-500,8.89686);
   gre->SetPointError(1,0,0.03145417);
   gre->SetPoint(2,-300,8.62992);
   gre->SetPointError(2,0,0.0230319);
   gre->SetPoint(3,-100,8.7915);
   gre->SetPointError(3,0,0.02935889);
   gre->SetPoint(4,100,8.78216);
   gre->SetPointError(4,0,0.05755429);
   gre->SetPoint(5,300,8.61412);
   gre->SetPointError(5,0,0.008800537);
   gre->SetPoint(6,500,6.99476);
   gre->SetPointError(6,0,0.9230273);
   gre->SetPoint(7,700,8.6198);
   gre->SetPointError(7,0,0.01692145);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Corr: LT.DHZ40 Plane: H Ring: 1",100,-840,840);
   Graph_Graph11->SetMinimum(5.786075);
   Graph_Graph11->SetMaximum(9.213972);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11->SetLineColor(ci);
   Graph_Graph11->GetXaxis()->SetTitle("LT.DHZ40, Kick [#murad]");
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(71.33049);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.0001377332);
   linear_fit->SetParError(0,2.140741e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,8.675669);
   linear_fit->SetParError(1,0.008621236);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI.BPM20","lp");

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
   canvas_BI.BPM20_H_1->Modified();
   canvas_BI.BPM20_H_1->cd();
   canvas_BI.BPM20_H_1->SetSelected(canvas_BI.BPM20_H_1);
}
