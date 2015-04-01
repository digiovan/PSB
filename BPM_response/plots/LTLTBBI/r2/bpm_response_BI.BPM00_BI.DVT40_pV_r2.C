{
//=========Macro generated from canvas: canvas_BI.BPM00_V_2/
//=========  (Wed Apr  1 22:36:23 2015) by ROOT version5.34/21
   TCanvas *canvas_BI.BPM00_V_2 = new TCanvas("canvas_BI.BPM00_V_2", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_BI.BPM00_V_2->SetHighLightColor(2);
   canvas_BI.BPM00_V_2->Range(-1050,-0.9280463,1050,-0.4448625);
   canvas_BI.BPM00_V_2->SetFillColor(0);
   canvas_BI.BPM00_V_2->SetBorderMode(0);
   canvas_BI.BPM00_V_2->SetBorderSize(2);
   canvas_BI.BPM00_V_2->SetGridx();
   canvas_BI.BPM00_V_2->SetGridy();
   canvas_BI.BPM00_V_2->SetFrameBorderMode(0);
   canvas_BI.BPM00_V_2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: BI.DVT40 Plane: V Ring: 2");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-0.68754);
   gre->SetPointError(0,0,0.02865281);
   gre->SetPoint(1,-500,-0.7711);
   gre->SetPointError(1,0,0.04297343);
   gre->SetPoint(2,-300,-0.56526);
   gre->SetPointError(2,0,0.03592226);
   gre->SetPoint(3,-100,-0.78842);
   gre->SetPointError(3,0,0.01132338);
   gre->SetPoint(4,100,-0.78168);
   gre->SetPointError(4,0,0.06583568);
   gre->SetPoint(5,300,-0.56556);
   gre->SetPointError(5,0,0.04016687);
   gre->SetPoint(6,500,-0.6506);
   gre->SetPointError(6,0,0.08372935);
   gre->SetPoint(7,700,-0.74806);
   gre->SetPointError(7,0,0.02136979);
   
   TH1F *Graph_Graph23 = new TH1F("Graph_Graph23","Corr: BI.DVT40 Plane: V Ring: 2",100,-840,840);
   Graph_Graph23->SetMinimum(-0.8797279);
   Graph_Graph23->SetMaximum(-0.4931809);
   Graph_Graph23->SetDirectory(0);
   Graph_Graph23->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph23->SetLineColor(ci);
   Graph_Graph23->GetXaxis()->SetTitle("BI.DVT40, Kick [#murad]");
   Graph_Graph23->GetXaxis()->SetLabelFont(42);
   Graph_Graph23->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph23->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph23->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph23->GetXaxis()->SetTitleFont(42);
   Graph_Graph23->GetYaxis()->SetTitle("Beam Position [mm]");
   Graph_Graph23->GetYaxis()->SetLabelFont(42);
   Graph_Graph23->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph23->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph23->GetYaxis()->SetTitleFont(42);
   Graph_Graph23->GetZaxis()->SetLabelFont(42);
   Graph_Graph23->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph23->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph23->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph23);
   
   
   TF1 *linear_fit = new TF1("linear_fit","[0]*x+[1]",-700,700);
   linear_fit->SetFillColor(19);
   linear_fit->SetFillStyle(0);
   linear_fit->SetLineColor(2);
   linear_fit->SetLineWidth(2);
   linear_fit->SetChisquare(65.47692);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,-7.88506e-06);
   linear_fit->SetParError(0,2.214581e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,-0.7477016);
   linear_fit->SetParError(1,0.008617565);
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
   TText *text = pt->AddText("Corr: BI.DVT40 Plane: V Ring: 2");
   pt->Draw();
   canvas_BI.BPM00_V_2->Modified();
   canvas_BI.BPM00_V_2->cd();
   canvas_BI.BPM00_V_2->SetSelected(canvas_BI.BPM00_V_2);
}
