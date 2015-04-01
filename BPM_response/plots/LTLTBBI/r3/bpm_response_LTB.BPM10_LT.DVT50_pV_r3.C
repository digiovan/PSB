{
//=========Macro generated from canvas: canvas_LTB.BPM10_V_3/
//=========  (Wed Apr  1 22:34:59 2015) by ROOT version5.34/21
   TCanvas *canvas_LTB.BPM10_V_3 = new TCanvas("canvas_LTB.BPM10_V_3", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LTB.BPM10_V_3->SetHighLightColor(2);
   canvas_LTB.BPM10_V_3->Range(-1050,-7.876086,1050,9.828587);
   canvas_LTB.BPM10_V_3->SetFillColor(0);
   canvas_LTB.BPM10_V_3->SetBorderMode(0);
   canvas_LTB.BPM10_V_3->SetBorderSize(2);
   canvas_LTB.BPM10_V_3->SetGridx();
   canvas_LTB.BPM10_V_3->SetGridy();
   canvas_LTB.BPM10_V_3->SetFrameBorderMode(0);
   canvas_LTB.BPM10_V_3->SetFrameBorderMode(0);
   
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
   gre->SetPoint(0,-700,-4.8893);
   gre->SetPointError(0,0,0.03600703);
   gre->SetPoint(1,-500,-3.12134);
   gre->SetPointError(1,0,0.01706134);
   gre->SetPoint(2,-300,-1.40586);
   gre->SetPointError(2,0,0.0419564);
   gre->SetPoint(3,-100,0.3079);
   gre->SetPointError(3,0,0.0428694);
   gre->SetPoint(4,100,2.0607);
   gre->SetPointError(4,0,0.0704462);
   gre->SetPoint(5,300,3.49248);
   gre->SetPointError(5,0,0.03850713);
   gre->SetPoint(6,500,5.11664);
   gre->SetPointError(6,0,0.03003198);
   gre->SetPoint(7,700,6.78892);
   gre->SetPointError(7,0,0.08888771);
   
   TH1F *Graph_Graph34 = new TH1F("Graph_Graph34","Corr: LT.DVT50 Plane: V Ring: 3",100,-840,840);
   Graph_Graph34->SetMinimum(-6.105619);
   Graph_Graph34->SetMaximum(8.058119);
   Graph_Graph34->SetDirectory(0);
   Graph_Graph34->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph34->SetLineColor(ci);
   Graph_Graph34->GetXaxis()->SetTitle("LT.DVT50, Kick [#murad]");
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
   linear_fit->SetChisquare(30.19887);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.008294961);
   linear_fit->SetParError(0,2.728371e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,1.021599);
   linear_fit->SetParError(1,0.01303242);
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
   TText *text = pt->AddText("Corr: LT.DVT50 Plane: V Ring: 3");
   pt->Draw();
   canvas_LTB.BPM10_V_3->Modified();
   canvas_LTB.BPM10_V_3->cd();
   canvas_LTB.BPM10_V_3->SetSelected(canvas_LTB.BPM10_V_3);
}
