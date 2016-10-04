// This file was generated based on C:\Users\ManailMJ\Documents\Dev\fuse\projects\bimcast\build\Android\Preview\cache\ux11\bimcast.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.bimcast_FuseReactiveEach_Items_Property.h>
#include <Fuse.Reactive.Each.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class bimcast_FuseReactiveEach_Items_Property :1
// {
static void bimcast_FuseReactiveEach_Items_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Reactive::Each_typeof(), offsetof(::g::bimcast_FuseReactiveEach_Items_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* bimcast_FuseReactiveEach_Items_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(bimcast_FuseReactiveEach_Items_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("bimcast_FuseReactiveEach_Items_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()));
    type->fp_build_ = bimcast_FuseReactiveEach_Items_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))bimcast_FuseReactiveEach_Items_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))bimcast_FuseReactiveEach_Items_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))bimcast_FuseReactiveEach_Items_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))bimcast_FuseReactiveEach_Items_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public bimcast_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj, Uno.UX.Selector name) :4
void bimcast_FuseReactiveEach_Items_Property__ctor_2_fn(bimcast_FuseReactiveEach_Items_Property* __this, ::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed object Get() :6
void bimcast_FuseReactiveEach_Items_Property__Get_fn(bimcast_FuseReactiveEach_Items_Property* __this, uObject** __retval)
{
    uStackFrame __("bimcast_FuseReactiveEach_Items_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Items(), void();
}

// public bimcast_FuseReactiveEach_Items_Property New(Fuse.Reactive.Each obj, Uno.UX.Selector name) :4
void bimcast_FuseReactiveEach_Items_Property__New1_fn(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name, bimcast_FuseReactiveEach_Items_Property** __retval)
{
    *__retval = bimcast_FuseReactiveEach_Items_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :5
void bimcast_FuseReactiveEach_Items_Property__get_Object_fn(bimcast_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("bimcast_FuseReactiveEach_Items_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(object v, Uno.UX.IPropertyListener origin) :7
void bimcast_FuseReactiveEach_Items_Property__Set_fn(bimcast_FuseReactiveEach_Items_Property* __this, uObject* v, uObject* origin)
{
    uStackFrame __("bimcast_FuseReactiveEach_Items_Property", "Set(object,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->Items(v);
}

// public override sealed bool get_SupportsOriginSetter() :8
void bimcast_FuseReactiveEach_Items_Property__get_SupportsOriginSetter_fn(bimcast_FuseReactiveEach_Items_Property* __this, bool* __retval)
{
    uStackFrame __("bimcast_FuseReactiveEach_Items_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public bimcast_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj, Uno.UX.Selector name) [instance] :4
void bimcast_FuseReactiveEach_Items_Property::ctor_2(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("bimcast_FuseReactiveEach_Items_Property", ".ctor(Fuse.Reactive.Each,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public bimcast_FuseReactiveEach_Items_Property New(Fuse.Reactive.Each obj, Uno.UX.Selector name) [static] :4
bimcast_FuseReactiveEach_Items_Property* bimcast_FuseReactiveEach_Items_Property::New1(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name)
{
    bimcast_FuseReactiveEach_Items_Property* obj1 = (bimcast_FuseReactiveEach_Items_Property*)uNew(bimcast_FuseReactiveEach_Items_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
