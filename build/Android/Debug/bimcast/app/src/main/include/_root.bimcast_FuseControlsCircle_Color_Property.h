// This file was generated based on C:\Users\ManailMJ\Documents\Dev\fuse\projects\bimcast\.uno\ux11\bimcast.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct bimcast_FuseControlsCircle_Color_Property;}

namespace g{

// internal sealed class bimcast_FuseControlsCircle_Color_Property :10
// {
::g::Uno::UX::Property1_type* bimcast_FuseControlsCircle_Color_Property_typeof();
void bimcast_FuseControlsCircle_Color_Property__ctor_2_fn(bimcast_FuseControlsCircle_Color_Property* __this, ::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector* name);
void bimcast_FuseControlsCircle_Color_Property__Get_fn(bimcast_FuseControlsCircle_Color_Property* __this, ::g::Uno::Float4* __retval);
void bimcast_FuseControlsCircle_Color_Property__New1_fn(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector* name, bimcast_FuseControlsCircle_Color_Property** __retval);
void bimcast_FuseControlsCircle_Color_Property__get_Object_fn(bimcast_FuseControlsCircle_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void bimcast_FuseControlsCircle_Color_Property__Set_fn(bimcast_FuseControlsCircle_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin);
void bimcast_FuseControlsCircle_Color_Property__get_SupportsOriginSetter_fn(bimcast_FuseControlsCircle_Color_Property* __this, bool* __retval);

struct bimcast_FuseControlsCircle_Color_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Circle*> _obj;

    void ctor_2(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector name);
    static bimcast_FuseControlsCircle_Color_Property* New1(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
