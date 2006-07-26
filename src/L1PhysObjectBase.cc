// -*- C++ -*-
//
// Package:     L1Trigger
// Class  :     L1PhysObjectBase
// 
// Implementation:
//     <Notes on implementation>
//
// Original Author:  Werner Sun
//         Created:  Tue Jul 25 15:52:40 EDT 2006
// $Id$
//

// system include files

// user include files
#include "DataFormats/L1Trigger/interface/L1PhysObjectBase.h"

using namespace l1extra ;

//
// constants, enums and typedefs
//

//
// static data member definitions
//

//
// constructors and destructor
//
L1PhysObjectBase::L1PhysObjectBase()
{
}

L1PhysObjectBase::L1PhysObjectBase( const L1Ref& aRef,
				    L1PhysObjectType aType )
   : ref_( aRef ),
     objectType_( aType )
{
}

// L1PhysObjectBase::L1PhysObjectBase(const L1PhysObjectBase& rhs)
// {
//    // do actual copying here;
// }

L1PhysObjectBase::~L1PhysObjectBase()
{
}

//
// assignment operators
//
// const L1PhysObjectBase& L1PhysObjectBase::operator=(const L1PhysObjectBase& rhs)
// {
//   //An exception safe implementation is
//   L1PhysObjectBase temp(rhs);
//   swap(rhs);
//
//   return *this;
// }

//
// member functions
//

//
// const member functions
//

//
// static member functions
//
