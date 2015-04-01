{
//=========Macro generated from canvas: canvas_LT.BPM30_V_1/
//=========  (Wed Apr  1 22:35:39 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM30_V_1 = new TCanvas("canvas_LT.BPM30_V_1", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM30_V_1->SetHighLightColor(2);
   canvas_LT.BPM30_V_1->Range(-1050,-10.36551,1050,-9.683794);
   canvas_LT.BPM30_V_1->SetFillColor(0);
   canvas_LT.BPM30_V_1->SetBorderMode(0);
   canvas_LT.BPM30_V_1->SetBorderSize(2);
   canvas_LT.BPM30_V_1->SetGridx();
   canvas_LT.BPM30_V_1->SetGridy();
   canvas_LT.BPM30_V_1->SetFrameBorderMode(0);
   canvas_LT.BPM30_V_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LTB.DVT40 Plane: V Ring: 1");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-9.93414);
   gre->SetPointError(0,0,0.05294732);
   gre->SetPoint(1,-500,-10.13506);
   gre->SetPointError(1,0,0.07361153);
   gre->SetPoint(2,-300,-10.11086);
   gre->SetPointError(2,0,0.08527582);
   gre->SetPoint(3,-100,-10.02348);
   gre->SetPointError(3,0,0.09838355);
   gre->SetPoint(4,100,-10.1666);
   gre->SetPointError(4,0,0.08529226);
   gre->SetPoint(5,300,-9.9361);
   gre->SetPointError(5,0,0.1386866);
   gre->SetPoint(6,500,-10.1566);
   gre->SetPointError(6,0,0.04407099);
   gre->SetPoint(7,700,-10.04138);
   gre->SetPointError(7,0,0.08428637);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Corr: LTB.DVT40 Plane: V Ring: 1",100,-840,840);
   Graph_Graph3->SetMinimum(-10.29734);
   Graph_Graph3->SetMaximum(-9.751965);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetTitle("LTB.DVT40, Kick [#murad]");
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph3);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(9.20917);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.0001038392);
   linear_fit->SetParError(0,4.777995e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-10.07743);
   linear_fit->SetParError(1,0.02479163);
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
   
   TPaveText *pt = new TPaveText(0.1875365,0.9336861,0.8124635,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LTB.DVT40 Plane: V Ring: 1");
   pt->Draw();
   canvas_LT.BPM30_V_1->Modified();
   canvas_LT.BPM30_V_1->cd();
   canvas_LT.BPM30_V_1->SetSelected(canvas_LT.BPM30_V_1);
}
