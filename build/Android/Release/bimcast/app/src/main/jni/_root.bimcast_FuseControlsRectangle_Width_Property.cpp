// This file was generated based on C:\Users\ManailMJ\Documents\Dev\fuse\projects\bimcast\.uno\ux11\bimcast.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.bimcast_FuseControlsRectangle_Width_Property.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class bimcast_FuseControlsRectangle_Width_Property :55
// {
static void bimcast_FuseControlsRectangle_Width_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::bimcast_FuseControlsRectangle_Width_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* bimcast_FuseControlsRectangle_Width_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(bimcast_FuseControlsRectangle_Width_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("bimcast_FuseControlsRectangle_Width_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof()));
    type->fp_build_ = bimcast_FuseControlsRectangle_Width_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))bimcast_FuseControlsRectangle_Width_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))bimcast_FuseControlsRectangle_Width_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))bimcast_FuseControlsRectangle_Width_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))bimcast_FuseControlsRectangle_Width_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public bimcast_FuseControlsRectangle_Width_Property(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) :58
void bimcast_FuseControlsRectangle_Width_Property__ctor_2_fn(bimcast_FuseControlsRectangle_Width_Property* __this, ::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Uno.UX.Size Get() :60
void bimcast_FuseControlsRectangle_Width_Property__Get_fn(bimcast_FuseControlsRectangle_Width_Property* __this, ::g::Uno::UX::Size* __retval)
{
    return *__retval = uPtr(__this->_obj)->Width(), void();
}

// public bimcast_FuseControlsRectangle_Width_Property New(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) :58
void bimcast_FuseControlsRectangle_Width_Property__New1_fn(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name, bimcast_FuseControlsRectangle_Width_Property** __retval)
{
    *__retval = bimcast_FuseControlsRectangle_Width_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :59
void bimcast_FuseControlsRectangle_Width_Property__get_Object_fn(bimcast_FuseControlsRectangle_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.Size v, Uno.UX.IPropertyListener origin) :61
void bimcast_FuseControlsRectangle_Width_Property__Set_fn(bimcast_FuseControlsRectangle_Width_Property* __this, ::g::Uno::UX::Size* v, uObject* origin)
{
    ::g::Uno::UX::Size v_ = *v;
    uPtr(__this->_obj)->Width(v_);
}

// public override sealed bool get_SupportsOriginSetter() :62
void bimcast_FuseControlsRectangle_Width_Property__get_SupportsOriginSetter_fn(bimcast_FuseControlsRectangle_Width_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public bimcast_FuseControlsRectangle_Width_Property(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) [instance] :58
void bimcast_FuseControlsRectangle_Width_Property::ctor_2(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public bimcast_FuseControlsRectangle_Width_Property New(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) [static] :58
bimcast_FuseControlsRectangle_Width_Property* bimcast_FuseControlsRectangle_Width_Property::New1(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name)
{
    bimcast_FuseControlsRectangle_Width_Property* obj1 = (bimcast_FuseControlsRectangle_Width_Property*)uNew(bimcast_FuseControlsRectangle_Width_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g