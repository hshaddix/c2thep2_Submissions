// Dear emacs, this is -*- c++ -*-
// Copyright (C) 2002-2017 CERN for the benefit of the ATLAS collaboration
#ifndef AthenaPoolExampleConverter_ExampleElectronAuxContainerCnv_H
#define AthenaPoolExampleConverter_ExampleElectronAuxContainerCnv_H

// Athena include(s):
#include "AthenaPoolCnvSvc/T_AthenaPoolCnv.h"

// EDM include(s):
#include "AthenaPoolExampleData/ExampleElectronAuxContainer.h"

// Declare the converter as a simple typedef:
typedef T_AthenaPoolCnv< xAOD::ExampleElectronAuxContainer > ExampleElectronAuxContainerCnv;

#endif // AthenaPoolExampleConverter_ExampleElectronAuxContainerCnv_H
