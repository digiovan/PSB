{
//=========Macro generated from canvas: canvas_BI2.BPM40_V_2/
//=========  (Wed Apr  1 22:34:27 2015) by ROOT version5.34/21
   TCanvas *canvas_BI2.BPM40_V_2 = new TCanvas("canvas_BI2.BPM40_V_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI2.BPM40_V_2->SetHighLightColor(2);
   canvas_BI2.BPM40_V_2->Range(-1050,-32.27848,1050,17.04665);
   canvas_BI2.BPM40_V_2->SetFillColor(0);
   canvas_BI2.BPM40_V_2->SetBorderMode(0);
   canvas_BI2.BPM40_V_2->SetBorderSize(2);
   canvas_BI2.BPM40_V_2->SetGridx();
   canvas_BI2.BPM40_V_2->SetGridy();
   canvas_BI2.BPM40_V_2->SetFrameBorderMode(0);
   canvas_BI2.BPM40_V_2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DVT20 Plane: V Ring: 2");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-23.41848);
   gre->SetPointError(0,0,0.639143);
   gre->SetPoint(1,-500,-19.29524);
   gre->SetPointError(1,0,0.2877566);
   gre->SetPoint(2,-300,-12.89112);
   gre->SetPointError(2,0,0.5939975);
   gre->SetPoint(3,-100,-8.39694);
   gre->SetPointError(3,0,0.1046267);
   gre->SetPoint(4,100,-3.89808);
   gre->SetPointError(4,0,0.2103815);
   gre->SetPoint(5,300,0.94502);
   gre->SetPointError(5,0,0.0324799);
   gre->SetPoint(6,500,5.23762);
   gre->SetPointError(6,0,0.03353955);
   gre->SetPoint(7,700,8.74514);
   gre->SetPointError(7,0,0.08065393);
   
   TH1F *Graph_Graph27 = new TH1F("Graph_Graph27","Corr: LT.DVT20 Plane: V Ring: 2",100,-840,840);
   Graph_Graph27->SetMinimum(-27.34596);
   Graph_Graph27->SetMaximum(12.11414);
   Graph_Graph27->SetDirectory(0);
   Graph_Graph27->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph27->SetLineColor(ci);
   Graph_Graph27->GetXaxis()->SetTitle("LT.DVT20, Kick [#murad]");
   Graph_Graph27->GetXaxis()->SetLabelFont(42);
   Graph_Graph27->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph27->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph27->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph27->GetXaxis()->SetTitleFont(42);
   Graph_Graph27->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph27->GetYaxis()->SetLabelFont(42);
   Graph_Graph27->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph27->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph27->GetYaxis()->SetTitleFont(42);
   Graph_Graph27->GetZaxis()->SetLabelFont(42);
   Graph_Graph27->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph27->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph27->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph27);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(236.8776);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.02205454);
   linear_fit->SetParError(0,0.0001188081);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-5.840167);
   linear_fit->SetParError(1,0.0508363);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI2.BPM40","lp");

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
   TText *text = pt->AddText("Corr: LT.DVT20 Plane: V Ring: 2");
   pt->Draw();
   canvas_BI2.BPM40_V_2->Modified();
   canvas_BI2.BPM40_V_2->cd();
   canvas_BI2.BPM40_V_2->SetSelected(canvas_BI2.BPM40_V_2);
}
