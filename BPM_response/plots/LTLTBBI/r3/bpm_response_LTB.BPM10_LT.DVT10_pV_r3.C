{
//=========Macro generated from canvas: canvas_LTB.BPM10_V_3/
//=========  (Wed Apr  1 22:34:18 2015) by ROOT version5.34/21
   TCanvas *canvas_LTB.BPM10_V_3 = new TCanvas("canvas_LTB.BPM10_V_3", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LTB.BPM10_V_3->SetHighLightColor(2);
   canvas_LTB.BPM10_V_3->Range(-1050,0.7827331,1050,1.929924);
   canvas_LTB.BPM10_V_3->SetFillColor(0);
   canvas_LTB.BPM10_V_3->SetBorderMode(0);
   canvas_LTB.BPM10_V_3->SetBorderSize(2);
   canvas_LTB.BPM10_V_3->SetGridx();
   canvas_LTB.BPM10_V_3->SetGridy();
   canvas_LTB.BPM10_V_3->SetFrameBorderMode(0);
   canvas_LTB.BPM10_V_3->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DVT10 Plane: V Ring: 3");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,1.64762);
   gre->SetPointError(0,0,0.0911052);
   gre->SetPoint(1,-500,1.30844);
   gre->SetPointError(1,0,0.04833935);
   gre->SetPoint(2,-300,1.26708);
   gre->SetPointError(2,0,0.02412573);
   gre->SetPoint(3,-100,1.15754);
   gre->SetPointError(3,0,0.03007974);
   gre->SetPoint(4,100,1.0992);
   gre->SetPointError(4,0,0.03915924);
   gre->SetPoint(5,300,1.03418);
   gre->SetPointError(5,0,0.01444109);
   gre->SetPoint(6,500,0.99728);
   gre->SetPointError(6,0,0.02334847);
   gre->SetPoint(7,700,1.14562);
   gre->SetPointError(7,0,0.02837062);
   
   TH1F *Graph_Graph34 = new TH1F("Graph_Graph34","Corr: LT.DVT10 Plane: V Ring: 3",100,-840,840);
   Graph_Graph34->SetMinimum(0.8974522);
   Graph_Graph34->SetMaximum(1.815205);
   Graph_Graph34->SetDirectory(0);
   Graph_Graph34->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph34->SetLineColor(ci);
   Graph_Graph34->GetXaxis()->SetTitle("LT.DVT10, Kick [#murad]");
   Graph_Graph34->GetXaxis()->SetLabelFont(42);
   Graph_Graph34->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph34->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph34->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph34->GetXaxis()->SetTitleFont(42);
   Graph_Graph34->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph34->GetYaxis()->SetLabelFont(42);
   Graph_Graph34->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph34->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph34->GetYaxis()->SetTitleFont(42);
   Graph_Graph34->GetZaxis()->SetLabelFont(42);
   Graph_Graph34->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph34->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph34->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph34);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(62.14268);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.0002517975);
   linear_fit->SetParError(0,2.705249e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,1.15496);
   linear_fit->SetParError(1,0.01063124);
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
   
   TPaveText *pt = new TPaveText(0.1989416,0.9336861,0.8010584,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LT.DVT10 Plane: V Ring: 3");
   pt->Draw();
   canvas_LTB.BPM10_V_3->Modified();
   canvas_LTB.BPM10_V_3->cd();
   canvas_LTB.BPM10_V_3->SetSelected(canvas_LTB.BPM10_V_3);
}
