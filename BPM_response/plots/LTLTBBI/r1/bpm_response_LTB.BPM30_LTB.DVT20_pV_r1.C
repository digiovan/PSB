{
//=========Macro generated from canvas: canvas_LTB.BPM30_V_1/
//=========  (Wed Apr  1 22:35:18 2015) by ROOT version5.34/21
   TCanvas *canvas_LTB.BPM30_V_1 = new TCanvas("canvas_LTB.BPM30_V_1", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LTB.BPM30_V_1->SetHighLightColor(2);
   canvas_LTB.BPM30_V_1->Range(-1050,-8.552739,1050,11.59231);
   canvas_LTB.BPM30_V_1->SetFillColor(0);
   canvas_LTB.BPM30_V_1->SetBorderMode(0);
   canvas_LTB.BPM30_V_1->SetBorderSize(2);
   canvas_LTB.BPM30_V_1->SetGridx();
   canvas_LTB.BPM30_V_1->SetGridy();
   canvas_LTB.BPM30_V_1->SetFrameBorderMode(0);
   canvas_LTB.BPM30_V_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LTB.DVT20 Plane: V Ring: 1");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-5.12894);
   gre->SetPointError(0,0,0.06629009);
   gre->SetPoint(1,-500,-2.97252);
   gre->SetPointError(1,0,0.0549786);
   gre->SetPoint(2,-300,-0.82936);
   gre->SetPointError(2,0,0.03043465);
   gre->SetPoint(3,-100,1.17488);
   gre->SetPointError(3,0,0.06028195);
   gre->SetPoint(4,100,3.2551);
   gre->SetPointError(4,0,0.07613087);
   gre->SetPoint(5,300,4.6317);
   gre->SetPointError(5,0,0.09861227);
   gre->SetPoint(6,500,6.41904);
   gre->SetPointError(6,0,0.08833341);
   gre->SetPoint(7,700,8.1867);
   gre->SetPointError(7,0,0.04810293);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Corr: LTB.DVT20 Plane: V Ring: 1",100,-840,840);
   Graph_Graph8->SetMinimum(-6.538233);
   Graph_Graph8->SetMaximum(9.577806);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph8->SetLineColor(ci);
   Graph_Graph8->GetXaxis()->SetTitle("LTB.DVT20, Kick [#murad]");
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph8);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(143.2711);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.009324375);
   linear_fit->SetParError(0,4.368283e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,1.860192);
   linear_fit->SetParError(1,0.01952024);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","LTB.BPM30","lp");

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
   TText *text = pt->AddText("Corr: LTB.DVT20 Plane: V Ring: 1");
   pt->Draw();
   canvas_LTB.BPM30_V_1->Modified();
   canvas_LTB.BPM30_V_1->cd();
   canvas_LTB.BPM30_V_1->SetSelected(canvas_LTB.BPM30_V_1);
}
