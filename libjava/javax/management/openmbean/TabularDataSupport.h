
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_management_openmbean_TabularDataSupport__
#define __javax_management_openmbean_TabularDataSupport__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace management
    {
      namespace openmbean
      {
          class CompositeData;
          class TabularDataSupport;
          class TabularType;
      }
    }
  }
}

class javax::management::openmbean::TabularDataSupport : public ::java::lang::Object
{

public:
  TabularDataSupport(::javax::management::openmbean::TabularType *);
  TabularDataSupport(::javax::management::openmbean::TabularType *, jint, jfloat);
  virtual JArray< ::java::lang::Object * > * calculateIndex(::javax::management::openmbean::CompositeData *);
  virtual void clear();
  virtual ::java::lang::Object * clone();
  virtual jboolean containsKey(::java::lang::Object *);
  virtual jboolean containsKey(JArray< ::java::lang::Object * > *);
  virtual jboolean containsValue(::java::lang::Object *);
  virtual jboolean containsValue(::javax::management::openmbean::CompositeData *);
  virtual ::java::util::Set * entrySet();
  virtual jboolean equals(::java::lang::Object *);
  virtual ::java::lang::Object * get(::java::lang::Object *);
  virtual ::javax::management::openmbean::CompositeData * get(JArray< ::java::lang::Object * > *);
  virtual ::javax::management::openmbean::TabularType * getTabularType();
  virtual jint hashCode();
  virtual jboolean isEmpty();
private:
  jboolean isKeyValid(JArray< ::java::lang::Object * > *);
public:
  virtual ::java::util::Set * keySet();
  virtual void put(::javax::management::openmbean::CompositeData *);
  virtual ::java::lang::Object * put(::java::lang::Object *, ::java::lang::Object *);
  virtual void putAll(JArray< ::javax::management::openmbean::CompositeData * > *);
  virtual void putAll(::java::util::Map *);
  virtual ::java::lang::Object * remove(::java::lang::Object *);
  virtual ::javax::management::openmbean::CompositeData * remove(JArray< ::java::lang::Object * > *);
private:
  void setMap(::java::util::HashMap *);
public:
  virtual jint size();
  virtual ::java::lang::String * toString();
  virtual ::java::util::Collection * values();
private:
  static const jlong serialVersionUID = 5720150593236309827LL;
  ::java::util::HashMap * __attribute__((aligned(__alignof__( ::java::lang::Object)))) dataMap;
  ::javax::management::openmbean::TabularType * tabularType;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_management_openmbean_TabularDataSupport__
