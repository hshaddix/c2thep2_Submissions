// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME AthenaPoolExampleConverterDictReflexDict
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
#include "/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleConverter/AthenaPoolExampleConverter/AthenaPoolExampleConverterDict.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *ExampleHit_p1_Dictionary();
   static void ExampleHit_p1_TClassManip(TClass*);
   static void *new_ExampleHit_p1(void *p = nullptr);
   static void *newArray_ExampleHit_p1(Long_t size, void *p);
   static void delete_ExampleHit_p1(void *p);
   static void deleteArray_ExampleHit_p1(void *p);
   static void destruct_ExampleHit_p1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleHit_p1*)
   {
      ::ExampleHit_p1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleHit_p1));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleHit_p1", "AthenaPoolExampleConverter/ExampleHit_p1.h", 20,
                  typeid(::ExampleHit_p1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleHit_p1_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleHit_p1) );
      instance.SetNew(&new_ExampleHit_p1);
      instance.SetNewArray(&newArray_ExampleHit_p1);
      instance.SetDelete(&delete_ExampleHit_p1);
      instance.SetDeleteArray(&deleteArray_ExampleHit_p1);
      instance.SetDestructor(&destruct_ExampleHit_p1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleHit_p1*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleHit_p1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleHit_p1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleHit_p1_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleHit_p1*>(nullptr))->GetClass();
      ExampleHit_p1_TClassManip(theClass);
   return theClass;
   }

   static void ExampleHit_p1_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleHitContainer_p1_Dictionary();
   static void ExampleHitContainer_p1_TClassManip(TClass*);
   static void *new_ExampleHitContainer_p1(void *p = nullptr);
   static void *newArray_ExampleHitContainer_p1(Long_t size, void *p);
   static void delete_ExampleHitContainer_p1(void *p);
   static void deleteArray_ExampleHitContainer_p1(void *p);
   static void destruct_ExampleHitContainer_p1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleHitContainer_p1*)
   {
      ::ExampleHitContainer_p1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleHitContainer_p1));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleHitContainer_p1", "AthenaPoolExampleConverter/ExampleHitContainer_p1.h", 20,
                  typeid(::ExampleHitContainer_p1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleHitContainer_p1_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleHitContainer_p1) );
      instance.SetNew(&new_ExampleHitContainer_p1);
      instance.SetNewArray(&newArray_ExampleHitContainer_p1);
      instance.SetDelete(&delete_ExampleHitContainer_p1);
      instance.SetDeleteArray(&deleteArray_ExampleHitContainer_p1);
      instance.SetDestructor(&destruct_ExampleHitContainer_p1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleHitContainer_p1*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleHitContainer_p1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleHitContainer_p1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleHitContainer_p1_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleHitContainer_p1*>(nullptr))->GetClass();
      ExampleHitContainer_p1_TClassManip(theClass);
   return theClass;
   }

   static void ExampleHitContainer_p1_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("id","6BB89FA1-EB62-4641-97CA-3F8DB6588053");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleTrack_p1_Dictionary();
   static void ExampleTrack_p1_TClassManip(TClass*);
   static void *new_ExampleTrack_p1(void *p = nullptr);
   static void *newArray_ExampleTrack_p1(Long_t size, void *p);
   static void delete_ExampleTrack_p1(void *p);
   static void deleteArray_ExampleTrack_p1(void *p);
   static void destruct_ExampleTrack_p1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleTrack_p1*)
   {
      ::ExampleTrack_p1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleTrack_p1));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleTrack_p1", "AthenaPoolExampleConverter/ExampleTrack_p1.h", 26,
                  typeid(::ExampleTrack_p1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleTrack_p1_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleTrack_p1) );
      instance.SetNew(&new_ExampleTrack_p1);
      instance.SetNewArray(&newArray_ExampleTrack_p1);
      instance.SetDelete(&delete_ExampleTrack_p1);
      instance.SetDeleteArray(&deleteArray_ExampleTrack_p1);
      instance.SetDestructor(&destruct_ExampleTrack_p1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleTrack_p1*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleTrack_p1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleTrack_p1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleTrack_p1_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleTrack_p1*>(nullptr))->GetClass();
      ExampleTrack_p1_TClassManip(theClass);
   return theClass;
   }

   static void ExampleTrack_p1_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleTrackContainer_p1_Dictionary();
   static void ExampleTrackContainer_p1_TClassManip(TClass*);
   static void *new_ExampleTrackContainer_p1(void *p = nullptr);
   static void *newArray_ExampleTrackContainer_p1(Long_t size, void *p);
   static void delete_ExampleTrackContainer_p1(void *p);
   static void deleteArray_ExampleTrackContainer_p1(void *p);
   static void destruct_ExampleTrackContainer_p1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleTrackContainer_p1*)
   {
      ::ExampleTrackContainer_p1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleTrackContainer_p1));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleTrackContainer_p1", "AthenaPoolExampleConverter/ExampleTrackContainer_p1.h", 19,
                  typeid(::ExampleTrackContainer_p1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleTrackContainer_p1_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleTrackContainer_p1) );
      instance.SetNew(&new_ExampleTrackContainer_p1);
      instance.SetNewArray(&newArray_ExampleTrackContainer_p1);
      instance.SetDelete(&delete_ExampleTrackContainer_p1);
      instance.SetDeleteArray(&deleteArray_ExampleTrackContainer_p1);
      instance.SetDestructor(&destruct_ExampleTrackContainer_p1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleTrackContainer_p1*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleTrackContainer_p1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleTrackContainer_p1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleTrackContainer_p1_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleTrackContainer_p1*>(nullptr))->GetClass();
      ExampleTrackContainer_p1_TClassManip(theClass);
   return theClass;
   }

   static void ExampleTrackContainer_p1_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("id","FF777FDA-721C-4756-BBF3-4CE28C2A3AF5");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleHit_p0_Dictionary();
   static void ExampleHit_p0_TClassManip(TClass*);
   static void *new_ExampleHit_p0(void *p = nullptr);
   static void *newArray_ExampleHit_p0(Long_t size, void *p);
   static void delete_ExampleHit_p0(void *p);
   static void deleteArray_ExampleHit_p0(void *p);
   static void destruct_ExampleHit_p0(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleHit_p0*)
   {
      ::ExampleHit_p0 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleHit_p0));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleHit_p0", "AthenaPoolExampleConverter/ExampleHit_p0.h", 19,
                  typeid(::ExampleHit_p0), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleHit_p0_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleHit_p0) );
      instance.SetNew(&new_ExampleHit_p0);
      instance.SetNewArray(&newArray_ExampleHit_p0);
      instance.SetDelete(&delete_ExampleHit_p0);
      instance.SetDeleteArray(&deleteArray_ExampleHit_p0);
      instance.SetDestructor(&destruct_ExampleHit_p0);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleHit_p0*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleHit_p0*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleHit_p0*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleHit_p0_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleHit_p0*>(nullptr))->GetClass();
      ExampleHit_p0_TClassManip(theClass);
   return theClass;
   }

   static void ExampleHit_p0_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleHitStreamer_p0_Dictionary();
   static void ExampleHitStreamer_p0_TClassManip(TClass*);
   static void *new_ExampleHitStreamer_p0(void *p = nullptr);
   static void *newArray_ExampleHitStreamer_p0(Long_t size, void *p);
   static void delete_ExampleHitStreamer_p0(void *p);
   static void deleteArray_ExampleHitStreamer_p0(void *p);
   static void destruct_ExampleHitStreamer_p0(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleHitStreamer_p0*)
   {
      ::ExampleHitStreamer_p0 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleHitStreamer_p0));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleHitStreamer_p0", "AthenaPoolExampleConverter/ExampleHitStreamer_p0.h", 22,
                  typeid(::ExampleHitStreamer_p0), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleHitStreamer_p0_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleHitStreamer_p0) );
      instance.SetNew(&new_ExampleHitStreamer_p0);
      instance.SetNewArray(&newArray_ExampleHitStreamer_p0);
      instance.SetDelete(&delete_ExampleHitStreamer_p0);
      instance.SetDeleteArray(&deleteArray_ExampleHitStreamer_p0);
      instance.SetDestructor(&destruct_ExampleHitStreamer_p0);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleHitStreamer_p0*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleHitStreamer_p0*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleHitStreamer_p0*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleHitStreamer_p0_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleHitStreamer_p0*>(nullptr))->GetClass();
      ExampleHitStreamer_p0_TClassManip(theClass);
   return theClass;
   }

   static void ExampleHitStreamer_p0_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleHit_p1(void *p) {
      return  p ? new(p) ::ExampleHit_p1 : new ::ExampleHit_p1;
   }
   static void *newArray_ExampleHit_p1(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleHit_p1[nElements] : new ::ExampleHit_p1[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleHit_p1(void *p) {
      delete (static_cast<::ExampleHit_p1*>(p));
   }
   static void deleteArray_ExampleHit_p1(void *p) {
      delete [] (static_cast<::ExampleHit_p1*>(p));
   }
   static void destruct_ExampleHit_p1(void *p) {
      typedef ::ExampleHit_p1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleHit_p1

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleHitContainer_p1(void *p) {
      return  p ? new(p) ::ExampleHitContainer_p1 : new ::ExampleHitContainer_p1;
   }
   static void *newArray_ExampleHitContainer_p1(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleHitContainer_p1[nElements] : new ::ExampleHitContainer_p1[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleHitContainer_p1(void *p) {
      delete (static_cast<::ExampleHitContainer_p1*>(p));
   }
   static void deleteArray_ExampleHitContainer_p1(void *p) {
      delete [] (static_cast<::ExampleHitContainer_p1*>(p));
   }
   static void destruct_ExampleHitContainer_p1(void *p) {
      typedef ::ExampleHitContainer_p1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleHitContainer_p1

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleTrack_p1(void *p) {
      return  p ? new(p) ::ExampleTrack_p1 : new ::ExampleTrack_p1;
   }
   static void *newArray_ExampleTrack_p1(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleTrack_p1[nElements] : new ::ExampleTrack_p1[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleTrack_p1(void *p) {
      delete (static_cast<::ExampleTrack_p1*>(p));
   }
   static void deleteArray_ExampleTrack_p1(void *p) {
      delete [] (static_cast<::ExampleTrack_p1*>(p));
   }
   static void destruct_ExampleTrack_p1(void *p) {
      typedef ::ExampleTrack_p1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleTrack_p1

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleTrackContainer_p1(void *p) {
      return  p ? new(p) ::ExampleTrackContainer_p1 : new ::ExampleTrackContainer_p1;
   }
   static void *newArray_ExampleTrackContainer_p1(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleTrackContainer_p1[nElements] : new ::ExampleTrackContainer_p1[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleTrackContainer_p1(void *p) {
      delete (static_cast<::ExampleTrackContainer_p1*>(p));
   }
   static void deleteArray_ExampleTrackContainer_p1(void *p) {
      delete [] (static_cast<::ExampleTrackContainer_p1*>(p));
   }
   static void destruct_ExampleTrackContainer_p1(void *p) {
      typedef ::ExampleTrackContainer_p1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleTrackContainer_p1

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleHit_p0(void *p) {
      return  p ? new(p) ::ExampleHit_p0 : new ::ExampleHit_p0;
   }
   static void *newArray_ExampleHit_p0(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleHit_p0[nElements] : new ::ExampleHit_p0[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleHit_p0(void *p) {
      delete (static_cast<::ExampleHit_p0*>(p));
   }
   static void deleteArray_ExampleHit_p0(void *p) {
      delete [] (static_cast<::ExampleHit_p0*>(p));
   }
   static void destruct_ExampleHit_p0(void *p) {
      typedef ::ExampleHit_p0 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleHit_p0

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleHitStreamer_p0(void *p) {
      return  p ? new(p) ::ExampleHitStreamer_p0 : new ::ExampleHitStreamer_p0;
   }
   static void *newArray_ExampleHitStreamer_p0(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleHitStreamer_p0[nElements] : new ::ExampleHitStreamer_p0[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleHitStreamer_p0(void *p) {
      delete (static_cast<::ExampleHitStreamer_p0*>(p));
   }
   static void deleteArray_ExampleHitStreamer_p0(void *p) {
      delete [] (static_cast<::ExampleHitStreamer_p0*>(p));
   }
   static void destruct_ExampleHitStreamer_p0(void *p) {
      typedef ::ExampleHitStreamer_p0 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleHitStreamer_p0

namespace ROOT {
   static TClass *vectorlEExampleTrack_p1gR_Dictionary();
   static void vectorlEExampleTrack_p1gR_TClassManip(TClass*);
   static void *new_vectorlEExampleTrack_p1gR(void *p = nullptr);
   static void *newArray_vectorlEExampleTrack_p1gR(Long_t size, void *p);
   static void delete_vectorlEExampleTrack_p1gR(void *p);
   static void deleteArray_vectorlEExampleTrack_p1gR(void *p);
   static void destruct_vectorlEExampleTrack_p1gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleTrack_p1>*)
   {
      vector<ExampleTrack_p1> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleTrack_p1>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleTrack_p1>", -2, "vector", 423,
                  typeid(vector<ExampleTrack_p1>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleTrack_p1gR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleTrack_p1>) );
      instance.SetNew(&new_vectorlEExampleTrack_p1gR);
      instance.SetNewArray(&newArray_vectorlEExampleTrack_p1gR);
      instance.SetDelete(&delete_vectorlEExampleTrack_p1gR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleTrack_p1gR);
      instance.SetDestructor(&destruct_vectorlEExampleTrack_p1gR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleTrack_p1> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ExampleTrack_p1>","std::vector<ExampleTrack_p1, std::allocator<ExampleTrack_p1> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ExampleTrack_p1>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleTrack_p1gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ExampleTrack_p1>*>(nullptr))->GetClass();
      vectorlEExampleTrack_p1gR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleTrack_p1gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleTrack_p1gR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleTrack_p1> : new vector<ExampleTrack_p1>;
   }
   static void *newArray_vectorlEExampleTrack_p1gR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleTrack_p1>[nElements] : new vector<ExampleTrack_p1>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleTrack_p1gR(void *p) {
      delete (static_cast<vector<ExampleTrack_p1>*>(p));
   }
   static void deleteArray_vectorlEExampleTrack_p1gR(void *p) {
      delete [] (static_cast<vector<ExampleTrack_p1>*>(p));
   }
   static void destruct_vectorlEExampleTrack_p1gR(void *p) {
      typedef vector<ExampleTrack_p1> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleTrack_p1>

namespace ROOT {
   static TClass *vectorlEExampleHit_p1gR_Dictionary();
   static void vectorlEExampleHit_p1gR_TClassManip(TClass*);
   static void *new_vectorlEExampleHit_p1gR(void *p = nullptr);
   static void *newArray_vectorlEExampleHit_p1gR(Long_t size, void *p);
   static void delete_vectorlEExampleHit_p1gR(void *p);
   static void deleteArray_vectorlEExampleHit_p1gR(void *p);
   static void destruct_vectorlEExampleHit_p1gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleHit_p1>*)
   {
      vector<ExampleHit_p1> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleHit_p1>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleHit_p1>", -2, "vector", 423,
                  typeid(vector<ExampleHit_p1>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleHit_p1gR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleHit_p1>) );
      instance.SetNew(&new_vectorlEExampleHit_p1gR);
      instance.SetNewArray(&newArray_vectorlEExampleHit_p1gR);
      instance.SetDelete(&delete_vectorlEExampleHit_p1gR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleHit_p1gR);
      instance.SetDestructor(&destruct_vectorlEExampleHit_p1gR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleHit_p1> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ExampleHit_p1>","std::vector<ExampleHit_p1, std::allocator<ExampleHit_p1> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ExampleHit_p1>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleHit_p1gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ExampleHit_p1>*>(nullptr))->GetClass();
      vectorlEExampleHit_p1gR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleHit_p1gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleHit_p1gR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleHit_p1> : new vector<ExampleHit_p1>;
   }
   static void *newArray_vectorlEExampleHit_p1gR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleHit_p1>[nElements] : new vector<ExampleHit_p1>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleHit_p1gR(void *p) {
      delete (static_cast<vector<ExampleHit_p1>*>(p));
   }
   static void deleteArray_vectorlEExampleHit_p1gR(void *p) {
      delete [] (static_cast<vector<ExampleHit_p1>*>(p));
   }
   static void destruct_vectorlEExampleHit_p1gR(void *p) {
      typedef vector<ExampleHit_p1> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleHit_p1>

namespace {
  void TriggerDictionaryInitialization_libAthenaPoolExampleConverterDict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libAthenaPoolExampleConverterDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$AthenaPoolExampleConverter/ExampleHit_p1.h")))  __attribute__((annotate("$clingAutoload$AthenaPoolExampleConverter/ExampleHitContainer_p1.h")))  ExampleHit_p1;
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
class __attribute__((annotate("$clingAutoload$AthenaPoolExampleConverter/ExampleTrack_p1.h")))  __attribute__((annotate("$clingAutoload$AthenaPoolExampleConverter/ExampleTrackContainer_p1.h")))  ExampleTrack_p1;
class __attribute__((annotate("$clingAutoload$AthenaPoolExampleConverter/ExampleHitContainer_p1.h")))  ExampleHitContainer_p1;
class __attribute__((annotate("$clingAutoload$AthenaPoolExampleConverter/ExampleTrackContainer_p1.h")))  ExampleTrackContainer_p1;
class __attribute__((annotate("$clingAutoload$AthenaPoolExampleConverter/ExampleHit_p0.h")))  ExampleHit_p0;
class __attribute__((annotate("$clingAutoload$AthenaPoolExampleConverter/ExampleHitStreamer_p0.h")))  ExampleHitStreamer_p0;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libAthenaPoolExampleConverterDict dictionary payload"

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
  #define ATLAS_PACKAGE_NAME "AthenaPoolExampleConverter"
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

#ifndef ATHENAPOOLEXAMPLECONVERTER_ATHENAPOOLEXAMPLECONVERTERDICT_H
#define ATHENAPOOLEXAMPLECONVERTER_ATHENAPOOLEXAMPLECONVERTERDICT_H

#include "AthenaPoolExampleConverter/ExampleHitContainer_p1.h"
#include "AthenaPoolExampleConverter/ExampleTrackContainer_p1.h"

#include "AthenaPoolExampleConverter/ExampleHit_p0.h"
#include "AthenaPoolExampleConverter/ExampleHitStreamer_p0.h"

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ExampleHitContainer_p1", payloadCode, "@",
"ExampleHitStreamer_p0", payloadCode, "@",
"ExampleHit_p0", payloadCode, "@",
"ExampleHit_p1", payloadCode, "@",
"ExampleTrackContainer_p1", payloadCode, "@",
"ExampleTrack_p1", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libAthenaPoolExampleConverterDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libAthenaPoolExampleConverterDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libAthenaPoolExampleConverterDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libAthenaPoolExampleConverterDict() {
  TriggerDictionaryInitialization_libAthenaPoolExampleConverterDict_Impl();
}
