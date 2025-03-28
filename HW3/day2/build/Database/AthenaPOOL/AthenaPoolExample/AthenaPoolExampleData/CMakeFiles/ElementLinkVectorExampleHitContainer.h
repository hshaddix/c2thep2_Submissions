// Dear emacs, this is -*- c++ -*-
// Copyright (C) 2002-2017 CERN for the benefit of the ATLAS collaboration
#ifndef ELEMENTLINKVECTORDICT_AthenaPoolExampleData_ExampleHitContainer
#define ELEMENTLINKVECTORDICT_AthenaPoolExampleData_ExampleHitContainer

// System include(s):
#include <vector>

// Include the necessary headers:
#include "AthLinks/DataLink.h"
#include "AthLinks/ElementLink.h"
#include "AthLinks/ElementLinkVector.h"
#include "AthContainers/tools/AuxTypeVectorFactory.h"

namespace {

   // Instantiate the types:
   struct ElementLinkVectorDictAthenaPoolExampleDataExampleHitContainer {

      ElementLinkVector< ExampleHitContainer > m_linkVector;
      SG::ELVRef< ExampleHitContainer > m_sgref;
      std::vector< SG::ELVRef< ExampleHitContainer > > m_sgrefVector;
      std::vector< DataLink< ExampleHitContainer > > m_dataLinkVector;

   }; // struct ElementLinkVectorDictAthenaPoolExampleDataExampleHitContainer

} // private namespace

#endif // ELEMENTLINKVECTORDICT_AthenaPoolExampleData_ExampleHitContainer
