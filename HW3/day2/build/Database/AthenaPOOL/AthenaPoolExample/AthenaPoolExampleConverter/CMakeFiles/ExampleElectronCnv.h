// Dear emacs, this is -*- c++ -*-
// Copyright (C) 2002-2017 CERN for the benefit of the ATLAS collaboration
#ifndef AthenaPoolExampleConverter_ExampleElectronCnv_H
#define AthenaPoolExampleConverter_ExampleElectronCnv_H

// Athena include(s):
#include "AthenaPoolCnvSvc/T_AthenaPoolCnv.h"

// EDM include(s):
#include "AthenaPoolExampleData/ExampleElectron.h"

// Declare the converter as a simple typedef:
typedef T_AthenaPoolCnv< xAOD::ExampleElectron > ExampleElectronCnv;

#endif // AthenaPoolExampleConverter_ExampleElectronCnv_H
