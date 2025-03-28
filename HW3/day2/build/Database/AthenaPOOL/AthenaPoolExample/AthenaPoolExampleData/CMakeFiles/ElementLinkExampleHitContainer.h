// Dear emacs, this is -*- c++ -*-
// Copyright (C) 2002-2017 CERN for the benefit of the ATLAS collaboration
#ifndef ELEMENTLINKDICT_AthenaPoolExampleData_ExampleHitContainer
#define ELEMENTLINKDICT_AthenaPoolExampleData_ExampleHitContainer

// Include the necessary headers:
#include "AthLinks/ElementLink.h"
#include "AthLinks/ElementLinkVector.h"
#include "AthContainers/tools/AuxTypeVectorFactory.h"

namespace {

   // Instantiate the type:
   struct ElementLinkDictAthenaPoolExampleDataExampleHitContainer {

      ElementLink< ExampleHitContainer > m_link;
      SG::AuxTypeVectorFactory< ElementLink< ExampleHitContainer > > m_factory;

   }; // struct ElementLinkDictAthenaPoolExampleDataExampleHitContainer

} // private namespace

#endif // ELEMENTLINKDICT_AthenaPoolExampleData_ExampleHitContainer
