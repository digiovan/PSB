{
//=========Macro generated from canvas: canvas_BI.BPM00_V_3/
//=========  (Wed Apr  1 22:35:52 2015) by ROOT version5.34/21
   TCanvas *canvas_BI.BPM00_V_3 = new TCanvas("canvas_BI.BPM00_V_3", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI.BPM00_V_3->SetHighLightColor(2);
   canvas_BI.BPM00_V_3->Range(-1050,-1.380204,1050,-0.5009646);
   canvas_BI.BPM00_V_3->SetFillColor(0);
   canvas_BI.BPM00_V_3->SetBorderMode(0);
   canvas_BI.BPM00_V_3->SetBorderSize(2);
   canvas_BI.BPM00_V_3->SetGridx();
   canvas_BI.BPM00_V_3->SetGridy();
   canvas_BI.BPM00_V_3->SetFrameBorderMode(0);
   canvas_BI.BPM00_V_3->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: BI.DVT10 Plane: V Ring: 3");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-1.18822);
   gre->SetPointError(0,0,0.04544449);
   gre->SetPoint(1,-500,-1.1072);
   gre->SetPointError(1,0,0.01552748);
   gre->SetPoint(2,-300,-1.05698);
   gre->SetPointError(2,0,0.0358019);
   gre->SetPoint(3,-100,-0.98862);
   gre->SetPointError(3,0,0.04336679);
   gre->SetPoint(4,100,-0.85656);
   gre->SetPointError(4,0,0.0169784);
   gre->SetPoint(5,300,-0.84972);
   gre->SetPointError(5,0,0.009014702);
   gre->SetPoint(6,500,-0.7441);
   gre->SetPointError(6,0,0.05514425);
   gre->SetPoint(7,700,-0.66472);
   gre->SetPointError(7,0,0.01721539);
   
   TH1F *Graph_Graph37 = new TH1F("Graph_Graph37","Corr: BI.DVT10 Plane: V Ring: 3",100,-840,840);
   Graph_Graph37->SetMinimum(-1.29228);
   Graph_Graph37->SetMaximum(-0.5888886);
   Graph_Graph37->SetDirectory(0);
   Graph_Graph37->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph37->SetLineColor(ci);
   Graph_Graph37->GetXaxis()->SetTitle("BI.DVT10, Kick [#murad]");
   Graph_Graph37->GetXaxis()->SetLabelFont(42);
   Graph_Graph37->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph37->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph37->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph37->GetXaxis()->SetTitleFont(42);
   Graph_Graph37->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph37->GetYaxis()->SetLabelFont(42);
   Graph_Graph37->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph37->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph37->GetYaxis()->SetTitleFont(42);
   Graph_Graph37->GetZaxis()->SetLabelFont(42);
   Graph_Graph37->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph37->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph37->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph37);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(14.01135);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.0003525044);
   linear_fit->SetParError(0,1.657521e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-0.9360478);
   linear_fit->SetParError(1,0.006759265);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI.BPM00","lp");

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
   TText *text = pt->AddText("Corr: BI.DVT10 Plane: V Ring: 3");
   pt->Draw();
   canvas_BI.BPM00_V_3->Modified();
   canvas_BI.BPM00_V_3->cd();
   canvas_BI.BPM00_V_3->SetSelected(canvas_BI.BPM00_V_3);
}
