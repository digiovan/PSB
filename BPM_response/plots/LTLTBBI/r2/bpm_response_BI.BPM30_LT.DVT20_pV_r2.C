{
//=========Macro generated from canvas: canvas_BI.BPM30_V_2/
//=========  (Wed Apr  1 22:34:27 2015) by ROOT version5.34/21
   TCanvas *canvas_BI.BPM30_V_2 = new TCanvas("canvas_BI.BPM30_V_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI.BPM30_V_2->SetHighLightColor(2);
   canvas_BI.BPM30_V_2->Range(-1050,-25.42793,1050,17.21772);
   canvas_BI.BPM30_V_2->SetFillColor(0);
   canvas_BI.BPM30_V_2->SetBorderMode(0);
   canvas_BI.BPM30_V_2->SetBorderSize(2);
   canvas_BI.BPM30_V_2->SetGridx();
   canvas_BI.BPM30_V_2->SetGridy();
   canvas_BI.BPM30_V_2->SetFrameBorderMode(0);
   canvas_BI.BPM30_V_2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DVT20 Plane: V Ring: 2");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,4.95778);
   gre->SetPointError(0,0,0.2722581);
   gre->SetPoint(1,-500,10.04198);
   gre->SetPointError(1,0,0.06812799);
   gre->SetPoint(2,-300,4.14748);
   gre->SetPointError(2,0,0.2426312);
   gre->SetPoint(3,-100,-0.88656);
   gre->SetPointError(3,0,0.1993707);
   gre->SetPoint(4,100,-5.44602);
   gre->SetPointError(4,0,0.06783934);
   gre->SetPoint(5,300,-9.87698);
   gre->SetPointError(5,0,0.09245708);
   gre->SetPoint(6,500,-13.94886);
   gre->SetPointError(6,0,0.2781585);
   gre->SetPoint(7,700,-18.14242);
   gre->SetPointError(7,0,0.1779041);
   
   TH1F *Graph_Graph26 = new TH1F("Graph_Graph26","Corr: LT.DVT20 Plane: V Ring: 2",100,-840,840);
   Graph_Graph26->SetMinimum(-21.16337);
   Graph_Graph26->SetMaximum(12.95315);
   Graph_Graph26->SetDirectory(0);
   Graph_Graph26->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph26->SetLineColor(ci);
   Graph_Graph26->GetXaxis()->SetTitle("LT.DVT20, Kick [#murad]");
   Graph_Graph26->GetXaxis()->SetLabelFont(42);
   Graph_Graph26->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph26->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph26->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph26->GetXaxis()->SetTitleFont(42);
   Graph_Graph26->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph26->GetYaxis()->SetLabelFont(42);
   Graph_Graph26->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph26->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph26->GetYaxis()->SetTitleFont(42);
   Graph_Graph26->GetZaxis()->SetLabelFont(42);
   Graph_Graph26->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph26->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph26->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph26);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(1333.036);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-0.02358812);
   linear_fit->SetParError(0,0.0001046665);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-2.68137);
   linear_fit->SetParError(1,0.0397363);
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
   TLegendEntry *entry=leg->AddEntry("Graph0","BI.BPM30","lp");

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
   TText *text = pt->AddText("Corr: LT.DVT20 Plane: V Ring: 2");
   pt->Draw();
   canvas_BI.BPM30_V_2->Modified();
   canvas_BI.BPM30_V_2->cd();
   canvas_BI.BPM30_V_2->SetSelected(canvas_BI.BPM30_V_2);
}
