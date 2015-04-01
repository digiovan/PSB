{
//=========Macro generated from canvas: canvas_LT.BPM30_V_3/
//=========  (Wed Apr  1 22:34:59 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM30_V_3 = new TCanvas("canvas_LT.BPM30_V_3", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM30_V_3->SetHighLightColor(2);
   canvas_LT.BPM30_V_3->Range(-1050,-11.47068,1050,-10.44512);
   canvas_LT.BPM30_V_3->SetFillColor(0);
   canvas_LT.BPM30_V_3->SetBorderMode(0);
   canvas_LT.BPM30_V_3->SetBorderSize(2);
   canvas_LT.BPM30_V_3->SetGridx();
   canvas_LT.BPM30_V_3->SetGridy();
   canvas_LT.BPM30_V_3->SetFrameBorderMode(0);
   canvas_LT.BPM30_V_3->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DVT50 Plane: V Ring: 3");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-10.73856);
   gre->SetPointError(0,0,0.08093506);
   gre->SetPoint(1,-500,-10.86178);
   gre->SetPointError(1,0,0.06605511);
   gre->SetPoint(2,-300,-10.86472);
   gre->SetPointError(2,0,0.05650606);
   gre->SetPoint(3,-100,-10.8935);
   gre->SetPointError(3,0,0.09916882);
   gre->SetPoint(4,100,-11.11898);
   gre->SetPointError(4,0,0.1807731);
   gre->SetPoint(5,300,-10.78008);
   gre->SetPointError(5,0,0.1261401);
   gre->SetPoint(6,500,-10.75422);
   gre->SetPointError(6,0,0.05017954);
   gre->SetPoint(7,700,-10.7436);
   gre->SetPointError(7,0,0.1275511);
   
   TH1F *Graph_Graph31 = new TH1F("Graph_Graph31","Corr: LT.DVT50 Plane: V Ring: 3",100,-840,840);
   Graph_Graph31->SetMinimum(-11.36812);
   Graph_Graph31->SetMaximum(-10.54768);
   Graph_Graph31->SetDirectory(0);
   Graph_Graph31->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31->SetLineColor(ci);
   Graph_Graph31->GetXaxis()->SetTitle("LT.DVT50, Kick [#murad]");
   Graph_Graph31->GetXaxis()->SetLabelFont(42);
   Graph_Graph31->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph31->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph31->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph31->GetXaxis()->SetTitleFont(42);
   Graph_Graph31->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph31->GetYaxis()->SetLabelFont(42);
   Graph_Graph31->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph31->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph31->GetYaxis()->SetTitleFont(42);
   Graph_Graph31->GetZaxis()->SetLabelFont(42);
   Graph_Graph31->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph31->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph31->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(6.43853);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,5.948219e-05);
   linear_fit->SetParError(0,5.833965e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-10.81314);
   linear_fit->SetParError(1,0.02736091);
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
   
   TPaveText *pt = new TPaveText(0.1989416,0.9336861,0.8010584,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LT.DVT50 Plane: V Ring: 3");
   pt->Draw();
   canvas_LT.BPM30_V_3->Modified();
   canvas_LT.BPM30_V_3->cd();
   canvas_LT.BPM30_V_3->SetSelected(canvas_LT.BPM30_V_3);
}
