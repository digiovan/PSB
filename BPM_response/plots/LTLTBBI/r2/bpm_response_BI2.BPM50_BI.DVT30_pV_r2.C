{
//=========Macro generated from canvas: canvas_BI2.BPM50_V_2/
//=========  (Wed Apr  1 22:36:12 2015) by ROOT version5.34/21
   TCanvas *canvas_BI2.BPM50_V_2 = new TCanvas("canvas_BI2.BPM50_V_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI2.BPM50_V_2->SetHighLightColor(2);
   canvas_BI2.BPM50_V_2->Range(-1050,-10.5004,1050,-0.8161535);
   canvas_BI2.BPM50_V_2->SetFillColor(0);
   canvas_BI2.BPM50_V_2->SetBorderMode(0);
   canvas_BI2.BPM50_V_2->SetBorderSize(2);
   canvas_BI2.BPM50_V_2->SetGridx();
   canvas_BI2.BPM50_V_2->SetGridy();
   canvas_BI2.BPM50_V_2->SetFrameBorderMode(0);
   canvas_BI2.BPM50_V_2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: BI.DVT30 Plane: V Ring: 2");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-3.9077);
   gre->SetPointError(0,0,1.477506);
   gre->SetPoint(1,-500,-5.54036);
   gre->SetPointError(1,0,0.3452798);
   gre->SetPoint(2,-300,-7.90314);
   gre->SetPointError(2,0,0.9832167);
   gre->SetPoint(3,-100,-7.5226);
   gre->SetPointError(3,0,0.4378745);
   gre->SetPoint(4,100,-7.30518);
   gre->SetPointError(4,0,0.7850738);
   gre->SetPoint(5,300,-6.27734);
   gre->SetPointError(5,0,0.5871565);
   gre->SetPoint(6,500,-5.60354);
   gre->SetPointError(6,0,0.134747);
   gre->SetPoint(7,700,-3.71628);
   gre->SetPointError(7,0,1.206279);
   
   TH1F *Graph_Graph28 = new TH1F("Graph_Graph28","Corr: BI.DVT30 Plane: V Ring: 2",100,-840,840);
   Graph_Graph28->SetMinimum(-9.531973);
   Graph_Graph28->SetMaximum(-1.784578);
   Graph_Graph28->SetDirectory(0);
   Graph_Graph28->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph28->SetLineColor(ci);
   Graph_Graph28->GetXaxis()->SetTitle("BI.DVT30, Kick [#murad]");
   Graph_Graph28->GetXaxis()->SetLabelFont(42);
   Graph_Graph28->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph28->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph28->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph28->GetXaxis()->SetTitleFont(42);
   Graph_Graph28->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph28->GetYaxis()->SetLabelFont(42);
   Graph_Graph28->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph28->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph28->GetYaxis()->SetTitleFont(42);
   Graph_Graph28->GetZaxis()->SetLabelFont(42);
   Graph_Graph28->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph28->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph28->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph28);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(28.47051);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.0005865345);
   linear_fit->SetParError(0,0.0003262438);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-5.980327);
   linear_fit->SetParError(1,0.1542424);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI2.BPM50","lp");

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
   TText *text = pt->AddText("Corr: BI.DVT30 Plane: V Ring: 2");
   pt->Draw();
   canvas_BI2.BPM50_V_2->Modified();
   canvas_BI2.BPM50_V_2->cd();
   canvas_BI2.BPM50_V_2->SetSelected(canvas_BI2.BPM50_V_2);
}
