
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_StringContent$UndoPosRef__
#define __javax_swing_text_StringContent$UndoPosRef__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
          class StringContent;
          class StringContent$Mark;
          class StringContent$UndoPosRef;
      }
    }
  }
}

class javax::swing::text::StringContent$UndoPosRef : public ::java::lang::Object
{

public: // actually package-private
  StringContent$UndoPosRef(::javax::swing::text::StringContent *, ::javax::swing::text::StringContent$Mark *);
  virtual void reset();
private:
  ::javax::swing::text::StringContent$Mark * __attribute__((aligned(__alignof__( ::java::lang::Object)))) mark;
  jint undoOffset;
public: // actually package-private
  ::javax::swing::text::StringContent * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_StringContent$UndoPosRef__
