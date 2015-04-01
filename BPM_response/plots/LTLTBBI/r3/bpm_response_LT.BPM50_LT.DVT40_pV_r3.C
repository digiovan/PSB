{
//=========Macro generated from canvas: canvas_LT.BPM50_V_3/
//=========  (Wed Apr  1 22:34:49 2015) by ROOT version5.34/21
   TCanvas *canvas_LT.BPM50_V_3 = new TCanvas("canvas_LT.BPM50_V_3", "",0,0,1100,850);
   gStyle->SetOptStat(0);
   canvas_LT.BPM50_V_3->SetHighLightColor(2);
   canvas_LT.BPM50_V_3->Range(-1050,-17.44625,1050,17.81492);
   canvas_LT.BPM50_V_3->SetFillColor(0);
   canvas_LT.BPM50_V_3->SetBorderMode(0);
   canvas_LT.BPM50_V_3->SetBorderSize(2);
   canvas_LT.BPM50_V_3->SetGridx();
   canvas_LT.BPM50_V_3->SetGridy();
   canvas_LT.BPM50_V_3->SetFrameBorderMode(0);
   canvas_LT.BPM50_V_3->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Corr: LT.DVT40 Plane: V Ring: 3");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-700,-11.54888);
   gre->SetPointError(0,0,0.02050693);
   gre->SetPoint(1,-500,-8.18334);
   gre->SetPointError(1,0,0.006764896);
   gre->SetPoint(2,-300,-4.71744);
   gre->SetPointError(2,0,0.01430038);
   gre->SetPoint(3,-100,-1.33222);
   gre->SetPointError(3,0,0.01380203);
   gre->SetPoint(4,100,1.72826);
   gre->SetPointError(4,0,0.01336388);
   gre->SetPoint(5,300,4.8508);
   gre->SetPointError(5,0,0.02846459);
   gre->SetPoint(6,500,8.30436);
   gre->SetPointError(6,0,0.0166734);
   gre->SetPoint(7,700,11.9025);
   gre->SetPointError(7,0,0.03555737);
   
   TH1F *Graph_Graph33 = new TH1F("Graph_Graph33","Corr: LT.DVT40 Plane: V Ring: 3",100,-840,840);
   Graph_Graph33->SetMinimum(-13.92013);
   Graph_Graph33->SetMaximum(14.2888);
   Graph_Graph33->SetDirectory(0);
   Graph_Graph33->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph33->SetLineColor(ci);
   Graph_Graph33->GetXaxis()->SetTitle("LT.DVT40, Kick [#murad]");
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
   linear_fit->SetChisquare(469.4324);
   linear_fit->SetNDF(6);
   linear_fit->GetXaxis()->SetLabelFont(42);
   linear_fit->GetXaxis()->SetLabelSize(0.035);
   linear_fit->GetXaxis()->SetTitleSize(0.035);
   linear_fit->GetXaxis()->SetTitleFont(42);
   linear_fit->GetYaxis()->SetLabelFont(42);
   linear_fit->GetYaxis()->SetLabelSize(0.035);
   linear_fit->GetYaxis()->SetTitleSize(0.035);
   linear_fit->GetYaxis()->SetTitleFont(42);
   linear_fit->SetParameter(0,0.01655451);
   linear_fit->SetParError(0,1.316038e-05);
   linear_fit->SetParLimits(0,0,0);
   linear_fit->SetParameter(1,0.1243839);
   linear_fit->SetParError(1,0.005707388);
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
   
   TPaveText *pt = new TPaveText(0.1989416,0.9336861,0.8010584,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Corr: LT.DVT40 Plane: V Ring: 3");
   pt->Draw();
   canvas_LT.BPM50_V_3->Modified();
   canvas_LT.BPM50_V_3->cd();
   canvas_LT.BPM50_V_3->SetSelected(canvas_LT.BPM50_V_3);
}
