{
//=========Macro generated from canvas: canvas_LT.BPM30_V_2/
//=========  (Wed Apr  1 22:35:08 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM30_V_2 = new TCanvas("canvas_LT.BPM30_V_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM30_V_2->SetHighLightColor(2);
   canvas_LT.BPM30_V_2->Range(-1050,-10.7386,1050,-10.11666);
   canvas_LT.BPM30_V_2->SetFillColor(0);
   canvas_LT.BPM30_V_2->SetBorderMode(0);
   canvas_LT.BPM30_V_2->SetBorderSize(2);
   canvas_LT.BPM30_V_2->SetGridx();
   canvas_LT.BPM30_V_2->SetGridy();
   canvas_LT.BPM30_V_2->SetFrameBorderMode(0);
   canvas_LT.BPM30_V_2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LTB.DVT10 Plane: V Ring: 2");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-10.4967);
   gre->SetPointError(0,0,0.02373121);
   gre->SetPoint(1,-500,-10.4);
   gre->SetPointError(1,0,0.09304207);
   gre->SetPoint(2,-300,-10.40786);
   gre->SetPointError(2,0,0.1096865);
   gre->SetPoint(3,-100,-10.3929);
   gre->SetPointError(3,0,0.09585292);
   gre->SetPoint(4,100,-10.30804);
   gre->SetPointError(4,0,0.08772269);
   gre->SetPoint(5,300,-10.33962);
   gre->SetPointError(5,0,0.04636917);
   gre->SetPoint(6,500,-10.59276);
   gre->SetPointError(6,0,0.04218443);
   gre->SetPoint(7,700,-10.44294);
   gre->SetPointError(7,0,0.06152678);
   
   TH1F *Graph_Graph17 = new TH1F("Graph_Graph17","Corr: LTB.DVT10 Plane: V Ring: 2",100,-840,840);
   Graph_Graph17->SetMinimum(-10.67641);
   Graph_Graph17->SetMaximum(-10.17885);
   Graph_Graph17->SetDirectory(0);
   Graph_Graph17->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph17->SetLineColor(ci);
   Graph_Graph17->GetXaxis()->SetTitle("LTB.DVT10, Kick [#murad]");
   Graph_Graph17->GetXaxis()->SetLabelFont(42);
   Graph_Graph17->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph17->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph17->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph17->GetXaxis()->SetTitleFont(42);
   Graph_Graph17->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph17->GetYaxis()->SetLabelFont(42);
   Graph_Graph17->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph17->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph17->GetYaxis()->SetTitleFont(42);
   Graph_Graph17->GetZaxis()->SetLabelFont(42);
   Graph_Graph17->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph17->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph17->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph17);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(22.51761);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,1.523179e-05);
   linear_fit->SetParError(0,3.052185e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-10.46857);
   linear_fit->SetParError(1,0.01801352);
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
   
   TPaveText *pt = new TPaveText(0.1847993,0.9336861,0.8152007,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LTB.DVT10 Plane: V Ring: 2");
   pt->Draw();
   canvas_LT.BPM30_V_2->Modified();
   canvas_LT.BPM30_V_2->cd();
   canvas_LT.BPM30_V_2->SetSelected(canvas_LT.BPM30_V_2);
}
