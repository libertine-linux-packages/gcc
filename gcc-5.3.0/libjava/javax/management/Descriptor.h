
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_management_Descriptor__
#define __javax_management_Descriptor__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace management
    {
        class Descriptor;
    }
  }
}

class javax::management::Descriptor : public ::java::lang::Object
{

public:
  virtual ::java::lang::Object * clone() = 0;
  virtual jboolean equals(::java::lang::Object *) = 0;
  virtual JArray< ::java::lang::String * > * getFieldNames() = 0;
  virtual JArray< ::java::lang::String * > * getFields() = 0;
  virtual ::java::lang::Object * getFieldValue(::java::lang::String *) = 0;
  virtual JArray< ::java::lang::Object * > * getFieldValues(JArray< ::java::lang::String * > *) = 0;
  virtual jint hashCode() = 0;
  virtual jboolean isValid() = 0;
  virtual void removeField(::java::lang::String *) = 0;
  virtual void setField(::java::lang::String *, ::java::lang::Object *) = 0;
  virtual void setFields(JArray< ::java::lang::String * > *, JArray< ::java::lang::Object * > *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_management_Descriptor__