
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_metal_MetalSliderUI$MetalPropertyListener__
#define __javax_swing_plaf_metal_MetalSliderUI$MetalPropertyListener__

#pragma interface

#include <javax/swing/plaf/basic/BasicSliderUI$PropertyChangeHandler.h>
extern "Java"
{
  namespace java
  {
    namespace beans
    {
        class PropertyChangeEvent;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace metal
        {
            class MetalSliderUI;
            class MetalSliderUI$MetalPropertyListener;
        }
      }
    }
  }
}

class javax::swing::plaf::metal::MetalSliderUI$MetalPropertyListener : public ::javax::swing::plaf::basic::BasicSliderUI$PropertyChangeHandler
{

public: // actually protected
  MetalSliderUI$MetalPropertyListener(::javax::swing::plaf::metal::MetalSliderUI *);
public:
  virtual void propertyChange(::java::beans::PropertyChangeEvent *);
public: // actually package-private
  ::javax::swing::plaf::metal::MetalSliderUI * __attribute__((aligned(__alignof__( ::javax::swing::plaf::basic::BasicSliderUI$PropertyChangeHandler)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_metal_MetalSliderUI$MetalPropertyListener__