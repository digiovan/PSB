{
//=========Macro generated from canvas: canvas_BI1.BPM50_H_1/
//=========  (Wed Apr  1 22:36:06 2015) by ROOT version5.34/21
   TCanvas *canvas_BI1.BPM50_H_1 = new TCanvas("canvas_BI1.BPM50_H_1", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI1.BPM50_H_1->SetHighLightColor(2);
   canvas_BI1.BPM50_H_1->Range(-1050,-11.33477,1050,-1.741524);
   canvas_BI1.BPM50_H_1->SetFillColor(0);
   canvas_BI1.BPM50_H_1->SetBorderMode(0);
   canvas_BI1.BPM50_H_1->SetBorderSize(2);
   canvas_BI1.BPM50_H_1->SetGridx();
   canvas_BI1.BPM50_H_1->SetGridy();
   canvas_BI1.BPM50_H_1->SetFrameBorderMode(0);
   canvas_BI1.BPM50_H_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: BI.DHZ30 Plane: H Ring: 1");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-9.65882);
   gre->SetPointError(0,0,0.07707686);
   gre->SetPoint(1,-500,-8.39686);
   gre->SetPointError(1,0,0.4012033);
   gre->SetPoint(2,-300,-7.60628);
   gre->SetPointError(2,0,0.2983351);
   gre->SetPoint(3,-100,-6.16654);
   gre->SetPointError(3,0,0.3564697);
   gre->SetPoint(4,100,-6.06934);
   gre->SetPointError(4,0,0.4981082);
   gre->SetPoint(5,300,-5.45024);
   gre->SetPointError(5,0,0.4759662);
   gre->SetPoint(6,500,-4.47562);
   gre->SetPointError(6,0,0.425593);
   gre->SetPoint(7,700,-3.70542);
   gre->SetPointError(7,0,0.3650215);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","Corr: BI.DHZ30 Plane: H Ring: 1",100,-840,840);
   Graph_Graph14->SetMinimum(-10.37545);
   Graph_Graph14->SetMaximum(-2.700849);
   Graph_Graph14->SetDirectory(0);
   Graph_Graph14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph14->SetLineColor(ci);
   Graph_Graph14->GetXaxis()->SetTitle("BI.DHZ30, Kick [#murad]");
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
   linear_fit->SetChisquare(7.676956);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.004427437);
   linear_fit->SetParError(0,0.0001864566);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-6.518936);
   linear_fit->SetParError(1,0.1210181);
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
   
   TPaveText *pt = new TPaveText(0.2035036,0.9336861,0.7964964,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: BI.DHZ30 Plane: H Ring: 1");
   pt->Draw();
   canvas_BI1.BPM50_H_1->Modified();
   canvas_BI1.BPM50_H_1->cd();
   canvas_BI1.BPM50_H_1->SetSelected(canvas_BI1.BPM50_H_1);
}
