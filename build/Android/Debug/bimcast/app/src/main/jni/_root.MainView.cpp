// This file was generated based on C:\Users\ManailMJ\Documents\Dev\fuse\projects\bimcast\.uno\ux11\MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.bimcast_bundle.h>
#include <_root.bimcast_FuseAnimationsAttractorfloat4_Value_Property.h>
#include <_root.bimcast_FuseControlsRectangle_CornerRadius_Property.h>
#include <_root.bimcast_FuseControlsRectangle_ElementLayoutMaster_Property.h>
#include <_root.bimcast_FuseControlsRectangle_Opacity_Property.h>
#include <_root.bimcast_FuseReactiveEach_Items_Property.h>
#include <_root.bimcast_FuseTranslation_Y_Property.h>
#include <_root.bimcast_FuseTriggersStateGroup_Active_Property.h>
#include <_root.bimcast_FuseTriggersWhileTrue_Value_Property.h>
#include <_root.bimcast_HidingPanel_IsEnabled_Property.h>
#include <_root.bimcast_HidingPanel_Opacity_Property.h>
#include <_root.HidingPanel.h>
#include <_root.HomeScreen.h>
#include <_root.HomeScreenType.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Attractor-1.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Resize.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Effects.Effect.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.FileSystem.FileSystemModule.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.GridLayout.h>
#include <Fuse.Layouts.Layout.h>
#include <Fuse.Motion.MotionDestinationType.h>
#include <Fuse.Motion.MotionUnit.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.RelativeTransform-1.h>
#include <Fuse.Scaling.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.BringToFront.h>
#include <Fuse.Triggers.Actions.IToggleable.h>
#include <Fuse.Triggers.Actions.SendToBack.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.Toggle.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.OnBackButton.h>
#include <Fuse.Triggers.State.h>
#include <Fuse.Triggers.StateGroup.h>
#include <Fuse.Triggers.StateTransition.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileEnabled.h>
#include <Fuse.Triggers.WhileKeyboardVisible.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.Platform.iOS.StatusBarStyle.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[63];
static uType* TYPES[20];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :146
static void MainView__cctor__fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 30, ::STRINGS[0/*"topPanel"*/], ::STRINGS[1/*"navBarTrans"*/], ::STRINGS[2/*"mainPanel"*/], ::STRINGS[3/*"authForm"*/], ::STRINGS[4/*"authArea"*/], ::STRINGS[5/*"proceedButton"*/], ::STRINGS[6/*"moveButton"*/], ::STRINGS[7/*"passForm"*/], ::STRINGS[8/*"passArea"*/], ::STRINGS[9/*"submitButton"*/], ::STRINGS[10/*"moveRegButton"*/], ::STRINGS[11/*"submitButto...*/], ::STRINGS[12/*"startPanel"*/], ::STRINGS[13/*"loginArea"*/], ::STRINGS[14/*"signinButton"*/], ::STRINGS[15/*"signinText"*/], ::STRINGS[16/*"signupButton"*/], ::STRINGS[17/*"addButtonPa...*/], ::STRINGS[18/*"addButton"*/], ::STRINGS[19/*"greenRect"*/], ::STRINGS[20/*"showGreenRect"*/], ::STRINGS[21/*"whiteRect"*/], ::STRINGS[22/*"whiteRectCo...*/], ::STRINGS[23/*"logoPanel"*/], ::STRINGS[24/*"logo"*/], ::STRINGS[25/*"moveLogo"*/], ::STRINGS[26/*"shiftLogo"*/], ::STRINGS[27/*"showAuthForm"*/], ::STRINGS[28/*"showPassForm"*/], ::STRINGS[29/*"state"*/]);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[30/*"Y"*/]);
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[31/*"Active"*/]);
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[32/*"Items"*/]);
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[33/*"Opacity"*/]);
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[34/*"CornerRadius"*/]);
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[35/*"IsEnabled"*/]);
    MainView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[36/*"Value"*/]);
    MainView::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[37/*"Element.Lay...*/]);
    MainView::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"topPanel"*/]);
    MainView::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"navBarTrans"*/]);
    MainView::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"mainPanel"*/]);
    MainView::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"authForm"*/]);
    MainView::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"authArea"*/]);
    MainView::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"proceedButton"*/]);
    MainView::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"moveButton"*/]);
    MainView::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"passForm"*/]);
    MainView::__selector16_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"passArea"*/]);
    MainView::__selector17_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"submitButton"*/]);
    MainView::__selector18_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"moveRegButton"*/]);
    MainView::__selector19_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"submitButto...*/]);
    MainView::__selector20_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"startPanel"*/]);
    MainView::__selector21_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"loginArea"*/]);
    MainView::__selector22_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"signinButton"*/]);
    MainView::__selector23_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"signinText"*/]);
    MainView::__selector24_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"signupButton"*/]);
    MainView::__selector25_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[17/*"addButtonPa...*/]);
    MainView::__selector26_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[18/*"addButton"*/]);
    MainView::__selector27_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[19/*"greenRect"*/]);
    MainView::__selector28_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[20/*"showGreenRect"*/]);
    MainView::__selector29_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[21/*"whiteRect"*/]);
    MainView::__selector30_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[22/*"whiteRectCo...*/]);
    MainView::__selector31_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[23/*"logoPanel"*/]);
    MainView::__selector32_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[24/*"logo"*/]);
    MainView::__selector33_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[25/*"moveLogo"*/]);
    MainView::__selector34_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[26/*"shiftLogo"*/]);
    MainView::__selector35_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[27/*"showAuthForm"*/]);
    MainView::__selector36_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[28/*"showPassForm"*/]);
    MainView::__selector37_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[29/*"state"*/]);
    MainView::__selector38_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[38/*"loginButton...*/]);
    MainView::__selector39_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[39/*"mainState"*/]);
    MainView::Green_ = ::g::Uno::Float4__New2(0.07843138f, 1.0f, 0.7098039f, 1.0f);
    MainView::Purple_ = ::g::Uno::Float4__New2(0.3686275f, 0.1803922f, 0.5686275f, 1.0f);
    MainView::White_ = ::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f);
    MainView::Gray_ = ::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f);
    MainView::TopGray_ = ::g::Uno::Float4__New2(0.6235294f, 0.5137255f, 0.7411765f, 1.0f);
    MainView::BottomGray_ = ::g::Uno::Float4__New2(0.4941176f, 0.345098f, 0.654902f, 1.0f);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::Green_), ::STRINGS[40/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::Purple_), ::STRINGS[41/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::White_), ::STRINGS[42/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::Gray_), ::STRINGS[43/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::TopGray_), ::STRINGS[44/*"TopGray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::BottomGray_), ::STRINGS[45/*"BottomGray"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("topPanel");
    ::STRINGS[1] = uString::Const("navBarTrans");
    ::STRINGS[2] = uString::Const("mainPanel");
    ::STRINGS[3] = uString::Const("authForm");
    ::STRINGS[4] = uString::Const("authArea");
    ::STRINGS[5] = uString::Const("proceedButton");
    ::STRINGS[6] = uString::Const("moveButton");
    ::STRINGS[7] = uString::Const("passForm");
    ::STRINGS[8] = uString::Const("passArea");
    ::STRINGS[9] = uString::Const("submitButton");
    ::STRINGS[10] = uString::Const("moveRegButton");
    ::STRINGS[11] = uString::Const("submitButtonCollapsed");
    ::STRINGS[12] = uString::Const("startPanel");
    ::STRINGS[13] = uString::Const("loginArea");
    ::STRINGS[14] = uString::Const("signinButton");
    ::STRINGS[15] = uString::Const("signinText");
    ::STRINGS[16] = uString::Const("signupButton");
    ::STRINGS[17] = uString::Const("addButtonPanel");
    ::STRINGS[18] = uString::Const("addButton");
    ::STRINGS[19] = uString::Const("greenRect");
    ::STRINGS[20] = uString::Const("showGreenRect");
    ::STRINGS[21] = uString::Const("whiteRect");
    ::STRINGS[22] = uString::Const("whiteRectCornerRadiusAttractor");
    ::STRINGS[23] = uString::Const("logoPanel");
    ::STRINGS[24] = uString::Const("logo");
    ::STRINGS[25] = uString::Const("moveLogo");
    ::STRINGS[26] = uString::Const("shiftLogo");
    ::STRINGS[27] = uString::Const("showAuthForm");
    ::STRINGS[28] = uString::Const("showPassForm");
    ::STRINGS[29] = uString::Const("state");
    ::STRINGS[30] = uString::Const("Y");
    ::STRINGS[31] = uString::Const("Active");
    ::STRINGS[32] = uString::Const("Items");
    ::STRINGS[33] = uString::Const("Opacity");
    ::STRINGS[34] = uString::Const("CornerRadius");
    ::STRINGS[35] = uString::Const("IsEnabled");
    ::STRINGS[36] = uString::Const("Value");
    ::STRINGS[37] = uString::Const("Element.LayoutMaster");
    ::STRINGS[38] = uString::Const("loginButtonState");
    ::STRINGS[39] = uString::Const("mainState");
    ::STRINGS[40] = uString::Const("Green");
    ::STRINGS[41] = uString::Const("Purple");
    ::STRINGS[42] = uString::Const("White");
    ::STRINGS[43] = uString::Const("Gray");
    ::STRINGS[44] = uString::Const("TopGray");
    ::STRINGS[45] = uString::Const("BottomGray");
    ::STRINGS[46] = uString::Const("mockItems");
    ::STRINGS[47] = uString::Const("60,1*");
    ::STRINGS[48] = uString::Const("70,1*,70");
    ::STRINGS[49] = uString::Const("Feed");
    ::STRINGS[50] = uString::Const("module.exports = {\n"
        "\t\t\t\t\t\tmockItems: [\"#FF4C81\",\"#F9ED46\",\"#47BDF9\",\"#F97947\",\"#FF4C81\",\"#F9ED46\",\"#47BDF9\",\"#F97947\"]\n"
        "\t\t\t\t\t};");
    ::STRINGS[51] = uString::Const("MainView.ux");
    ::STRINGS[52] = uString::Const("4*,70,0");
    ::STRINGS[53] = uString::Const("auto,1*");
    ::STRINGS[54] = uString::Const("ID Number");
    ::STRINGS[55] = uString::Const("Cell Number");
    ::STRINGS[56] = uString::Const("Proceed");
    ::STRINGS[57] = uString::Const("Password");
    ::STRINGS[58] = uString::Const("Confirm Password");
    ::STRINGS[59] = uString::Const("DONE");
    ::STRINGS[60] = uString::Const("SIGNIN");
    ::STRINGS[61] = uString::Const("SIGNUP");
    ::STRINGS[62] = uString::Const("+");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Attractor_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[3] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[4] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof());
    ::TYPES[5] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[6] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[7] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[8] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Element_typeof());
    ::TYPES[9] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[10] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[11] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[14] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[15] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[16] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[17] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof());
    ::TYPES[18] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[19] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof());
    type->SetFields(9,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::HidingPanel_typeof(), offsetof(::g::MainView, addButton), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, addButton_IsEnabled_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, addButtonPanel), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(::g::MainView, authArea), 0,
        ::g::HidingPanel_typeof(), offsetof(::g::MainView, authForm), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, authForm_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::MainView, authForm_Opacity_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, greenRect), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof()), offsetof(::g::MainView, greenRect_Element_LayoutMaster_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::MainView, greenRect_Opacity_inst), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(::g::MainView, loginArea), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::MainView, loginButtonState), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, logo), 0,
        ::g::HidingPanel_typeof(), offsetof(::g::MainView, logoPanel), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, logoPanel_IsEnabled_inst), 0,
        ::g::HidingPanel_typeof(), offsetof(::g::MainView, mainPanel), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, mainPanel_IsEnabled_inst), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::MainView, mainState), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, moveButton), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, moveButton_Value_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, moveLogo), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, moveLogo_Value_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, moveRegButton), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, moveRegButton_Value_inst), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::MainView, navBarTrans), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::MainView, navBarTrans_Y_inst), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(::g::MainView, passArea), 0,
        ::g::HidingPanel_typeof(), offsetof(::g::MainView, passForm), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, passForm_IsEnabled_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, proceedButton), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, shiftLogo), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, shiftLogo_Value_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, showAuthForm), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, showAuthForm_Value_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, showGreenRect), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, showPassForm), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, showPassForm_Value_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, signinButton), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::MainView, signinText), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, signupButton), 0,
        ::g::HidingPanel_typeof(), offsetof(::g::MainView, startPanel), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, startPanel_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::MainView, startPanel_Opacity_inst), 0,
        ::g::Fuse::Triggers::StateGroup_typeof(), offsetof(::g::MainView, state), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Triggers::State_typeof()), offsetof(::g::MainView, state_Active_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, submitButton), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, submitButtonCollapsed), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()), offsetof(::g::MainView, temp_Items_inst), 0,
        ::g::HidingPanel_typeof(), offsetof(::g::MainView, topPanel), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, topPanel_IsEnabled_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, whiteRect), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::MainView, whiteRect_CornerRadius_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof()), offsetof(::g::MainView, whiteRect_Element_LayoutMaster_inst), 0,
        ::g::Fuse::Animations::Attractor_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::MainView, whiteRectCornerRadiusAttractor), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::MainView, whiteRectCornerRadiusAttractor_Value_inst), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&::g::MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector16_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector17_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector18_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector19_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector20_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector21_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector22_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector23_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector24_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector25_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector26_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector27_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector28_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector29_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector30_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector31_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector32_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector33_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector34_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector35_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector36_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector37_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector38_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector39_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector9_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::MainView::BottomGray_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::MainView::Gray_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::MainView::Green_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::MainView::Purple_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::MainView::TopGray_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::MainView::White_, uFieldFlagsStatic);
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 112;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    return type;
}

// public MainView() :162
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// private void InitializeUX() :166
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :162
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;
::g::Uno::UX::Selector MainView::__selector10_;
::g::Uno::UX::Selector MainView::__selector11_;
::g::Uno::UX::Selector MainView::__selector12_;
::g::Uno::UX::Selector MainView::__selector13_;
::g::Uno::UX::Selector MainView::__selector14_;
::g::Uno::UX::Selector MainView::__selector15_;
::g::Uno::UX::Selector MainView::__selector16_;
::g::Uno::UX::Selector MainView::__selector17_;
::g::Uno::UX::Selector MainView::__selector18_;
::g::Uno::UX::Selector MainView::__selector19_;
::g::Uno::UX::Selector MainView::__selector2_;
::g::Uno::UX::Selector MainView::__selector20_;
::g::Uno::UX::Selector MainView::__selector21_;
::g::Uno::UX::Selector MainView::__selector22_;
::g::Uno::UX::Selector MainView::__selector23_;
::g::Uno::UX::Selector MainView::__selector24_;
::g::Uno::UX::Selector MainView::__selector25_;
::g::Uno::UX::Selector MainView::__selector26_;
::g::Uno::UX::Selector MainView::__selector27_;
::g::Uno::UX::Selector MainView::__selector28_;
::g::Uno::UX::Selector MainView::__selector29_;
::g::Uno::UX::Selector MainView::__selector3_;
::g::Uno::UX::Selector MainView::__selector30_;
::g::Uno::UX::Selector MainView::__selector31_;
::g::Uno::UX::Selector MainView::__selector32_;
::g::Uno::UX::Selector MainView::__selector33_;
::g::Uno::UX::Selector MainView::__selector34_;
::g::Uno::UX::Selector MainView::__selector35_;
::g::Uno::UX::Selector MainView::__selector36_;
::g::Uno::UX::Selector MainView::__selector37_;
::g::Uno::UX::Selector MainView::__selector38_;
::g::Uno::UX::Selector MainView::__selector39_;
::g::Uno::UX::Selector MainView::__selector4_;
::g::Uno::UX::Selector MainView::__selector5_;
::g::Uno::UX::Selector MainView::__selector6_;
::g::Uno::UX::Selector MainView::__selector7_;
::g::Uno::UX::Selector MainView::__selector8_;
::g::Uno::UX::Selector MainView::__selector9_;
::g::Uno::Float4 MainView::BottomGray_;
::g::Uno::Float4 MainView::Gray_;
::g::Uno::Float4 MainView::Green_;
::g::Uno::Float4 MainView::Purple_;
::g::Uno::Float4 MainView::TopGray_;
::g::Uno::Float4 MainView::White_;

// public MainView() [instance] :162
void MainView::ctor_3()
{
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :166
void MainView::InitializeUX()
{
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp1 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp2 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Triggers::BusyTaskModule* temp3 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp4 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp5 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Polyfills::Window::WindowModule* temp6 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp7 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp8 = ::g::FuseJS::Lifecycle::New2();
    ::g::FuseJS::Environment* temp9 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp10 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp11 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp12 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp13 = ::g::FuseJS::UserEvents::New2();
    navBarTrans = ::g::Fuse::Translation::New2();
    navBarTrans_Y_inst = ::g::bimcast_FuseTranslation_Y_Property::New1(navBarTrans, MainView::__selector0());
    state = ::g::Fuse::Triggers::StateGroup::New2();
    state_Active_inst = ::g::bimcast_FuseTriggersStateGroup_Active_Property::New1(state, MainView::__selector1());
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1());
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New2();
    temp_Items_inst = ::g::bimcast_FuseReactiveEach_Items_Property::New1(temp, MainView::__selector2());
    greenRect = ::g::Fuse::Controls::Rectangle::New3();
    greenRect_Opacity_inst = ::g::bimcast_FuseControlsRectangle_Opacity_Property::New1(greenRect, MainView::__selector3());
    whiteRect = ::g::Fuse::Controls::Rectangle::New3();
    whiteRect_CornerRadius_inst = ::g::bimcast_FuseControlsRectangle_CornerRadius_Property::New1(whiteRect, MainView::__selector4());
    logoPanel = ::g::HidingPanel::New4();
    logoPanel_IsEnabled_inst = ::g::bimcast_HidingPanel_IsEnabled_Property::New1(logoPanel, MainView::__selector5());
    authForm = ::g::HidingPanel::New4();
    authForm_IsEnabled_inst = ::g::bimcast_HidingPanel_IsEnabled_Property::New1(authForm, MainView::__selector5());
    startPanel = ::g::HidingPanel::New4();
    startPanel_Opacity_inst = ::g::bimcast_HidingPanel_Opacity_Property::New1(startPanel, MainView::__selector3());
    moveLogo = ::g::Fuse::Triggers::WhileTrue::New2();
    moveLogo_Value_inst = ::g::bimcast_FuseTriggersWhileTrue_Value_Property::New1(moveLogo, MainView::__selector6());
    moveButton = ::g::Fuse::Triggers::WhileTrue::New2();
    moveButton_Value_inst = ::g::bimcast_FuseTriggersWhileTrue_Value_Property::New1(moveButton, MainView::__selector6());
    showAuthForm = ::g::Fuse::Triggers::WhileTrue::New2();
    showAuthForm_Value_inst = ::g::bimcast_FuseTriggersWhileTrue_Value_Property::New1(showAuthForm, MainView::__selector6());
    authForm_Opacity_inst = ::g::bimcast_HidingPanel_Opacity_Property::New1(authForm, MainView::__selector3());
    passForm = ::g::HidingPanel::New4();
    passForm_IsEnabled_inst = ::g::bimcast_HidingPanel_IsEnabled_Property::New1(passForm, MainView::__selector5());
    moveRegButton = ::g::Fuse::Triggers::WhileTrue::New2();
    moveRegButton_Value_inst = ::g::bimcast_FuseTriggersWhileTrue_Value_Property::New1(moveRegButton, MainView::__selector6());
    shiftLogo = ::g::Fuse::Triggers::WhileTrue::New2();
    shiftLogo_Value_inst = ::g::bimcast_FuseTriggersWhileTrue_Value_Property::New1(shiftLogo, MainView::__selector6());
    startPanel_IsEnabled_inst = ::g::bimcast_HidingPanel_IsEnabled_Property::New1(startPanel, MainView::__selector5());
    whiteRect_Element_LayoutMaster_inst = ::g::bimcast_FuseControlsRectangle_ElementLayoutMaster_Property::New1(whiteRect, MainView::__selector7());
    greenRect_Element_LayoutMaster_inst = ::g::bimcast_FuseControlsRectangle_ElementLayoutMaster_Property::New1(greenRect, MainView::__selector7());
    showPassForm = ::g::Fuse::Triggers::WhileTrue::New2();
    showPassForm_Value_inst = ::g::bimcast_FuseTriggersWhileTrue_Value_Property::New1(showPassForm, MainView::__selector6());
    whiteRectCornerRadiusAttractor = ((::g::Fuse::Animations::Attractor*)::g::Fuse::Animations::Attractor::New3(::TYPES[1/*Fuse.Animations.Attractor<float4>*/], whiteRect_CornerRadius_inst));
    whiteRectCornerRadiusAttractor_Value_inst = ::g::bimcast_FuseAnimationsAttractorfloat4_Value_Property::New1(whiteRectCornerRadiusAttractor, MainView::__selector6());
    mainPanel = ::g::HidingPanel::New4();
    mainPanel_IsEnabled_inst = ::g::bimcast_HidingPanel_IsEnabled_Property::New1(mainPanel, MainView::__selector5());
    topPanel = ::g::HidingPanel::New4();
    topPanel_IsEnabled_inst = ::g::bimcast_HidingPanel_IsEnabled_Property::New1(topPanel, MainView::__selector5());
    addButton = ::g::HidingPanel::New4();
    addButton_IsEnabled_inst = ::g::bimcast_HidingPanel_IsEnabled_Property::New1(addButton, MainView::__selector5());
    ::g::Fuse::iOS::StatusBarConfig* temp14 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Controls::Panel* temp15 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::ClientPanel* temp16 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::Rectangle* temp17 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::ImageFill* temp18 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Layouts::GridLayout* temp19 = ::g::Fuse::Layouts::GridLayout::New2();
    ::g::Fuse::Triggers::WhileEnabled* temp20 = ::g::Fuse::Triggers::WhileEnabled::New2();
    ::g::Fuse::Animations::Change* temp21 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], navBarTrans_Y_inst);
    ::g::Fuse::Controls::Grid* temp22 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp23 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp24 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp25 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Animations::Scale* temp26 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Triggers::Actions::Set* temp27 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Triggers.State>*/], state_Active_inst);
    ::g::Fuse::Controls::Text* temp28 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Image* temp29 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::JavaScript* temp30 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::ScrollView* temp31 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp32 = ::g::Fuse::Controls::StackPanel::New4();
    MainView__Template* temp33 = MainView__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp34 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[4/*Fuse.Reactive.DataBinding<object>*/], temp_Items_inst, ::STRINGS[46/*"mockItems"*/]);
    ::g::Fuse::Layouts::GridLayout* temp35 = ::g::Fuse::Layouts::GridLayout::New2();
    authArea = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::TextInput* temp36 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::Rectangle* temp37 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp38 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::TextInput* temp39 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::Rectangle* temp40 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp41 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    proceedButton = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp42 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp43 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Animations::Scale* temp44 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp45 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Animations::Move* temp46 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Layouts::GridLayout* temp47 = ::g::Fuse::Layouts::GridLayout::New2();
    passArea = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::TextInput* temp48 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::Rectangle* temp49 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp50 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::TextInput* temp51 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::Rectangle* temp52 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp53 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Panel* temp54 = ::g::Fuse::Controls::Panel::New3();
    submitButton = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp55 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp56 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp57 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Triggers.State>*/], state_Active_inst);
    ::g::Fuse::Animations::Move* temp58 = ::g::Fuse::Animations::Move::New2();
    submitButtonCollapsed = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Layouts::GridLayout* temp59 = ::g::Fuse::Layouts::GridLayout::New2();
    loginArea = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::TextInput* temp60 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::Rectangle* temp61 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp62 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::TextInput* temp63 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::Rectangle* temp64 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp65 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    signinButton = ::g::Fuse::Controls::Panel::New3();
    signinText = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp66 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp67 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Triggers.State>*/], state_Active_inst);
    signupButton = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp68 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp69 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp70 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Triggers::OnBackButton* temp71 = ::g::Fuse::Triggers::OnBackButton::New3();
    ::g::HomeScreen* temp72 = ::g::HomeScreen::New2();
    addButtonPanel = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp73 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Effects::DropShadow* temp74 = ::g::Fuse::Effects::DropShadow::New2();
    showGreenRect = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp75 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], greenRect_Opacity_inst);
    logo = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Animations::Move* temp76 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp77 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::WhileKeyboardVisible* temp78 = ::g::Fuse::Triggers::WhileKeyboardVisible::New2();
    ::g::Fuse::Animations::Change* temp79 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<bool>*/], logoPanel_IsEnabled_inst);
    ::g::Fuse::Animations::Change* temp80 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<bool>*/], authForm_IsEnabled_inst);
    ::g::Fuse::Triggers::Actions::Set* temp81 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[6/*Fuse.Triggers.Actions.Set<float>*/], startPanel_Opacity_inst);
    ::g::Fuse::Triggers::Actions::Set* temp82 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<bool>*/], moveLogo_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp83 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<bool>*/], moveButton_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp84 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<bool>*/], showAuthForm_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp85 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[6/*Fuse.Triggers.Actions.Set<float>*/], authForm_Opacity_inst);
    ::g::Fuse::Triggers::Actions::Set* temp86 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[6/*Fuse.Triggers.Actions.Set<float>*/], startPanel_Opacity_inst);
    ::g::Fuse::Animations::Change* temp87 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<bool>*/], passForm_IsEnabled_inst);
    ::g::Fuse::Triggers::Actions::Set* temp88 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<bool>*/], moveLogo_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp89 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<bool>*/], moveButton_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp90 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<bool>*/], moveRegButton_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp91 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<bool>*/], shiftLogo_Value_inst);
    loginButtonState = ::g::Fuse::Triggers::State::New2();
    ::g::Fuse::Animations::Change* temp92 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<bool>*/], startPanel_IsEnabled_inst);
    ::g::Fuse::Triggers::Actions::Set* temp93 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<bool>*/], moveLogo_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp94 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<bool>*/], moveLogo_Value_inst);
    ::g::Fuse::Triggers::Actions::SendToBack* temp95 = ::g::Fuse::Triggers::Actions::SendToBack::New2();
    mainState = ::g::Fuse::Triggers::State::New2();
    ::g::Fuse::Animations::Move* temp96 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Resize* temp97 = ::g::Fuse::Animations::Resize::New2();
    ::g::Fuse::Animations::Move* temp98 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Resize* temp99 = ::g::Fuse::Animations::Resize::New2();
    ::g::Fuse::Triggers::Actions::Set* temp100 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], whiteRect_Element_LayoutMaster_inst);
    ::g::Fuse::Triggers::Actions::Set* temp101 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], greenRect_Element_LayoutMaster_inst);
    ::g::Fuse::Animations::Change* temp102 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[9/*Fuse.Animations.Change<float4>*/], whiteRect_CornerRadius_inst);
    ::g::Fuse::Animations::Change* temp103 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<bool>*/], logoPanel_IsEnabled_inst);
    ::g::Fuse::Triggers::Actions::Set* temp104 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<bool>*/], showPassForm_Value_inst);
    ::g::Fuse::Animations::Scale* temp105 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Triggers::Actions::Set* temp106 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[10/*Fuse.Triggers.Actions.Set<float4>*/], whiteRectCornerRadiusAttractor_Value_inst);
    ::g::Fuse::Animations::Change* temp107 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<bool>*/], mainPanel_IsEnabled_inst);
    ::g::Fuse::Animations::Change* temp108 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<bool>*/], topPanel_IsEnabled_inst);
    ::g::Fuse::Animations::Change* temp109 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], greenRect_Opacity_inst);
    ::g::Fuse::Animations::Change* temp110 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<bool>*/], addButton_IsEnabled_inst);
    ::g::Fuse::Triggers::Actions::BringToFront* temp111 = ::g::Fuse::Triggers::Actions::BringToFront::New2();
    temp14->Style(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), topPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), authForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), passForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), startPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), addButtonPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), whiteRect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), whiteRectCornerRadiusAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), logoPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), showAuthForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), showPassForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), state);
    temp17->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Fills()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp18);
    temp18->Opacity(0.83f);
    temp18->File(::g::Uno::UX::BundleFileSource::New1(::g::bimcast_bundle::bglogine50430b4()));
    uPtr(topPanel)->Name(MainView::__selector8());
    uPtr(topPanel)->Layout(temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topPanel)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topPanel)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topPanel)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), mainPanel);
    temp19->Rows(::STRINGS[47/*"60,1*"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp21);
    ::g::Fuse::Animations::Change__set_Value_fn(temp21, uCRef(0.0f));
    temp21->Duration(0.4);
    temp22->Columns(::STRINGS[48/*"70,1*,70"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), navBarTrans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    uPtr(navBarTrans)->Y(-0.2f);
    uPtr(navBarTrans)->Name(MainView::__selector9());
    uPtr(navBarTrans)->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp23->HitTestMode(6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    temp24->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp24->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp24->File(::g::Uno::UX::BundleFileSource::New1(::g::bimcast_bundle::menudf4331e2()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp27);
    temp26->Factor(0.8f);
    temp26->Easing(6);
    temp26->Duration(0.15);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp27, loginButtonState);
    temp28->Value(::STRINGS[49/*"Feed"*/]);
    temp28->FontSize(20.0f);
    temp28->TextColor(MainView::White());
    temp28->Alignment(8);
    temp29->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp29->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp29->File(::g::Uno::UX::BundleFileSource::New1(::g::bimcast_bundle::search4cd1c3e9()));
    uPtr(mainPanel)->Name(MainView::__selector10());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainPanel)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainPanel)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    temp30->Code(::STRINGS[50/*"module.expo...*/]);
    temp30->LineNumber(30);
    temp30->FileName(::STRINGS[51/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    temp32->Margin(::g::Uno::Float4__New2(25.0f, 25.0f, 25.0f, 25.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::TYPES[15/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp34);
    uPtr(authForm)->Height(::g::Uno::UX::Size__New1(60.0f, 4));
    uPtr(authForm)->Alignment(10);
    uPtr(authForm)->Margin(::g::Uno::Float4__New2(0.0f, 60.0f, 0.0f, 0.0f));
    uPtr(authForm)->Name(MainView::__selector11());
    uPtr(authForm)->Layout(temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(authForm)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), authArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(authForm)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), proceedButton);
    temp35->Rows(::STRINGS[52/*"4*,70,0"*/]);
    uPtr(authArea)->RowCount(2);
    uPtr(authArea)->Columns(::STRINGS[53/*"auto,1*"*/]);
    uPtr(authArea)->Width(::g::Uno::UX::Size__New1(350.0f, 1));
    uPtr(authArea)->Height(::g::Uno::UX::Size__New1(80.0f, 4));
    uPtr(authArea)->Padding(::g::Uno::Float4__New2(55.0f, 55.0f, 55.0f, 55.0f));
    uPtr(authArea)->Opacity(1.0f);
    uPtr(authArea)->Name(MainView::__selector12());
    ::g::Fuse::Controls::Grid::SetRow(authArea, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(authArea)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(authArea)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(authArea)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(authArea)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    temp36->FontSize(20.0f);
    temp36->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp36->PlaceholderText(::STRINGS[54/*"ID Number"*/]);
    temp36->PlaceholderColor(MainView::White());
    temp36->Alignment(10);
    ::g::Fuse::Controls::Grid::SetRow(temp36, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp36, 1);
    temp37->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp37->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp37, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp37, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp37, 2);
    temp37->Fill(temp38);
    temp39->FontSize(20.0f);
    temp39->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp39->PlaceholderText(::STRINGS[55/*"Cell Number"*/]);
    temp39->PlaceholderColor(MainView::White());
    temp39->Alignment(10);
    ::g::Fuse::Controls::Grid::SetRow(temp39, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp39, 1);
    temp40->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp40->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp40, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp40, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp40, 2);
    temp40->Fill(temp41);
    uPtr(proceedButton)->Color(MainView::BottomGray());
    uPtr(proceedButton)->HitTestMode(2);
    uPtr(proceedButton)->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    uPtr(proceedButton)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(proceedButton)->Alignment(4);
    uPtr(proceedButton)->Margin(::g::Uno::Float4__New2(0.0f, -50.0f, 0.0f, 0.0f));
    uPtr(proceedButton)->Name(MainView::__selector13());
    ::g::Fuse::Controls::Grid::SetRow(proceedButton, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(proceedButton)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(proceedButton)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(proceedButton)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), moveButton);
    temp42->Value(::STRINGS[56/*"Proceed"*/]);
    temp42->TextColor(MainView::White());
    temp42->HitTestMode(2);
    temp42->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp45);
    temp44->Factor(0.8f);
    temp44->Easing(6);
    temp44->Duration(0.15);
    temp45->Target((uObject*)showPassForm);
    uPtr(moveButton)->Name(MainView::__selector14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(moveButton)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp46);
    temp46->Y(0.32f);
    temp46->Easing(6);
    temp46->Duration(0.5);
    temp46->Delay(0.3);
    temp46->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp46->Target(proceedButton);
    uPtr(passForm)->Height(::g::Uno::UX::Size__New1(60.0f, 4));
    uPtr(passForm)->Alignment(10);
    uPtr(passForm)->Margin(::g::Uno::Float4__New2(0.0f, 60.0f, 0.0f, 0.0f));
    uPtr(passForm)->Name(MainView::__selector15());
    uPtr(passForm)->Layout(temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(passForm)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), passArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(passForm)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    temp47->Rows(::STRINGS[52/*"4*,70,0"*/]);
    uPtr(passArea)->RowCount(2);
    uPtr(passArea)->Columns(::STRINGS[53/*"auto,1*"*/]);
    uPtr(passArea)->Width(::g::Uno::UX::Size__New1(390.0f, 1));
    uPtr(passArea)->Height(::g::Uno::UX::Size__New1(80.0f, 4));
    uPtr(passArea)->Padding(::g::Uno::Float4__New2(55.0f, 55.0f, 55.0f, 55.0f));
    uPtr(passArea)->Opacity(1.0f);
    uPtr(passArea)->Name(MainView::__selector16());
    ::g::Fuse::Controls::Grid::SetRow(passArea, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(passArea)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(passArea)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(passArea)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(passArea)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    temp48->FontSize(20.0f);
    temp48->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp48->PlaceholderText(::STRINGS[57/*"Password"*/]);
    temp48->PlaceholderColor(MainView::White());
    temp48->Alignment(10);
    ::g::Fuse::Controls::Grid::SetRow(temp48, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp48, 1);
    temp49->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp49->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp49, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp49, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp49, 2);
    temp49->Fill(temp50);
    temp51->IsPassword(true);
    temp51->FontSize(20.0f);
    temp51->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp51->PlaceholderText(::STRINGS[58/*"Confirm Pas...*/]);
    temp51->PlaceholderColor(MainView::White());
    temp51->Alignment(10);
    ::g::Fuse::Controls::Grid::SetRow(temp51, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp51, 1);
    temp52->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp52->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp52, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp52, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp52, 2);
    temp52->Fill(temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), submitButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), moveRegButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), submitButtonCollapsed);
    uPtr(submitButton)->Color(MainView::Purple());
    uPtr(submitButton)->HitTestMode(6);
    uPtr(submitButton)->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    uPtr(submitButton)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(submitButton)->Offset(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(0.0f, 4), ::g::Uno::UX::Size__New1(-90.0f, 4)));
    uPtr(submitButton)->Name(MainView::__selector17());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(submitButton)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(submitButton)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    temp55->Value(::STRINGS[59/*"DONE"*/]);
    temp55->TextColor(MainView::White());
    temp55->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp57);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp57, mainState);
    uPtr(moveRegButton)->Name(MainView::__selector18());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(moveRegButton)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp58);
    temp58->Y(0.32f);
    temp58->Easing(6);
    temp58->Duration(0.5);
    temp58->Delay(0.3);
    temp58->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp58->Target(submitButton);
    uPtr(submitButtonCollapsed)->Width(::g::Uno::UX::Size__New1(10.0f, 1));
    uPtr(submitButtonCollapsed)->Height(::g::Uno::UX::Size__New1(10.0f, 1));
    uPtr(submitButtonCollapsed)->Offset(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(0.0f, 4), ::g::Uno::UX::Size__New1(50.0f, 4)));
    uPtr(submitButtonCollapsed)->Name(MainView::__selector19());
    uPtr(startPanel)->Height(::g::Uno::UX::Size__New1(60.0f, 4));
    uPtr(startPanel)->Alignment(10);
    uPtr(startPanel)->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    uPtr(startPanel)->Name(MainView::__selector20());
    uPtr(startPanel)->Layout(temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(startPanel)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), loginArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(startPanel)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), signinButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(startPanel)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), signupButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(startPanel)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp71);
    temp59->Rows(::STRINGS[52/*"4*,70,0"*/]);
    uPtr(loginArea)->RowCount(2);
    uPtr(loginArea)->Columns(::STRINGS[53/*"auto,1*"*/]);
    uPtr(loginArea)->Width(::g::Uno::UX::Size__New1(350.0f, 1));
    uPtr(loginArea)->Height(::g::Uno::UX::Size__New1(80.0f, 4));
    uPtr(loginArea)->Padding(::g::Uno::Float4__New2(55.0f, 55.0f, 55.0f, 55.0f));
    uPtr(loginArea)->Opacity(1.0f);
    uPtr(loginArea)->Name(MainView::__selector21());
    ::g::Fuse::Controls::Grid::SetRow(loginArea, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    temp60->FontSize(20.0f);
    temp60->TextAlignment(1);
    temp60->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp60->PlaceholderText(::STRINGS[54/*"ID Number"*/]);
    temp60->PlaceholderColor(MainView::White());
    temp60->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Fuse::Controls::Grid::SetRow(temp60, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp60, 1);
    temp61->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp61->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp61, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp61, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp61, 2);
    temp61->Fill(temp62);
    temp63->IsPassword(true);
    temp63->FontSize(20.0f);
    temp63->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp63->PlaceholderText(::STRINGS[57/*"Password"*/]);
    temp63->PlaceholderColor(MainView::White());
    temp63->Alignment(10);
    ::g::Fuse::Controls::Grid::SetRow(temp63, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp63, 1);
    temp64->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp64->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp64, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp64, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp64, 2);
    temp64->Fill(temp65);
    uPtr(signinButton)->Color(MainView::BottomGray());
    uPtr(signinButton)->HitTestMode(2);
    uPtr(signinButton)->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    uPtr(signinButton)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(signinButton)->Alignment(4);
    uPtr(signinButton)->Margin(::g::Uno::Float4__New2(0.0f, -50.0f, 0.0f, 0.0f));
    uPtr(signinButton)->Name(MainView::__selector22());
    ::g::Fuse::Controls::Grid::SetRow(signinButton, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signinButton)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), signinText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signinButton)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp66);
    uPtr(signinText)->Value(::STRINGS[60/*"SIGNIN"*/]);
    uPtr(signinText)->TextColor(MainView::White());
    uPtr(signinText)->HitTestMode(2);
    uPtr(signinText)->Alignment(10);
    uPtr(signinText)->Name(MainView::__selector23());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp67);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp67, mainState);
    uPtr(signupButton)->Color(MainView::BottomGray());
    uPtr(signupButton)->HitTestMode(2);
    uPtr(signupButton)->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    uPtr(signupButton)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(signupButton)->Alignment(4);
    uPtr(signupButton)->Margin(::g::Uno::Float4__New2(0.0f, -45.0f, 0.0f, 0.0f));
    uPtr(signupButton)->Name(MainView::__selector24());
    ::g::Fuse::Controls::Grid::SetRow(signupButton, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signupButton)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signupButton)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp69);
    temp68->Value(::STRINGS[61/*"SIGNUP"*/]);
    temp68->TextColor(MainView::White());
    temp68->HitTestMode(2);
    temp68->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp70);
    temp70->Target((uObject*)showAuthForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp71->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp72);
    temp72->Type(1);
    uPtr(addButtonPanel)->Name(MainView::__selector25());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(addButtonPanel)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), addButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(addButtonPanel)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), greenRect);
    uPtr(addButton)->HitTestMode(6);
    uPtr(addButton)->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(addButton)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(addButton)->Alignment(15);
    uPtr(addButton)->Margin(::g::Uno::Float4__New2(40.0f, 40.0f, 40.0f, 40.0f));
    uPtr(addButton)->Name(MainView::__selector26());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(addButton)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp73);
    temp73->Value(::STRINGS[62/*"+"*/]);
    temp73->FontSize(30.0f);
    temp73->TextColor(MainView::White());
    temp73->Alignment(10);
    uPtr(greenRect)->CornerRadius(::g::Uno::Float4__New2(25.0f, 25.0f, 25.0f, 25.0f));
    uPtr(greenRect)->Color(MainView::Green());
    uPtr(greenRect)->Opacity(0.0f);
    uPtr(greenRect)->Name(MainView::__selector27());
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(greenRect, submitButtonCollapsed);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(greenRect)->Effects()), ::TYPES[17/*Uno.Collections.ICollection<Fuse.Effects.Effect>*/]), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(greenRect)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), showGreenRect);
    uPtr(showGreenRect)->Name(MainView::__selector28());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showGreenRect)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp75);
    ::g::Fuse::Animations::Change__set_Value_fn(temp75, uCRef(1.0f));
    temp75->Duration(0.2);
    uPtr(whiteRect)->CornerRadius(::g::Uno::Float4__New2(25.0f, 25.0f, 25.0f, 25.0f));
    uPtr(whiteRect)->Color(MainView::White());
    uPtr(whiteRect)->Layer(0);
    uPtr(whiteRect)->Name(MainView::__selector29());
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(whiteRect, signupButton);
    uPtr(whiteRectCornerRadiusAttractor)->Type(2);
    uPtr(whiteRectCornerRadiusAttractor)->Unit(0);
    ::g::Fuse::Animations::Attractor__set_Value_fn(uPtr(whiteRectCornerRadiusAttractor), uCRef(::g::Uno::Float4__New2(25.0f, 25.0f, 25.0f, 25.0f)));
    uPtr(whiteRectCornerRadiusAttractor)->Name(MainView::__selector30());
    uPtr(logoPanel)->HitTestMode(0);
    uPtr(logoPanel)->Height(::g::Uno::UX::Size__New1(45.0f, 4));
    uPtr(logoPanel)->Alignment(4);
    uPtr(logoPanel)->IsEnabled(true);
    uPtr(logoPanel)->Name(MainView::__selector31());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(logoPanel)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), logo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(logoPanel)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), moveLogo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(logoPanel)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), shiftLogo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(logoPanel)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp78);
    uPtr(logo)->Width(::g::Uno::UX::Size__New1(75.0f, 4));
    uPtr(logo)->Name(MainView::__selector32());
    uPtr(logo)->File(::g::Uno::UX::BundleFileSource::New1(::g::bimcast_bundle::mainlogo93280a11()));
    uPtr(moveLogo)->Name(MainView::__selector33());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(moveLogo)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp76);
    temp76->Y(-0.15f);
    temp76->Easing(6);
    temp76->Duration(0.5);
    temp76->Delay(0.3);
    temp76->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp76->Target(logo);
    uPtr(shiftLogo)->Name(MainView::__selector34());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(shiftLogo)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp77);
    temp77->Y(-0.09f);
    temp77->Easing(6);
    temp77->Duration(0.5);
    temp77->Delay(0.3);
    temp77->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp77->Target(logo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp79);
    ::g::Fuse::Animations::Change__set_Value_fn(temp79, uCRef(false));
    uPtr(showAuthForm)->Name(MainView::__selector35());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showAuthForm)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp80);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showAuthForm)->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp81);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showAuthForm)->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp82);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showAuthForm)->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp83);
    ::g::Fuse::Animations::Change__set_Value_fn(temp80, uCRef(true));
    temp80->DelayBack(0.0);
    temp80->Delay(0.6);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp81, uCRef(0.0f));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp82, uCRef(true));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp83, uCRef(true));
    uPtr(showPassForm)->Name(MainView::__selector36());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showPassForm)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp87);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showPassForm)->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp84);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showPassForm)->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp85);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showPassForm)->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp86);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showPassForm)->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp88);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showPassForm)->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp89);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showPassForm)->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp90);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showPassForm)->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp91);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp84, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp85, uCRef(0.0f));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp86, uCRef(0.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp87, uCRef(true));
    temp87->DelayBack(0.0);
    temp87->Delay(0.6);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp88, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp89, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp90, uCRef(true));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp91, uCRef(true));
    uPtr(state)->Transition(1);
    uPtr(state)->Name(MainView::__selector37());
    uPtr(state)->Rest(loginButtonState);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(state)->States()), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Triggers.State>*/]), loginButtonState);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(state)->States()), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Triggers.State>*/]), mainState);
    uPtr(loginButtonState)->Name(MainView::__selector38());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginButtonState)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp92);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginButtonState)->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp93);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginButtonState)->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp94);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginButtonState)->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp95);
    ::g::Fuse::Animations::Change__set_Value_fn(temp92, uCRef(true));
    temp92->DelayBack(0.0);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp93, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp94, uCRef(false));
    temp95->Target(addButtonPanel);
    uPtr(mainState)->Name(MainView::__selector39());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp96);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp97);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp98);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp99);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp102);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp103);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp105);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp107);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp108);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp109);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp110);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp100);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp101);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp104);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp106);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp111);
    temp96->Vector(::g::Uno::Float3__New2(1.0f, 1.0f, 1.0f));
    temp96->Easing(6);
    temp96->Duration(0.4);
    temp96->DurationBack(0.0);
    temp96->Delay(0.05);
    temp96->RelativeTo(::g::Fuse::Elements::TranslationModes::PositionOffset());
    temp96->RelativeNode(mainPanel);
    temp96->Target(whiteRect);
    temp97->Vector(::g::Uno::Float2__New2(1.0f, 1.0f));
    temp97->Easing(6);
    temp97->Duration(0.4);
    temp97->DurationBack(0.0);
    temp97->Delay(0.05);
    temp97->Target(whiteRect);
    temp97->RelativeNode(mainPanel);
    temp97->RelativeTo(::g::Fuse::Elements::TranslationModes::Size());
    temp98->Vector(::g::Uno::Float3__New2(1.0f, 1.0f, 1.0f));
    temp98->Easing(6);
    temp98->Duration(0.4);
    temp98->DurationBack(0.0);
    temp98->Delay(0.4);
    temp98->RelativeTo(::g::Fuse::Elements::TranslationModes::PositionOffset());
    temp98->RelativeNode(addButton);
    temp98->Target(greenRect);
    temp99->Vector(::g::Uno::Float2__New2(1.0f, 1.0f));
    temp99->Easing(6);
    temp99->Duration(0.4);
    temp99->DurationBack(0.0);
    temp99->Delay(0.4);
    temp99->Target(greenRect);
    temp99->RelativeNode(addButton);
    temp99->RelativeTo(::g::Fuse::Elements::TranslationModes::Size());
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp100, mainPanel);
    temp100->Delay(0.45f);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp101, addButton);
    temp101->Delay(0.85f);
    ::g::Fuse::Animations::Change__set_Value_fn(temp102, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f)));
    temp102->Duration(0.2);
    temp102->DurationBack(0.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp103, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp104, uCRef(false));
    temp105->Factor(1.2f);
    temp105->Easing(6);
    temp105->Duration(0.2);
    temp105->Delay(0.9);
    temp105->Target(greenRect);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp106, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f)));
    ::g::Fuse::Animations::Change__set_Value_fn(temp107, uCRef(true));
    temp107->Delay(0.9);
    ::g::Fuse::Animations::Change__set_Value_fn(temp108, uCRef(true));
    ::g::Fuse::Animations::Change__set_Value_fn(temp109, uCRef(1.0f));
    temp109->Duration(0.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp110, uCRef(true));
    temp110->Delay(0.5);
    temp111->Target(addButtonPanel);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), topPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), navBarTrans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), mainPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), authForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), authArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), proceedButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), moveButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), passForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), passArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), submitButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), moveRegButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), submitButtonCollapsed);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), startPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), loginArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), signinButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), signinText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), signupButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), addButtonPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), addButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), greenRect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), showGreenRect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), whiteRect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), whiteRectCornerRadiusAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), logoPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), logo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), moveLogo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), shiftLogo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), showAuthForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), showPassForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/]), state);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
}

// public MainView New() [static] :162
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
