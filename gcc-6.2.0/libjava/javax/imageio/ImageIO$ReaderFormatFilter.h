
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_imageio_ImageIO$ReaderFormatFilter__
#define __javax_imageio_ImageIO$ReaderFormatFilter__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace imageio
    {
        class ImageIO$ReaderFormatFilter;
    }
  }
}

class javax::imageio::ImageIO$ReaderFormatFilter : public ::java::lang::Object
{

public:
  ImageIO$ReaderFormatFilter(::java::lang::String *);
  jboolean filter(::java::lang::Object *);
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object)))) formatName;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_imageio_ImageIO$ReaderFormatFilter__