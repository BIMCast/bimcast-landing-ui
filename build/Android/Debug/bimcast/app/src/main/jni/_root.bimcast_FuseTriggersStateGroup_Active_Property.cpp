// This file was generated based on C:\Users\ManailMJ\Documents\Dev\fuse\projects\bimcast\.uno\ux11\bimcast.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.bimcast_FuseTriggersStateGroup_Active_Property.h>
#include <Fuse.Triggers.StateGroup.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class bimcast_FuseTriggersStateGroup_Active_Property :37
// {
static void bimcast_FuseTriggersStateGroup_Active_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Triggers::StateGroup_typeof(), offsetof(::g::bimcast_FuseTriggersStateGroup_Active_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* bimcast_FuseTriggersStateGroup_Active_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(bimcast_FuseTriggersStateGroup_Active_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("bimcast_FuseTriggersStateGroup_Active_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Triggers::State_typeof()));
    type->fp_build_ = bimcast_FuseTriggersStateGroup_Active_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))bimcast_FuseTriggersStateGroup_Active_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))bimcast_FuseTriggersStateGroup_Active_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))bimcast_FuseTriggersStateGroup_Active_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))bimcast_FuseTriggersStateGroup_Active_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public bimcast_FuseTriggersStateGroup_Active_Property(Fuse.Triggers.StateGroup obj, Uno.UX.Selector name) :40
void bimcast_FuseTriggersStateGroup_Active_Property__ctor_2_fn(bimcast_FuseTriggersStateGroup_Active_Property* __this, ::g::Fuse::Triggers::StateGroup* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Fuse.Triggers.State Get() :42
void bimcast_FuseTriggersStateGroup_Active_Property__Get_fn(bimcast_FuseTriggersStateGroup_Active_Property* __this, ::g::Fuse::Triggers::State** __retval)
{
    return *__retval = uPtr(__this->_obj)->Active(), void();
}

// public bimcast_FuseTriggersStateGroup_Active_Property New(Fuse.Triggers.StateGroup obj, Uno.UX.Selector name) :40
void bimcast_FuseTriggersStateGroup_Active_Property__New1_fn(::g::Fuse::Triggers::StateGroup* obj, ::g::Uno::UX::Selector* name, bimcast_FuseTriggersStateGroup_Active_Property** __retval)
{
    *__retval = bimcast_FuseTriggersStateGroup_Active_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :41
void bimcast_FuseTriggersStateGroup_Active_Property__get_Object_fn(bimcast_FuseTriggersStateGroup_Active_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Triggers.State v, Uno.UX.IPropertyListener origin) :43
void bimcast_FuseTriggersStateGroup_Active_Property__Set_fn(bimcast_FuseTriggersStateGroup_Active_Property* __this, ::g::Fuse::Triggers::State* v, uObject* origin)
{
    uPtr(__this->_obj)->Active(v);
}

// public override sealed bool get_SupportsOriginSetter() :44
void bimcast_FuseTriggersStateGroup_Active_Property__get_SupportsOriginSetter_fn(bimcast_FuseTriggersStateGroup_Active_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public bimcast_FuseTriggersStateGroup_Active_Property(Fuse.Triggers.StateGroup obj, Uno.UX.Selector name) [instance] :40
void bimcast_FuseTriggersStateGroup_Active_Property::ctor_2(::g::Fuse::Triggers::StateGroup* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public bimcast_FuseTriggersStateGroup_Active_Property New(Fuse.Triggers.StateGroup obj, Uno.UX.Selector name) [static] :40
bimcast_FuseTriggersStateGroup_Active_Property* bimcast_FuseTriggersStateGroup_Active_Property::New1(::g::Fuse::Triggers::StateGroup* obj, ::g::Uno::UX::Selector name)
{
    bimcast_FuseTriggersStateGroup_Active_Property* obj1 = (bimcast_FuseTriggersStateGroup_Active_Property*)uNew(bimcast_FuseTriggersStateGroup_Active_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
