
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_PortableInterceptor_AdapterStateHelper__
#define __org_omg_PortableInterceptor_AdapterStateHelper__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
      namespace PortableInterceptor
      {
          class AdapterStateHelper;
      }
    }
  }
}

class org::omg::PortableInterceptor::AdapterStateHelper : public ::java::lang::Object
{

public:
  AdapterStateHelper();
  static ::org::omg::CORBA::TypeCode * type();
  static void insert(::org::omg::CORBA::Any *, jshort);
  static jshort extract(::org::omg::CORBA::Any *);
  static ::java::lang::String * id();
  static jshort read(::org::omg::CORBA::portable::InputStream *);
  static void write(::org::omg::CORBA::portable::OutputStream *, jshort);
  static ::java::lang::Class class$;
};

#endif // __org_omg_PortableInterceptor_AdapterStateHelper__
