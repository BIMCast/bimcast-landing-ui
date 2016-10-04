// This file was generated based on C:\Users\ManailMJ\Documents\Dev\fuse\projects\bimcast\.uno\ux11\bimcast.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.bimcast_HidingPanel_Opacity_Property.h>
#include <_root.HidingPanel.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class bimcast_HidingPanel_Opacity_Property :19
// {
static void bimcast_HidingPanel_Opacity_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::HidingPanel_typeof(), offsetof(::g::bimcast_HidingPanel_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* bimcast_HidingPanel_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(bimcast_HidingPanel_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("bimcast_HidingPanel_Opacity_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_build_ = bimcast_HidingPanel_Opacity_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))bimcast_HidingPanel_Opacity_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))bimcast_HidingPanel_Opacity_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))bimcast_HidingPanel_Opacity_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))bimcast_HidingPanel_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public bimcast_HidingPanel_Opacity_Property(HidingPanel obj, Uno.UX.Selector name) :22
void bimcast_HidingPanel_Opacity_Property__ctor_2_fn(bimcast_HidingPanel_Opacity_Property* __this, ::g::HidingPanel* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :24
void bimcast_HidingPanel_Opacity_Property__Get_fn(bimcast_HidingPanel_Opacity_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// public bimcast_HidingPanel_Opacity_Property New(HidingPanel obj, Uno.UX.Selector name) :22
void bimcast_HidingPanel_Opacity_Property__New1_fn(::g::HidingPanel* obj, ::g::Uno::UX::Selector* name, bimcast_HidingPanel_Opacity_Property** __retval)
{
    *__retval = bimcast_HidingPanel_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :23
void bimcast_HidingPanel_Opacity_Property__get_Object_fn(bimcast_HidingPanel_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :25
void bimcast_HidingPanel_Opacity_Property__Set_fn(bimcast_HidingPanel_Opacity_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :26
void bimcast_HidingPanel_Opacity_Property__get_SupportsOriginSetter_fn(bimcast_HidingPanel_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public bimcast_HidingPanel_Opacity_Property(HidingPanel obj, Uno.UX.Selector name) [instance] :22
void bimcast_HidingPanel_Opacity_Property::ctor_2(::g::HidingPanel* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public bimcast_HidingPanel_Opacity_Property New(HidingPanel obj, Uno.UX.Selector name) [static] :22
bimcast_HidingPanel_Opacity_Property* bimcast_HidingPanel_Opacity_Property::New1(::g::HidingPanel* obj, ::g::Uno::UX::Selector name)
{
    bimcast_HidingPanel_Opacity_Property* obj1 = (bimcast_HidingPanel_Opacity_Property*)uNew(bimcast_HidingPanel_Opacity_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
