//
//   @file    AtlasUtils.h         
//   
//
//   @author M.Sutton
// 
//   Copyright (C) 2010 Atlas Collaboration
//
//   $Id: AtlasUtils.h, v0.0   Thu 25 Mar 2010 10:34:20 CET $


#ifndef __ATLASUTILS_H
#define __ATLASUTILS_H

#include "TGraphErrors.h"
#include "TGraphAsymmErrors.h"

void ATLAS_LABEL(Double_t x,Double_t y,Color_t color=1); 

TGraphErrors* myTGraphErrorsDivide(TGraphErrors* g1,TGraphErrors* g2);

TGraphAsymmErrors* myTGraphErrorsDivide(TGraphAsymmErrors* g1,TGraphAsymmErrors* g2);

TGraphAsymmErrors* myTGraphErrorsMultiply(TGraphAsymmErrors* g1,TGraphAsymmErrors* g2);

TGraphAsymmErrors* myMakeBand(TGraphErrors* g0, TGraphErrors* g1,TGraphErrors* g2);

void myAddtoBand(TGraphErrors* g1, TGraphAsymmErrors* g2);

TGraphErrors* TH1TOTGraph(TH1 *h1);

//void myText(Double_t x,Double_t y,Color_t color,const char *text);

//void myBoxText(Double_t x, Double_t y,Double_t boxsize,Int_t mcolor,Float_t alpha, const char *text, Double_t lstyle, Double_t lcolor, Double_t mstyle, bool stat,Double_t tsize=0.03);

void myMarkerText(Double_t x,Double_t y,Int_t color,Int_t mstyle,const char *text,Float_t msize=2., Float_t tsize=0.06); 

TH1F* hotTH1(int color, float msize, int MarkerStyle, int LineStyle, const char* title, const char* x, const char* y, bool sumw2);

//void hotTH1(TH1D *g1, int color = kBlue, float msize = 1, int MarkerStyle = 21, int LineStyle = 1, const char* title = "", const char* x = "", const char* y = "");

//void hotTMultiGraph(TMultiGraph* g1,const char* title, const char* x, const char* y, Double_t xl, Double_t xh, Double_t yl, Double_t yh);

//void hotTGraphErrors(TGraphErrors* g1, int color, int MarkerStyle, int LineStyle);

//void hotTGraphErrors(TGraphAsymmErrors* g1, int color, int MarkerStyle, int LineStyle);

#endif // __ATLASUTILS_H
