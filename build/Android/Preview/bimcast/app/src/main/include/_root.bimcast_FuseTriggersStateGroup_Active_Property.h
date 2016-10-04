// This file was generated based on C:\Users\ManailMJ\Documents\Dev\fuse\projects\bimcast\build\Android\Preview\cache\ux11\bimcast.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.State.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Triggers{struct StateGroup;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct bimcast_FuseTriggersStateGroup_Active_Property;}

namespace g{

// internal sealed class bimcast_FuseTriggersStateGroup_Active_Property :37
// {
::g::Uno::UX::Property1_type* bimcast_FuseTriggersStateGroup_Active_Property_typeof();
void bimcast_FuseTriggersStateGroup_Active_Property__ctor_2_fn(bimcast_FuseTriggersStateGroup_Active_Property* __this, ::g::Fuse::Triggers::StateGroup* obj, ::g::Uno::UX::Selector* name);
void bimcast_FuseTriggersStateGroup_Active_Property__Get_fn(bimcast_FuseTriggersStateGroup_Active_Property* __this, ::g::Fuse::Triggers::State** __retval);
void bimcast_FuseTriggersStateGroup_Active_Property__New1_fn(::g::Fuse::Triggers::StateGroup* obj, ::g::Uno::UX::Selector* name, bimcast_FuseTriggersStateGroup_Active_Property** __retval);
void bimcast_FuseTriggersStateGroup_Active_Property__get_Object_fn(bimcast_FuseTriggersStateGroup_Active_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void bimcast_FuseTriggersStateGroup_Active_Property__Set_fn(bimcast_FuseTriggersStateGroup_Active_Property* __this, ::g::Fuse::Triggers::State* v, uObject* origin);
void bimcast_FuseTriggersStateGroup_Active_Property__get_SupportsOriginSetter_fn(bimcast_FuseTriggersStateGroup_Active_Property* __this, bool* __retval);

struct bimcast_FuseTriggersStateGroup_Active_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::StateGroup*> _obj;

    void ctor_2(::g::Fuse::Triggers::StateGroup* obj, ::g::Uno::UX::Selector name);
    static bimcast_FuseTriggersStateGroup_Active_Property* New1(::g::Fuse::Triggers::StateGroup* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
