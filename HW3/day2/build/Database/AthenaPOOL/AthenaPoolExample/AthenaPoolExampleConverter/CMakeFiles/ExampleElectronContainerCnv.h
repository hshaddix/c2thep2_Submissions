// Dear emacs, this is -*- c++ -*-
// Copyright (C) 2002-2017 CERN for the benefit of the ATLAS collaboration
#ifndef AthenaPoolExampleConverter_ExampleElectronContainerCnv_H
#define AthenaPoolExampleConverter_ExampleElectronContainerCnv_H

// Athena include(s):
#include "AthenaPoolCnvSvc/T_AthenaPoolCnv.h"

// EDM include(s):
#include "AthenaPoolExampleData/ExampleElectronContainer.h"

// Declare the converter as a simple typedef:
typedef T_AthenaPoolCnv< xAOD::ExampleElectronContainer > ExampleElectronContainerCnv;

#endif // AthenaPoolExampleConverter_ExampleElectronContainerCnv_H
