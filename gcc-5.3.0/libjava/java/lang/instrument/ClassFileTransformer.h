
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_instrument_ClassFileTransformer__
#define __java_lang_instrument_ClassFileTransformer__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
        class ProtectionDomain;
    }
  }
}

class java::lang::instrument::ClassFileTransformer : public ::java::lang::Object
{

public:
  virtual JArray< jbyte > * transform(::java::lang::ClassLoader *, ::java::lang::String *, ::java::lang::Class *, ::java::security::ProtectionDomain *, JArray< jbyte > *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __java_lang_instrument_ClassFileTransformer__
