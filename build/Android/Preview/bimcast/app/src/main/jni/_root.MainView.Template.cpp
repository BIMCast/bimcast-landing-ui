// This file was generated based on C:\Users\ManailMJ\Documents\Dev\fuse\projects\bimcast\build\Android\Preview\cache\ux11\MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.bimcast_FuseControlsCircle_Color_Property.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[2];
static uType* TYPES[3];

namespace g{

// public partial sealed class MainView.Template :5
// {
// static Template() :15
static void MainView__Template__cctor__fn(uType* __type)
{
    MainView__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Color"*/]);
}

static void MainView__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Color");
    ::STRINGS[1] = uString::Const("");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::MainView__Template, temp_Color_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template__New2_fn, 0, true, MainView__Template_typeof(), 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(MainView__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = MainView__Template_build;
    type->fp_cctor_ = MainView__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template__New1_fn;
    return type;
}

// public Template(MainView parent, MainView parentInstance) :9
void MainView__Template__ctor_1_fn(MainView__Template* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :18
void MainView__Template__New1_fn(MainView__Template* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template", "New()");
    ::g::Fuse::Controls::DockPanel* self = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Circle* temp = ::g::Fuse::Controls::Circle::New3();
    __this->temp_Color_inst = ::g::bimcast_FuseControlsCircle_Color_Property::New1(temp, MainView__Template::__selector0());
    ::g::Fuse::Reactive::DataBinding* temp1 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<float4>*/], __this->temp_Color_inst, ::STRINGS[1/*""*/]);
    ::g::Fuse::Controls::StackPanel* temp2 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp3 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp4 = ::g::Fuse::Controls::Rectangle::New3();
    self->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    temp->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp1);
    temp2->ItemSpacing(15.0f);
    temp2->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp2->Alignment(8);
    temp2->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 20.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp3->Color(::g::MainView::Gray());
    temp3->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp3->Height(::g::Uno::UX::Size__New1(10.0f, 1));
    temp3->Alignment(1);
    temp4->Color(::g::MainView::Gray());
    temp4->Width(::g::Uno::UX::Size__New1(80.0f, 4));
    temp4->Height(::g::Uno::UX::Size__New1(10.0f, 1));
    temp4->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    return *__retval = self, void();
}

// public Template New(MainView parent, MainView parentInstance) :9
void MainView__Template__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template** __retval)
{
    *__retval = MainView__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template::__selector0_;

// public Template(MainView parent, MainView parentInstance) [instance] :9
void MainView__Template::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    uStackFrame __("MainView.Template", ".ctor(MainView,MainView)");
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(MainView parent, MainView parentInstance) [static] :9
MainView__Template* MainView__Template::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template* obj1 = (MainView__Template*)uNew(MainView__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
