//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon May 29 01:35:33 2017 by ROOT version 6.06/01
// from TTree otree/GenParticles Basic Info
// found on file: /eos/uscms/store/user/rasharma/LHEinfo.root
//////////////////////////////////////////////////////////

#ifndef Get_Cross_Sec_aQGC_h
#define Get_Cross_Sec_aQGC_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"

class Get_Cross_Sec_aQGC {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           isMuMinus;
   Double_t        LHELeptPt;
   Double_t        LHELeptEta;
   Double_t        LHELeptPhi;
   Double_t        LHELeptM;
   Double_t        LHELeptE;
   Double_t        LHENuPt;
   Double_t        LHENuEta;
   Double_t        LHENuPhi;
   Double_t        LHENuM;
   Double_t        LHENuE;
   Double_t        LHE_DeltaM_Wqrk0_pt;
   Double_t        LHE_DeltaM_Wqrk0_eta;
   Double_t        LHE_DeltaM_Wqrk0_phi;
   Double_t        LHE_DeltaM_Wqrk0_M;
   Double_t        LHE_DeltaM_Wqrk0_E;
   Double_t        LHE_DeltaM_Wqrk0_Mt;
   Double_t        LHE_DeltaM_Wqrk1_pt;
   Double_t        LHE_DeltaM_Wqrk1_eta;
   Double_t        LHE_DeltaM_Wqrk1_phi;
   Double_t        LHE_DeltaM_Wqrk1_M;
   Double_t        LHE_DeltaM_Wqrk1_E;
   Double_t        LHE_DeltaM_Wqrk1_Mt;
   Double_t        LHE_DeltaM_Iqrk0_pt;
   Double_t        LHE_DeltaM_Iqrk0_eta;
   Double_t        LHE_DeltaM_Iqrk0_phi;
   Double_t        LHE_DeltaM_Iqrk0_E;
   Double_t        LHE_DeltaM_Iqrk0_M;
   Double_t        LHE_DeltaM_Iqrk0_Mt;
   Double_t        LHE_DeltaM_Iqrk1_pt;
   Double_t        LHE_DeltaM_Iqrk1_eta;
   Double_t        LHE_DeltaM_Iqrk1_phi;
   Double_t        LHE_DeltaM_Iqrk1_E;
   Double_t        LHE_DeltaM_Iqrk1_M;
   Double_t        LHE_DeltaM_Iqrk1_Mt;
   Double_t        LHE_DeltaM_mWW;
   Double_t        LHE_DeltaM_mtWW;
   Double_t        LHE_DeltaM_mWLep;
   Double_t        LHE_DeltaM_mtWLep;
   Double_t        LHE_DeltaM_mWHad;
   Double_t        LHE_DeltaM_mtWHad;
   Double_t        LHE_DeltaM_costheta1;
   Double_t        LHE_DeltaM_costheta2;
   Double_t        LHE_DeltaM_phi;
   Double_t        LHE_DeltaM_costhetastar;
   Double_t        LHE_DeltaM_phi1;
   Double_t        LHE_DeltaM_dEtajj;
   Double_t        LHE_DeltaM_dPhijj;
   Double_t        LHE_DeltaM_mjj;
   Double_t        LHE_DeltaM_VBSCentrality;
   Double_t        LHE_MothInfo_Wqrk0_pt;
   Double_t        LHE_MothInfo_Wqrk0_eta;
   Double_t        LHE_MothInfo_Wqrk0_phi;
   Double_t        LHE_MothInfo_Wqrk0_M;
   Double_t        LHE_MothInfo_Wqrk0_E;
   Double_t        LHE_MothInfo_Wqrk0_Mt;
   Double_t        LHE_MothInfo_Wqrk1_pt;
   Double_t        LHE_MothInfo_Wqrk1_eta;
   Double_t        LHE_MothInfo_Wqrk1_phi;
   Double_t        LHE_MothInfo_Wqrk1_M;
   Double_t        LHE_MothInfo_Wqrk1_E;
   Double_t        LHE_MothInfo_Wqrk1_Mt;
   Double_t        LHE_MothInfo_Iqrk0_pt;
   Double_t        LHE_MothInfo_Iqrk0_eta;
   Double_t        LHE_MothInfo_Iqrk0_phi;
   Double_t        LHE_MothInfo_Iqrk0_E;
   Double_t        LHE_MothInfo_Iqrk0_M;
   Double_t        LHE_MothInfo_Iqrk0_Mt;
   Double_t        LHE_MothInfo_Iqrk1_pt;
   Double_t        LHE_MothInfo_Iqrk1_eta;
   Double_t        LHE_MothInfo_Iqrk1_phi;
   Double_t        LHE_MothInfo_Iqrk1_E;
   Double_t        LHE_MothInfo_Iqrk1_M;
   Double_t        LHE_MothInfo_Iqrk1_Mt;
   Double_t        LHE_MothInfo_mWW;
   Double_t        LHE_MothInfo_mtWW;
   Double_t        LHE_MothInfo_mWLep;
   Double_t        LHE_MothInfo_mtWLep;
   Double_t        LHE_MothInfo_mWHad;
   Double_t        LHE_MothInfo_mtWHad;
   Double_t        LHE_MothInfo_costheta1;
   Double_t        LHE_MothInfo_costheta2;
   Double_t        LHE_MothInfo_phi;
   Double_t        LHE_MothInfo_costhetastar;
   Double_t        LHE_MothInfo_phi1;
   Double_t        LHE_MothInfo_dEtajj;
   Double_t        LHE_MothInfo_dPhijj;
   Double_t        LHE_MothInfo_mjj;
   Double_t        LHE_MothInfo_VBSCentrality;
   vector<string>  *LHEWeightIDs;
   vector<double>  *LHEWeights;
   Int_t           nVBFJet;

   // List of branches
   TBranch        *b_isMuMinus;   //!
   TBranch        *b_LHELeptPt;   //!
   TBranch        *b_LHELeptEta;   //!
   TBranch        *b_LHELeptPhi;   //!
   TBranch        *b_LHELeptM;   //!
   TBranch        *b_LHELeptE;   //!
   TBranch        *b_LHENuPt;   //!
   TBranch        *b_LHENuEta;   //!
   TBranch        *b_LHENuPhi;   //!
   TBranch        *b_LHENuM;   //!
   TBranch        *b_LHENuE;   //!
   TBranch        *b_LHE_DeltaM_Wqrk0_pt;   //!
   TBranch        *b_LHE_DeltaM_Wqrk0_eta;   //!
   TBranch        *b_LHE_DeltaM_Wqrk0_phi;   //!
   TBranch        *b_LHE_DeltaM_Wqrk0_M;   //!
   TBranch        *b_LHE_DeltaM_Wqrk0_E;   //!
   TBranch        *b_LHE_DeltaM_Wqrk0_Mt;   //!
   TBranch        *b_LHE_DeltaM_Wqrk1_pt;   //!
   TBranch        *b_LHE_DeltaM_Wqrk1_eta;   //!
   TBranch        *b_LHE_DeltaM_Wqrk1_phi;   //!
   TBranch        *b_LHE_DeltaM_Wqrk1_M;   //!
   TBranch        *b_LHE_DeltaM_Wqrk1_E;   //!
   TBranch        *b_LHE_DeltaM_Wqrk1_Mt;   //!
   TBranch        *b_LHE_DeltaM_Iqrk0_pt;   //!
   TBranch        *b_LHE_DeltaM_Iqrk0_eta;   //!
   TBranch        *b_LHE_DeltaM_Iqrk0_phi;   //!
   TBranch        *b_LHE_DeltaM_Iqrk0_E;   //!
   TBranch        *b_LHE_DeltaM_Iqrk0_M;   //!
   TBranch        *b_LHE_DeltaM_Iqrk0_Mt;   //!
   TBranch        *b_LHE_DeltaM_Iqrk1_pt;   //!
   TBranch        *b_LHE_DeltaM_Iqrk1_eta;   //!
   TBranch        *b_LHE_DeltaM_Iqrk1_phi;   //!
   TBranch        *b_LHE_DeltaM_Iqrk1_E;   //!
   TBranch        *b_LHE_DeltaM_Iqrk1_M;   //!
   TBranch        *b_LHE_DeltaM_Iqrk1_Mt;   //!
   TBranch        *b_LHE_DeltaM_mWW;   //!
   TBranch        *b_LHE_DeltaM_mtWW;   //!
   TBranch        *b_LHE_DeltaM_mWLep;   //!
   TBranch        *b_LHE_DeltaM_mtWLep;   //!
   TBranch        *b_LHE_DeltaM_mWHad;   //!
   TBranch        *b_LHE_DeltaM_mtWHad;   //!
   TBranch        *b_LHE_DeltaM_costheta1;   //!
   TBranch        *b_LHE_DeltaM_costheta2;   //!
   TBranch        *b_LHE_DeltaM_phi;   //!
   TBranch        *b_LHE_DeltaM_costhetastar;   //!
   TBranch        *b_LHE_DeltaM_phi1;   //!
   TBranch        *b_LHE_DeltaM_dEtajj;   //!
   TBranch        *b_LHE_DeltaM_dPhijj;   //!
   TBranch        *b_LHE_DeltaM_mjj;   //!
   TBranch        *b_LHE_DeltaM_VBSCentrality;   //!
   TBranch        *b_LHE_MothInfo_Wqrk0_pt;   //!
   TBranch        *b_LHE_MothInfo_Wqrk0_eta;   //!
   TBranch        *b_LHE_MothInfo_Wqrk0_phi;   //!
   TBranch        *b_LHE_MothInfo_Wqrk0_M;   //!
   TBranch        *b_LHE_MothInfo_Wqrk0_E;   //!
   TBranch        *b_LHE_MothInfo_Wqrk0_Mt;   //!
   TBranch        *b_LHE_MothInfo_Wqrk1_pt;   //!
   TBranch        *b_LHE_MothInfo_Wqrk1_eta;   //!
   TBranch        *b_LHE_MothInfo_Wqrk1_phi;   //!
   TBranch        *b_LHE_MothInfo_Wqrk1_M;   //!
   TBranch        *b_LHE_MothInfo_Wqrk1_E;   //!
   TBranch        *b_LHE_MothInfo_Wqrk1_Mt;   //!
   TBranch        *b_LHE_MothInfo_Iqrk0_pt;   //!
   TBranch        *b_LHE_MothInfo_Iqrk0_eta;   //!
   TBranch        *b_LHE_MothInfo_Iqrk0_phi;   //!
   TBranch        *b_LHE_MothInfo_Iqrk0_E;   //!
   TBranch        *b_LHE_MothInfo_Iqrk0_M;   //!
   TBranch        *b_LHE_MothInfo_Iqrk0_Mt;   //!
   TBranch        *b_LHE_MothInfo_Iqrk1_pt;   //!
   TBranch        *b_LHE_MothInfo_Iqrk1_eta;   //!
   TBranch        *b_LHE_MothInfo_Iqrk1_phi;   //!
   TBranch        *b_LHE_MothInfo_Iqrk1_E;   //!
   TBranch        *b_LHE_MothInfo_Iqrk1_M;   //!
   TBranch        *b_LHE_MothInfo_Iqrk1_Mt;   //!
   TBranch        *b_LHE_MothInfo_mWW;   //!
   TBranch        *b_LHE_MothInfo_mtWW;   //!
   TBranch        *b_LHE_MothInfo_mWLep;   //!
   TBranch        *b_LHE_MothInfo_mtWLep;   //!
   TBranch        *b_LHE_MothInfo_mWHad;   //!
   TBranch        *b_LHE_MothInfo_mtWHad;   //!
   TBranch        *b_LHE_MothInfo_costheta1;   //!
   TBranch        *b_LHE_MothInfo_costheta2;   //!
   TBranch        *b_LHE_MothInfo_phi;   //!
   TBranch        *b_LHE_MothInfo_costhetastar;   //!
   TBranch        *b_LHE_MothInfo_phi1;   //!
   TBranch        *b_LHE_MothInfo_dEtajj;   //!
   TBranch        *b_LHE_MothInfo_dPhijj;   //!
   TBranch        *b_LHE_MothInfo_mjj;   //!
   TBranch        *b_LHE_MothInfo_VBSCentrality;   //!
   TBranch        *b_LHEWeightIDs;   //!
   TBranch        *b_LHEWeights;   //!
   TBranch        *b_nVBFJet;   //!

   Get_Cross_Sec_aQGC(TTree *tree=0);
   virtual ~Get_Cross_Sec_aQGC();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(std::string outFileName, float Total_Cross_Section);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Get_Cross_Sec_aQGC_cxx
Get_Cross_Sec_aQGC::Get_Cross_Sec_aQGC(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/eos/uscms/store/user/rasharma/LHEinfo.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/eos/uscms/store/user/rasharma/LHEinfo.root");
      }
      f->GetObject("otree",tree);

   }
   Init(tree);
}

Get_Cross_Sec_aQGC::~Get_Cross_Sec_aQGC()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Get_Cross_Sec_aQGC::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Get_Cross_Sec_aQGC::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Get_Cross_Sec_aQGC::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   LHEWeightIDs = 0;
   LHEWeights = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("isMuMinus", &isMuMinus, &b_isMuMinus);
   fChain->SetBranchAddress("LHELeptPt", &LHELeptPt, &b_LHELeptPt);
   fChain->SetBranchAddress("LHELeptEta", &LHELeptEta, &b_LHELeptEta);
   fChain->SetBranchAddress("LHELeptPhi", &LHELeptPhi, &b_LHELeptPhi);
   fChain->SetBranchAddress("LHELeptM", &LHELeptM, &b_LHELeptM);
   fChain->SetBranchAddress("LHELeptE", &LHELeptE, &b_LHELeptE);
   fChain->SetBranchAddress("LHENuPt", &LHENuPt, &b_LHENuPt);
   fChain->SetBranchAddress("LHENuEta", &LHENuEta, &b_LHENuEta);
   fChain->SetBranchAddress("LHENuPhi", &LHENuPhi, &b_LHENuPhi);
   fChain->SetBranchAddress("LHENuM", &LHENuM, &b_LHENuM);
   fChain->SetBranchAddress("LHENuE", &LHENuE, &b_LHENuE);
   fChain->SetBranchAddress("LHE_DeltaM_Wqrk0_pt", &LHE_DeltaM_Wqrk0_pt, &b_LHE_DeltaM_Wqrk0_pt);
   fChain->SetBranchAddress("LHE_DeltaM_Wqrk0_eta", &LHE_DeltaM_Wqrk0_eta, &b_LHE_DeltaM_Wqrk0_eta);
   fChain->SetBranchAddress("LHE_DeltaM_Wqrk0_phi", &LHE_DeltaM_Wqrk0_phi, &b_LHE_DeltaM_Wqrk0_phi);
   fChain->SetBranchAddress("LHE_DeltaM_Wqrk0_M", &LHE_DeltaM_Wqrk0_M, &b_LHE_DeltaM_Wqrk0_M);
   fChain->SetBranchAddress("LHE_DeltaM_Wqrk0_E", &LHE_DeltaM_Wqrk0_E, &b_LHE_DeltaM_Wqrk0_E);
   fChain->SetBranchAddress("LHE_DeltaM_Wqrk0_Mt", &LHE_DeltaM_Wqrk0_Mt, &b_LHE_DeltaM_Wqrk0_Mt);
   fChain->SetBranchAddress("LHE_DeltaM_Wqrk1_pt", &LHE_DeltaM_Wqrk1_pt, &b_LHE_DeltaM_Wqrk1_pt);
   fChain->SetBranchAddress("LHE_DeltaM_Wqrk1_eta", &LHE_DeltaM_Wqrk1_eta, &b_LHE_DeltaM_Wqrk1_eta);
   fChain->SetBranchAddress("LHE_DeltaM_Wqrk1_phi", &LHE_DeltaM_Wqrk1_phi, &b_LHE_DeltaM_Wqrk1_phi);
   fChain->SetBranchAddress("LHE_DeltaM_Wqrk1_M", &LHE_DeltaM_Wqrk1_M, &b_LHE_DeltaM_Wqrk1_M);
   fChain->SetBranchAddress("LHE_DeltaM_Wqrk1_E", &LHE_DeltaM_Wqrk1_E, &b_LHE_DeltaM_Wqrk1_E);
   fChain->SetBranchAddress("LHE_DeltaM_Wqrk1_Mt", &LHE_DeltaM_Wqrk1_Mt, &b_LHE_DeltaM_Wqrk1_Mt);
   fChain->SetBranchAddress("LHE_DeltaM_Iqrk0_pt", &LHE_DeltaM_Iqrk0_pt, &b_LHE_DeltaM_Iqrk0_pt);
   fChain->SetBranchAddress("LHE_DeltaM_Iqrk0_eta", &LHE_DeltaM_Iqrk0_eta, &b_LHE_DeltaM_Iqrk0_eta);
   fChain->SetBranchAddress("LHE_DeltaM_Iqrk0_phi", &LHE_DeltaM_Iqrk0_phi, &b_LHE_DeltaM_Iqrk0_phi);
   fChain->SetBranchAddress("LHE_DeltaM_Iqrk0_E", &LHE_DeltaM_Iqrk0_E, &b_LHE_DeltaM_Iqrk0_E);
   fChain->SetBranchAddress("LHE_DeltaM_Iqrk0_M", &LHE_DeltaM_Iqrk0_M, &b_LHE_DeltaM_Iqrk0_M);
   fChain->SetBranchAddress("LHE_DeltaM_Iqrk0_Mt", &LHE_DeltaM_Iqrk0_Mt, &b_LHE_DeltaM_Iqrk0_Mt);
   fChain->SetBranchAddress("LHE_DeltaM_Iqrk1_pt", &LHE_DeltaM_Iqrk1_pt, &b_LHE_DeltaM_Iqrk1_pt);
   fChain->SetBranchAddress("LHE_DeltaM_Iqrk1_eta", &LHE_DeltaM_Iqrk1_eta, &b_LHE_DeltaM_Iqrk1_eta);
   fChain->SetBranchAddress("LHE_DeltaM_Iqrk1_phi", &LHE_DeltaM_Iqrk1_phi, &b_LHE_DeltaM_Iqrk1_phi);
   fChain->SetBranchAddress("LHE_DeltaM_Iqrk1_E", &LHE_DeltaM_Iqrk1_E, &b_LHE_DeltaM_Iqrk1_E);
   fChain->SetBranchAddress("LHE_DeltaM_Iqrk1_M", &LHE_DeltaM_Iqrk1_M, &b_LHE_DeltaM_Iqrk1_M);
   fChain->SetBranchAddress("LHE_DeltaM_Iqrk1_Mt", &LHE_DeltaM_Iqrk1_Mt, &b_LHE_DeltaM_Iqrk1_Mt);
   fChain->SetBranchAddress("LHE_DeltaM_mWW", &LHE_DeltaM_mWW, &b_LHE_DeltaM_mWW);
   fChain->SetBranchAddress("LHE_DeltaM_mtWW", &LHE_DeltaM_mtWW, &b_LHE_DeltaM_mtWW);
   fChain->SetBranchAddress("LHE_DeltaM_mWLep", &LHE_DeltaM_mWLep, &b_LHE_DeltaM_mWLep);
   fChain->SetBranchAddress("LHE_DeltaM_mtWLep", &LHE_DeltaM_mtWLep, &b_LHE_DeltaM_mtWLep);
   fChain->SetBranchAddress("LHE_DeltaM_mWHad", &LHE_DeltaM_mWHad, &b_LHE_DeltaM_mWHad);
   fChain->SetBranchAddress("LHE_DeltaM_mtWHad", &LHE_DeltaM_mtWHad, &b_LHE_DeltaM_mtWHad);
   fChain->SetBranchAddress("LHE_DeltaM_costheta1", &LHE_DeltaM_costheta1, &b_LHE_DeltaM_costheta1);
   fChain->SetBranchAddress("LHE_DeltaM_costheta2", &LHE_DeltaM_costheta2, &b_LHE_DeltaM_costheta2);
   fChain->SetBranchAddress("LHE_DeltaM_phi", &LHE_DeltaM_phi, &b_LHE_DeltaM_phi);
   fChain->SetBranchAddress("LHE_DeltaM_costhetastar", &LHE_DeltaM_costhetastar, &b_LHE_DeltaM_costhetastar);
   fChain->SetBranchAddress("LHE_DeltaM_phi1", &LHE_DeltaM_phi1, &b_LHE_DeltaM_phi1);
   fChain->SetBranchAddress("LHE_DeltaM_dEtajj", &LHE_DeltaM_dEtajj, &b_LHE_DeltaM_dEtajj);
   fChain->SetBranchAddress("LHE_DeltaM_dPhijj", &LHE_DeltaM_dPhijj, &b_LHE_DeltaM_dPhijj);
   fChain->SetBranchAddress("LHE_DeltaM_mjj", &LHE_DeltaM_mjj, &b_LHE_DeltaM_mjj);
   fChain->SetBranchAddress("LHE_DeltaM_VBSCentrality", &LHE_DeltaM_VBSCentrality, &b_LHE_DeltaM_VBSCentrality);
   fChain->SetBranchAddress("LHE_MothInfo_Wqrk0_pt", &LHE_MothInfo_Wqrk0_pt, &b_LHE_MothInfo_Wqrk0_pt);
   fChain->SetBranchAddress("LHE_MothInfo_Wqrk0_eta", &LHE_MothInfo_Wqrk0_eta, &b_LHE_MothInfo_Wqrk0_eta);
   fChain->SetBranchAddress("LHE_MothInfo_Wqrk0_phi", &LHE_MothInfo_Wqrk0_phi, &b_LHE_MothInfo_Wqrk0_phi);
   fChain->SetBranchAddress("LHE_MothInfo_Wqrk0_M", &LHE_MothInfo_Wqrk0_M, &b_LHE_MothInfo_Wqrk0_M);
   fChain->SetBranchAddress("LHE_MothInfo_Wqrk0_E", &LHE_MothInfo_Wqrk0_E, &b_LHE_MothInfo_Wqrk0_E);
   fChain->SetBranchAddress("LHE_MothInfo_Wqrk0_Mt", &LHE_MothInfo_Wqrk0_Mt, &b_LHE_MothInfo_Wqrk0_Mt);
   fChain->SetBranchAddress("LHE_MothInfo_Wqrk1_pt", &LHE_MothInfo_Wqrk1_pt, &b_LHE_MothInfo_Wqrk1_pt);
   fChain->SetBranchAddress("LHE_MothInfo_Wqrk1_eta", &LHE_MothInfo_Wqrk1_eta, &b_LHE_MothInfo_Wqrk1_eta);
   fChain->SetBranchAddress("LHE_MothInfo_Wqrk1_phi", &LHE_MothInfo_Wqrk1_phi, &b_LHE_MothInfo_Wqrk1_phi);
   fChain->SetBranchAddress("LHE_MothInfo_Wqrk1_M", &LHE_MothInfo_Wqrk1_M, &b_LHE_MothInfo_Wqrk1_M);
   fChain->SetBranchAddress("LHE_MothInfo_Wqrk1_E", &LHE_MothInfo_Wqrk1_E, &b_LHE_MothInfo_Wqrk1_E);
   fChain->SetBranchAddress("LHE_MothInfo_Wqrk1_Mt", &LHE_MothInfo_Wqrk1_Mt, &b_LHE_MothInfo_Wqrk1_Mt);
   fChain->SetBranchAddress("LHE_MothInfo_Iqrk0_pt", &LHE_MothInfo_Iqrk0_pt, &b_LHE_MothInfo_Iqrk0_pt);
   fChain->SetBranchAddress("LHE_MothInfo_Iqrk0_eta", &LHE_MothInfo_Iqrk0_eta, &b_LHE_MothInfo_Iqrk0_eta);
   fChain->SetBranchAddress("LHE_MothInfo_Iqrk0_phi", &LHE_MothInfo_Iqrk0_phi, &b_LHE_MothInfo_Iqrk0_phi);
   fChain->SetBranchAddress("LHE_MothInfo_Iqrk0_E", &LHE_MothInfo_Iqrk0_E, &b_LHE_MothInfo_Iqrk0_E);
   fChain->SetBranchAddress("LHE_MothInfo_Iqrk0_M", &LHE_MothInfo_Iqrk0_M, &b_LHE_MothInfo_Iqrk0_M);
   fChain->SetBranchAddress("LHE_MothInfo_Iqrk0_Mt", &LHE_MothInfo_Iqrk0_Mt, &b_LHE_MothInfo_Iqrk0_Mt);
   fChain->SetBranchAddress("LHE_MothInfo_Iqrk1_pt", &LHE_MothInfo_Iqrk1_pt, &b_LHE_MothInfo_Iqrk1_pt);
   fChain->SetBranchAddress("LHE_MothInfo_Iqrk1_eta", &LHE_MothInfo_Iqrk1_eta, &b_LHE_MothInfo_Iqrk1_eta);
   fChain->SetBranchAddress("LHE_MothInfo_Iqrk1_phi", &LHE_MothInfo_Iqrk1_phi, &b_LHE_MothInfo_Iqrk1_phi);
   fChain->SetBranchAddress("LHE_MothInfo_Iqrk1_E", &LHE_MothInfo_Iqrk1_E, &b_LHE_MothInfo_Iqrk1_E);
   fChain->SetBranchAddress("LHE_MothInfo_Iqrk1_M", &LHE_MothInfo_Iqrk1_M, &b_LHE_MothInfo_Iqrk1_M);
   fChain->SetBranchAddress("LHE_MothInfo_Iqrk1_Mt", &LHE_MothInfo_Iqrk1_Mt, &b_LHE_MothInfo_Iqrk1_Mt);
   fChain->SetBranchAddress("LHE_MothInfo_mWW", &LHE_MothInfo_mWW, &b_LHE_MothInfo_mWW);
   fChain->SetBranchAddress("LHE_MothInfo_mtWW", &LHE_MothInfo_mtWW, &b_LHE_MothInfo_mtWW);
   fChain->SetBranchAddress("LHE_MothInfo_mWLep", &LHE_MothInfo_mWLep, &b_LHE_MothInfo_mWLep);
   fChain->SetBranchAddress("LHE_MothInfo_mtWLep", &LHE_MothInfo_mtWLep, &b_LHE_MothInfo_mtWLep);
   fChain->SetBranchAddress("LHE_MothInfo_mWHad", &LHE_MothInfo_mWHad, &b_LHE_MothInfo_mWHad);
   fChain->SetBranchAddress("LHE_MothInfo_mtWHad", &LHE_MothInfo_mtWHad, &b_LHE_MothInfo_mtWHad);
   fChain->SetBranchAddress("LHE_MothInfo_costheta1", &LHE_MothInfo_costheta1, &b_LHE_MothInfo_costheta1);
   fChain->SetBranchAddress("LHE_MothInfo_costheta2", &LHE_MothInfo_costheta2, &b_LHE_MothInfo_costheta2);
   fChain->SetBranchAddress("LHE_MothInfo_phi", &LHE_MothInfo_phi, &b_LHE_MothInfo_phi);
   fChain->SetBranchAddress("LHE_MothInfo_costhetastar", &LHE_MothInfo_costhetastar, &b_LHE_MothInfo_costhetastar);
   fChain->SetBranchAddress("LHE_MothInfo_phi1", &LHE_MothInfo_phi1, &b_LHE_MothInfo_phi1);
   fChain->SetBranchAddress("LHE_MothInfo_dEtajj", &LHE_MothInfo_dEtajj, &b_LHE_MothInfo_dEtajj);
   fChain->SetBranchAddress("LHE_MothInfo_dPhijj", &LHE_MothInfo_dPhijj, &b_LHE_MothInfo_dPhijj);
   fChain->SetBranchAddress("LHE_MothInfo_mjj", &LHE_MothInfo_mjj, &b_LHE_MothInfo_mjj);
   fChain->SetBranchAddress("LHE_MothInfo_VBSCentrality", &LHE_MothInfo_VBSCentrality, &b_LHE_MothInfo_VBSCentrality);
   fChain->SetBranchAddress("LHEWeightIDs", &LHEWeightIDs, &b_LHEWeightIDs);
   fChain->SetBranchAddress("LHEWeights", &LHEWeights, &b_LHEWeights);
   fChain->SetBranchAddress("nVBFJet", &nVBFJet, &b_nVBFJet);
   Notify();
}

Bool_t Get_Cross_Sec_aQGC::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Get_Cross_Sec_aQGC::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Get_Cross_Sec_aQGC::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Get_Cross_Sec_aQGC_cxx
