{
//=========Macro generated from canvas: canvas_LT.BPM10_H_2/
//=========  (Wed Apr  1 22:34:32 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM10_H_2 = new TCanvas("canvas_LT.BPM10_H_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM10_H_2->SetHighLightColor(2);
   canvas_LT.BPM10_H_2->Range(-1050,1.92255,1050,2.247687);
   canvas_LT.BPM10_H_2->SetFillColor(0);
   canvas_LT.BPM10_H_2->SetBorderMode(0);
   canvas_LT.BPM10_H_2->SetBorderSize(2);
   canvas_LT.BPM10_H_2->SetGridx();
   canvas_LT.BPM10_H_2->SetGridy();
   canvas_LT.BPM10_H_2->SetFrameBorderMode(0);
   canvas_LT.BPM10_H_2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DHZ30 Plane: H Ring: 2");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,2.02328);
   gre->SetPointError(0,0,0.04654015);
   gre->SetPoint(1,-500,2.14982);
   gre->SetPointError(1,0,0.04367758);
   gre->SetPoint(2,-300,2.03072);
   gre->SetPointError(2,0,0.02233978);
   gre->SetPoint(3,-100,2.09714);
   gre->SetPointError(3,0,0.009393707);
   gre->SetPoint(4,100,2.02472);
   gre->SetPointError(4,0,0.004432663);
   gre->SetPoint(5,300,2.05774);
   gre->SetPointError(5,0,0.02689884);
   gre->SetPoint(6,500,2.06554);
   gre->SetPointError(6,0,0.03660612);
   gre->SetPoint(7,700,2.04528);
   gre->SetPointError(7,0,0.02607472);
   
   TH1F *Graph_Graph15 = new TH1F("Graph_Graph15","Corr: LT.DHZ30 Plane: H Ring: 2",100,-840,840);
   Graph_Graph15->SetMinimum(1.955064);
   Graph_Graph15->SetMaximum(2.215173);
   Graph_Graph15->SetDirectory(0);
   Graph_Graph15->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph15->SetLineColor(ci);
   Graph_Graph15->GetXaxis()->SetTitle("LT.DHZ30, Kick [#murad]");
   Graph_Graph15->GetXaxis()->SetLabelFont(42);
   Graph_Graph15->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph15->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph15->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph15->GetXaxis()->SetTitleFont(42);
   Graph_Graph15->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph15->GetYaxis()->SetLabelFont(42);
   Graph_Graph15->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph15->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph15->GetYaxis()->SetTitleFont(42);
   Graph_Graph15->GetZaxis()->SetLabelFont(42);
   Graph_Graph15->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph15->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph15->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph15);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(46.79612);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-7.14998e-05);
   linear_fit->SetParError(0,2.302801e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,2.044075);
   linear_fit->SetParError(1,0.004109477);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","LT.BPM10","lp");

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
   
   TPaveText *pt = new TPaveText(0.1966606,0.9336861,0.8033394,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LT.DHZ30 Plane: H Ring: 2");
   pt->Draw();
   canvas_LT.BPM10_H_2->Modified();
   canvas_LT.BPM10_H_2->cd();
   canvas_LT.BPM10_H_2->SetSelected(canvas_LT.BPM10_H_2);
}
