
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_validation_xmlschema_XMLSchema__
#define __gnu_xml_validation_xmlschema_XMLSchema__

#pragma interface

#include <javax/xml/validation/Schema.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace validation
      {
        namespace xmlschema
        {
            class XMLSchema;
        }
      }
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace validation
      {
          class Validator;
          class ValidatorHandler;
      }
    }
  }
}

class gnu::xml::validation::xmlschema::XMLSchema : public ::javax::xml::validation::Schema
{

public: // actually package-private
  XMLSchema(::java::lang::String *, ::java::lang::String *, jint, jint, jboolean, jboolean);
public:
  ::javax::xml::validation::Validator * newValidator();
  ::javax::xml::validation::ValidatorHandler * newValidatorHandler();
public: // actually package-private
  static const jint FINAL_NONE = 0;
  static const jint FINAL_EXTENSION = 1;
  static const jint FINAL_RESTRICTION = 2;
  static const jint FINAL_LIST = 4;
  static const jint FINAL_UNION = 8;
  static const jint FINAL_ALL = 15;
  static const jint BLOCK_NONE = 0;
  static const jint BLOCK_EXTENSION = 1;
  static const jint BLOCK_RESTRICTION = 2;
  static const jint BLOCK_SUBSTITUTION = 4;
  static const jint BLOCK_ALL = 7;
  static const jint GLOBAL = 0;
  static const jint LOCAL = 1;
  static const jint ABSENT = 2;
  static const jint CONSTRAINT_NONE = 0;
  static const jint CONSTRAINT_DEFAULT = 1;
  static const jint CONSTRAINT_FIXED = 2;
  static const jint CONTENT_EMPTY = 0;
  static const jint CONTENT_SIMPLE = 1;
  static const jint CONTENT_MIXED = 2;
  static const jint CONTENT_ELEMENT_ONLY = 3;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::javax::xml::validation::Schema)))) targetNamespace;
  ::java::lang::String * version;
  jint finalDefault;
  jint blockDefault;
  jboolean attributeFormQualified;
  jboolean elementFormQualified;
  ::java::util::Map * elementDeclarations;
  ::java::util::Map * attributeDeclarations;
  ::java::util::Map * types;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_validation_xmlschema_XMLSchema__
