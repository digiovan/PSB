{
//=========Macro generated from canvas: canvas_LTB.BPM20_V_2/
//=========  (Wed Apr  1 22:34:38 2015) by ROOT version5.34/21
   TCanvas *canvas_LTB.BPM20_V_2 = new TCanvas("canvas_LTB.BPM20_V_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LTB.BPM20_V_2->SetHighLightColor(2);
   canvas_LTB.BPM20_V_2->Range(-1050,-12.50966,1050,16.7276);
   canvas_LTB.BPM20_V_2->SetFillColor(0);
   canvas_LTB.BPM20_V_2->SetBorderMode(0);
   canvas_LTB.BPM20_V_2->SetBorderSize(2);
   canvas_LTB.BPM20_V_2->SetGridx();
   canvas_LTB.BPM20_V_2->SetGridy();
   canvas_LTB.BPM20_V_2->SetFrameBorderMode(0);
   canvas_LTB.BPM20_V_2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DVT30 Plane: V Ring: 2");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,11.81044);
   gre->SetPointError(0,0,0.04428528);
   gre->SetPoint(1,-500,8.9598);
   gre->SetPointError(1,0,0.1150484);
   gre->SetPoint(2,-300,6.11248);
   gre->SetPointError(2,0,0.122893);
   gre->SetPoint(3,-100,3.50018);
   gre->SetPointError(3,0,0.07046507);
   gre->SetPoint(4,100,0.82324);
   gre->SetPointError(4,0,0.01031405);
   gre->SetPoint(5,300,-2.02812);
   gre->SetPointError(5,0,0.06984776);
   gre->SetPoint(6,500,-4.79264);
   gre->SetPointError(6,0,0.08356837);
   gre->SetPoint(7,700,-7.50916);
   gre->SetPointError(7,0,0.1276223);
   
   TH1F *Graph_Graph21 = new TH1F("Graph_Graph21","Corr: LT.DVT30 Plane: V Ring: 2",100,-840,840);
   Graph_Graph21->SetMinimum(-9.585933);
   Graph_Graph21->SetMaximum(13.80388);
   Graph_Graph21->SetDirectory(0);
   Graph_Graph21->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21->SetLineColor(ci);
   Graph_Graph21->GetXaxis()->SetTitle("LT.DVT30, Kick [#murad]");
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
   linear_fit->SetChisquare(8.811494);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.01374526);
   linear_fit->SetParError(0,4.92964e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,2.189854);
   linear_fit->SetParError(1,0.01018364);
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
   TText *text = pt->AddText("Corr: LT.DVT30 Plane: V Ring: 2");
   pt->Draw();
   canvas_LTB.BPM20_V_2->Modified();
   canvas_LTB.BPM20_V_2->cd();
   canvas_LTB.BPM20_V_2->SetSelected(canvas_LTB.BPM20_V_2);
}
