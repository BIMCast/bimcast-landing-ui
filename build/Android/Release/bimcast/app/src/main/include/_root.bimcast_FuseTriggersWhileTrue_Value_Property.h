// This file was generated based on C:\Users\ManailMJ\Documents\Dev\fuse\projects\bimcast\.uno\ux11\bimcast.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct bimcast_FuseTriggersWhileTrue_Value_Property;}

namespace g{

// internal sealed class bimcast_FuseTriggersWhileTrue_Value_Property :46
// {
::g::Uno::UX::Property1_type* bimcast_FuseTriggersWhileTrue_Value_Property_typeof();
void bimcast_FuseTriggersWhileTrue_Value_Property__ctor_2_fn(bimcast_FuseTriggersWhileTrue_Value_Property* __this, ::g::Fuse::Triggers::WhileTrue* obj, ::g::Uno::UX::Selector* name);
void bimcast_FuseTriggersWhileTrue_Value_Property__Get_fn(bimcast_FuseTriggersWhileTrue_Value_Property* __this, bool* __retval);
void bimcast_FuseTriggersWhileTrue_Value_Property__New1_fn(::g::Fuse::Triggers::WhileTrue* obj, ::g::Uno::UX::Selector* name, bimcast_FuseTriggersWhileTrue_Value_Property** __retval);
void bimcast_FuseTriggersWhileTrue_Value_Property__get_Object_fn(bimcast_FuseTriggersWhileTrue_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void bimcast_FuseTriggersWhileTrue_Value_Property__Set_fn(bimcast_FuseTriggersWhileTrue_Value_Property* __this, bool* v, uObject* origin);
void bimcast_FuseTriggersWhileTrue_Value_Property__get_SupportsOriginSetter_fn(bimcast_FuseTriggersWhileTrue_Value_Property* __this, bool* __retval);

struct bimcast_FuseTriggersWhileTrue_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::WhileTrue*> _obj;

    void ctor_2(::g::Fuse::Triggers::WhileTrue* obj, ::g::Uno::UX::Selector name);
    static bimcast_FuseTriggersWhileTrue_Value_Property* New1(::g::Fuse::Triggers::WhileTrue* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
