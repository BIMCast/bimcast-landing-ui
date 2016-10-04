// This file was generated based on C:\Users\ManailMJ\Documents\Dev\fuse\projects\bimcast\.uno\ux11\bimcast.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.bimcast_FuseControlsRectangle_ElementLayoutMaster_Property.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.Rectangle.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class bimcast_FuseControlsRectangle_ElementLayoutMaster_Property :82
// {
static void bimcast_FuseControlsRectangle_ElementLayoutMaster_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::bimcast_FuseControlsRectangle_ElementLayoutMaster_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* bimcast_FuseControlsRectangle_ElementLayoutMaster_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(bimcast_FuseControlsRectangle_ElementLayoutMaster_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("bimcast_FuseControlsRectangle_ElementLayoutMaster_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof()));
    type->fp_build_ = bimcast_FuseControlsRectangle_ElementLayoutMaster_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))bimcast_FuseControlsRectangle_ElementLayoutMaster_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))bimcast_FuseControlsRectangle_ElementLayoutMaster_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))bimcast_FuseControlsRectangle_ElementLayoutMaster_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))bimcast_FuseControlsRectangle_ElementLayoutMaster_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public bimcast_FuseControlsRectangle_ElementLayoutMaster_Property(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) :85
void bimcast_FuseControlsRectangle_ElementLayoutMaster_Property__ctor_2_fn(bimcast_FuseControlsRectangle_ElementLayoutMaster_Property* __this, ::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Fuse.Elements.Element Get() :87
void bimcast_FuseControlsRectangle_ElementLayoutMaster_Property__Get_fn(bimcast_FuseControlsRectangle_ElementLayoutMaster_Property* __this, ::g::Fuse::Elements::Element** __retval)
{
    return *__retval = ::g::Fuse::Controls::LayoutControl::GetLayoutMaster(__this->_obj), void();
}

// public bimcast_FuseControlsRectangle_ElementLayoutMaster_Property New(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) :85
void bimcast_FuseControlsRectangle_ElementLayoutMaster_Property__New1_fn(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name, bimcast_FuseControlsRectangle_ElementLayoutMaster_Property** __retval)
{
    *__retval = bimcast_FuseControlsRectangle_ElementLayoutMaster_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :86
void bimcast_FuseControlsRectangle_ElementLayoutMaster_Property__get_Object_fn(bimcast_FuseControlsRectangle_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Elements.Element v, Uno.UX.IPropertyListener origin) :88
void bimcast_FuseControlsRectangle_ElementLayoutMaster_Property__Set_fn(bimcast_FuseControlsRectangle_ElementLayoutMaster_Property* __this, ::g::Fuse::Elements::Element* v, uObject* origin)
{
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(__this->_obj, v);
}

// public override sealed bool get_SupportsOriginSetter() :89
void bimcast_FuseControlsRectangle_ElementLayoutMaster_Property__get_SupportsOriginSetter_fn(bimcast_FuseControlsRectangle_ElementLayoutMaster_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public bimcast_FuseControlsRectangle_ElementLayoutMaster_Property(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) [instance] :85
void bimcast_FuseControlsRectangle_ElementLayoutMaster_Property::ctor_2(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public bimcast_FuseControlsRectangle_ElementLayoutMaster_Property New(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) [static] :85
bimcast_FuseControlsRectangle_ElementLayoutMaster_Property* bimcast_FuseControlsRectangle_ElementLayoutMaster_Property::New1(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name)
{
    bimcast_FuseControlsRectangle_ElementLayoutMaster_Property* obj1 = (bimcast_FuseControlsRectangle_ElementLayoutMaster_Property*)uNew(bimcast_FuseControlsRectangle_ElementLayoutMaster_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
