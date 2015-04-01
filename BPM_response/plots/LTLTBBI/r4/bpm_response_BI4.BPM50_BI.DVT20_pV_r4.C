{
//=========Macro generated from canvas: canvas_BI4.BPM50_V_4/
//=========  (Wed Apr  1 22:36:04 2015) by ROOT version5.34/21
   TCanvas *canvas_BI4.BPM50_V_4 = new TCanvas("canvas_BI4.BPM50_V_4", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI4.BPM50_V_4->SetHighLightColor(2);
   canvas_BI4.BPM50_V_4->Range(-1050,-17.32441,1050,0.545564);
   canvas_BI4.BPM50_V_4->SetFillColor(0);
   canvas_BI4.BPM50_V_4->SetBorderMode(0);
   canvas_BI4.BPM50_V_4->SetBorderSize(2);
   canvas_BI4.BPM50_V_4->SetGridx();
   canvas_BI4.BPM50_V_4->SetGridy();
   canvas_BI4.BPM50_V_4->SetFrameBorderMode(0);
   canvas_BI4.BPM50_V_4->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: BI.DVT20 Plane: V Ring: 4");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-3.41276);
   gre->SetPointError(0,0,0.9799949);
   gre->SetPoint(1,-500,-6.9144);
   gre->SetPointError(1,0,0.7598888);
   gre->SetPoint(2,-300,-6.80104);
   gre->SetPointError(2,0,0.2872477);
   gre->SetPoint(3,-100,-8.74244);
   gre->SetPointError(3,0,0.1700834);
   gre->SetPoint(4,100,-9.48502);
   gre->SetPointError(4,0,0.3939911);
   gre->SetPoint(5,300,-11.87166);
   gre->SetPointError(5,0,0.2278244);
   gre->SetPoint(6,500,-10.23378);
   gre->SetPointError(6,0,0.9334272);
   gre->SetPoint(7,700,-14.12072);
   gre->SetPointError(7,0,0.2253613);
   
   TH1F *Graph_Graph56 = new TH1F("Graph_Graph56","Corr: BI.DVT20 Plane: V Ring: 4",100,-840,840);
   Graph_Graph56->SetMinimum(-15.53741);
   Graph_Graph56->SetMaximum(-1.241434);
   Graph_Graph56->SetDirectory(0);
   Graph_Graph56->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph56->SetLineColor(ci);
   Graph_Graph56->GetXaxis()->SetTitle("BI.DVT20, Kick [#murad]");
   Graph_Graph56->GetXaxis()->SetLabelFont(42);
   Graph_Graph56->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph56->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph56->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph56->GetXaxis()->SetTitleFont(42);
   Graph_Graph56->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph56->GetYaxis()->SetLabelFont(42);
   Graph_Graph56->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph56->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph56->GetYaxis()->SetTitleFont(42);
   Graph_Graph56->GetZaxis()->SetLabelFont(42);
   Graph_Graph56->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph56->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph56->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph56);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(19.4144);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.007020485);
   linear_fit->SetParError(0,0.0002818344);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-9.320896);
   linear_fit->SetParError(1,0.1080567);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI4.BPM50","lp");

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
   TText *text = pt->AddText("Corr: BI.DVT20 Plane: V Ring: 4");
   pt->Draw();
   canvas_BI4.BPM50_V_4->Modified();
   canvas_BI4.BPM50_V_4->cd();
   canvas_BI4.BPM50_V_4->SetSelected(canvas_BI4.BPM50_V_4);
}
