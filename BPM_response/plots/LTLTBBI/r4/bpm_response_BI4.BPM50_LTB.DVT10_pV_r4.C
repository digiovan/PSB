{
//=========Macro generated from canvas: canvas_BI4.BPM50_V_4/
//=========  (Wed Apr  1 22:35:12 2015) by ROOT version5.34/21
   TCanvas *canvas_BI4.BPM50_V_4 = new TCanvas("canvas_BI4.BPM50_V_4", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI4.BPM50_V_4->SetHighLightColor(2);
   canvas_BI4.BPM50_V_4->Range(-1050,-28.05269,1050,16.54395);
   canvas_BI4.BPM50_V_4->SetFillColor(0);
   canvas_BI4.BPM50_V_4->SetBorderMode(0);
   canvas_BI4.BPM50_V_4->SetBorderSize(2);
   canvas_BI4.BPM50_V_4->SetGridx();
   canvas_BI4.BPM50_V_4->SetGridy();
   canvas_BI4.BPM50_V_4->SetFrameBorderMode(0);
   canvas_BI4.BPM50_V_4->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LTB.DVT10 Plane: V Ring: 4");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,8.99618);
   gre->SetPointError(0,0,0.1149996);
   gre->SetPoint(1,-500,6.1419);
   gre->SetPointError(1,0,0.153311);
   gre->SetPoint(2,-300,0.1982);
   gre->SetPointError(2,0,0.2975967);
   gre->SetPoint(3,-100,-4.61238);
   gre->SetPointError(3,0,0.7082977);
   gre->SetPoint(4,100,-9.35908);
   gre->SetPointError(4,0,0.3396125);
   gre->SetPoint(5,300,-13.3628);
   gre->SetPointError(5,0,0.6103752);
   gre->SetPoint(6,500,-19.47856);
   gre->SetPointError(6,0,1.141355);
   gre->SetPoint(7,700,-2.0067);
   gre->SetPointError(7,0,0.4046806);
   
   TH1F *Graph_Graph56 = new TH1F("Graph_Graph56","Corr: LTB.DVT10 Plane: V Ring: 4",100,-840,840);
   Graph_Graph56->SetMinimum(-23.59302);
   Graph_Graph56->SetMaximum(12.08429);
   Graph_Graph56->SetDirectory(0);
   Graph_Graph56->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph56->SetLineColor(ci);
   Graph_Graph56->GetXaxis()->SetTitle("LTB.DVT10, Kick [#murad]");
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
   linear_fit->SetChisquare(1297.192);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.01457887);
   linear_fit->SetParError(0,0.0002349284);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-1.679777);
   linear_fit->SetParError(1,0.138787);
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
   
   TPaveText *pt = new TPaveText(0.1847993,0.9336861,0.8152007,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LTB.DVT10 Plane: V Ring: 4");
   pt->Draw();
   canvas_BI4.BPM50_V_4->Modified();
   canvas_BI4.BPM50_V_4->cd();
   canvas_BI4.BPM50_V_4->SetSelected(canvas_BI4.BPM50_V_4);
}
