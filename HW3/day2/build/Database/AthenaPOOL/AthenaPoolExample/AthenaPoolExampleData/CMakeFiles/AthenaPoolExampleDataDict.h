/*
  Copyright (C) 2002-2017 CERN for the benefit of the ATLAS collaboration
*/

#ifndef ATHENAPOOLEXAMPLEDATA_ATHENAPOOLEXAMPLEDATADICT_H
#define ATHENAPOOLEXAMPLEDATA_ATHENAPOOLEXAMPLEDATADICT_H

/** @file AthenaPoolExampleDataDict.h
 *  @brief This file includes the class definitions for data objects to be build in the dictionary.
 *  @author Peter van Gemmeren <gemmeren@anl.gov>
 *  $Id: AthenaPoolExampleDataDict.h,v 1.12 2008-03-25 21:21:56 gemmeren Exp $
 **/

#include "AthenaPoolExampleData/ExampleHitContainer.h"
#include "AthenaPoolExampleData/ExampleTrackContainer.h"
#include "AthenaPoolExampleData/ExampleElectron.h"
#include "AthenaPoolExampleData/ExampleElectronContainer.h"
#include "AthenaPoolExampleData/ExampleElectronAuxContainer.h"


#endif
// Dear emacs, this is -*- c++ -*-
// Copyright (C) 2002-2017 CERN for the benefit of the ATLAS collaboration
#ifndef DATALINKDICT_AthenaPoolExampleData_ExampleHitContainer
#define DATALINKDICT_AthenaPoolExampleData_ExampleHitContainer

// Include the DataLink header:
#include "AthLinks/DataLink.h"

namespace {

   // Instantiate the type:
   struct DataLinkDictAthenaPoolExampleDataExampleHitContainer {

      DataLink< ExampleHitContainer > dlinkInst;

   }; // struct DataLinkDictAthenaPoolExampleDataExampleHitContainer

} // private namespace

#endif // DATALINKDICT_AthenaPoolExampleData_ExampleHitContainer
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
