{
//=========Macro generated from canvas: canvas_LT.BPM30_V_4/
//=========  (Wed Apr  1 22:36:03 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM30_V_4 = new TCanvas("canvas_LT.BPM30_V_4", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM30_V_4->SetHighLightColor(2);
   canvas_LT.BPM30_V_4->Range(-1050,-11.62791,1050,-10.60598);
   canvas_LT.BPM30_V_4->SetFillColor(0);
   canvas_LT.BPM30_V_4->SetBorderMode(0);
   canvas_LT.BPM30_V_4->SetBorderSize(2);
   canvas_LT.BPM30_V_4->SetGridx();
   canvas_LT.BPM30_V_4->SetGridy();
   canvas_LT.BPM30_V_4->SetFrameBorderMode(0);
   canvas_LT.BPM30_V_4->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: BI.DVT20 Plane: V Ring: 4");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-11.00658);
   gre->SetPointError(0,0,0.02442527);
   gre->SetPoint(1,-500,-11.21754);
   gre->SetPointError(1,0,0.1465119);
   gre->SetPoint(2,-300,-11.0941);
   gre->SetPointError(2,0,0.04123566);
   gre->SetPoint(3,-100,-11.34472);
   gre->SetPointError(3,0,0.09885695);
   gre->SetPoint(4,100,-11.00192);
   gre->SetPointError(4,0,0.0158272);
   gre->SetPoint(5,300,-11.30884);
   gre->SetPointError(5,0,0.148748);
   gre->SetPoint(6,500,-10.82154);
   gre->SetPointError(6,0,0.04523805);
   gre->SetPoint(7,700,-11.13238);
   gre->SetPointError(7,0,0.1631046);
   
   TH1F *Graph_Graph45 = new TH1F("Graph_Graph45","Corr: BI.DVT20 Plane: V Ring: 4",100,-840,840);
   Graph_Graph45->SetMinimum(-11.52572);
   Graph_Graph45->SetMaximum(-10.70817);
   Graph_Graph45->SetDirectory(0);
   Graph_Graph45->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph45->SetLineColor(ci);
   Graph_Graph45->GetXaxis()->SetTitle("BI.DVT20, Kick [#murad]");
   Graph_Graph45->GetXaxis()->SetLabelFont(42);
   Graph_Graph45->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph45->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph45->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph45->GetXaxis()->SetTitleFont(42);
   Graph_Graph45->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph45->GetYaxis()->SetLabelFont(42);
   Graph_Graph45->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph45->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph45->GetYaxis()->SetTitleFont(42);
   Graph_Graph45->GetZaxis()->SetLabelFont(42);
   Graph_Graph45->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph45->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph45->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph45);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(35.85822);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,6.286726e-05);
   linear_fit->SetParError(0,3.16025e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-11.00103);
   linear_fit->SetParError(1,0.01238493);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","LT.BPM30","lp");

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
   
   TPaveText *pt = new TPaveText(0.2030474,0.9336861,0.7969526,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: BI.DVT20 Plane: V Ring: 4");
   pt->Draw();
   canvas_LT.BPM30_V_4->Modified();
   canvas_LT.BPM30_V_4->cd();
   canvas_LT.BPM30_V_4->SetSelected(canvas_LT.BPM30_V_4);
}
