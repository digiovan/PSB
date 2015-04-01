{
//=========Macro generated from canvas: canvas_BI2.BPM40_V_2/
//=========  (Wed Apr  1 22:36:02 2015) by ROOT version5.34/21
   TCanvas *canvas_BI2.BPM40_V_2 = new TCanvas("canvas_BI2.BPM40_V_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI2.BPM40_V_2->SetHighLightColor(2);
   canvas_BI2.BPM40_V_2->Range(-1050,-22.87592,1050,9.343593);
   canvas_BI2.BPM40_V_2->SetFillColor(0);
   canvas_BI2.BPM40_V_2->SetBorderMode(0);
   canvas_BI2.BPM40_V_2->SetBorderSize(2);
   canvas_BI2.BPM40_V_2->SetGridx();
   canvas_BI2.BPM40_V_2->SetGridy();
   canvas_BI2.BPM40_V_2->SetFrameBorderMode(0);
   canvas_BI2.BPM40_V_2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: BI.DVT20 Plane: V Ring: 2");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,3.57264);
   gre->SetPointError(0,0,0.4010336);
   gre->SetPoint(1,-500,-0.07576);
   gre->SetPointError(1,0,0.3910023);
   gre->SetPoint(2,-300,-2.70656);
   gre->SetPointError(2,0,0.3345422);
   gre->SetPoint(3,-100,-5.99512);
   gre->SetPointError(3,0,0.3684835);
   gre->SetPoint(4,100,-9.33014);
   gre->SetPointError(4,0,0.6006089);
   gre->SetPoint(5,300,-12.3675);
   gre->SetPointError(5,0,0.721682);
   gre->SetPoint(6,500,-15.40538);
   gre->SetPointError(6,0,1.699663);
   gre->SetPoint(7,700,-16.98222);
   gre->SetPointError(7,0,0.5237817);
   
   TH1F *Graph_Graph27 = new TH1F("Graph_Graph27","Corr: BI.DVT20 Plane: V Ring: 2",100,-840,840);
   Graph_Graph27->SetMinimum(-19.65397);
   Graph_Graph27->SetMaximum(6.121641);
   Graph_Graph27->SetDirectory(0);
   Graph_Graph27->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph27->SetLineColor(ci);
   Graph_Graph27->GetXaxis()->SetTitle("BI.DVT20, Kick [#murad]");
   Graph_Graph27->GetXaxis()->SetLabelFont(42);
   Graph_Graph27->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph27->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph27->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph27->GetXaxis()->SetTitleFont(42);
   Graph_Graph27->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph27->GetYaxis()->SetLabelFont(42);
   Graph_Graph27->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph27->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph27->GetYaxis()->SetTitleFont(42);
   Graph_Graph27->GetZaxis()->SetLabelFont(42);
   Graph_Graph27->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph27->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph27->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph27);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(5.599965);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.01488543);
   linear_fit->SetParError(0,0.0004029924);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-7.274084);
   linear_fit->SetParError(1,0.1812295);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI2.BPM40","lp");

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
   TText *text = pt->AddText("Corr: BI.DVT20 Plane: V Ring: 2");
   pt->Draw();
   canvas_BI2.BPM40_V_2->Modified();
   canvas_BI2.BPM40_V_2->cd();
   canvas_BI2.BPM40_V_2->SetSelected(canvas_BI2.BPM40_V_2);
}
