// This file was generated based on C:\Users\ManailMJ\Documents\Dev\fuse\projects\bimcast\.uno\ux11\bimcast.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.bimcast_FuseControlsCircle_Color_Property.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Shape.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class bimcast_FuseControlsCircle_Color_Property :10
// {
static void bimcast_FuseControlsCircle_Color_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::bimcast_FuseControlsCircle_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* bimcast_FuseControlsCircle_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(bimcast_FuseControlsCircle_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("bimcast_FuseControlsCircle_Color_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = bimcast_FuseControlsCircle_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))bimcast_FuseControlsCircle_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))bimcast_FuseControlsCircle_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))bimcast_FuseControlsCircle_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))bimcast_FuseControlsCircle_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public bimcast_FuseControlsCircle_Color_Property(Fuse.Controls.Circle obj, Uno.UX.Selector name) :13
void bimcast_FuseControlsCircle_Color_Property__ctor_2_fn(bimcast_FuseControlsCircle_Color_Property* __this, ::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :15
void bimcast_FuseControlsCircle_Color_Property__Get_fn(bimcast_FuseControlsCircle_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public bimcast_FuseControlsCircle_Color_Property New(Fuse.Controls.Circle obj, Uno.UX.Selector name) :13
void bimcast_FuseControlsCircle_Color_Property__New1_fn(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector* name, bimcast_FuseControlsCircle_Color_Property** __retval)
{
    *__retval = bimcast_FuseControlsCircle_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :14
void bimcast_FuseControlsCircle_Color_Property__get_Object_fn(bimcast_FuseControlsCircle_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :16
void bimcast_FuseControlsCircle_Color_Property__Set_fn(bimcast_FuseControlsCircle_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :17
void bimcast_FuseControlsCircle_Color_Property__get_SupportsOriginSetter_fn(bimcast_FuseControlsCircle_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public bimcast_FuseControlsCircle_Color_Property(Fuse.Controls.Circle obj, Uno.UX.Selector name) [instance] :13
void bimcast_FuseControlsCircle_Color_Property::ctor_2(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public bimcast_FuseControlsCircle_Color_Property New(Fuse.Controls.Circle obj, Uno.UX.Selector name) [static] :13
bimcast_FuseControlsCircle_Color_Property* bimcast_FuseControlsCircle_Color_Property::New1(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector name)
{
    bimcast_FuseControlsCircle_Color_Property* obj1 = (bimcast_FuseControlsCircle_Color_Property*)uNew(bimcast_FuseControlsCircle_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
