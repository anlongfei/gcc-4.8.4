
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_swing_text_html_css_CSSParser$1__
#define __gnu_javax_swing_text_html_css_CSSParser$1__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace swing
      {
        namespace text
        {
          namespace html
          {
            namespace css
            {
                class CSSParser$1;
                class Selector;
            }
          }
        }
      }
    }
  }
}

class gnu::javax::swing::text::html::css::CSSParser$1 : public ::java::lang::Object
{

public: // actually package-private
  CSSParser$1();
public:
  virtual void startStatement(JArray< ::gnu::javax::swing::text::html::css::Selector * > *);
  virtual void endStatement();
  virtual void declaration(::java::lang::String *, ::java::lang::String *);
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_swing_text_html_css_CSSParser$1__
