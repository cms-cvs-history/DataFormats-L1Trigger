#include "DataFormats/L1Trigger/interface/L1EmParticle.h"
#include "DataFormats/L1Trigger/interface/L1JetParticle.h"
#include "DataFormats/L1Trigger/interface/L1MuonParticle.h"
#include "DataFormats/L1Trigger/interface/L1EtMissParticle.h"
#include "DataFormats/L1Trigger/interface/L1ParticleMap.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/RefVector.h"
#include "DataFormats/Common/interface/RefProd.h"

namespace {
  namespace {

     l1extra::L1EmParticleCollection emColl ;
     l1extra::L1JetParticleCollection jetColl ;
     l1extra::L1MuonParticleCollection muonColl ;
     l1extra::L1EtMissParticle etMiss ;
     l1extra::L1ParticleMapCollection mapColl ;

     edm::Wrapper<l1extra::L1EmParticleCollection> w_emColl;
     edm::Wrapper<l1extra::L1JetParticleCollection> w_jetColl;
     edm::Wrapper<l1extra::L1MuonParticleCollection> w_muonColl;
     edm::Wrapper<l1extra::L1EtMissParticle> w_etMiss;
     edm::Wrapper<l1extra::L1ParticleMapCollection> w_mapColl;

     edm::Ref<l1extra::L1EmParticleCollection> refEm ;
     edm::Ref<l1extra::L1JetParticleCollection> refJet ;
     edm::Ref<l1extra::L1MuonParticleCollection> refMuon ;
     edm::RefVector<l1extra::L1EmParticleCollection> refVecEmColl ;
     edm::RefVector<l1extra::L1JetParticleCollection> refVecJetColl ;
     edm::RefVector<l1extra::L1MuonParticleCollection> refVecMuonColl ;
     edm::RefProd<l1extra::L1EtMissParticle> refEtMiss ;

     edm::reftobase::Holder<reco::Candidate, l1extra::L1EmParticleRef> rtbe;
     edm::reftobase::Holder<reco::Candidate, l1extra::L1MuonParticleRef> rtbm;
     edm::reftobase::Holder<reco::Candidate, l1extra::L1JetParticleRef> rtbj;
     edm::reftobase::Holder<reco::Candidate, l1extra::L1EtMissParticleRef> rtbm1;
     edm::reftobase::Holder<reco::Candidate, l1extra::L1EtMissParticleRefProd> rtbm2;

  }
}
