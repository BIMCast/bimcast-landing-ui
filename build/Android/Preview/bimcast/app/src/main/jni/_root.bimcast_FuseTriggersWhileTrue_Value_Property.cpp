// This file was generated based on C:\Users\ManailMJ\Documents\Dev\fuse\projects\bimcast\build\Android\Preview\cache\ux11\bimcast.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.bimcast_FuseTriggersWhileTrue_Value_Property.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class bimcast_FuseTriggersWhileTrue_Value_Property :46
// {
static void bimcast_FuseTriggersWhileTrue_Value_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::bimcast_FuseTriggersWhileTrue_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* bimcast_FuseTriggersWhileTrue_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(bimcast_FuseTriggersWhileTrue_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("bimcast_FuseTriggersWhileTrue_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_build_ = bimcast_FuseTriggersWhileTrue_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))bimcast_FuseTriggersWhileTrue_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))bimcast_FuseTriggersWhileTrue_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))bimcast_FuseTriggersWhileTrue_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))bimcast_FuseTriggersWhileTrue_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public bimcast_FuseTriggersWhileTrue_Value_Property(Fuse.Triggers.WhileTrue obj, Uno.UX.Selector name) :49
void bimcast_FuseTriggersWhileTrue_Value_Property__ctor_2_fn(bimcast_FuseTriggersWhileTrue_Value_Property* __this, ::g::Fuse::Triggers::WhileTrue* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :51
void bimcast_FuseTriggersWhileTrue_Value_Property__Get_fn(bimcast_FuseTriggersWhileTrue_Value_Property* __this, bool* __retval)
{
    uStackFrame __("bimcast_FuseTriggersWhileTrue_Value_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Value1(), void();
}

// public bimcast_FuseTriggersWhileTrue_Value_Property New(Fuse.Triggers.WhileTrue obj, Uno.UX.Selector name) :49
void bimcast_FuseTriggersWhileTrue_Value_Property__New1_fn(::g::Fuse::Triggers::WhileTrue* obj, ::g::Uno::UX::Selector* name, bimcast_FuseTriggersWhileTrue_Value_Property** __retval)
{
    *__retval = bimcast_FuseTriggersWhileTrue_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :50
void bimcast_FuseTriggersWhileTrue_Value_Property__get_Object_fn(bimcast_FuseTriggersWhileTrue_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("bimcast_FuseTriggersWhileTrue_Value_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :52
void bimcast_FuseTriggersWhileTrue_Value_Property__Set_fn(bimcast_FuseTriggersWhileTrue_Value_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("bimcast_FuseTriggersWhileTrue_Value_Property", "Set(bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(__this->_obj)->Value1(v_);
}

// public override sealed bool get_SupportsOriginSetter() :53
void bimcast_FuseTriggersWhileTrue_Value_Property__get_SupportsOriginSetter_fn(bimcast_FuseTriggersWhileTrue_Value_Property* __this, bool* __retval)
{
    uStackFrame __("bimcast_FuseTriggersWhileTrue_Value_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public bimcast_FuseTriggersWhileTrue_Value_Property(Fuse.Triggers.WhileTrue obj, Uno.UX.Selector name) [instance] :49
void bimcast_FuseTriggersWhileTrue_Value_Property::ctor_2(::g::Fuse::Triggers::WhileTrue* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("bimcast_FuseTriggersWhileTrue_Value_Property", ".ctor(Fuse.Triggers.WhileTrue,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public bimcast_FuseTriggersWhileTrue_Value_Property New(Fuse.Triggers.WhileTrue obj, Uno.UX.Selector name) [static] :49
bimcast_FuseTriggersWhileTrue_Value_Property* bimcast_FuseTriggersWhileTrue_Value_Property::New1(::g::Fuse::Triggers::WhileTrue* obj, ::g::Uno::UX::Selector name)
{
    bimcast_FuseTriggersWhileTrue_Value_Property* obj1 = (bimcast_FuseTriggersWhileTrue_Value_Property*)uNew(bimcast_FuseTriggersWhileTrue_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
