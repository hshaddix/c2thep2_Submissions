// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME AthenaPoolExampleDataDictReflexDict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "/home/shadhm/c2thep2_Submissions/HW3/day2/build/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleData/CMakeFiles/AthenaPoolExampleDataDict.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *pairlEElementLinklEExampleHitContainergRcOdoublegR_Dictionary();
   static void pairlEElementLinklEExampleHitContainergRcOdoublegR_TClassManip(TClass*);
   static void *new_pairlEElementLinklEExampleHitContainergRcOdoublegR(void *p = nullptr);
   static void *newArray_pairlEElementLinklEExampleHitContainergRcOdoublegR(Long_t size, void *p);
   static void delete_pairlEElementLinklEExampleHitContainergRcOdoublegR(void *p);
   static void deleteArray_pairlEElementLinklEExampleHitContainergRcOdoublegR(void *p);
   static void destruct_pairlEElementLinklEExampleHitContainergRcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<ElementLink<ExampleHitContainer>,double>*)
   {
      pair<ElementLink<ExampleHitContainer>,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<ElementLink<ExampleHitContainer>,double>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<ElementLink<ExampleHitContainer>,double>", "AthLinks/ElementLink.h", 833,
                  typeid(pair<ElementLink<ExampleHitContainer>,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEElementLinklEExampleHitContainergRcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(pair<ElementLink<ExampleHitContainer>,double>) );
      instance.SetNew(&new_pairlEElementLinklEExampleHitContainergRcOdoublegR);
      instance.SetNewArray(&newArray_pairlEElementLinklEExampleHitContainergRcOdoublegR);
      instance.SetDelete(&delete_pairlEElementLinklEExampleHitContainergRcOdoublegR);
      instance.SetDeleteArray(&deleteArray_pairlEElementLinklEExampleHitContainergRcOdoublegR);
      instance.SetDestructor(&destruct_pairlEElementLinklEExampleHitContainergRcOdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("pair<ElementLink<ExampleHitContainer>,double>","std::pair<ElementLink<ExampleHitContainer>, double>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const pair<ElementLink<ExampleHitContainer>,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEElementLinklEExampleHitContainergRcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const pair<ElementLink<ExampleHitContainer>,double>*>(nullptr))->GetClass();
      pairlEElementLinklEExampleHitContainergRcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEElementLinklEExampleHitContainergRcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *DataLinklEExampleHitContainergR_Dictionary();
   static void DataLinklEExampleHitContainergR_TClassManip(TClass*);
   static void *new_DataLinklEExampleHitContainergR(void *p = nullptr);
   static void *newArray_DataLinklEExampleHitContainergR(Long_t size, void *p);
   static void delete_DataLinklEExampleHitContainergR(void *p);
   static void deleteArray_DataLinklEExampleHitContainergR(void *p);
   static void destruct_DataLinklEExampleHitContainergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DataLink<ExampleHitContainer>*)
   {
      ::DataLink<ExampleHitContainer> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DataLink<ExampleHitContainer>));
      static ::ROOT::TGenericClassInfo 
         instance("DataLink<ExampleHitContainer>", "AthLinks/DataLink.h", 91,
                  typeid(::DataLink<ExampleHitContainer>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DataLinklEExampleHitContainergR_Dictionary, isa_proxy, 4,
                  sizeof(::DataLink<ExampleHitContainer>) );
      instance.SetNew(&new_DataLinklEExampleHitContainergR);
      instance.SetNewArray(&newArray_DataLinklEExampleHitContainergR);
      instance.SetDelete(&delete_DataLinklEExampleHitContainergR);
      instance.SetDeleteArray(&deleteArray_DataLinklEExampleHitContainergR);
      instance.SetDestructor(&destruct_DataLinklEExampleHitContainergR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DataLink<ExampleHitContainer>*)
   {
      return GenerateInitInstanceLocal(static_cast<::DataLink<ExampleHitContainer>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::DataLink<ExampleHitContainer>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DataLinklEExampleHitContainergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::DataLink<ExampleHitContainer>*>(nullptr))->GetClass();
      DataLinklEExampleHitContainergR_TClassManip(theClass);
   return theClass;
   }

   static void DataLinklEExampleHitContainergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *SGcLcLAuxTypeVectorFactoryImpllEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR_Dictionary();
   static void SGcLcLAuxTypeVectorFactoryImpllEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR_TClassManip(TClass*);
   static void *new_SGcLcLAuxTypeVectorFactoryImpllEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR(void *p = nullptr);
   static void *newArray_SGcLcLAuxTypeVectorFactoryImpllEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR(Long_t size, void *p);
   static void delete_SGcLcLAuxTypeVectorFactoryImpllEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR(void *p);
   static void deleteArray_SGcLcLAuxTypeVectorFactoryImpllEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR(void *p);
   static void destruct_SGcLcLAuxTypeVectorFactoryImpllEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >*)
   {
      ::SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >));
      static ::ROOT::TGenericClassInfo 
         instance("SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >", "AthContainers/tools/AuxTypeVectorFactory.h", 38,
                  typeid(::SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &SGcLcLAuxTypeVectorFactoryImpllEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >) );
      instance.SetNew(&new_SGcLcLAuxTypeVectorFactoryImpllEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR);
      instance.SetNewArray(&newArray_SGcLcLAuxTypeVectorFactoryImpllEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR);
      instance.SetDelete(&delete_SGcLcLAuxTypeVectorFactoryImpllEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_SGcLcLAuxTypeVectorFactoryImpllEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR);
      instance.SetDestructor(&destruct_SGcLcLAuxTypeVectorFactoryImpllEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >","SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer> >"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >","SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>, std::allocator<ElementLink<ExampleHitContainer> > >"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >*)
   {
      return GenerateInitInstanceLocal(static_cast<::SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *SGcLcLAuxTypeVectorFactoryImpllEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >*>(nullptr))->GetClass();
      SGcLcLAuxTypeVectorFactoryImpllEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void SGcLcLAuxTypeVectorFactoryImpllEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *SGcLcLAuxTypeVectorFactorylEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR_Dictionary();
   static void SGcLcLAuxTypeVectorFactorylEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR_TClassManip(TClass*);
   static void *new_SGcLcLAuxTypeVectorFactorylEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR(void *p = nullptr);
   static void *newArray_SGcLcLAuxTypeVectorFactorylEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR(Long_t size, void *p);
   static void delete_SGcLcLAuxTypeVectorFactorylEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR(void *p);
   static void deleteArray_SGcLcLAuxTypeVectorFactorylEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR(void *p);
   static void destruct_SGcLcLAuxTypeVectorFactorylEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >*)
   {
      ::SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >));
      static ::ROOT::TGenericClassInfo 
         instance("SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >", "AthContainers/tools/AuxTypeVectorFactory.h", 217,
                  typeid(::SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &SGcLcLAuxTypeVectorFactorylEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >) );
      instance.SetNew(&new_SGcLcLAuxTypeVectorFactorylEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR);
      instance.SetNewArray(&newArray_SGcLcLAuxTypeVectorFactorylEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR);
      instance.SetDelete(&delete_SGcLcLAuxTypeVectorFactorylEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_SGcLcLAuxTypeVectorFactorylEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR);
      instance.SetDestructor(&destruct_SGcLcLAuxTypeVectorFactorylEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >","SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer> >"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >","SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>, std::allocator<ElementLink<ExampleHitContainer> > >"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >*)
   {
      return GenerateInitInstanceLocal(static_cast<::SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *SGcLcLAuxTypeVectorFactorylEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >*>(nullptr))->GetClass();
      SGcLcLAuxTypeVectorFactorylEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void SGcLcLAuxTypeVectorFactorylEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ElementLinklEExampleHitContainergR_Dictionary();
   static void ElementLinklEExampleHitContainergR_TClassManip(TClass*);
   static void *new_ElementLinklEExampleHitContainergR(void *p = nullptr);
   static void *newArray_ElementLinklEExampleHitContainergR(Long_t size, void *p);
   static void delete_ElementLinklEExampleHitContainergR(void *p);
   static void deleteArray_ElementLinklEExampleHitContainergR(void *p);
   static void destruct_ElementLinklEExampleHitContainergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElementLink<ExampleHitContainer>*)
   {
      ::ElementLink<ExampleHitContainer> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ElementLink<ExampleHitContainer>));
      static ::ROOT::TGenericClassInfo 
         instance("ElementLink<ExampleHitContainer>", "AthLinks/ElementLink.h", 121,
                  typeid(::ElementLink<ExampleHitContainer>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ElementLinklEExampleHitContainergR_Dictionary, isa_proxy, 4,
                  sizeof(::ElementLink<ExampleHitContainer>) );
      instance.SetNew(&new_ElementLinklEExampleHitContainergR);
      instance.SetNewArray(&newArray_ElementLinklEExampleHitContainergR);
      instance.SetDelete(&delete_ElementLinklEExampleHitContainergR);
      instance.SetDeleteArray(&deleteArray_ElementLinklEExampleHitContainergR);
      instance.SetDestructor(&destruct_ElementLinklEExampleHitContainergR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElementLink<ExampleHitContainer>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ElementLink<ExampleHitContainer>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ElementLink<ExampleHitContainer>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ElementLinklEExampleHitContainergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ElementLink<ExampleHitContainer>*>(nullptr))->GetClass();
      ElementLinklEExampleHitContainergR_TClassManip(theClass);
   return theClass;
   }

   static void ElementLinklEExampleHitContainergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *DataVectorlEExampleHitgR_Dictionary();
   static void DataVectorlEExampleHitgR_TClassManip(TClass*);
   static void *new_DataVectorlEExampleHitgR(void *p = nullptr);
   static void *newArray_DataVectorlEExampleHitgR(Long_t size, void *p);
   static void delete_DataVectorlEExampleHitgR(void *p);
   static void deleteArray_DataVectorlEExampleHitgR(void *p);
   static void destruct_DataVectorlEExampleHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DataVector<ExampleHit>*)
   {
      ::DataVector<ExampleHit> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DataVector<ExampleHit>));
      static ::ROOT::TGenericClassInfo 
         instance("DataVector<ExampleHit>", "AthContainers/DataVector.h", 2059,
                  typeid(::DataVector<ExampleHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DataVectorlEExampleHitgR_Dictionary, isa_proxy, 4,
                  sizeof(::DataVector<ExampleHit>) );
      instance.SetNew(&new_DataVectorlEExampleHitgR);
      instance.SetNewArray(&newArray_DataVectorlEExampleHitgR);
      instance.SetDelete(&delete_DataVectorlEExampleHitgR);
      instance.SetDeleteArray(&deleteArray_DataVectorlEExampleHitgR);
      instance.SetDestructor(&destruct_DataVectorlEExampleHitgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("DataVector<ExampleHit>","DataVector<ExampleHit, DataModel_detail::NoBase>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DataVector<ExampleHit>*)
   {
      return GenerateInitInstanceLocal(static_cast<::DataVector<ExampleHit>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::DataVector<ExampleHit>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DataVectorlEExampleHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::DataVector<ExampleHit>*>(nullptr))->GetClass();
      DataVectorlEExampleHitgR_TClassManip(theClass);
   return theClass;
   }

   static void DataVectorlEExampleHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *DataVectorlEExampleTrackgR_Dictionary();
   static void DataVectorlEExampleTrackgR_TClassManip(TClass*);
   static void *new_DataVectorlEExampleTrackgR(void *p = nullptr);
   static void *newArray_DataVectorlEExampleTrackgR(Long_t size, void *p);
   static void delete_DataVectorlEExampleTrackgR(void *p);
   static void deleteArray_DataVectorlEExampleTrackgR(void *p);
   static void destruct_DataVectorlEExampleTrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DataVector<ExampleTrack>*)
   {
      ::DataVector<ExampleTrack> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DataVector<ExampleTrack>));
      static ::ROOT::TGenericClassInfo 
         instance("DataVector<ExampleTrack>", "AthContainers/DataVector.h", 2059,
                  typeid(::DataVector<ExampleTrack>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DataVectorlEExampleTrackgR_Dictionary, isa_proxy, 4,
                  sizeof(::DataVector<ExampleTrack>) );
      instance.SetNew(&new_DataVectorlEExampleTrackgR);
      instance.SetNewArray(&newArray_DataVectorlEExampleTrackgR);
      instance.SetDelete(&delete_DataVectorlEExampleTrackgR);
      instance.SetDeleteArray(&deleteArray_DataVectorlEExampleTrackgR);
      instance.SetDestructor(&destruct_DataVectorlEExampleTrackgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("DataVector<ExampleTrack>","DataVector<ExampleTrack, DataModel_detail::NoBase>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DataVector<ExampleTrack>*)
   {
      return GenerateInitInstanceLocal(static_cast<::DataVector<ExampleTrack>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::DataVector<ExampleTrack>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DataVectorlEExampleTrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::DataVector<ExampleTrack>*>(nullptr))->GetClass();
      DataVectorlEExampleTrackgR_TClassManip(theClass);
   return theClass;
   }

   static void DataVectorlEExampleTrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *DataVectorlExAODcLcLExampleElectron_v1gR_Dictionary();
   static void DataVectorlExAODcLcLExampleElectron_v1gR_TClassManip(TClass*);
   static void *new_DataVectorlExAODcLcLExampleElectron_v1gR(void *p = nullptr);
   static void *newArray_DataVectorlExAODcLcLExampleElectron_v1gR(Long_t size, void *p);
   static void delete_DataVectorlExAODcLcLExampleElectron_v1gR(void *p);
   static void deleteArray_DataVectorlExAODcLcLExampleElectron_v1gR(void *p);
   static void destruct_DataVectorlExAODcLcLExampleElectron_v1gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DataVector<xAOD::ExampleElectron_v1>*)
   {
      ::DataVector<xAOD::ExampleElectron_v1> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DataVector<xAOD::ExampleElectron_v1>));
      static ::ROOT::TGenericClassInfo 
         instance("DataVector<xAOD::ExampleElectron_v1>", "AthContainers/DataVector.h", 2059,
                  typeid(::DataVector<xAOD::ExampleElectron_v1>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DataVectorlExAODcLcLExampleElectron_v1gR_Dictionary, isa_proxy, 4,
                  sizeof(::DataVector<xAOD::ExampleElectron_v1>) );
      instance.SetNew(&new_DataVectorlExAODcLcLExampleElectron_v1gR);
      instance.SetNewArray(&newArray_DataVectorlExAODcLcLExampleElectron_v1gR);
      instance.SetDelete(&delete_DataVectorlExAODcLcLExampleElectron_v1gR);
      instance.SetDeleteArray(&deleteArray_DataVectorlExAODcLcLExampleElectron_v1gR);
      instance.SetDestructor(&destruct_DataVectorlExAODcLcLExampleElectron_v1gR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("DataVector<xAOD::ExampleElectron_v1>","xAOD::ExampleElectronContainer_v1"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("DataVector<xAOD::ExampleElectron_v1>","DataVector<xAOD::ExampleElectron_v1, DataModel_detail::NoBase>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DataVector<xAOD::ExampleElectron_v1>*)
   {
      return GenerateInitInstanceLocal(static_cast<::DataVector<xAOD::ExampleElectron_v1>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::DataVector<xAOD::ExampleElectron_v1>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DataVectorlExAODcLcLExampleElectron_v1gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::DataVector<xAOD::ExampleElectron_v1>*>(nullptr))->GetClass();
      DataVectorlExAODcLcLExampleElectron_v1gR_TClassManip(theClass);
   return theClass;
   }

   static void DataVectorlExAODcLcLExampleElectron_v1gR_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("id","4508E3FC-03A7-4770-BF41-71431F86050C");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleHit_Dictionary();
   static void ExampleHit_TClassManip(TClass*);
   static void *new_ExampleHit(void *p = nullptr);
   static void *newArray_ExampleHit(Long_t size, void *p);
   static void delete_ExampleHit(void *p);
   static void deleteArray_ExampleHit(void *p);
   static void destruct_ExampleHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleHit*)
   {
      ::ExampleHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleHit));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleHit", "AthenaPoolExampleData/ExampleHit.h", 24,
                  typeid(::ExampleHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleHit_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleHit) );
      instance.SetNew(&new_ExampleHit);
      instance.SetNewArray(&newArray_ExampleHit);
      instance.SetDelete(&delete_ExampleHit);
      instance.SetDeleteArray(&deleteArray_ExampleHit);
      instance.SetDestructor(&destruct_ExampleHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleHit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleHit*>(nullptr))->GetClass();
      ExampleHit_TClassManip(theClass);
   return theClass;
   }

   static void ExampleHit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleHitContainer_Dictionary();
   static void ExampleHitContainer_TClassManip(TClass*);
   static void *new_ExampleHitContainer(void *p = nullptr);
   static void *newArray_ExampleHitContainer(Long_t size, void *p);
   static void delete_ExampleHitContainer(void *p);
   static void deleteArray_ExampleHitContainer(void *p);
   static void destruct_ExampleHitContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleHitContainer*)
   {
      ::ExampleHitContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleHitContainer));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleHitContainer", "AthenaPoolExampleData/ExampleHitContainer.h", 20,
                  typeid(::ExampleHitContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleHitContainer_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleHitContainer) );
      instance.SetNew(&new_ExampleHitContainer);
      instance.SetNewArray(&newArray_ExampleHitContainer);
      instance.SetDelete(&delete_ExampleHitContainer);
      instance.SetDeleteArray(&deleteArray_ExampleHitContainer);
      instance.SetDestructor(&destruct_ExampleHitContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleHitContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleHitContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleHitContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleHitContainer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleHitContainer*>(nullptr))->GetClass();
      ExampleHitContainer_TClassManip(theClass);
   return theClass;
   }

   static void ExampleHitContainer_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("id","12BD9F58-4A0A-4DD6-89E3-15DB01180BD9");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ElementLinkVectorlEExampleHitContainergR_Dictionary();
   static void ElementLinkVectorlEExampleHitContainergR_TClassManip(TClass*);
   static void *new_ElementLinkVectorlEExampleHitContainergR(void *p = nullptr);
   static void *newArray_ElementLinkVectorlEExampleHitContainergR(Long_t size, void *p);
   static void delete_ElementLinkVectorlEExampleHitContainergR(void *p);
   static void deleteArray_ElementLinkVectorlEExampleHitContainergR(void *p);
   static void destruct_ElementLinkVectorlEExampleHitContainergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElementLinkVector<ExampleHitContainer>*)
   {
      ::ElementLinkVector<ExampleHitContainer> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ElementLinkVector<ExampleHitContainer>));
      static ::ROOT::TGenericClassInfo 
         instance("ElementLinkVector<ExampleHitContainer>", "AthLinks/ElementLinkVector.h", 64,
                  typeid(::ElementLinkVector<ExampleHitContainer>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ElementLinkVectorlEExampleHitContainergR_Dictionary, isa_proxy, 4,
                  sizeof(::ElementLinkVector<ExampleHitContainer>) );
      instance.SetNew(&new_ElementLinkVectorlEExampleHitContainergR);
      instance.SetNewArray(&newArray_ElementLinkVectorlEExampleHitContainergR);
      instance.SetDelete(&delete_ElementLinkVectorlEExampleHitContainergR);
      instance.SetDeleteArray(&deleteArray_ElementLinkVectorlEExampleHitContainergR);
      instance.SetDestructor(&destruct_ElementLinkVectorlEExampleHitContainergR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElementLinkVector<ExampleHitContainer>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ElementLinkVector<ExampleHitContainer>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ElementLinkVector<ExampleHitContainer>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ElementLinkVectorlEExampleHitContainergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ElementLinkVector<ExampleHitContainer>*>(nullptr))->GetClass();
      ElementLinkVectorlEExampleHitContainergR_TClassManip(theClass);
   return theClass;
   }

   static void ElementLinkVectorlEExampleHitContainergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *SGcLcLELVReflEExampleHitContainergR_Dictionary();
   static void SGcLcLELVReflEExampleHitContainergR_TClassManip(TClass*);
   static void *new_SGcLcLELVReflEExampleHitContainergR(void *p = nullptr);
   static void *newArray_SGcLcLELVReflEExampleHitContainergR(Long_t size, void *p);
   static void delete_SGcLcLELVReflEExampleHitContainergR(void *p);
   static void deleteArray_SGcLcLELVReflEExampleHitContainergR(void *p);
   static void destruct_SGcLcLELVReflEExampleHitContainergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SG::ELVRef<ExampleHitContainer>*)
   {
      ::SG::ELVRef<ExampleHitContainer> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::SG::ELVRef<ExampleHitContainer>));
      static ::ROOT::TGenericClassInfo 
         instance("SG::ELVRef<ExampleHitContainer>", "AthLinks/tools/SGELVRef.h", 29,
                  typeid(::SG::ELVRef<ExampleHitContainer>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &SGcLcLELVReflEExampleHitContainergR_Dictionary, isa_proxy, 4,
                  sizeof(::SG::ELVRef<ExampleHitContainer>) );
      instance.SetNew(&new_SGcLcLELVReflEExampleHitContainergR);
      instance.SetNewArray(&newArray_SGcLcLELVReflEExampleHitContainergR);
      instance.SetDelete(&delete_SGcLcLELVReflEExampleHitContainergR);
      instance.SetDeleteArray(&deleteArray_SGcLcLELVReflEExampleHitContainergR);
      instance.SetDestructor(&destruct_SGcLcLELVReflEExampleHitContainergR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SG::ELVRef<ExampleHitContainer>*)
   {
      return GenerateInitInstanceLocal(static_cast<::SG::ELVRef<ExampleHitContainer>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SG::ELVRef<ExampleHitContainer>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *SGcLcLELVReflEExampleHitContainergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::SG::ELVRef<ExampleHitContainer>*>(nullptr))->GetClass();
      SGcLcLELVReflEExampleHitContainergR_TClassManip(theClass);
   return theClass;
   }

   static void SGcLcLELVReflEExampleHitContainergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *NavigablelEExampleHitContainercOdoublecOvectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgRsPgR_Dictionary();
   static void NavigablelEExampleHitContainercOdoublecOvectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgRsPgR_TClassManip(TClass*);
   static void *new_NavigablelEExampleHitContainercOdoublecOvectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgRsPgR(void *p = nullptr);
   static void *newArray_NavigablelEExampleHitContainercOdoublecOvectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgRsPgR(Long_t size, void *p);
   static void delete_NavigablelEExampleHitContainercOdoublecOvectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgRsPgR(void *p);
   static void deleteArray_NavigablelEExampleHitContainercOdoublecOvectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgRsPgR(void *p);
   static void destruct_NavigablelEExampleHitContainercOdoublecOvectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Navigable<ExampleHitContainer,double,vector<pair<ElementLink<ExampleHitContainer>,double> > >*)
   {
      ::Navigable<ExampleHitContainer,double,vector<pair<ElementLink<ExampleHitContainer>,double> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Navigable<ExampleHitContainer,double,vector<pair<ElementLink<ExampleHitContainer>,double> > >));
      static ::ROOT::TGenericClassInfo 
         instance("Navigable<ExampleHitContainer,double,vector<pair<ElementLink<ExampleHitContainer>,double> > >", "Navigation/Navigable.h", 92,
                  typeid(::Navigable<ExampleHitContainer,double,vector<pair<ElementLink<ExampleHitContainer>,double> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &NavigablelEExampleHitContainercOdoublecOvectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::Navigable<ExampleHitContainer,double,vector<pair<ElementLink<ExampleHitContainer>,double> > >) );
      instance.SetNew(&new_NavigablelEExampleHitContainercOdoublecOvectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgRsPgR);
      instance.SetNewArray(&newArray_NavigablelEExampleHitContainercOdoublecOvectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgRsPgR);
      instance.SetDelete(&delete_NavigablelEExampleHitContainercOdoublecOvectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_NavigablelEExampleHitContainercOdoublecOvectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgRsPgR);
      instance.SetDestructor(&destruct_NavigablelEExampleHitContainercOdoublecOvectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgRsPgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("Navigable<ExampleHitContainer,double,vector<pair<ElementLink<ExampleHitContainer>,double> > >","Navigable<ExampleHitContainer,double,std::vector<std::pair<ElementLink<ExampleHitContainer>,double> > >"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("Navigable<ExampleHitContainer,double,vector<pair<ElementLink<ExampleHitContainer>,double> > >","Navigable<ExampleHitContainer, double, std::vector<std::pair<ElementLink<ExampleHitContainer>, double>, std::allocator<std::pair<ElementLink<ExampleHitContainer>, double> > > >"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Navigable<ExampleHitContainer,double,vector<pair<ElementLink<ExampleHitContainer>,double> > >*)
   {
      return GenerateInitInstanceLocal(static_cast<::Navigable<ExampleHitContainer,double,vector<pair<ElementLink<ExampleHitContainer>,double> > >*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Navigable<ExampleHitContainer,double,vector<pair<ElementLink<ExampleHitContainer>,double> > >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *NavigablelEExampleHitContainercOdoublecOvectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::Navigable<ExampleHitContainer,double,vector<pair<ElementLink<ExampleHitContainer>,double> > >*>(nullptr))->GetClass();
      NavigablelEExampleHitContainercOdoublecOvectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void NavigablelEExampleHitContainercOdoublecOvectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleTrack_Dictionary();
   static void ExampleTrack_TClassManip(TClass*);
   static void *new_ExampleTrack(void *p = nullptr);
   static void *newArray_ExampleTrack(Long_t size, void *p);
   static void delete_ExampleTrack(void *p);
   static void deleteArray_ExampleTrack(void *p);
   static void destruct_ExampleTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleTrack*)
   {
      ::ExampleTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleTrack));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleTrack", "AthenaPoolExampleData/ExampleTrack.h", 24,
                  typeid(::ExampleTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleTrack_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleTrack) );
      instance.SetNew(&new_ExampleTrack);
      instance.SetNewArray(&newArray_ExampleTrack);
      instance.SetDelete(&delete_ExampleTrack);
      instance.SetDeleteArray(&deleteArray_ExampleTrack);
      instance.SetDestructor(&destruct_ExampleTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleTrack*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleTrack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleTrack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleTrack_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleTrack*>(nullptr))->GetClass();
      ExampleTrack_TClassManip(theClass);
   return theClass;
   }

   static void ExampleTrack_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleTrackContainer_Dictionary();
   static void ExampleTrackContainer_TClassManip(TClass*);
   static void *new_ExampleTrackContainer(void *p = nullptr);
   static void *newArray_ExampleTrackContainer(Long_t size, void *p);
   static void delete_ExampleTrackContainer(void *p);
   static void deleteArray_ExampleTrackContainer(void *p);
   static void destruct_ExampleTrackContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleTrackContainer*)
   {
      ::ExampleTrackContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleTrackContainer));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleTrackContainer", "AthenaPoolExampleData/ExampleTrackContainer.h", 20,
                  typeid(::ExampleTrackContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleTrackContainer_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleTrackContainer) );
      instance.SetNew(&new_ExampleTrackContainer);
      instance.SetNewArray(&newArray_ExampleTrackContainer);
      instance.SetDelete(&delete_ExampleTrackContainer);
      instance.SetDeleteArray(&deleteArray_ExampleTrackContainer);
      instance.SetDestructor(&destruct_ExampleTrackContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleTrackContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleTrackContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleTrackContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleTrackContainer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleTrackContainer*>(nullptr))->GetClass();
      ExampleTrackContainer_TClassManip(theClass);
   return theClass;
   }

   static void ExampleTrackContainer_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("id","1390A48F-C87C-4382-B772-2DA5B055FBC6");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *xAODcLcLExampleElectron_v1_Dictionary();
   static void xAODcLcLExampleElectron_v1_TClassManip(TClass*);
   static void *new_xAODcLcLExampleElectron_v1(void *p = nullptr);
   static void *newArray_xAODcLcLExampleElectron_v1(Long_t size, void *p);
   static void delete_xAODcLcLExampleElectron_v1(void *p);
   static void deleteArray_xAODcLcLExampleElectron_v1(void *p);
   static void destruct_xAODcLcLExampleElectron_v1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::xAOD::ExampleElectron_v1*)
   {
      ::xAOD::ExampleElectron_v1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::xAOD::ExampleElectron_v1));
      static ::ROOT::TGenericClassInfo 
         instance("xAOD::ExampleElectron_v1", "AthenaPoolExampleData/versions/ExampleElectron_v1.h", 14,
                  typeid(::xAOD::ExampleElectron_v1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &xAODcLcLExampleElectron_v1_Dictionary, isa_proxy, 4,
                  sizeof(::xAOD::ExampleElectron_v1) );
      instance.SetNew(&new_xAODcLcLExampleElectron_v1);
      instance.SetNewArray(&newArray_xAODcLcLExampleElectron_v1);
      instance.SetDelete(&delete_xAODcLcLExampleElectron_v1);
      instance.SetDeleteArray(&deleteArray_xAODcLcLExampleElectron_v1);
      instance.SetDestructor(&destruct_xAODcLcLExampleElectron_v1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::xAOD::ExampleElectron_v1*)
   {
      return GenerateInitInstanceLocal(static_cast<::xAOD::ExampleElectron_v1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::xAOD::ExampleElectron_v1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *xAODcLcLExampleElectron_v1_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::xAOD::ExampleElectron_v1*>(nullptr))->GetClass();
      xAODcLcLExampleElectron_v1_TClassManip(theClass);
   return theClass;
   }

   static void xAODcLcLExampleElectron_v1_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("id","9ED519B3-7CC8-4AE6-B2E8-F2B84029576B");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *xAODcLcLExampleElectronAuxContainer_v1_Dictionary();
   static void xAODcLcLExampleElectronAuxContainer_v1_TClassManip(TClass*);
   static void *new_xAODcLcLExampleElectronAuxContainer_v1(void *p = nullptr);
   static void *newArray_xAODcLcLExampleElectronAuxContainer_v1(Long_t size, void *p);
   static void delete_xAODcLcLExampleElectronAuxContainer_v1(void *p);
   static void deleteArray_xAODcLcLExampleElectronAuxContainer_v1(void *p);
   static void destruct_xAODcLcLExampleElectronAuxContainer_v1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::xAOD::ExampleElectronAuxContainer_v1*)
   {
      ::xAOD::ExampleElectronAuxContainer_v1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::xAOD::ExampleElectronAuxContainer_v1));
      static ::ROOT::TGenericClassInfo 
         instance("xAOD::ExampleElectronAuxContainer_v1", "AthenaPoolExampleData/versions/ExampleElectronAuxContainer_v1.h", 13,
                  typeid(::xAOD::ExampleElectronAuxContainer_v1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &xAODcLcLExampleElectronAuxContainer_v1_Dictionary, isa_proxy, 4,
                  sizeof(::xAOD::ExampleElectronAuxContainer_v1) );
      instance.SetNew(&new_xAODcLcLExampleElectronAuxContainer_v1);
      instance.SetNewArray(&newArray_xAODcLcLExampleElectronAuxContainer_v1);
      instance.SetDelete(&delete_xAODcLcLExampleElectronAuxContainer_v1);
      instance.SetDeleteArray(&deleteArray_xAODcLcLExampleElectronAuxContainer_v1);
      instance.SetDestructor(&destruct_xAODcLcLExampleElectronAuxContainer_v1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::xAOD::ExampleElectronAuxContainer_v1*)
   {
      return GenerateInitInstanceLocal(static_cast<::xAOD::ExampleElectronAuxContainer_v1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::xAOD::ExampleElectronAuxContainer_v1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *xAODcLcLExampleElectronAuxContainer_v1_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::xAOD::ExampleElectronAuxContainer_v1*>(nullptr))->GetClass();
      xAODcLcLExampleElectronAuxContainer_v1_TClassManip(theClass);
   return theClass;
   }

   static void xAODcLcLExampleElectronAuxContainer_v1_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("id","A57CD90B-B697-4067-93C7-28252B1FF9D5");
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEElementLinklEExampleHitContainergRcOdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) pair<ElementLink<ExampleHitContainer>,double> : new pair<ElementLink<ExampleHitContainer>,double>;
   }
   static void *newArray_pairlEElementLinklEExampleHitContainergRcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) pair<ElementLink<ExampleHitContainer>,double>[nElements] : new pair<ElementLink<ExampleHitContainer>,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEElementLinklEExampleHitContainergRcOdoublegR(void *p) {
      delete (static_cast<pair<ElementLink<ExampleHitContainer>,double>*>(p));
   }
   static void deleteArray_pairlEElementLinklEExampleHitContainergRcOdoublegR(void *p) {
      delete [] (static_cast<pair<ElementLink<ExampleHitContainer>,double>*>(p));
   }
   static void destruct_pairlEElementLinklEExampleHitContainergRcOdoublegR(void *p) {
      typedef pair<ElementLink<ExampleHitContainer>,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class pair<ElementLink<ExampleHitContainer>,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_DataLinklEExampleHitContainergR(void *p) {
      return  p ? new(p) ::DataLink<ExampleHitContainer> : new ::DataLink<ExampleHitContainer>;
   }
   static void *newArray_DataLinklEExampleHitContainergR(Long_t nElements, void *p) {
      return p ? new(p) ::DataLink<ExampleHitContainer>[nElements] : new ::DataLink<ExampleHitContainer>[nElements];
   }
   // Wrapper around operator delete
   static void delete_DataLinklEExampleHitContainergR(void *p) {
      delete (static_cast<::DataLink<ExampleHitContainer>*>(p));
   }
   static void deleteArray_DataLinklEExampleHitContainergR(void *p) {
      delete [] (static_cast<::DataLink<ExampleHitContainer>*>(p));
   }
   static void destruct_DataLinklEExampleHitContainergR(void *p) {
      typedef ::DataLink<ExampleHitContainer> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::DataLink<ExampleHitContainer>

namespace ROOT {
   // Wrappers around operator new
   static void *new_SGcLcLAuxTypeVectorFactoryImpllEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > > : new ::SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >;
   }
   static void *newArray_SGcLcLAuxTypeVectorFactoryImpllEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >[nElements] : new ::SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_SGcLcLAuxTypeVectorFactoryImpllEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR(void *p) {
      delete (static_cast<::SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >*>(p));
   }
   static void deleteArray_SGcLcLAuxTypeVectorFactoryImpllEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR(void *p) {
      delete [] (static_cast<::SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >*>(p));
   }
   static void destruct_SGcLcLAuxTypeVectorFactoryImpllEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR(void *p) {
      typedef ::SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_SGcLcLAuxTypeVectorFactorylEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > > : new ::SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >;
   }
   static void *newArray_SGcLcLAuxTypeVectorFactorylEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >[nElements] : new ::SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_SGcLcLAuxTypeVectorFactorylEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR(void *p) {
      delete (static_cast<::SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >*>(p));
   }
   static void deleteArray_SGcLcLAuxTypeVectorFactorylEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR(void *p) {
      delete [] (static_cast<::SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >*>(p));
   }
   static void destruct_SGcLcLAuxTypeVectorFactorylEElementLinklEExampleHitContainergRcOallocatorlEElementLinklEExampleHitContainergRsPgRsPgR(void *p) {
      typedef ::SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ElementLinklEExampleHitContainergR(void *p) {
      return  p ? new(p) ::ElementLink<ExampleHitContainer> : new ::ElementLink<ExampleHitContainer>;
   }
   static void *newArray_ElementLinklEExampleHitContainergR(Long_t nElements, void *p) {
      return p ? new(p) ::ElementLink<ExampleHitContainer>[nElements] : new ::ElementLink<ExampleHitContainer>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ElementLinklEExampleHitContainergR(void *p) {
      delete (static_cast<::ElementLink<ExampleHitContainer>*>(p));
   }
   static void deleteArray_ElementLinklEExampleHitContainergR(void *p) {
      delete [] (static_cast<::ElementLink<ExampleHitContainer>*>(p));
   }
   static void destruct_ElementLinklEExampleHitContainergR(void *p) {
      typedef ::ElementLink<ExampleHitContainer> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ElementLink<ExampleHitContainer>

namespace ROOT {
   // Wrappers around operator new
   static void *new_DataVectorlEExampleHitgR(void *p) {
      return  p ? new(p) ::DataVector<ExampleHit> : new ::DataVector<ExampleHit>;
   }
   static void *newArray_DataVectorlEExampleHitgR(Long_t nElements, void *p) {
      return p ? new(p) ::DataVector<ExampleHit>[nElements] : new ::DataVector<ExampleHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_DataVectorlEExampleHitgR(void *p) {
      delete (static_cast<::DataVector<ExampleHit>*>(p));
   }
   static void deleteArray_DataVectorlEExampleHitgR(void *p) {
      delete [] (static_cast<::DataVector<ExampleHit>*>(p));
   }
   static void destruct_DataVectorlEExampleHitgR(void *p) {
      typedef ::DataVector<ExampleHit> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::DataVector<ExampleHit>

namespace ROOT {
   // Wrappers around operator new
   static void *new_DataVectorlEExampleTrackgR(void *p) {
      return  p ? new(p) ::DataVector<ExampleTrack> : new ::DataVector<ExampleTrack>;
   }
   static void *newArray_DataVectorlEExampleTrackgR(Long_t nElements, void *p) {
      return p ? new(p) ::DataVector<ExampleTrack>[nElements] : new ::DataVector<ExampleTrack>[nElements];
   }
   // Wrapper around operator delete
   static void delete_DataVectorlEExampleTrackgR(void *p) {
      delete (static_cast<::DataVector<ExampleTrack>*>(p));
   }
   static void deleteArray_DataVectorlEExampleTrackgR(void *p) {
      delete [] (static_cast<::DataVector<ExampleTrack>*>(p));
   }
   static void destruct_DataVectorlEExampleTrackgR(void *p) {
      typedef ::DataVector<ExampleTrack> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::DataVector<ExampleTrack>

namespace ROOT {
   // Wrappers around operator new
   static void *new_DataVectorlExAODcLcLExampleElectron_v1gR(void *p) {
      return  p ? new(p) ::DataVector<xAOD::ExampleElectron_v1> : new ::DataVector<xAOD::ExampleElectron_v1>;
   }
   static void *newArray_DataVectorlExAODcLcLExampleElectron_v1gR(Long_t nElements, void *p) {
      return p ? new(p) ::DataVector<xAOD::ExampleElectron_v1>[nElements] : new ::DataVector<xAOD::ExampleElectron_v1>[nElements];
   }
   // Wrapper around operator delete
   static void delete_DataVectorlExAODcLcLExampleElectron_v1gR(void *p) {
      delete (static_cast<::DataVector<xAOD::ExampleElectron_v1>*>(p));
   }
   static void deleteArray_DataVectorlExAODcLcLExampleElectron_v1gR(void *p) {
      delete [] (static_cast<::DataVector<xAOD::ExampleElectron_v1>*>(p));
   }
   static void destruct_DataVectorlExAODcLcLExampleElectron_v1gR(void *p) {
      typedef ::DataVector<xAOD::ExampleElectron_v1> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::DataVector<xAOD::ExampleElectron_v1>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleHit(void *p) {
      return  p ? new(p) ::ExampleHit : new ::ExampleHit;
   }
   static void *newArray_ExampleHit(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleHit[nElements] : new ::ExampleHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleHit(void *p) {
      delete (static_cast<::ExampleHit*>(p));
   }
   static void deleteArray_ExampleHit(void *p) {
      delete [] (static_cast<::ExampleHit*>(p));
   }
   static void destruct_ExampleHit(void *p) {
      typedef ::ExampleHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleHit

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleHitContainer(void *p) {
      return  p ? new(p) ::ExampleHitContainer : new ::ExampleHitContainer;
   }
   static void *newArray_ExampleHitContainer(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleHitContainer[nElements] : new ::ExampleHitContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleHitContainer(void *p) {
      delete (static_cast<::ExampleHitContainer*>(p));
   }
   static void deleteArray_ExampleHitContainer(void *p) {
      delete [] (static_cast<::ExampleHitContainer*>(p));
   }
   static void destruct_ExampleHitContainer(void *p) {
      typedef ::ExampleHitContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleHitContainer

namespace ROOT {
   // Wrappers around operator new
   static void *new_ElementLinkVectorlEExampleHitContainergR(void *p) {
      return  p ? new(p) ::ElementLinkVector<ExampleHitContainer> : new ::ElementLinkVector<ExampleHitContainer>;
   }
   static void *newArray_ElementLinkVectorlEExampleHitContainergR(Long_t nElements, void *p) {
      return p ? new(p) ::ElementLinkVector<ExampleHitContainer>[nElements] : new ::ElementLinkVector<ExampleHitContainer>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ElementLinkVectorlEExampleHitContainergR(void *p) {
      delete (static_cast<::ElementLinkVector<ExampleHitContainer>*>(p));
   }
   static void deleteArray_ElementLinkVectorlEExampleHitContainergR(void *p) {
      delete [] (static_cast<::ElementLinkVector<ExampleHitContainer>*>(p));
   }
   static void destruct_ElementLinkVectorlEExampleHitContainergR(void *p) {
      typedef ::ElementLinkVector<ExampleHitContainer> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ElementLinkVector<ExampleHitContainer>

namespace ROOT {
   // Wrappers around operator new
   static void *new_SGcLcLELVReflEExampleHitContainergR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::SG::ELVRef<ExampleHitContainer> : new ::SG::ELVRef<ExampleHitContainer>;
   }
   static void *newArray_SGcLcLELVReflEExampleHitContainergR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::SG::ELVRef<ExampleHitContainer>[nElements] : new ::SG::ELVRef<ExampleHitContainer>[nElements];
   }
   // Wrapper around operator delete
   static void delete_SGcLcLELVReflEExampleHitContainergR(void *p) {
      delete (static_cast<::SG::ELVRef<ExampleHitContainer>*>(p));
   }
   static void deleteArray_SGcLcLELVReflEExampleHitContainergR(void *p) {
      delete [] (static_cast<::SG::ELVRef<ExampleHitContainer>*>(p));
   }
   static void destruct_SGcLcLELVReflEExampleHitContainergR(void *p) {
      typedef ::SG::ELVRef<ExampleHitContainer> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SG::ELVRef<ExampleHitContainer>

namespace ROOT {
   // Wrappers around operator new
   static void *new_NavigablelEExampleHitContainercOdoublecOvectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgRsPgR(void *p) {
      return  p ? new(p) ::Navigable<ExampleHitContainer,double,vector<pair<ElementLink<ExampleHitContainer>,double> > > : new ::Navigable<ExampleHitContainer,double,vector<pair<ElementLink<ExampleHitContainer>,double> > >;
   }
   static void *newArray_NavigablelEExampleHitContainercOdoublecOvectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? new(p) ::Navigable<ExampleHitContainer,double,vector<pair<ElementLink<ExampleHitContainer>,double> > >[nElements] : new ::Navigable<ExampleHitContainer,double,vector<pair<ElementLink<ExampleHitContainer>,double> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_NavigablelEExampleHitContainercOdoublecOvectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgRsPgR(void *p) {
      delete (static_cast<::Navigable<ExampleHitContainer,double,vector<pair<ElementLink<ExampleHitContainer>,double> > >*>(p));
   }
   static void deleteArray_NavigablelEExampleHitContainercOdoublecOvectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgRsPgR(void *p) {
      delete [] (static_cast<::Navigable<ExampleHitContainer,double,vector<pair<ElementLink<ExampleHitContainer>,double> > >*>(p));
   }
   static void destruct_NavigablelEExampleHitContainercOdoublecOvectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgRsPgR(void *p) {
      typedef ::Navigable<ExampleHitContainer,double,vector<pair<ElementLink<ExampleHitContainer>,double> > > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Navigable<ExampleHitContainer,double,vector<pair<ElementLink<ExampleHitContainer>,double> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleTrack(void *p) {
      return  p ? new(p) ::ExampleTrack : new ::ExampleTrack;
   }
   static void *newArray_ExampleTrack(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleTrack[nElements] : new ::ExampleTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleTrack(void *p) {
      delete (static_cast<::ExampleTrack*>(p));
   }
   static void deleteArray_ExampleTrack(void *p) {
      delete [] (static_cast<::ExampleTrack*>(p));
   }
   static void destruct_ExampleTrack(void *p) {
      typedef ::ExampleTrack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleTrack

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleTrackContainer(void *p) {
      return  p ? new(p) ::ExampleTrackContainer : new ::ExampleTrackContainer;
   }
   static void *newArray_ExampleTrackContainer(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleTrackContainer[nElements] : new ::ExampleTrackContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleTrackContainer(void *p) {
      delete (static_cast<::ExampleTrackContainer*>(p));
   }
   static void deleteArray_ExampleTrackContainer(void *p) {
      delete [] (static_cast<::ExampleTrackContainer*>(p));
   }
   static void destruct_ExampleTrackContainer(void *p) {
      typedef ::ExampleTrackContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleTrackContainer

namespace ROOT {
   // Wrappers around operator new
   static void *new_xAODcLcLExampleElectron_v1(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::xAOD::ExampleElectron_v1 : new ::xAOD::ExampleElectron_v1;
   }
   static void *newArray_xAODcLcLExampleElectron_v1(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::xAOD::ExampleElectron_v1[nElements] : new ::xAOD::ExampleElectron_v1[nElements];
   }
   // Wrapper around operator delete
   static void delete_xAODcLcLExampleElectron_v1(void *p) {
      delete (static_cast<::xAOD::ExampleElectron_v1*>(p));
   }
   static void deleteArray_xAODcLcLExampleElectron_v1(void *p) {
      delete [] (static_cast<::xAOD::ExampleElectron_v1*>(p));
   }
   static void destruct_xAODcLcLExampleElectron_v1(void *p) {
      typedef ::xAOD::ExampleElectron_v1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::xAOD::ExampleElectron_v1

namespace ROOT {
   // Wrappers around operator new
   static void *new_xAODcLcLExampleElectronAuxContainer_v1(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::xAOD::ExampleElectronAuxContainer_v1 : new ::xAOD::ExampleElectronAuxContainer_v1;
   }
   static void *newArray_xAODcLcLExampleElectronAuxContainer_v1(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::xAOD::ExampleElectronAuxContainer_v1[nElements] : new ::xAOD::ExampleElectronAuxContainer_v1[nElements];
   }
   // Wrapper around operator delete
   static void delete_xAODcLcLExampleElectronAuxContainer_v1(void *p) {
      delete (static_cast<::xAOD::ExampleElectronAuxContainer_v1*>(p));
   }
   static void deleteArray_xAODcLcLExampleElectronAuxContainer_v1(void *p) {
      delete [] (static_cast<::xAOD::ExampleElectronAuxContainer_v1*>(p));
   }
   static void destruct_xAODcLcLExampleElectronAuxContainer_v1(void *p) {
      typedef ::xAOD::ExampleElectronAuxContainer_v1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::xAOD::ExampleElectronAuxContainer_v1

namespace ROOT {
   static TClass *vectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgR_Dictionary();
   static void vectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgR(void *p = nullptr);
   static void *newArray_vectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgR(void *p);
   static void deleteArray_vectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgR(void *p);
   static void destruct_vectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<ElementLink<ExampleHitContainer>,double> >*)
   {
      vector<pair<ElementLink<ExampleHitContainer>,double> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<ElementLink<ExampleHitContainer>,double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<ElementLink<ExampleHitContainer>,double> >", -2, "vector", 423,
                  typeid(vector<pair<ElementLink<ExampleHitContainer>,double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pair<ElementLink<ExampleHitContainer>,double> >) );
      instance.SetNew(&new_vectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<ElementLink<ExampleHitContainer>,double> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<pair<ElementLink<ExampleHitContainer>,double> >","std::vector<std::pair<ElementLink<ExampleHitContainer>, double>, std::allocator<std::pair<ElementLink<ExampleHitContainer>, double> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<pair<ElementLink<ExampleHitContainer>,double> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<pair<ElementLink<ExampleHitContainer>,double> >*>(nullptr))->GetClass();
      vectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<ElementLink<ExampleHitContainer>,double> > : new vector<pair<ElementLink<ExampleHitContainer>,double> >;
   }
   static void *newArray_vectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<ElementLink<ExampleHitContainer>,double> >[nElements] : new vector<pair<ElementLink<ExampleHitContainer>,double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgR(void *p) {
      delete (static_cast<vector<pair<ElementLink<ExampleHitContainer>,double> >*>(p));
   }
   static void deleteArray_vectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgR(void *p) {
      delete [] (static_cast<vector<pair<ElementLink<ExampleHitContainer>,double> >*>(p));
   }
   static void destruct_vectorlEpairlEElementLinklEExampleHitContainergRcOdoublegRsPgR(void *p) {
      typedef vector<pair<ElementLink<ExampleHitContainer>,double> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<pair<ElementLink<ExampleHitContainer>,double> >

namespace ROOT {
   static TClass *vectorlESGcLcLELVReflEExampleHitContainergRsPgR_Dictionary();
   static void vectorlESGcLcLELVReflEExampleHitContainergRsPgR_TClassManip(TClass*);
   static void *new_vectorlESGcLcLELVReflEExampleHitContainergRsPgR(void *p = nullptr);
   static void *newArray_vectorlESGcLcLELVReflEExampleHitContainergRsPgR(Long_t size, void *p);
   static void delete_vectorlESGcLcLELVReflEExampleHitContainergRsPgR(void *p);
   static void deleteArray_vectorlESGcLcLELVReflEExampleHitContainergRsPgR(void *p);
   static void destruct_vectorlESGcLcLELVReflEExampleHitContainergRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<SG::ELVRef<ExampleHitContainer> >*)
   {
      vector<SG::ELVRef<ExampleHitContainer> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<SG::ELVRef<ExampleHitContainer> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<SG::ELVRef<ExampleHitContainer> >", -2, "vector", 423,
                  typeid(vector<SG::ELVRef<ExampleHitContainer> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESGcLcLELVReflEExampleHitContainergRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<SG::ELVRef<ExampleHitContainer> >) );
      instance.SetNew(&new_vectorlESGcLcLELVReflEExampleHitContainergRsPgR);
      instance.SetNewArray(&newArray_vectorlESGcLcLELVReflEExampleHitContainergRsPgR);
      instance.SetDelete(&delete_vectorlESGcLcLELVReflEExampleHitContainergRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlESGcLcLELVReflEExampleHitContainergRsPgR);
      instance.SetDestructor(&destruct_vectorlESGcLcLELVReflEExampleHitContainergRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<SG::ELVRef<ExampleHitContainer> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<SG::ELVRef<ExampleHitContainer> >","std::vector<SG::ELVRef<ExampleHitContainer>, std::allocator<SG::ELVRef<ExampleHitContainer> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<SG::ELVRef<ExampleHitContainer> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESGcLcLELVReflEExampleHitContainergRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<SG::ELVRef<ExampleHitContainer> >*>(nullptr))->GetClass();
      vectorlESGcLcLELVReflEExampleHitContainergRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESGcLcLELVReflEExampleHitContainergRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESGcLcLELVReflEExampleHitContainergRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<SG::ELVRef<ExampleHitContainer> > : new vector<SG::ELVRef<ExampleHitContainer> >;
   }
   static void *newArray_vectorlESGcLcLELVReflEExampleHitContainergRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<SG::ELVRef<ExampleHitContainer> >[nElements] : new vector<SG::ELVRef<ExampleHitContainer> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESGcLcLELVReflEExampleHitContainergRsPgR(void *p) {
      delete (static_cast<vector<SG::ELVRef<ExampleHitContainer> >*>(p));
   }
   static void deleteArray_vectorlESGcLcLELVReflEExampleHitContainergRsPgR(void *p) {
      delete [] (static_cast<vector<SG::ELVRef<ExampleHitContainer> >*>(p));
   }
   static void destruct_vectorlESGcLcLELVReflEExampleHitContainergRsPgR(void *p) {
      typedef vector<SG::ELVRef<ExampleHitContainer> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<SG::ELVRef<ExampleHitContainer> >

namespace ROOT {
   static TClass *vectorlEExampleTrackmUgR_Dictionary();
   static void vectorlEExampleTrackmUgR_TClassManip(TClass*);
   static void *new_vectorlEExampleTrackmUgR(void *p = nullptr);
   static void *newArray_vectorlEExampleTrackmUgR(Long_t size, void *p);
   static void delete_vectorlEExampleTrackmUgR(void *p);
   static void deleteArray_vectorlEExampleTrackmUgR(void *p);
   static void destruct_vectorlEExampleTrackmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleTrack*>*)
   {
      vector<ExampleTrack*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleTrack*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleTrack*>", -2, "vector", 423,
                  typeid(vector<ExampleTrack*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleTrackmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleTrack*>) );
      instance.SetNew(&new_vectorlEExampleTrackmUgR);
      instance.SetNewArray(&newArray_vectorlEExampleTrackmUgR);
      instance.SetDelete(&delete_vectorlEExampleTrackmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleTrackmUgR);
      instance.SetDestructor(&destruct_vectorlEExampleTrackmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleTrack*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ExampleTrack*>","std::vector<ExampleTrack*, std::allocator<ExampleTrack*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ExampleTrack*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleTrackmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ExampleTrack*>*>(nullptr))->GetClass();
      vectorlEExampleTrackmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleTrackmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleTrackmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleTrack*> : new vector<ExampleTrack*>;
   }
   static void *newArray_vectorlEExampleTrackmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleTrack*>[nElements] : new vector<ExampleTrack*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleTrackmUgR(void *p) {
      delete (static_cast<vector<ExampleTrack*>*>(p));
   }
   static void deleteArray_vectorlEExampleTrackmUgR(void *p) {
      delete [] (static_cast<vector<ExampleTrack*>*>(p));
   }
   static void destruct_vectorlEExampleTrackmUgR(void *p) {
      typedef vector<ExampleTrack*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleTrack*>

namespace ROOT {
   static TClass *vectorlEExampleHitmUgR_Dictionary();
   static void vectorlEExampleHitmUgR_TClassManip(TClass*);
   static void *new_vectorlEExampleHitmUgR(void *p = nullptr);
   static void *newArray_vectorlEExampleHitmUgR(Long_t size, void *p);
   static void delete_vectorlEExampleHitmUgR(void *p);
   static void deleteArray_vectorlEExampleHitmUgR(void *p);
   static void destruct_vectorlEExampleHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleHit*>*)
   {
      vector<ExampleHit*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleHit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleHit*>", -2, "vector", 423,
                  typeid(vector<ExampleHit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleHitmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleHit*>) );
      instance.SetNew(&new_vectorlEExampleHitmUgR);
      instance.SetNewArray(&newArray_vectorlEExampleHitmUgR);
      instance.SetDelete(&delete_vectorlEExampleHitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleHitmUgR);
      instance.SetDestructor(&destruct_vectorlEExampleHitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleHit*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ExampleHit*>","std::vector<ExampleHit*, std::allocator<ExampleHit*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ExampleHit*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ExampleHit*>*>(nullptr))->GetClass();
      vectorlEExampleHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleHitmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleHit*> : new vector<ExampleHit*>;
   }
   static void *newArray_vectorlEExampleHitmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleHit*>[nElements] : new vector<ExampleHit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleHitmUgR(void *p) {
      delete (static_cast<vector<ExampleHit*>*>(p));
   }
   static void deleteArray_vectorlEExampleHitmUgR(void *p) {
      delete [] (static_cast<vector<ExampleHit*>*>(p));
   }
   static void destruct_vectorlEExampleHitmUgR(void *p) {
      typedef vector<ExampleHit*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleHit*>

namespace ROOT {
   static TClass *vectorlEDataLinklEExampleHitContainergRsPgR_Dictionary();
   static void vectorlEDataLinklEExampleHitContainergRsPgR_TClassManip(TClass*);
   static void *new_vectorlEDataLinklEExampleHitContainergRsPgR(void *p = nullptr);
   static void *newArray_vectorlEDataLinklEExampleHitContainergRsPgR(Long_t size, void *p);
   static void delete_vectorlEDataLinklEExampleHitContainergRsPgR(void *p);
   static void deleteArray_vectorlEDataLinklEExampleHitContainergRsPgR(void *p);
   static void destruct_vectorlEDataLinklEExampleHitContainergRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DataLink<ExampleHitContainer> >*)
   {
      vector<DataLink<ExampleHitContainer> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DataLink<ExampleHitContainer> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DataLink<ExampleHitContainer> >", -2, "vector", 423,
                  typeid(vector<DataLink<ExampleHitContainer> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDataLinklEExampleHitContainergRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<DataLink<ExampleHitContainer> >) );
      instance.SetNew(&new_vectorlEDataLinklEExampleHitContainergRsPgR);
      instance.SetNewArray(&newArray_vectorlEDataLinklEExampleHitContainergRsPgR);
      instance.SetDelete(&delete_vectorlEDataLinklEExampleHitContainergRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEDataLinklEExampleHitContainergRsPgR);
      instance.SetDestructor(&destruct_vectorlEDataLinklEExampleHitContainergRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DataLink<ExampleHitContainer> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<DataLink<ExampleHitContainer> >","std::vector<DataLink<ExampleHitContainer>, std::allocator<DataLink<ExampleHitContainer> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<DataLink<ExampleHitContainer> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDataLinklEExampleHitContainergRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<DataLink<ExampleHitContainer> >*>(nullptr))->GetClass();
      vectorlEDataLinklEExampleHitContainergRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDataLinklEExampleHitContainergRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDataLinklEExampleHitContainergRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<DataLink<ExampleHitContainer> > : new vector<DataLink<ExampleHitContainer> >;
   }
   static void *newArray_vectorlEDataLinklEExampleHitContainergRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<DataLink<ExampleHitContainer> >[nElements] : new vector<DataLink<ExampleHitContainer> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDataLinklEExampleHitContainergRsPgR(void *p) {
      delete (static_cast<vector<DataLink<ExampleHitContainer> >*>(p));
   }
   static void deleteArray_vectorlEDataLinklEExampleHitContainergRsPgR(void *p) {
      delete [] (static_cast<vector<DataLink<ExampleHitContainer> >*>(p));
   }
   static void destruct_vectorlEDataLinklEExampleHitContainergRsPgR(void *p) {
      typedef vector<DataLink<ExampleHitContainer> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<DataLink<ExampleHitContainer> >

namespace {
  void TriggerDictionaryInitialization_libAthenaPoolExampleDataDict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libAthenaPoolExampleDataDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$AthenaPoolExampleData/ExampleHitContainer.h")))  ExampleHitContainer;
namespace std{template <typename _T1, typename _T2> struct __attribute__((annotate("$clingAutoload$bits/stl_pair.h")))  __attribute__((annotate("$clingAutoload$string")))  pair;
}
class __attribute__((annotate("$clingAutoload$AthenaPoolExampleData/ExampleHit.h")))  __attribute__((annotate("$clingAutoload$AthenaPoolExampleData/ExampleHitContainer.h")))  ExampleHit;
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
template <class STORABLE> class __attribute__((annotate("$clingAutoload$AthLinks/DataLink.h")))  __attribute__((annotate("$clingAutoload$AthenaPoolExampleData/ExampleHitContainer.h")))  DataLink;

namespace SG{template <typename DOBJ> class __attribute__((annotate("$clingAutoload$AthLinks/tools/SGELVRef.h")))  __attribute__((annotate("$clingAutoload$AthenaPoolExampleData/ExampleTrackContainer.h")))  ELVRef;
}
class __attribute__((annotate("$clingAutoload$AthenaPoolExampleData/ExampleTrack.h")))  __attribute__((annotate("$clingAutoload$AthenaPoolExampleData/ExampleTrackContainer.h")))  ExampleTrack;
template <class STORABLE> class __attribute__((annotate("$clingAutoload$AthLinks/ElementLink.h")))  __attribute__((annotate("$clingAutoload$AthenaPoolExampleData/ExampleHitContainer.h")))  ElementLink;

namespace xAOD{class __attribute__((annotate("$clingAutoload$AthenaPoolExampleData/versions/ExampleElectron_v1.h")))  __attribute__((annotate("$clingAutoload$AthenaPoolExampleData/ExampleElectron.h")))  ExampleElectron_v1;}
template <typename DOBJ> class __attribute__((annotate("$clingAutoload$AthLinks/ElementLinkVector.h")))  __attribute__((annotate("$clingAutoload$AthenaPoolExampleData/ExampleTrackContainer.h")))  ElementLinkVector;

class __attribute__((annotate("$clingAutoload$AthenaPoolExampleData/ExampleTrackContainer.h")))  ExampleTrackContainer;
namespace xAOD{class __attribute__((annotate("$clingAutoload$AthenaPoolExampleData/versions/ExampleElectronAuxContainer_v1.h")))  __attribute__((annotate("$clingAutoload$AthenaPoolExampleData/ExampleElectronAuxContainer.h")))  ExampleElectronAuxContainer_v1;}
namespace xAOD{typedef ExampleElectron_v1 ExampleElectron __attribute__((annotate("$clingAutoload$AthenaPoolExampleData/ExampleElectron.h"))) ;}
namespace xAOD{typedef ExampleElectronAuxContainer_v1 ExampleElectronAuxContainer __attribute__((annotate("$clingAutoload$AthenaPoolExampleData/ExampleElectronAuxContainer.h"))) ;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libAthenaPoolExampleDataDict dictionary payload"

#ifndef CLHEP_MAX_MIN_DEFINED
  #define CLHEP_MAX_MIN_DEFINED 1
#endif
#ifndef CLHEP_ABS_DEFINED
  #define CLHEP_ABS_DEFINED 1
#endif
#ifndef CLHEP_SQR_DEFINED
  #define CLHEP_SQR_DEFINED 1
#endif
#ifndef ATLAS_PACKAGE_NAME
  #define ATLAS_PACKAGE_NAME "AthenaPoolExampleData"
#endif
#ifndef EIGEN_DONT_VECTORIZE
  #define EIGEN_DONT_VECTORIZE 1
#endif
#ifndef CLHEP_MAX_MIN_DEFINED
  #define CLHEP_MAX_MIN_DEFINED 1
#endif
#ifndef CLHEP_ABS_DEFINED
  #define CLHEP_ABS_DEFINED 1
#endif
#ifndef CLHEP_SQR_DEFINED
  #define CLHEP_SQR_DEFINED 1
#endif
#ifndef BOOST_THREAD_NO_LIB
  #define BOOST_THREAD_NO_LIB 1
#endif
#ifndef BOOST_THREAD_DYN_LINK
  #define BOOST_THREAD_DYN_LINK 1
#endif
#ifndef BOOST_REGEX_NO_LIB
  #define BOOST_REGEX_NO_LIB 1
#endif
#ifndef BOOST_REGEX_DYN_LINK
  #define BOOST_REGEX_DYN_LINK 1
#endif
#ifndef BOOST_FIBER_NO_LIB
  #define BOOST_FIBER_NO_LIB 1
#endif
#ifndef BOOST_FIBER_DYN_LINK
  #define BOOST_FIBER_DYN_LINK 1
#endif
#ifndef BOOST_CONTEXT_NO_LIB
  #define BOOST_CONTEXT_NO_LIB 1
#endif
#ifndef BOOST_CONTEXT_DYN_LINK
  #define BOOST_CONTEXT_DYN_LINK 1
#endif
#ifndef BOOST_FILESYSTEM_NO_LIB
  #define BOOST_FILESYSTEM_NO_LIB 1
#endif
#ifndef BOOST_FILESYSTEM_DYN_LINK
  #define BOOST_FILESYSTEM_DYN_LINK 1
#endif
#ifndef BOOST_SYSTEM_NO_LIB
  #define BOOST_SYSTEM_NO_LIB 1
#endif
#ifndef BOOST_SYSTEM_DYN_LINK
  #define BOOST_SYSTEM_DYN_LINK 1
#endif
#ifndef BOOST_CHRONO_NO_LIB
  #define BOOST_CHRONO_NO_LIB 1
#endif
#ifndef BOOST_CHRONO_DYN_LINK
  #define BOOST_CHRONO_DYN_LINK 1
#endif
#ifndef FMT_SHARED
  #define FMT_SHARED 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
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

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"DataLink<ExampleHitContainer>", payloadCode, "@",
"DataVector<ExampleHit>", payloadCode, "@",
"DataVector<ExampleTrack>", payloadCode, "@",
"DataVector<xAOD::ExampleElectron_v1>", payloadCode, "@",
"ElementLink<ExampleHitContainer>", payloadCode, "@",
"ElementLinkVector<ExampleHitContainer>", payloadCode, "@",
"ExampleHit", payloadCode, "@",
"ExampleHitContainer", payloadCode, "@",
"ExampleTrack", payloadCode, "@",
"ExampleTrackContainer", payloadCode, "@",
"Navigable<ExampleHitContainer,double,std::vector<std::pair<ElementLink<ExampleHitContainer>,double> > >", payloadCode, "@",
"Navigable<ExampleHitContainer,double,vector<pair<ElementLink<ExampleHitContainer>,double> > >", payloadCode, "@",
"SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer> >", payloadCode, "@",
"SG::AuxTypeVectorFactory<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >", payloadCode, "@",
"SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer> >", payloadCode, "@",
"SG::AuxTypeVectorFactoryImpl<ElementLink<ExampleHitContainer>,allocator<ElementLink<ExampleHitContainer> > >", payloadCode, "@",
"SG::ELVRef<ExampleHitContainer>", payloadCode, "@",
"xAOD::ExampleElectron", payloadCode, "@",
"xAOD::ExampleElectronAuxContainer", payloadCode, "@",
"xAOD::ExampleElectronAuxContainer_v1", payloadCode, "@",
"xAOD::ExampleElectronContainer", payloadCode, "@",
"xAOD::ExampleElectronContainer_v1", payloadCode, "@",
"xAOD::ExampleElectron_v1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libAthenaPoolExampleDataDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libAthenaPoolExampleDataDict_Impl, {{"namespace DataVector_detail { template <typename B1, typename B2, typename B3> class VirtBases; }", 1},{"template <typename T> class DataVectorBase;", 1},{"template <typename T, typename BASE> class DataVector;", 1},{"namespace DataVector_detail { template <typename B> class DVLEltBase_init; }", 1}}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libAthenaPoolExampleDataDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libAthenaPoolExampleDataDict() {
  TriggerDictionaryInitialization_libAthenaPoolExampleDataDict_Impl();
}
