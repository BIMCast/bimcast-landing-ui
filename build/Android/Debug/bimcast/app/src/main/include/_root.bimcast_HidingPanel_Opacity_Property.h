// This file was generated based on C:\Users\ManailMJ\Documents\Dev\fuse\projects\bimcast\.uno\ux11\bimcast.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct bimcast_HidingPanel_Opacity_Property;}
namespace g{struct HidingPanel;}

namespace g{

// internal sealed class bimcast_HidingPanel_Opacity_Property :19
// {
::g::Uno::UX::Property1_type* bimcast_HidingPanel_Opacity_Property_typeof();
void bimcast_HidingPanel_Opacity_Property__ctor_2_fn(bimcast_HidingPanel_Opacity_Property* __this, ::g::HidingPanel* obj, ::g::Uno::UX::Selector* name);
void bimcast_HidingPanel_Opacity_Property__Get_fn(bimcast_HidingPanel_Opacity_Property* __this, float* __retval);
void bimcast_HidingPanel_Opacity_Property__New1_fn(::g::HidingPanel* obj, ::g::Uno::UX::Selector* name, bimcast_HidingPanel_Opacity_Property** __retval);
void bimcast_HidingPanel_Opacity_Property__get_Object_fn(bimcast_HidingPanel_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void bimcast_HidingPanel_Opacity_Property__Set_fn(bimcast_HidingPanel_Opacity_Property* __this, float* v, uObject* origin);
void bimcast_HidingPanel_Opacity_Property__get_SupportsOriginSetter_fn(bimcast_HidingPanel_Opacity_Property* __this, bool* __retval);

struct bimcast_HidingPanel_Opacity_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::HidingPanel*> _obj;

    void ctor_2(::g::HidingPanel* obj, ::g::Uno::UX::Selector name);
    static bimcast_HidingPanel_Opacity_Property* New1(::g::HidingPanel* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
