{
//=========Macro generated from canvas: canvas_LTB.BPM10_V_2/
//=========  (Wed Apr  1 22:35:19 2015) by ROOT version5.34/21
   TCanvas *canvas_LTB.BPM10_V_2 = new TCanvas("canvas_LTB.BPM10_V_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LTB.BPM10_V_2->SetHighLightColor(2);
   canvas_LTB.BPM10_V_2->Range(-1050,0.6274486,1050,0.8452569);
   canvas_LTB.BPM10_V_2->SetFillColor(0);
   canvas_LTB.BPM10_V_2->SetBorderMode(0);
   canvas_LTB.BPM10_V_2->SetBorderSize(2);
   canvas_LTB.BPM10_V_2->SetGridx();
   canvas_LTB.BPM10_V_2->SetGridy();
   canvas_LTB.BPM10_V_2->SetFrameBorderMode(0);
   canvas_LTB.BPM10_V_2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LTB.DVT20 Plane: V Ring: 2");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,0.76652);
   gre->SetPointError(0,0,0.03818418);
   gre->SetPoint(1,-500,0.72822);
   gre->SetPointError(1,0,0.04231635);
   gre->SetPoint(2,-300,0.74708);
   gre->SetPointError(2,0,0.02285185);
   gre->SetPoint(3,-100,0.71314);
   gre->SetPointError(3,0,0.04925719);
   gre->SetPoint(4,100,0.76992);
   gre->SetPointError(4,0,0.0134322);
   gre->SetPoint(5,300,0.73502);
   gre->SetPointError(5,0,0.04608041);
   gre->SetPoint(6,500,0.74046);
   gre->SetPointError(6,0,0.0684955);
   gre->SetPoint(7,700,0.73084);
   gre->SetPointError(7,0,0.06709);
   
   TH1F *Graph_Graph20 = new TH1F("Graph_Graph20","Corr: LTB.DVT20 Plane: V Ring: 2",100,-840,840);
   Graph_Graph20->SetMinimum(0.6492295);
   Graph_Graph20->SetMaximum(0.823476);
   Graph_Graph20->SetDirectory(0);
   Graph_Graph20->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph20->SetLineColor(ci);
   Graph_Graph20->GetXaxis()->SetTitle("LTB.DVT20, Kick [#murad]");
   Graph_Graph20->GetXaxis()->SetLabelFont(42);
   Graph_Graph20->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph20->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph20->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph20->GetXaxis()->SetTitleFont(42);
   Graph_Graph20->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph20->GetYaxis()->SetLabelFont(42);
   Graph_Graph20->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph20->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph20->GetYaxis()->SetTitleFont(42);
   Graph_Graph20->GetZaxis()->SetLabelFont(42);
   Graph_Graph20->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph20->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph20->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph20);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(2.767151);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,1.052566e-05);
   linear_fit->SetParError(0,3.343153e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,0.7579678);
   linear_fit->SetParError(1,0.01008653);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","LTB.BPM10","lp");

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
   TText *text = pt->AddText("Corr: LTB.DVT20 Plane: V Ring: 2");
   pt->Draw();
   canvas_LTB.BPM10_V_2->Modified();
   canvas_LTB.BPM10_V_2->cd();
   canvas_LTB.BPM10_V_2->SetSelected(canvas_LTB.BPM10_V_2);
}
