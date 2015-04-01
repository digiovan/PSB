{
//=========Macro generated from canvas: canvas_LTB.BPM20_V_2/
//=========  (Wed Apr  1 22:34:58 2015) by ROOT version5.34/21
   TCanvas *canvas_LTB.BPM20_V_2 = new TCanvas("canvas_LTB.BPM20_V_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LTB.BPM20_V_2->SetHighLightColor(2);
   canvas_LTB.BPM20_V_2->Range(-1050,-15.32488,1050,18.95956);
   canvas_LTB.BPM20_V_2->SetFillColor(0);
   canvas_LTB.BPM20_V_2->SetBorderMode(0);
   canvas_LTB.BPM20_V_2->SetBorderSize(2);
   canvas_LTB.BPM20_V_2->SetGridx();
   canvas_LTB.BPM20_V_2->SetGridy();
   canvas_LTB.BPM20_V_2->SetFrameBorderMode(0);
   canvas_LTB.BPM20_V_2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DVT50 Plane: V Ring: 2");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-9.54032);
   gre->SetPointError(0,0,0.07048491);
   gre->SetPoint(1,-500,-6.23538);
   gre->SetPointError(1,0,0.05405436);
   gre->SetPoint(2,-300,-2.87936);
   gre->SetPointError(2,0,0.03333713);
   gre->SetPoint(3,-100,0.48564);
   gre->SetPointError(3,0,0.0480507);
   gre->SetPoint(4,100,3.64074);
   gre->SetPointError(4,0,0.06788099);
   gre->SetPoint(5,300,6.85264);
   gre->SetPointError(5,0,0.0266362);
   gre->SetPoint(6,500,9.76346);
   gre->SetPointError(6,0,0.07780332);
   gre->SetPoint(7,700,13.20588);
   gre->SetPointError(7,0,0.03960431);
   
   TH1F *Graph_Graph21 = new TH1F("Graph_Graph21","Corr: LT.DVT50 Plane: V Ring: 2",100,-840,840);
   Graph_Graph21->SetMinimum(-11.89643);
   Graph_Graph21->SetMaximum(15.53111);
   Graph_Graph21->SetDirectory(0);
   Graph_Graph21->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21->SetLineColor(ci);
   Graph_Graph21->GetXaxis()->SetTitle("LT.DVT50, Kick [#murad]");
   Graph_Graph21->GetXaxis()->SetLabelFont(42);
   Graph_Graph21->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph21->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph21->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph21->GetXaxis()->SetTitleFont(42);
   Graph_Graph21->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph21->GetYaxis()->SetLabelFont(42);
   Graph_Graph21->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph21->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph21->GetYaxis()->SetTitleFont(42);
   Graph_Graph21->GetZaxis()->SetLabelFont(42);
   Graph_Graph21->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph21->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph21->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(39.43124);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.01617007);
   linear_fit->SetParError(0,3.716283e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,1.95474);
   linear_fit->SetParError(1,0.01553324);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","LTB.BPM20","lp");

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
   TText *text = pt->AddText("Corr: LT.DVT50 Plane: V Ring: 2");
   pt->Draw();
   canvas_LTB.BPM20_V_2->Modified();
   canvas_LTB.BPM20_V_2->cd();
   canvas_LTB.BPM20_V_2->SetSelected(canvas_LTB.BPM20_V_2);
}
