// This file was generated based on C:\Users\ManailMJ\Documents\Dev\fuse\projects\bimcast\build\Android\Preview\cache\ux11\bimcast.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct bimcast_FuseControlsRectangle_Width_Property;}

namespace g{

// internal sealed class bimcast_FuseControlsRectangle_Width_Property :55
// {
::g::Uno::UX::Property1_type* bimcast_FuseControlsRectangle_Width_Property_typeof();
void bimcast_FuseControlsRectangle_Width_Property__ctor_2_fn(bimcast_FuseControlsRectangle_Width_Property* __this, ::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name);
void bimcast_FuseControlsRectangle_Width_Property__Get_fn(bimcast_FuseControlsRectangle_Width_Property* __this, ::g::Uno::UX::Size* __retval);
void bimcast_FuseControlsRectangle_Width_Property__New1_fn(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name, bimcast_FuseControlsRectangle_Width_Property** __retval);
void bimcast_FuseControlsRectangle_Width_Property__get_Object_fn(bimcast_FuseControlsRectangle_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void bimcast_FuseControlsRectangle_Width_Property__Set_fn(bimcast_FuseControlsRectangle_Width_Property* __this, ::g::Uno::UX::Size* v, uObject* origin);
void bimcast_FuseControlsRectangle_Width_Property__get_SupportsOriginSetter_fn(bimcast_FuseControlsRectangle_Width_Property* __this, bool* __retval);

struct bimcast_FuseControlsRectangle_Width_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Rectangle*> _obj;

    void ctor_2(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name);
    static bimcast_FuseControlsRectangle_Width_Property* New1(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
