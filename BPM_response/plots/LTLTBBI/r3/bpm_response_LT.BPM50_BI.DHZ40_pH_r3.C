{
//=========Macro generated from canvas: canvas_LT.BPM50_H_3/
//=========  (Wed Apr  1 22:36:18 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM50_H_3 = new TCanvas("canvas_LT.BPM50_H_3", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM50_H_3->SetHighLightColor(2);
   canvas_LT.BPM50_H_3->Range(-1050,-1.730807,1050,-1.605192);
   canvas_LT.BPM50_H_3->SetFillColor(0);
   canvas_LT.BPM50_H_3->SetBorderMode(0);
   canvas_LT.BPM50_H_3->SetBorderSize(2);
   canvas_LT.BPM50_H_3->SetGridx();
   canvas_LT.BPM50_H_3->SetGridy();
   canvas_LT.BPM50_H_3->SetFrameBorderMode(0);
   canvas_LT.BPM50_H_3->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: BI.DHZ40 Plane: H Ring: 3");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-1.67694);
   gre->SetPointError(0,0,0.03293092);
   gre->SetPoint(1,-500,-1.672);
   gre->SetPointError(1,0,0.01683476);
   gre->SetPoint(2,-300,-1.67802);
   gre->SetPointError(2,0,0.0187491);
   gre->SetPoint(3,-100,-1.65114);
   gre->SetPointError(3,0,0.02501191);
   gre->SetPoint(4,100,-1.68342);
   gre->SetPointError(4,0,0.01127385);
   gre->SetPoint(5,300,-1.6644);
   gre->SetPointError(5,0,0.007860886);
   gre->SetPoint(6,500,-1.65544);
   gre->SetPointError(6,0,0.02327465);
   gre->SetPoint(7,700,-1.68994);
   gre->SetPointError(7,0,0.007065971);
   
   TH1F *Graph_Graph33 = new TH1F("Graph_Graph33","Corr: BI.DHZ40 Plane: H Ring: 3",100,-840,840);
   Graph_Graph33->SetMinimum(-1.718245);
   Graph_Graph33->SetMaximum(-1.617754);
   Graph_Graph33->SetDirectory(0);
   Graph_Graph33->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph33->SetLineColor(ci);
   Graph_Graph33->GetXaxis()->SetTitle("BI.DHZ40, Kick [#murad]");
   Graph_Graph33->GetXaxis()->SetLabelFont(42);
   Graph_Graph33->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph33->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph33->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph33->GetXaxis()->SetTitleFont(42);
   Graph_Graph33->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph33->GetYaxis()->SetLabelFont(42);
   Graph_Graph33->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph33->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph33->GetYaxis()->SetTitleFont(42);
   Graph_Graph33->GetZaxis()->SetLabelFont(42);
   Graph_Graph33->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph33->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph33->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph33);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(6.635504);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-1.422688e-05);
   linear_fit->SetParError(0,1.11497e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-1.672726);
   linear_fit->SetParError(1,0.005515944);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","LT.BPM50","lp");

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
   
   TPaveText *pt = new TPaveText(0.2007664,0.9336861,0.7992336,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: BI.DHZ40 Plane: H Ring: 3");
   pt->Draw();
   canvas_LT.BPM50_H_3->Modified();
   canvas_LT.BPM50_H_3->cd();
   canvas_LT.BPM50_H_3->SetSelected(canvas_LT.BPM50_H_3);
}
