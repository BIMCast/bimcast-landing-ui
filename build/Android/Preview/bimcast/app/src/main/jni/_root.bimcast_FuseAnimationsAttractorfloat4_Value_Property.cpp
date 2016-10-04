// This file was generated based on C:\Users\ManailMJ\Documents\Dev\fuse\projects\bimcast\build\Android\Preview\cache\ux11\bimcast.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.bimcast_FuseAnimationsAttractorfloat4_Value_Property.h>
#include <Fuse.Animations.Attractor-1.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class bimcast_FuseAnimationsAttractorfloat4_Value_Property :100
// {
static void bimcast_FuseAnimationsAttractorfloat4_Value_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Animations::Attractor_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::bimcast_FuseAnimationsAttractorfloat4_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* bimcast_FuseAnimationsAttractorfloat4_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(bimcast_FuseAnimationsAttractorfloat4_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("bimcast_FuseAnimationsAttractorfloat4_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = bimcast_FuseAnimationsAttractorfloat4_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))bimcast_FuseAnimationsAttractorfloat4_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))bimcast_FuseAnimationsAttractorfloat4_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))bimcast_FuseAnimationsAttractorfloat4_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))bimcast_FuseAnimationsAttractorfloat4_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public bimcast_FuseAnimationsAttractorfloat4_Value_Property(Fuse.Animations.Attractor<float4> obj, Uno.UX.Selector name) :103
void bimcast_FuseAnimationsAttractorfloat4_Value_Property__ctor_2_fn(bimcast_FuseAnimationsAttractorfloat4_Value_Property* __this, ::g::Fuse::Animations::Attractor* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :105
void bimcast_FuseAnimationsAttractorfloat4_Value_Property__Get_fn(bimcast_FuseAnimationsAttractorfloat4_Value_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("bimcast_FuseAnimationsAttractorfloat4_Value_Property", "Get()");
    ::g::Uno::Float4 ret2;
    return *__retval = (::g::Fuse::Animations::Attractor__get_Value_fn(uPtr(__this->_obj), &ret2), ret2), void();
}

// public bimcast_FuseAnimationsAttractorfloat4_Value_Property New(Fuse.Animations.Attractor<float4> obj, Uno.UX.Selector name) :103
void bimcast_FuseAnimationsAttractorfloat4_Value_Property__New1_fn(::g::Fuse::Animations::Attractor* obj, ::g::Uno::UX::Selector* name, bimcast_FuseAnimationsAttractorfloat4_Value_Property** __retval)
{
    *__retval = bimcast_FuseAnimationsAttractorfloat4_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :104
void bimcast_FuseAnimationsAttractorfloat4_Value_Property__get_Object_fn(bimcast_FuseAnimationsAttractorfloat4_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("bimcast_FuseAnimationsAttractorfloat4_Value_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :106
void bimcast_FuseAnimationsAttractorfloat4_Value_Property__Set_fn(bimcast_FuseAnimationsAttractorfloat4_Value_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("bimcast_FuseAnimationsAttractorfloat4_Value_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    ::g::Fuse::Animations::Attractor__set_Value_fn(uPtr(__this->_obj), uCRef(v_));
}

// public override sealed bool get_SupportsOriginSetter() :107
void bimcast_FuseAnimationsAttractorfloat4_Value_Property__get_SupportsOriginSetter_fn(bimcast_FuseAnimationsAttractorfloat4_Value_Property* __this, bool* __retval)
{
    uStackFrame __("bimcast_FuseAnimationsAttractorfloat4_Value_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public bimcast_FuseAnimationsAttractorfloat4_Value_Property(Fuse.Animations.Attractor<float4> obj, Uno.UX.Selector name) [instance] :103
void bimcast_FuseAnimationsAttractorfloat4_Value_Property::ctor_2(::g::Fuse::Animations::Attractor* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("bimcast_FuseAnimationsAttractorfloat4_Value_Property", ".ctor(Fuse.Animations.Attractor<float4>,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public bimcast_FuseAnimationsAttractorfloat4_Value_Property New(Fuse.Animations.Attractor<float4> obj, Uno.UX.Selector name) [static] :103
bimcast_FuseAnimationsAttractorfloat4_Value_Property* bimcast_FuseAnimationsAttractorfloat4_Value_Property::New1(::g::Fuse::Animations::Attractor* obj, ::g::Uno::UX::Selector name)
{
    bimcast_FuseAnimationsAttractorfloat4_Value_Property* obj1 = (bimcast_FuseAnimationsAttractorfloat4_Value_Property*)uNew(bimcast_FuseAnimationsAttractorfloat4_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
