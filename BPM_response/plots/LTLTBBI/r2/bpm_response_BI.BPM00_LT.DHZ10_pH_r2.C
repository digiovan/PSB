{
//=========Macro generated from canvas: canvas_BI.BPM00_H_2/
//=========  (Wed Apr  1 22:34:12 2015) by ROOT version5.34/21
   TCanvas *canvas_BI.BPM00_H_2 = new TCanvas("canvas_BI.BPM00_H_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI.BPM00_H_2->SetHighLightColor(2);
   canvas_BI.BPM00_H_2->Range(-1050,-8.822025,1050,-2.392016);
   canvas_BI.BPM00_H_2->SetFillColor(0);
   canvas_BI.BPM00_H_2->SetBorderMode(0);
   canvas_BI.BPM00_H_2->SetBorderSize(2);
   canvas_BI.BPM00_H_2->SetGridx();
   canvas_BI.BPM00_H_2->SetGridy();
   canvas_BI.BPM00_H_2->SetFrameBorderMode(0);
   canvas_BI.BPM00_H_2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DHZ10 Plane: H Ring: 2");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-7.69598);
   gre->SetPointError(0,0,0.0543767);
   gre->SetPoint(1,-500,-7.0234);
   gre->SetPointError(1,0,0.02878088);
   gre->SetPoint(2,-300,-6.30924);
   gre->SetPointError(2,0,0.1560662);
   gre->SetPoint(3,-100,-6.19842);
   gre->SetPointError(3,0,0.1777226);
   gre->SetPoint(4,100,-5.59244);
   gre->SetPointError(4,0,0.1109712);
   gre->SetPoint(5,300,-4.50578);
   gre->SetPointError(5,0,0.0968788);
   gre->SetPoint(6,500,-3.87412);
   gre->SetPointError(6,0,0.07448675);
   gre->SetPoint(7,700,-3.5526);
   gre->SetPointError(7,0,0.08891544);
   
   TH1F *Graph_Graph23 = new TH1F("Graph_Graph23","Corr: LT.DHZ10 Plane: H Ring: 2",100,-840,840);
   Graph_Graph23->SetMinimum(-8.179024);
   Graph_Graph23->SetMaximum(-3.035017);
   Graph_Graph23->SetDirectory(0);
   Graph_Graph23->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph23->SetLineColor(ci);
   Graph_Graph23->GetXaxis()->SetTitle("LT.DHZ10, Kick [#murad]");
   Graph_Graph23->GetXaxis()->SetLabelFont(42);
   Graph_Graph23->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph23->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph23->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph23->GetXaxis()->SetTitleFont(42);
   Graph_Graph23->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph23->GetYaxis()->SetLabelFont(42);
   Graph_Graph23->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph23->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph23->GetYaxis()->SetTitleFont(42);
   Graph_Graph23->GetZaxis()->SetLabelFont(42);
   Graph_Graph23->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph23->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph23->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph23);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(24.55983);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.003020406);
   linear_fit->SetParError(0,5.019801e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-5.53552);
   linear_fit->SetParError(1,0.0265048);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI.BPM00","lp");

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
   TText *text = pt->AddText("Corr: LT.DHZ10 Plane: H Ring: 2");
   pt->Draw();
   canvas_BI.BPM00_H_2->Modified();
   canvas_BI.BPM00_H_2->cd();
   canvas_BI.BPM00_H_2->SetSelected(canvas_BI.BPM00_H_2);
}
