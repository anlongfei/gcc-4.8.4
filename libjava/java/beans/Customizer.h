
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_beans_Customizer__
#define __java_beans_Customizer__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace beans
    {
        class Customizer;
        class PropertyChangeListener;
    }
  }
}

class java::beans::Customizer : public ::java::lang::Object
{

public:
  virtual void setObject(::java::lang::Object *) = 0;
  virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener *) = 0;
  virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __java_beans_Customizer__
