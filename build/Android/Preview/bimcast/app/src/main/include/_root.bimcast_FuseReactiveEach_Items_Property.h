// This file was generated based on C:\Users\ManailMJ\Documents\Dev\fuse\projects\bimcast\build\Android\Preview\cache\ux11\bimcast.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct bimcast_FuseReactiveEach_Items_Property;}

namespace g{

// internal sealed class bimcast_FuseReactiveEach_Items_Property :1
// {
::g::Uno::UX::Property1_type* bimcast_FuseReactiveEach_Items_Property_typeof();
void bimcast_FuseReactiveEach_Items_Property__ctor_2_fn(bimcast_FuseReactiveEach_Items_Property* __this, ::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name);
void bimcast_FuseReactiveEach_Items_Property__Get_fn(bimcast_FuseReactiveEach_Items_Property* __this, uObject** __retval);
void bimcast_FuseReactiveEach_Items_Property__New1_fn(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name, bimcast_FuseReactiveEach_Items_Property** __retval);
void bimcast_FuseReactiveEach_Items_Property__get_Object_fn(bimcast_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void bimcast_FuseReactiveEach_Items_Property__Set_fn(bimcast_FuseReactiveEach_Items_Property* __this, uObject* v, uObject* origin);
void bimcast_FuseReactiveEach_Items_Property__get_SupportsOriginSetter_fn(bimcast_FuseReactiveEach_Items_Property* __this, bool* __retval);

struct bimcast_FuseReactiveEach_Items_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Reactive::Each*> _obj;

    void ctor_2(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
    static bimcast_FuseReactiveEach_Items_Property* New1(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
