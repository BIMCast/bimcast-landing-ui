// This file was generated based on C:\Users\ManailMJ\Documents\Dev\fuse\projects\bimcast\.uno\ux11\MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.bimcast_bundle.h>
#include <_root.bimcast_FuseAnimationsAttractorfloat4_Value_Property.h>
#include <_root.bimcast_FuseControlsRectangle_CornerRadius_Property.h>
#include <_root.bimcast_FuseControlsRectangle_ElementLayoutMaster_Property.h>
#include <_root.bimcast_FuseControlsRectangle_Opacity_Property.h>
#include <_root.bimcast_FuseControlsRectangle_Width_Property.h>
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
#include <Fuse.Controls.Circle.h>
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
#include <Uno.UX.Size2.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[76];
static uType* TYPES[21];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :172
static void MainView__cctor__fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 40, ::STRINGS[0/*"topPanel"*/], ::STRINGS[1/*"navBarTrans"*/], ::STRINGS[2/*"mainPanel"*/], ::STRINGS[3/*"authForm"*/], ::STRINGS[4/*"authArea"*/], ::STRINGS[5/*"proceedButton"*/], ::STRINGS[6/*"moveButton"*/], ::STRINGS[7/*"otpForm"*/], ::STRINGS[8/*"otpArea"*/], ::STRINGS[9/*"otpButton"*/], ::STRINGS[10/*"moveOtpButton"*/], ::STRINGS[11/*"passForm"*/], ::STRINGS[12/*"passArea"*/], ::STRINGS[13/*"submitButton"*/], ::STRINGS[14/*"moveRegButton"*/], ::STRINGS[15/*"submitButto...*/], ::STRINGS[16/*"startPanel"*/], ::STRINGS[17/*"loginArea"*/], ::STRINGS[18/*"signinButton"*/], ::STRINGS[19/*"signinText"*/], ::STRINGS[20/*"signinNorma...*/], ::STRINGS[21/*"signinLoadi...*/], ::STRINGS[22/*"signinButto...*/], ::STRINGS[23/*"signinLoad"*/], ::STRINGS[24/*"changeWidth"*/], ::STRINGS[25/*"signupButton"*/], ::STRINGS[26/*"addButtonPa...*/], ::STRINGS[27/*"addButton"*/], ::STRINGS[28/*"greenRect"*/], ::STRINGS[29/*"showGreenRect"*/], ::STRINGS[30/*"whiteRect"*/], ::STRINGS[31/*"whiteRectCo...*/], ::STRINGS[32/*"logoPanel"*/], ::STRINGS[33/*"logo"*/], ::STRINGS[34/*"moveLogo"*/], ::STRINGS[35/*"shiftLogo"*/], ::STRINGS[36/*"showAuthForm"*/], ::STRINGS[37/*"showOtpForm"*/], ::STRINGS[38/*"showPassForm"*/], ::STRINGS[39/*"state"*/]);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[40/*"Y"*/]);
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[41/*"Active"*/]);
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[42/*"Items"*/]);
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[43/*"Value"*/]);
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[44/*"Width"*/]);
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[45/*"Opacity"*/]);
    MainView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[46/*"CornerRadius"*/]);
    MainView::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[47/*"IsEnabled"*/]);
    MainView::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[48/*"Element.Lay...*/]);
    MainView::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"topPanel"*/]);
    MainView::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"navBarTrans"*/]);
    MainView::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"mainPanel"*/]);
    MainView::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"authForm"*/]);
    MainView::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"authArea"*/]);
    MainView::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"proceedButton"*/]);
    MainView::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"moveButton"*/]);
    MainView::__selector16_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"otpForm"*/]);
    MainView::__selector17_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"otpArea"*/]);
    MainView::__selector18_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"otpButton"*/]);
    MainView::__selector19_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"moveOtpButton"*/]);
    MainView::__selector20_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"passForm"*/]);
    MainView::__selector21_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"passArea"*/]);
    MainView::__selector22_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"submitButton"*/]);
    MainView::__selector23_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"moveRegButton"*/]);
    MainView::__selector24_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"submitButto...*/]);
    MainView::__selector25_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"startPanel"*/]);
    MainView::__selector26_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[17/*"loginArea"*/]);
    MainView::__selector27_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[18/*"signinButton"*/]);
    MainView::__selector28_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[19/*"signinText"*/]);
    MainView::__selector29_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[20/*"signinNorma...*/]);
    MainView::__selector30_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[21/*"signinLoadi...*/]);
    MainView::__selector31_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[22/*"signinButto...*/]);
    MainView::__selector32_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[23/*"signinLoad"*/]);
    MainView::__selector33_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[24/*"changeWidth"*/]);
    MainView::__selector34_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[25/*"signupButton"*/]);
    MainView::__selector35_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[26/*"addButtonPa...*/]);
    MainView::__selector36_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[27/*"addButton"*/]);
    MainView::__selector37_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[28/*"greenRect"*/]);
    MainView::__selector38_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[29/*"showGreenRect"*/]);
    MainView::__selector39_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[30/*"whiteRect"*/]);
    MainView::__selector40_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[31/*"whiteRectCo...*/]);
    MainView::__selector41_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[32/*"logoPanel"*/]);
    MainView::__selector42_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[33/*"logo"*/]);
    MainView::__selector43_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[34/*"moveLogo"*/]);
    MainView::__selector44_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[35/*"shiftLogo"*/]);
    MainView::__selector45_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[36/*"showAuthForm"*/]);
    MainView::__selector46_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[37/*"showOtpForm"*/]);
    MainView::__selector47_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[38/*"showPassForm"*/]);
    MainView::__selector48_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[39/*"state"*/]);
    MainView::__selector49_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[49/*"loginButton...*/]);
    MainView::__selector50_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[50/*"mainState"*/]);
    MainView::Green_ = ::g::Uno::Float4__New2(0.07843138f, 1.0f, 0.7098039f, 1.0f);
    MainView::Purple_ = ::g::Uno::Float4__New2(0.3686275f, 0.1803922f, 0.5686275f, 1.0f);
    MainView::White_ = ::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f);
    MainView::Gray_ = ::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f);
    MainView::TopGray_ = ::g::Uno::Float4__New2(0.6235294f, 0.5137255f, 0.7411765f, 1.0f);
    MainView::BottomGray_ = ::g::Uno::Float4__New2(0.7411765f, 0.2235294f, 0.145098f, 1.0f);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::Green_), ::STRINGS[51/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::Purple_), ::STRINGS[52/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::White_), ::STRINGS[53/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::Gray_), ::STRINGS[54/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::TopGray_), ::STRINGS[55/*"TopGray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), MainView::BottomGray_), ::STRINGS[56/*"BottomGray"*/]);
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
    ::STRINGS[7] = uString::Const("otpForm");
    ::STRINGS[8] = uString::Const("otpArea");
    ::STRINGS[9] = uString::Const("otpButton");
    ::STRINGS[10] = uString::Const("moveOtpButton");
    ::STRINGS[11] = uString::Const("passForm");
    ::STRINGS[12] = uString::Const("passArea");
    ::STRINGS[13] = uString::Const("submitButton");
    ::STRINGS[14] = uString::Const("moveRegButton");
    ::STRINGS[15] = uString::Const("submitButtonCollapsed");
    ::STRINGS[16] = uString::Const("startPanel");
    ::STRINGS[17] = uString::Const("loginArea");
    ::STRINGS[18] = uString::Const("signinButton");
    ::STRINGS[19] = uString::Const("signinText");
    ::STRINGS[20] = uString::Const("signinNormalRect");
    ::STRINGS[21] = uString::Const("signinLoadingButton");
    ::STRINGS[22] = uString::Const("signinButtonScaling");
    ::STRINGS[23] = uString::Const("signinLoad");
    ::STRINGS[24] = uString::Const("changeWidth");
    ::STRINGS[25] = uString::Const("signupButton");
    ::STRINGS[26] = uString::Const("addButtonPanel");
    ::STRINGS[27] = uString::Const("addButton");
    ::STRINGS[28] = uString::Const("greenRect");
    ::STRINGS[29] = uString::Const("showGreenRect");
    ::STRINGS[30] = uString::Const("whiteRect");
    ::STRINGS[31] = uString::Const("whiteRectCornerRadiusAttractor");
    ::STRINGS[32] = uString::Const("logoPanel");
    ::STRINGS[33] = uString::Const("logo");
    ::STRINGS[34] = uString::Const("moveLogo");
    ::STRINGS[35] = uString::Const("shiftLogo");
    ::STRINGS[36] = uString::Const("showAuthForm");
    ::STRINGS[37] = uString::Const("showOtpForm");
    ::STRINGS[38] = uString::Const("showPassForm");
    ::STRINGS[39] = uString::Const("state");
    ::STRINGS[40] = uString::Const("Y");
    ::STRINGS[41] = uString::Const("Active");
    ::STRINGS[42] = uString::Const("Items");
    ::STRINGS[43] = uString::Const("Value");
    ::STRINGS[44] = uString::Const("Width");
    ::STRINGS[45] = uString::Const("Opacity");
    ::STRINGS[46] = uString::Const("CornerRadius");
    ::STRINGS[47] = uString::Const("IsEnabled");
    ::STRINGS[48] = uString::Const("Element.LayoutMaster");
    ::STRINGS[49] = uString::Const("loginButtonState");
    ::STRINGS[50] = uString::Const("mainState");
    ::STRINGS[51] = uString::Const("Green");
    ::STRINGS[52] = uString::Const("Purple");
    ::STRINGS[53] = uString::Const("White");
    ::STRINGS[54] = uString::Const("Gray");
    ::STRINGS[55] = uString::Const("TopGray");
    ::STRINGS[56] = uString::Const("BottomGray");
    ::STRINGS[57] = uString::Const("mockItems");
    ::STRINGS[58] = uString::Const("60,1*");
    ::STRINGS[59] = uString::Const("70,1*,70");
    ::STRINGS[60] = uString::Const("Feed");
    ::STRINGS[61] = uString::Const("module.exports = {\n"
        "\t\t\t\t\t\tmockItems: [\"#FF4C81\",\"#F9ED46\",\"#47BDF9\",\"#F97947\",\"#FF4C81\",\"#F9ED46\",\"#47BDF9\",\"#F97947\"]\n"
        "\t\t\t\t\t};");
    ::STRINGS[62] = uString::Const("MainView.ux");
    ::STRINGS[63] = uString::Const("4*,70,0");
    ::STRINGS[64] = uString::Const("auto,1*");
    ::STRINGS[65] = uString::Const("ID Number");
    ::STRINGS[66] = uString::Const("Cell Number");
    ::STRINGS[67] = uString::Const("Proceed");
    ::STRINGS[68] = uString::Const("Enter OTP");
    ::STRINGS[69] = uString::Const("Confirm");
    ::STRINGS[70] = uString::Const("Password");
    ::STRINGS[71] = uString::Const("Confirm Password");
    ::STRINGS[72] = uString::Const("DONE");
    ::STRINGS[73] = uString::Const("SIGNIN");
    ::STRINGS[74] = uString::Const("SIGNUP");
    ::STRINGS[75] = uString::Const("+");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Attractor_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[3] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[4] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof());
    ::TYPES[5] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[6] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::UX::Size_typeof());
    ::TYPES[7] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[8] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[9] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Element_typeof());
    ::TYPES[10] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[11] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[14] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[15] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[16] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[17] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[18] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof());
    ::TYPES[19] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[20] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof());
    type->SetFields(9,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::HidingPanel_typeof(), offsetof(::g::MainView, addButton), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, addButton_IsEnabled_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, addButtonPanel), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(::g::MainView, authArea), 0,
        ::g::HidingPanel_typeof(), offsetof(::g::MainView, authForm), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, authForm_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::MainView, authForm_Opacity_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, changeWidth), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, changeWidth_Value_inst), 0,
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
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, moveOtpButton), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, moveOtpButton_Value_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, moveRegButton), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, moveRegButton_Value_inst), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::MainView, navBarTrans), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::MainView, navBarTrans_Y_inst), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(::g::MainView, otpArea), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, otpButton), 0,
        ::g::HidingPanel_typeof(), offsetof(::g::MainView, otpForm), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, otpForm_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::MainView, otpForm_Opacity_inst), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(::g::MainView, passArea), 0,
        ::g::HidingPanel_typeof(), offsetof(::g::MainView, passForm), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, passForm_IsEnabled_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, proceedButton), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, shiftLogo), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, shiftLogo_Value_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, showAuthForm), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, showAuthForm_Value_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, showGreenRect), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, showOtpForm), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, showOtpForm_Value_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, showPassForm), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, showPassForm_Value_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, signinButton), 0,
        ::g::Fuse::Scaling_typeof(), offsetof(::g::MainView, signinButtonScaling), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, signinLoad), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, signinLoadingButton), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, signinNormalRect), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof()), offsetof(::g::MainView, signinNormalRect_Width_inst), 0,
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
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector40_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector41_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector42_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector43_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector44_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector45_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector46_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector47_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector48_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector49_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector50_, uFieldFlagsStatic,
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
    options.FieldCount = 139;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    return type;
}

// public MainView() :188
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// private void InitializeUX() :192
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :188
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
::g::Uno::UX::Selector MainView::__selector40_;
::g::Uno::UX::Selector MainView::__selector41_;
::g::Uno::UX::Selector MainView::__selector42_;
::g::Uno::UX::Selector MainView::__selector43_;
::g::Uno::UX::Selector MainView::__selector44_;
::g::Uno::UX::Selector MainView::__selector45_;
::g::Uno::UX::Selector MainView::__selector46_;
::g::Uno::UX::Selector MainView::__selector47_;
::g::Uno::UX::Selector MainView::__selector48_;
::g::Uno::UX::Selector MainView::__selector49_;
::g::Uno::UX::Selector MainView::__selector5_;
::g::Uno::UX::Selector MainView::__selector50_;
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

// public MainView() [instance] :188
void MainView::ctor_3()
{
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :192
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
    changeWidth = ::g::Fuse::Triggers::WhileTrue::New2();
    changeWidth_Value_inst = ::g::bimcast_FuseTriggersWhileTrue_Value_Property::New1(changeWidth, MainView::__selector3());
    signinNormalRect = ::g::Fuse::Controls::Rectangle::New3();
    signinNormalRect_Width_inst = ::g::bimcast_FuseControlsRectangle_Width_Property::New1(signinNormalRect, MainView::__selector4());
    greenRect = ::g::Fuse::Controls::Rectangle::New3();
    greenRect_Opacity_inst = ::g::bimcast_FuseControlsRectangle_Opacity_Property::New1(greenRect, MainView::__selector5());
    whiteRect = ::g::Fuse::Controls::Rectangle::New3();
    whiteRect_CornerRadius_inst = ::g::bimcast_FuseControlsRectangle_CornerRadius_Property::New1(whiteRect, MainView::__selector6());
    logoPanel = ::g::HidingPanel::New4();
    logoPanel_IsEnabled_inst = ::g::bimcast_HidingPanel_IsEnabled_Property::New1(logoPanel, MainView::__selector7());
    authForm = ::g::HidingPanel::New4();
    authForm_IsEnabled_inst = ::g::bimcast_HidingPanel_IsEnabled_Property::New1(authForm, MainView::__selector7());
    startPanel = ::g::HidingPanel::New4();
    startPanel_Opacity_inst = ::g::bimcast_HidingPanel_Opacity_Property::New1(startPanel, MainView::__selector5());
    moveLogo = ::g::Fuse::Triggers::WhileTrue::New2();
    moveLogo_Value_inst = ::g::bimcast_FuseTriggersWhileTrue_Value_Property::New1(moveLogo, MainView::__selector3());
    moveButton = ::g::Fuse::Triggers::WhileTrue::New2();
    moveButton_Value_inst = ::g::bimcast_FuseTriggersWhileTrue_Value_Property::New1(moveButton, MainView::__selector3());
    showAuthForm = ::g::Fuse::Triggers::WhileTrue::New2();
    showAuthForm_Value_inst = ::g::bimcast_FuseTriggersWhileTrue_Value_Property::New1(showAuthForm, MainView::__selector3());
    authForm_Opacity_inst = ::g::bimcast_HidingPanel_Opacity_Property::New1(authForm, MainView::__selector5());
    otpForm = ::g::HidingPanel::New4();
    otpForm_IsEnabled_inst = ::g::bimcast_HidingPanel_IsEnabled_Property::New1(otpForm, MainView::__selector7());
    moveOtpButton = ::g::Fuse::Triggers::WhileTrue::New2();
    moveOtpButton_Value_inst = ::g::bimcast_FuseTriggersWhileTrue_Value_Property::New1(moveOtpButton, MainView::__selector3());
    showOtpForm = ::g::Fuse::Triggers::WhileTrue::New2();
    showOtpForm_Value_inst = ::g::bimcast_FuseTriggersWhileTrue_Value_Property::New1(showOtpForm, MainView::__selector3());
    otpForm_Opacity_inst = ::g::bimcast_HidingPanel_Opacity_Property::New1(otpForm, MainView::__selector5());
    passForm = ::g::HidingPanel::New4();
    passForm_IsEnabled_inst = ::g::bimcast_HidingPanel_IsEnabled_Property::New1(passForm, MainView::__selector7());
    moveRegButton = ::g::Fuse::Triggers::WhileTrue::New2();
    moveRegButton_Value_inst = ::g::bimcast_FuseTriggersWhileTrue_Value_Property::New1(moveRegButton, MainView::__selector3());
    shiftLogo = ::g::Fuse::Triggers::WhileTrue::New2();
    shiftLogo_Value_inst = ::g::bimcast_FuseTriggersWhileTrue_Value_Property::New1(shiftLogo, MainView::__selector3());
    startPanel_IsEnabled_inst = ::g::bimcast_HidingPanel_IsEnabled_Property::New1(startPanel, MainView::__selector7());
    whiteRect_Element_LayoutMaster_inst = ::g::bimcast_FuseControlsRectangle_ElementLayoutMaster_Property::New1(whiteRect, MainView::__selector8());
    greenRect_Element_LayoutMaster_inst = ::g::bimcast_FuseControlsRectangle_ElementLayoutMaster_Property::New1(greenRect, MainView::__selector8());
    showPassForm = ::g::Fuse::Triggers::WhileTrue::New2();
    showPassForm_Value_inst = ::g::bimcast_FuseTriggersWhileTrue_Value_Property::New1(showPassForm, MainView::__selector3());
    whiteRectCornerRadiusAttractor = ((::g::Fuse::Animations::Attractor*)::g::Fuse::Animations::Attractor::New3(::TYPES[1/*Fuse.Animations.Attractor<float4>*/], whiteRect_CornerRadius_inst));
    whiteRectCornerRadiusAttractor_Value_inst = ::g::bimcast_FuseAnimationsAttractorfloat4_Value_Property::New1(whiteRectCornerRadiusAttractor, MainView::__selector3());
    mainPanel = ::g::HidingPanel::New4();
    mainPanel_IsEnabled_inst = ::g::bimcast_HidingPanel_IsEnabled_Property::New1(mainPanel, MainView::__selector7());
    topPanel = ::g::HidingPanel::New4();
    topPanel_IsEnabled_inst = ::g::bimcast_HidingPanel_IsEnabled_Property::New1(topPanel, MainView::__selector7());
    addButton = ::g::HidingPanel::New4();
    addButton_IsEnabled_inst = ::g::bimcast_HidingPanel_IsEnabled_Property::New1(addButton, MainView::__selector7());
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
    ::g::Fuse::Reactive::DataBinding* temp34 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[4/*Fuse.Reactive.DataBinding<object>*/], temp_Items_inst, ::STRINGS[57/*"mockItems"*/]);
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
    otpArea = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::TextInput* temp48 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::Rectangle* temp49 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp50 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    otpButton = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp51 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp52 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Animations::Scale* temp53 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp54 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Animations::Move* temp55 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Layouts::GridLayout* temp56 = ::g::Fuse::Layouts::GridLayout::New2();
    passArea = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::TextInput* temp57 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::Rectangle* temp58 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp59 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::TextInput* temp60 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::Rectangle* temp61 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp62 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Panel* temp63 = ::g::Fuse::Controls::Panel::New3();
    submitButton = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp64 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp65 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp66 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Triggers.State>*/], state_Active_inst);
    ::g::Fuse::Animations::Move* temp67 = ::g::Fuse::Animations::Move::New2();
    submitButtonCollapsed = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Layouts::GridLayout* temp68 = ::g::Fuse::Layouts::GridLayout::New2();
    loginArea = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::TextInput* temp69 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::Rectangle* temp70 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp71 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::TextInput* temp72 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::Rectangle* temp73 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp74 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    signinButton = ::g::Fuse::Controls::Panel::New3();
    signinText = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp75 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp76 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp77 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 0.2f, 0.4f, 1.0f));
    signinLoadingButton = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Circle* temp78 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp79 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 0.2f, 0.4f, 1.0f));
    signinButtonScaling = ::g::Fuse::Scaling::New2();
    signinLoad = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp80 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<bool>*/], changeWidth_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp81 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Triggers.State>*/], state_Active_inst);
    ::g::Fuse::Animations::Change* temp82 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[6/*Fuse.Animations.Change<Uno.UX.Size>*/], signinNormalRect_Width_inst);
    signupButton = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp83 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp84 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp85 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Triggers::OnBackButton* temp86 = ::g::Fuse::Triggers::OnBackButton::New3();
    ::g::HomeScreen* temp87 = ::g::HomeScreen::New2();
    addButtonPanel = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp88 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Effects::DropShadow* temp89 = ::g::Fuse::Effects::DropShadow::New2();
    showGreenRect = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp90 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], greenRect_Opacity_inst);
    logo = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Animations::Move* temp91 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp92 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::WhileKeyboardVisible* temp93 = ::g::Fuse::Triggers::WhileKeyboardVisible::New2();
    ::g::Fuse::Animations::Change* temp94 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<bool>*/], logoPanel_IsEnabled_inst);
    ::g::Fuse::Animations::Change* temp95 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<bool>*/], authForm_IsEnabled_inst);
    ::g::Fuse::Triggers::Actions::Set* temp96 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<float>*/], startPanel_Opacity_inst);
    ::g::Fuse::Triggers::Actions::Set* temp97 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<bool>*/], moveLogo_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp98 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<bool>*/], moveButton_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp99 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<bool>*/], showAuthForm_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp100 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<float>*/], authForm_Opacity_inst);
    ::g::Fuse::Triggers::Actions::Set* temp101 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<float>*/], startPanel_Opacity_inst);
    ::g::Fuse::Animations::Change* temp102 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<bool>*/], otpForm_IsEnabled_inst);
    ::g::Fuse::Triggers::Actions::Set* temp103 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<bool>*/], moveLogo_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp104 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<bool>*/], moveOtpButton_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp105 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<bool>*/], showOtpForm_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp106 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<float>*/], authForm_Opacity_inst);
    ::g::Fuse::Triggers::Actions::Set* temp107 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<float>*/], otpForm_Opacity_inst);
    ::g::Fuse::Triggers::Actions::Set* temp108 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<float>*/], startPanel_Opacity_inst);
    ::g::Fuse::Animations::Change* temp109 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<bool>*/], passForm_IsEnabled_inst);
    ::g::Fuse::Triggers::Actions::Set* temp110 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<bool>*/], moveLogo_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp111 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<bool>*/], moveRegButton_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp112 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<bool>*/], shiftLogo_Value_inst);
    loginButtonState = ::g::Fuse::Triggers::State::New2();
    ::g::Fuse::Animations::Change* temp113 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<bool>*/], startPanel_IsEnabled_inst);
    ::g::Fuse::Triggers::Actions::Set* temp114 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<bool>*/], moveLogo_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp115 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<bool>*/], moveLogo_Value_inst);
    ::g::Fuse::Animations::Change* temp116 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<bool>*/], changeWidth_Value_inst);
    ::g::Fuse::Triggers::Actions::SendToBack* temp117 = ::g::Fuse::Triggers::Actions::SendToBack::New2();
    mainState = ::g::Fuse::Triggers::State::New2();
    ::g::Fuse::Animations::Move* temp118 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Resize* temp119 = ::g::Fuse::Animations::Resize::New2();
    ::g::Fuse::Animations::Move* temp120 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Resize* temp121 = ::g::Fuse::Animations::Resize::New2();
    ::g::Fuse::Triggers::Actions::Set* temp122 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[9/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], whiteRect_Element_LayoutMaster_inst);
    ::g::Fuse::Triggers::Actions::Set* temp123 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[9/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], greenRect_Element_LayoutMaster_inst);
    ::g::Fuse::Animations::Change* temp124 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[10/*Fuse.Animations.Change<float4>*/], whiteRect_CornerRadius_inst);
    ::g::Fuse::Animations::Change* temp125 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<bool>*/], logoPanel_IsEnabled_inst);
    ::g::Fuse::Triggers::Actions::Set* temp126 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<bool>*/], showPassForm_Value_inst);
    ::g::Fuse::Animations::Scale* temp127 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Triggers::Actions::Set* temp128 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[11/*Fuse.Triggers.Actions.Set<float4>*/], whiteRectCornerRadiusAttractor_Value_inst);
    ::g::Fuse::Animations::Change* temp129 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<bool>*/], mainPanel_IsEnabled_inst);
    ::g::Fuse::Animations::Change* temp130 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<bool>*/], topPanel_IsEnabled_inst);
    ::g::Fuse::Animations::Change* temp131 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], greenRect_Opacity_inst);
    ::g::Fuse::Animations::Change* temp132 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<bool>*/], addButton_IsEnabled_inst);
    ::g::Fuse::Triggers::Actions::BringToFront* temp133 = ::g::Fuse::Triggers::Actions::BringToFront::New2();
    temp14->Style(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), topPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), authForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), otpForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), passForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), startPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), addButtonPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), whiteRect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), whiteRectCornerRadiusAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), logoPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), showAuthForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), showOtpForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), showPassForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), state);
    temp17->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Fills()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp18);
    temp18->Opacity(0.83f);
    temp18->File(::g::Uno::UX::BundleFileSource::New1(::g::bimcast_bundle::bglogine50430b4()));
    uPtr(topPanel)->Name(MainView::__selector9());
    uPtr(topPanel)->Layout(temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topPanel)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topPanel)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topPanel)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), mainPanel);
    temp19->Rows(::STRINGS[58/*"60,1*"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp21);
    ::g::Fuse::Animations::Change__set_Value_fn(temp21, uCRef(0.0f));
    temp21->Duration(0.4);
    temp22->Columns(::STRINGS[59/*"70,1*,70"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), navBarTrans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    uPtr(navBarTrans)->Y(-0.2f);
    uPtr(navBarTrans)->Name(MainView::__selector10());
    uPtr(navBarTrans)->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp23->HitTestMode(6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    temp24->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp24->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp24->File(::g::Uno::UX::BundleFileSource::New1(::g::bimcast_bundle::menudf4331e2()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp27);
    temp26->Factor(0.8f);
    temp26->Easing(6);
    temp26->Duration(0.15);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp27, loginButtonState);
    temp28->Value(::STRINGS[60/*"Feed"*/]);
    temp28->FontSize(20.0f);
    temp28->TextColor(MainView::White());
    temp28->Alignment(8);
    temp29->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp29->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp29->File(::g::Uno::UX::BundleFileSource::New1(::g::bimcast_bundle::search4cd1c3e9()));
    uPtr(mainPanel)->Name(MainView::__selector11());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainPanel)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainPanel)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    temp30->Code(::STRINGS[61/*"module.expo...*/]);
    temp30->LineNumber(30);
    temp30->FileName(::STRINGS[62/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    temp32->Margin(::g::Uno::Float4__New2(25.0f, 25.0f, 25.0f, 25.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::TYPES[16/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[17/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp34);
    uPtr(authForm)->Height(::g::Uno::UX::Size__New1(60.0f, 4));
    uPtr(authForm)->Alignment(10);
    uPtr(authForm)->Margin(::g::Uno::Float4__New2(0.0f, 60.0f, 0.0f, 0.0f));
    uPtr(authForm)->Name(MainView::__selector12());
    uPtr(authForm)->Layout(temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(authForm)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), authArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(authForm)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), proceedButton);
    temp35->Rows(::STRINGS[63/*"4*,70,0"*/]);
    uPtr(authArea)->RowCount(2);
    uPtr(authArea)->Columns(::STRINGS[64/*"auto,1*"*/]);
    uPtr(authArea)->Width(::g::Uno::UX::Size__New1(350.0f, 1));
    uPtr(authArea)->Height(::g::Uno::UX::Size__New1(80.0f, 4));
    uPtr(authArea)->Padding(::g::Uno::Float4__New2(55.0f, 55.0f, 55.0f, 55.0f));
    uPtr(authArea)->Opacity(1.0f);
    uPtr(authArea)->Name(MainView::__selector13());
    ::g::Fuse::Controls::Grid::SetRow(authArea, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(authArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(authArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(authArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(authArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    temp36->FontSize(20.0f);
    temp36->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp36->PlaceholderText(::STRINGS[65/*"ID Number"*/]);
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
    temp39->PlaceholderText(::STRINGS[66/*"Cell Number"*/]);
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
    uPtr(proceedButton)->Name(MainView::__selector14());
    ::g::Fuse::Controls::Grid::SetRow(proceedButton, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(proceedButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(proceedButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(proceedButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), moveButton);
    temp42->Value(::STRINGS[67/*"Proceed"*/]);
    temp42->TextColor(MainView::White());
    temp42->HitTestMode(2);
    temp42->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp45);
    temp44->Factor(0.8f);
    temp44->Easing(6);
    temp44->Duration(0.15);
    temp45->Target((uObject*)showOtpForm);
    uPtr(moveButton)->Name(MainView::__selector15());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(moveButton)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp46);
    temp46->Y(0.32f);
    temp46->Easing(6);
    temp46->Duration(0.5);
    temp46->Delay(0.3);
    temp46->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp46->Target(proceedButton);
    uPtr(otpForm)->Height(::g::Uno::UX::Size__New1(60.0f, 4));
    uPtr(otpForm)->Alignment(10);
    uPtr(otpForm)->Margin(::g::Uno::Float4__New2(0.0f, 60.0f, 0.0f, 0.0f));
    uPtr(otpForm)->Name(MainView::__selector16());
    uPtr(otpForm)->Layout(temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(otpForm)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), otpArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(otpForm)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), otpButton);
    temp47->Rows(::STRINGS[63/*"4*,70,0"*/]);
    uPtr(otpArea)->RowCount(2);
    uPtr(otpArea)->Columns(::STRINGS[64/*"auto,1*"*/]);
    uPtr(otpArea)->Width(::g::Uno::UX::Size__New1(350.0f, 1));
    uPtr(otpArea)->Height(::g::Uno::UX::Size__New1(80.0f, 4));
    uPtr(otpArea)->Padding(::g::Uno::Float4__New2(55.0f, 55.0f, 55.0f, 55.0f));
    uPtr(otpArea)->Opacity(1.0f);
    uPtr(otpArea)->Name(MainView::__selector17());
    ::g::Fuse::Controls::Grid::SetRow(otpArea, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(otpArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(otpArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    temp48->FontSize(20.0f);
    temp48->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp48->PlaceholderText(::STRINGS[68/*"Enter OTP"*/]);
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
    uPtr(otpButton)->Color(MainView::BottomGray());
    uPtr(otpButton)->HitTestMode(2);
    uPtr(otpButton)->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    uPtr(otpButton)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(otpButton)->Alignment(4);
    uPtr(otpButton)->Margin(::g::Uno::Float4__New2(0.0f, -50.0f, 0.0f, 0.0f));
    uPtr(otpButton)->Name(MainView::__selector18());
    ::g::Fuse::Controls::Grid::SetRow(otpButton, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(otpButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(otpButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(otpButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), moveOtpButton);
    temp51->Value(::STRINGS[69/*"Confirm"*/]);
    temp51->TextColor(MainView::White());
    temp51->HitTestMode(2);
    temp51->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp54);
    temp53->Factor(0.8f);
    temp53->Easing(6);
    temp53->Duration(0.15);
    temp54->Target((uObject*)showPassForm);
    uPtr(moveOtpButton)->Name(MainView::__selector19());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(moveOtpButton)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp55);
    temp55->Y(0.32f);
    temp55->Easing(6);
    temp55->Duration(0.5);
    temp55->Delay(0.3);
    temp55->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp55->Target(otpButton);
    uPtr(passForm)->Height(::g::Uno::UX::Size__New1(60.0f, 4));
    uPtr(passForm)->Alignment(10);
    uPtr(passForm)->Margin(::g::Uno::Float4__New2(0.0f, 60.0f, 0.0f, 0.0f));
    uPtr(passForm)->Name(MainView::__selector20());
    uPtr(passForm)->Layout(temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(passForm)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), passArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(passForm)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    temp56->Rows(::STRINGS[63/*"4*,70,0"*/]);
    uPtr(passArea)->RowCount(2);
    uPtr(passArea)->Columns(::STRINGS[64/*"auto,1*"*/]);
    uPtr(passArea)->Width(::g::Uno::UX::Size__New1(390.0f, 1));
    uPtr(passArea)->Height(::g::Uno::UX::Size__New1(80.0f, 4));
    uPtr(passArea)->Padding(::g::Uno::Float4__New2(55.0f, 55.0f, 55.0f, 55.0f));
    uPtr(passArea)->Opacity(1.0f);
    uPtr(passArea)->Name(MainView::__selector21());
    ::g::Fuse::Controls::Grid::SetRow(passArea, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(passArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(passArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(passArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(passArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    temp57->FontSize(20.0f);
    temp57->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp57->PlaceholderText(::STRINGS[70/*"Password"*/]);
    temp57->PlaceholderColor(MainView::White());
    temp57->Alignment(10);
    ::g::Fuse::Controls::Grid::SetRow(temp57, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp57, 1);
    temp58->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp58->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp58, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp58, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp58, 2);
    temp58->Fill(temp59);
    temp60->IsPassword(true);
    temp60->FontSize(20.0f);
    temp60->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp60->PlaceholderText(::STRINGS[71/*"Confirm Pas...*/]);
    temp60->PlaceholderColor(MainView::White());
    temp60->Alignment(10);
    ::g::Fuse::Controls::Grid::SetRow(temp60, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp60, 1);
    temp61->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp61->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp61, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp61, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp61, 2);
    temp61->Fill(temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), submitButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), moveRegButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), submitButtonCollapsed);
    uPtr(submitButton)->Color(MainView::BottomGray());
    uPtr(submitButton)->HitTestMode(6);
    uPtr(submitButton)->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    uPtr(submitButton)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(submitButton)->Offset(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(0.0f, 4), ::g::Uno::UX::Size__New1(-90.0f, 4)));
    uPtr(submitButton)->Name(MainView::__selector22());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(submitButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(submitButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    temp64->Value(::STRINGS[72/*"DONE"*/]);
    temp64->TextColor(MainView::White());
    temp64->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp66);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp66, mainState);
    uPtr(moveRegButton)->Name(MainView::__selector23());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(moveRegButton)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp67);
    temp67->Y(0.32f);
    temp67->Easing(6);
    temp67->Duration(0.5);
    temp67->Delay(0.3);
    temp67->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp67->Target(submitButton);
    uPtr(submitButtonCollapsed)->Width(::g::Uno::UX::Size__New1(10.0f, 1));
    uPtr(submitButtonCollapsed)->Height(::g::Uno::UX::Size__New1(10.0f, 1));
    uPtr(submitButtonCollapsed)->Offset(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(0.0f, 4), ::g::Uno::UX::Size__New1(50.0f, 4)));
    uPtr(submitButtonCollapsed)->Name(MainView::__selector24());
    uPtr(startPanel)->Height(::g::Uno::UX::Size__New1(60.0f, 4));
    uPtr(startPanel)->Alignment(10);
    uPtr(startPanel)->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    uPtr(startPanel)->Name(MainView::__selector25());
    uPtr(startPanel)->Layout(temp68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(startPanel)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), loginArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(startPanel)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), signinButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(startPanel)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), signinLoad);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(startPanel)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), changeWidth);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(startPanel)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), signupButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(startPanel)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp86);
    temp68->Rows(::STRINGS[63/*"4*,70,0"*/]);
    uPtr(loginArea)->RowCount(2);
    uPtr(loginArea)->Columns(::STRINGS[64/*"auto,1*"*/]);
    uPtr(loginArea)->Width(::g::Uno::UX::Size__New1(350.0f, 1));
    uPtr(loginArea)->Height(::g::Uno::UX::Size__New1(80.0f, 4));
    uPtr(loginArea)->Padding(::g::Uno::Float4__New2(55.0f, 55.0f, 55.0f, 55.0f));
    uPtr(loginArea)->Opacity(1.0f);
    uPtr(loginArea)->Name(MainView::__selector26());
    ::g::Fuse::Controls::Grid::SetRow(loginArea, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp73);
    temp69->FontSize(20.0f);
    temp69->TextAlignment(1);
    temp69->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp69->PlaceholderText(::STRINGS[65/*"ID Number"*/]);
    temp69->PlaceholderColor(MainView::White());
    temp69->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Fuse::Controls::Grid::SetRow(temp69, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp69, 1);
    temp70->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp70->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp70, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp70, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp70, 2);
    temp70->Fill(temp71);
    temp72->IsPassword(true);
    temp72->FontSize(20.0f);
    temp72->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp72->PlaceholderText(::STRINGS[70/*"Password"*/]);
    temp72->PlaceholderColor(MainView::White());
    temp72->Alignment(10);
    ::g::Fuse::Controls::Grid::SetRow(temp72, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp72, 1);
    temp73->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp73->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp73, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp73, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp73, 2);
    temp73->Fill(temp74);
    uPtr(signinButton)->Color(MainView::BottomGray());
    uPtr(signinButton)->HitTestMode(2);
    uPtr(signinButton)->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    uPtr(signinButton)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(signinButton)->Alignment(4);
    uPtr(signinButton)->Margin(::g::Uno::Float4__New2(0.0f, -50.0f, 0.0f, 0.0f));
    uPtr(signinButton)->Name(MainView::__selector27());
    ::g::Fuse::Controls::Grid::SetRow(signinButton, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signinButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), signinText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signinButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp75);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signinButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), signinNormalRect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signinButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), signinLoadingButton);
    uPtr(signinText)->Value(::STRINGS[73/*"SIGNIN"*/]);
    uPtr(signinText)->TextColor(MainView::White());
    uPtr(signinText)->HitTestMode(2);
    uPtr(signinText)->Alignment(10);
    uPtr(signinText)->Name(MainView::__selector28());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp76);
    temp76->Target((uObject*)signinLoad);
    uPtr(signinNormalRect)->CornerRadius(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    uPtr(signinNormalRect)->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    uPtr(signinNormalRect)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(signinNormalRect)->Name(MainView::__selector29());
    uPtr(signinNormalRect)->Fill(temp77);
    uPtr(signinLoadingButton)->Width(::g::Uno::UX::Size__New1(1320.0f, 1));
    uPtr(signinLoadingButton)->Height(::g::Uno::UX::Size__New1(1320.0f, 1));
    uPtr(signinLoadingButton)->Alignment(10);
    uPtr(signinLoadingButton)->Opacity(0.0f);
    uPtr(signinLoadingButton)->Name(MainView::__selector30());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signinLoadingButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp78);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signinLoadingButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), signinButtonScaling);
    temp78->Fill(temp79);
    uPtr(signinButtonScaling)->Factor(0.04545f);
    uPtr(signinButtonScaling)->Name(MainView::__selector31());
    uPtr(signinLoad)->Name(MainView::__selector32());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signinLoad)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp80);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signinLoad)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp81);
    ::g::Fuse::Animations::Change__set_Value_fn(temp80, uCRef(true));
    temp80->DelayBack(0.0);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp81, mainState);
    uPtr(changeWidth)->Name(MainView::__selector33());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(changeWidth)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp82);
    ::g::Fuse::Animations::Change__set_Value_fn(temp82, uCRef(::g::Uno::UX::Size__New1(60.0f, 1)));
    temp82->Easing(21);
    temp82->Duration(0.5);
    temp82->DurationBack(0.0);
    uPtr(signupButton)->Color(MainView::BottomGray());
    uPtr(signupButton)->HitTestMode(2);
    uPtr(signupButton)->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    uPtr(signupButton)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(signupButton)->Alignment(4);
    uPtr(signupButton)->Margin(::g::Uno::Float4__New2(0.0f, -45.0f, 0.0f, 0.0f));
    uPtr(signupButton)->Name(MainView::__selector34());
    ::g::Fuse::Controls::Grid::SetRow(signupButton, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signupButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp83);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signupButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp84);
    temp83->Value(::STRINGS[74/*"SIGNUP"*/]);
    temp83->TextColor(MainView::White());
    temp83->HitTestMode(2);
    temp83->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp84->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp85);
    temp85->Target((uObject*)showAuthForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp86->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp87);
    temp87->Type(1);
    uPtr(addButtonPanel)->Name(MainView::__selector35());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(addButtonPanel)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), addButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(addButtonPanel)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), greenRect);
    uPtr(addButton)->HitTestMode(6);
    uPtr(addButton)->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(addButton)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(addButton)->Alignment(15);
    uPtr(addButton)->Margin(::g::Uno::Float4__New2(40.0f, 40.0f, 40.0f, 40.0f));
    uPtr(addButton)->Name(MainView::__selector36());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(addButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp88);
    temp88->Value(::STRINGS[75/*"+"*/]);
    temp88->FontSize(30.0f);
    temp88->TextColor(MainView::White());
    temp88->Alignment(10);
    uPtr(greenRect)->CornerRadius(::g::Uno::Float4__New2(25.0f, 25.0f, 25.0f, 25.0f));
    uPtr(greenRect)->Color(MainView::BottomGray());
    uPtr(greenRect)->Opacity(0.0f);
    uPtr(greenRect)->Name(MainView::__selector37());
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(greenRect, submitButtonCollapsed);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(greenRect)->Effects()), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Effects.Effect>*/]), temp89);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(greenRect)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), showGreenRect);
    uPtr(showGreenRect)->Name(MainView::__selector38());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showGreenRect)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp90);
    ::g::Fuse::Animations::Change__set_Value_fn(temp90, uCRef(1.0f));
    temp90->Duration(0.2);
    uPtr(whiteRect)->CornerRadius(::g::Uno::Float4__New2(25.0f, 25.0f, 25.0f, 25.0f));
    uPtr(whiteRect)->Color(MainView::White());
    uPtr(whiteRect)->Layer(0);
    uPtr(whiteRect)->Name(MainView::__selector39());
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(whiteRect, signupButton);
    uPtr(whiteRectCornerRadiusAttractor)->Type(2);
    uPtr(whiteRectCornerRadiusAttractor)->Unit(0);
    ::g::Fuse::Animations::Attractor__set_Value_fn(uPtr(whiteRectCornerRadiusAttractor), uCRef(::g::Uno::Float4__New2(25.0f, 25.0f, 25.0f, 25.0f)));
    uPtr(whiteRectCornerRadiusAttractor)->Name(MainView::__selector40());
    uPtr(logoPanel)->HitTestMode(0);
    uPtr(logoPanel)->Height(::g::Uno::UX::Size__New1(45.0f, 4));
    uPtr(logoPanel)->Alignment(4);
    uPtr(logoPanel)->IsEnabled(true);
    uPtr(logoPanel)->Name(MainView::__selector41());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(logoPanel)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), logo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(logoPanel)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), moveLogo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(logoPanel)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), shiftLogo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(logoPanel)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp93);
    uPtr(logo)->Width(::g::Uno::UX::Size__New1(75.0f, 4));
    uPtr(logo)->Name(MainView::__selector42());
    uPtr(logo)->File(::g::Uno::UX::BundleFileSource::New1(::g::bimcast_bundle::mainlogo93280a11()));
    uPtr(moveLogo)->Name(MainView::__selector43());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(moveLogo)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp91);
    temp91->Y(-0.15f);
    temp91->Easing(6);
    temp91->Duration(0.5);
    temp91->Delay(0.3);
    temp91->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp91->Target(logo);
    uPtr(shiftLogo)->Name(MainView::__selector44());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(shiftLogo)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp92);
    temp92->Y(-0.09f);
    temp92->Easing(6);
    temp92->Duration(0.5);
    temp92->Delay(0.3);
    temp92->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp92->Target(logo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp93->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp94);
    ::g::Fuse::Animations::Change__set_Value_fn(temp94, uCRef(false));
    uPtr(showAuthForm)->Name(MainView::__selector45());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showAuthForm)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp95);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showAuthForm)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp96);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showAuthForm)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp97);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showAuthForm)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp98);
    ::g::Fuse::Animations::Change__set_Value_fn(temp95, uCRef(true));
    temp95->DelayBack(0.0);
    temp95->Delay(0.6);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp96, uCRef(0.0f));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp97, uCRef(true));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp98, uCRef(true));
    uPtr(showOtpForm)->Name(MainView::__selector46());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showOtpForm)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp102);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showOtpForm)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp99);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showOtpForm)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp100);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showOtpForm)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp101);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showOtpForm)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp103);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showOtpForm)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp104);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp99, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp100, uCRef(0.0f));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp101, uCRef(0.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp102, uCRef(true));
    temp102->DelayBack(0.0);
    temp102->Delay(0.6);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp103, uCRef(true));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp104, uCRef(true));
    uPtr(showPassForm)->Name(MainView::__selector47());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showPassForm)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp109);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showPassForm)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp105);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showPassForm)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp106);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showPassForm)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp107);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showPassForm)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp108);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showPassForm)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp110);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showPassForm)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp111);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showPassForm)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp112);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp105, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp106, uCRef(0.0f));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp107, uCRef(0.0f));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp108, uCRef(0.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp109, uCRef(true));
    temp109->DelayBack(0.0);
    temp109->Delay(0.6);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp110, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp111, uCRef(true));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp112, uCRef(true));
    uPtr(state)->Transition(1);
    uPtr(state)->Name(MainView::__selector48());
    uPtr(state)->Rest(loginButtonState);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(state)->States()), ::TYPES[19/*Uno.Collections.ICollection<Fuse.Triggers.State>*/]), loginButtonState);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(state)->States()), ::TYPES[19/*Uno.Collections.ICollection<Fuse.Triggers.State>*/]), mainState);
    uPtr(loginButtonState)->Name(MainView::__selector49());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginButtonState)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp113);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginButtonState)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp116);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginButtonState)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp114);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginButtonState)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp115);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginButtonState)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp117);
    ::g::Fuse::Animations::Change__set_Value_fn(temp113, uCRef(true));
    temp113->DelayBack(0.0);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp114, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp115, uCRef(false));
    ::g::Fuse::Animations::Change__set_Value_fn(temp116, uCRef(false));
    temp116->DelayBack(0.0);
    temp117->Target(addButtonPanel);
    uPtr(mainState)->Name(MainView::__selector50());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp118);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp119);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp120);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp121);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp124);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp125);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp127);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp129);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp130);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp131);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp132);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp122);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp123);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp126);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp128);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mainState)->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp133);
    temp118->Vector(::g::Uno::Float3__New2(1.0f, 1.0f, 1.0f));
    temp118->Easing(6);
    temp118->Duration(0.4);
    temp118->DurationBack(0.0);
    temp118->Delay(0.05);
    temp118->RelativeTo(::g::Fuse::Elements::TranslationModes::PositionOffset());
    temp118->RelativeNode(mainPanel);
    temp118->Target(whiteRect);
    temp119->Vector(::g::Uno::Float2__New2(1.0f, 1.0f));
    temp119->Easing(6);
    temp119->Duration(0.4);
    temp119->DurationBack(0.0);
    temp119->Delay(0.05);
    temp119->Target(whiteRect);
    temp119->RelativeNode(mainPanel);
    temp119->RelativeTo(::g::Fuse::Elements::TranslationModes::Size());
    temp120->Vector(::g::Uno::Float3__New2(1.0f, 1.0f, 1.0f));
    temp120->Easing(6);
    temp120->Duration(0.4);
    temp120->DurationBack(0.0);
    temp120->Delay(0.4);
    temp120->RelativeTo(::g::Fuse::Elements::TranslationModes::PositionOffset());
    temp120->RelativeNode(addButton);
    temp120->Target(greenRect);
    temp121->Vector(::g::Uno::Float2__New2(1.0f, 1.0f));
    temp121->Easing(6);
    temp121->Duration(0.4);
    temp121->DurationBack(0.0);
    temp121->Delay(0.4);
    temp121->Target(greenRect);
    temp121->RelativeNode(addButton);
    temp121->RelativeTo(::g::Fuse::Elements::TranslationModes::Size());
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp122, mainPanel);
    temp122->Delay(0.45f);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp123, addButton);
    temp123->Delay(0.85f);
    ::g::Fuse::Animations::Change__set_Value_fn(temp124, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f)));
    temp124->Duration(0.2);
    temp124->DurationBack(0.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp125, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp126, uCRef(false));
    temp127->Factor(1.2f);
    temp127->Easing(6);
    temp127->Duration(0.2);
    temp127->Delay(0.9);
    temp127->Target(greenRect);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp128, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f)));
    ::g::Fuse::Animations::Change__set_Value_fn(temp129, uCRef(true));
    temp129->Delay(0.9);
    ::g::Fuse::Animations::Change__set_Value_fn(temp130, uCRef(true));
    ::g::Fuse::Animations::Change__set_Value_fn(temp131, uCRef(1.0f));
    temp131->Duration(0.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp132, uCRef(true));
    temp132->Delay(0.5);
    temp133->Target(addButtonPanel);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), topPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), navBarTrans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), mainPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), authForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), authArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), proceedButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), moveButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), otpForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), otpArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), otpButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), moveOtpButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), passForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), passArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), submitButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), moveRegButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), submitButtonCollapsed);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), startPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), loginArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), signinButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), signinText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), signinNormalRect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), signinLoadingButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), signinButtonScaling);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), signinLoad);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), changeWidth);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), signupButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), addButtonPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), addButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), greenRect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), showGreenRect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), whiteRect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), whiteRectCornerRadiusAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), logoPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), logo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), moveLogo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), shiftLogo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), showAuthForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), showOtpForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), showPassForm);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), state);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
}

// public MainView New() [static] :188
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
