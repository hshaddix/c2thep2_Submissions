// Dear emacs, this is -*- c++ -*-
// Copyright (C) 2002-2017 CERN for the benefit of the ATLAS collaboration
#ifndef NAVIGABLEDICT_AthenaPoolExampleData_ExampleHitContainer
#define NAVIGABLEDICT_AthenaPoolExampleData_ExampleHitContainer

// Syste include(s):
#include <map>
#include <vector>

// Include the necessary header:
#include "AthLinks/ElementLink.h"
#include "Navigation/Navigable.h"

namespace {

   // Instantiate the types:
   struct NavigableDictAthenaPoolExampleDataExampleHitContainer {

      std::pair< ElementLink< ExampleHitContainer >, double > m_pair;
      std::vector< std::pair< ElementLink< ExampleHitContainer >, double > > m_vector;
      Navigable< ExampleHitContainer > m_navDouble;
      Navigable< ExampleHitContainer, double > m_nav;

   }; // NavigableDictAthenaPoolExampleDataExampleHitContainer

} // private namespace

#endif // NAVIGABLEDICT_AthenaPoolExampleData_ExampleHitContainer
