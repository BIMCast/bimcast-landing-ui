// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControlsNative_bundle.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.AppBase.h>
#include <Fuse.Controls.AutoCapitalizationHint.h>
#include <Fuse.Controls.AutoCorrectHint.h>
#include <Fuse.Controls.Native.Android.Blitter.h>
#include <Fuse.Controls.Native.Android.Button.h>
#include <Fuse.Controls.Native.Android.Circle.h>
#include <Fuse.Controls.Native.Android.DrawableViewGroup.h>
#include <Fuse.Controls.Native.Android.Ellipse.h>
#include <Fuse.Controls.Native.Android.FocusChangedListener.h>
#include <Fuse.Controls.Native.Android.FocusManager.h>
#include <Fuse.Controls.Native.Android.GraphicsView.h>
#include <Fuse.Controls.Native.Android.Helpers.h>
#include <Fuse.Controls.Native.Android.ImageView.h>
#include <Fuse.Controls.Native.Android.InputDispatch.h>
#include <Fuse.Controls.Native.Android.IViewParent.h>
#include <Fuse.Controls.Native.Android.JavaMap.h>
#include <Fuse.Controls.Native.Android.LeafView.h>
#include <Fuse.Controls.Native.Android.MotionEvent.h>
#include <Fuse.Controls.Native.Android.NativeViewRenderer.h>
#include <Fuse.Controls.Native.Android.Rectangle.h>
#include <Fuse.Controls.Native.Android.ScrollView.h>
#include <Fuse.Controls.Native.Android.Shape.h>
#include <Fuse.Controls.Native.Android.Slider.h>
#include <Fuse.Controls.Native.Android.SoftKeyboard.h>
#include <Fuse.Controls.Native.Android.SurfaceView.h>
#include <Fuse.Controls.Native.Android.Switch.h>
#include <Fuse.Controls.Native.Android.TextEdit.h>
#include <Fuse.Controls.Native.Android.TextEditRenderer.h>
#include <Fuse.Controls.Native.Android.TextEditRenderHost.h>
#include <Fuse.Controls.Native.Android.TextInput.h>
#include <Fuse.Controls.Native.Android.TextView.h>
#include <Fuse.Controls.Native.Android.Typeface.h>
#include <Fuse.Controls.Native.Android.TypefaceCache.h>
#include <Fuse.Controls.Native.Android.View.h>
#include <Fuse.Controls.Native.Android.ViewGroup.h>
#include <Fuse.Controls.Native.ImageHandle.h>
#include <Fuse.Controls.Native.ImageLoader.h>
#include <Fuse.Controls.Native.IRangeViewHost.h>
#include <Fuse.Controls.Native.IScrollViewHost.h>
#include <Fuse.Controls.Native.ITextEditHost.h>
#include <Fuse.Controls.Native.IToggleViewHost.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextInputActionStyle.h>
#include <Fuse.Controls.TextInputActionType.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Font.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Node.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.MultiDensityImageSource.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Java.Object.h>
#include <jni.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureTarget.h>
#include <Uno.Action.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-3.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.NotImplementedException.h>
#include <Uno.Object.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Quaternion.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.Vector.h>
#include <Uno/Graphics/GLHelper.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[7];
static uType* TYPES[33];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class Blitter :1209
// {
// static Blitter() :1209
static void Blitter__cctor__fn(uType* __type)
{
    Blitter::Singleton_ = Blitter::New1();
}

static void Blitter_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Blitter, _draw_22e0d2d9), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Blitter, Blit_v_22e0d2d9_1_7_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::Controls::Native::Android::Blitter, Blit_verts_22e0d2d9_1_6_5), 0,
        Blitter_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::Android::Blitter::Singleton_, uFieldFlagsStatic);
}

uType* Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.Blitter", options);
    type->fp_build_ = Blitter_build;
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    type->fp_cctor_ = Blitter__cctor__fn;
    return type;
}

// public generated Blitter() :1209
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) :1213
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->Blit(vt, *pos, *size, *localToClipTransform);
}

// private generated void init_DrawCalls() :1209
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public generated Blitter New() :1209
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::Singleton_;

// public generated Blitter() [instance] :1209
void Blitter::ctor_()
{
    init_DrawCalls();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) [instance] :1213
void Blitter::Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform)
{
    _draw_22e0d2d9.BlendEnabled(true);
    _draw_22e0d2d9.CullFace(0);
    _draw_22e0d2d9.BlendSrcAlpha(7);
    _draw_22e0d2d9.BlendDstRgb(3);
    _draw_22e0d2d9.Use();
    _draw_22e0d2d9.Attrib1(0, 2, Blit_v_22e0d2d9_1_7_1, 8, 0);
    _draw_22e0d2d9.Uniform2(1, size);
    _draw_22e0d2d9.Uniform2(2, pos);
    _draw_22e0d2d9.Uniform12(3, localToClipTransform);
    _draw_22e0d2d9.Sampler2(4, vt);
    _draw_22e0d2d9.DrawArrays(uPtr(Blit_verts_22e0d2d9_1_6_5)->Length());
}

// private generated void init_DrawCalls() [instance] :1209
void Blitter::init_DrawCalls()
{
    uArray* verts_22e0d2d9_1_6_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[0/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_22e0d2d9_1_7_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(verts_22e0d2d9_1_6_0), 0);
    Blit_verts_22e0d2d9_1_6_5 = verts_22e0d2d9_1_6_0;
    _draw_22e0d2d9 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControlsNative_bundle::Blitter5bfe9814());
}

// public generated Blitter New() [static] :1209
Blitter* Blitter::New1()
{
    Blitter* obj1 = (Blitter*)uNew(Blitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// public sealed extern class Button :11
// {
static void Button_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Button_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Button_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Button_type, interface2),
        ::g::Fuse::Controls::Native::ILabelView_typeof(), offsetof(Button_type, interface3));
    type->SetFields(6,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Button, _visual), 0);
}

Button_type* Button_typeof()
{
    static uSStrong<Button_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(Button_type);
    type = (Button_type*)uClassType::New("Fuse.Controls.Native.Android.Button", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::LeafView_typeof());
    type->fp_build_ = Button_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))Button__Dispose_fn;
    type->interface3.fp_set_Text = (void(*)(uObject*, uString*))Button__set_Text_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Button__Dispose_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__FuseControlsNativeILeafViewMeasure_fn;
    return type;
}

// public Button(Fuse.Visual visual) :15
void Button__ctor_2_fn(Button* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(visual);
}

// private static Java.Object Create() :34
void Button__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Button::Create();
}

// public override sealed void Dispose() :21
void Button__Dispose_fn(Button* __this)
{
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
    ::g::Fuse::Controls::Native::Android::InputDispatch::RemoveListener(__this);
    __this->_visual = NULL;
}

// public Button New(Fuse.Visual visual) :15
void Button__New1_fn(::g::Fuse::Visual* visual, Button** __retval)
{
    *__retval = Button::New1(visual);
}

// private static void SetText(Java.Object handle, string text) :40
void Button__SetText_fn(::g::Java::Object* handle, uString* text)
{
    Button::SetText(handle, text);
}

// public void set_Text(string value) :30
void Button__set_Text_fn(Button* __this, uString* value)
{
    __this->Text(value);
}

// public Button(Fuse.Visual visual) [instance] :15
void Button::ctor_2(::g::Fuse::Visual* visual)
{
    ctor_1(Button::Create());
    _visual = visual;
    ::g::Fuse::Controls::Native::Android::InputDispatch::AddListener(this, _visual);
}

// public void set_Text(string value) [instance] :30
void Button::Text(uString* value)
{
    Button::SetText(Handle(), value);
}

// private static Java.Object Create() [static] :34
::g::Java::Object* Button::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create32", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Button New(Fuse.Visual visual) [static] :15
Button* Button::New1(::g::Fuse::Visual* visual)
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_2(visual);
    return obj1;
}

// private static void SetText(Java.Object handle, string text) [static] :40
void Button::SetText(::g::Java::Object* handle, uString* text)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetText33", "(Ljava/lang/Object;Ljava/lang/String;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_text);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class Circle :58
// {
static void Circle_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Circle_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Circle_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(Circle_type, interface2),
        ::g::Fuse::Controls::Native::ICircleView_typeof(), offsetof(Circle_type, interface3));
    type->SetFields(9,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Circle, _endAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Circle, _startAngle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Circle, _useAngle), 0);
}

Circle_type* Circle_typeof()
{
    static uSStrong<Circle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Circle);
    options.TypeSize = sizeof(Circle_type);
    type = (Circle_type*)uClassType::New("Fuse.Controls.Native.Android.Circle", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::Shape_typeof());
    type->fp_build_ = Circle_build;
    type->fp_ctor_ = (void*)Circle__New1_fn;
    type->fp_UpdateShapeDrawable = (void(*)(::g::Fuse::Controls::Native::Android::Shape*, ::g::Java::Object*, float*))Circle__UpdateShapeDrawable_fn;
    type->interface3.fp_set_StartAngleDegrees = (void(*)(uObject*, float*))Circle__FuseControlsNativeICircleViewset_StartAngleDegrees_fn;
    type->interface3.fp_set_EndAngleDegrees = (void(*)(uObject*, float*))Circle__FuseControlsNativeICircleViewset_EndAngleDegrees_fn;
    type->interface3.fp_set_UseAngle = (void(*)(uObject*, bool*))Circle__FuseControlsNativeICircleViewset_UseAngle_fn;
    type->interface3.fp_set_EffectiveEndAngleDegrees = (void(*)(uObject*, float*))Circle__FuseControlsNativeICircleViewset_EffectiveEndAngleDegrees_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))::g::Fuse::Controls::Native::Android::Shape__FuseControlsNativeIShapeViewUpdate_fn;
    return type;
}

// public generated Circle() :58
void Circle__ctor_2_fn(Circle* __this)
{
    __this->ctor_2();
}

// private void Fuse.Controls.Native.ICircleView.set_EffectiveEndAngleDegrees(float value) :91
void Circle__FuseControlsNativeICircleViewset_EffectiveEndAngleDegrees_fn(Circle* __this, float* value)
{
}

// private void Fuse.Controls.Native.ICircleView.set_EndAngleDegrees(float value) :74
void Circle__FuseControlsNativeICircleViewset_EndAngleDegrees_fn(Circle* __this, float* value)
{
    float value_ = *value;
    __this->_endAngle = value_;
    __this->OnShapeChanged();
}

// private void Fuse.Controls.Native.ICircleView.set_StartAngleDegrees(float value) :64
void Circle__FuseControlsNativeICircleViewset_StartAngleDegrees_fn(Circle* __this, float* value)
{
    float value_ = *value;
    __this->_startAngle = value_;
    __this->OnShapeChanged();
}

// private void Fuse.Controls.Native.ICircleView.set_UseAngle(bool value) :84
void Circle__FuseControlsNativeICircleViewset_UseAngle_fn(Circle* __this, bool* value)
{
    bool value_ = *value;
    __this->_useAngle = value_;
    __this->OnShapeChanged();
}

// public generated Circle New() :58
void Circle__New1_fn(Circle** __retval)
{
    *__retval = Circle::New1();
}

// private void UpdateShapeDrawable(Java.Object handle, bool useAngle, float width, float height, float startAngle, float endAngle) :99
void Circle__UpdateShapeDrawable1_fn(Circle* __this, ::g::Java::Object* handle, bool* useAngle, float* width, float* height, float* startAngle, float* endAngle)
{
    __this->UpdateShapeDrawable1(handle, *useAngle, *width, *height, *startAngle, *endAngle);
}

// protected override sealed void UpdateShapeDrawable(Java.Object handle, float pixelsPerPoint) :93
void Circle__UpdateShapeDrawable_fn(Circle* __this, ::g::Java::Object* handle, float* pixelsPerPoint)
{
    __this->UpdateShapeDrawable1(handle, __this->_useAngle, __this->Size().X, __this->Size().Y, __this->_startAngle, __this->_endAngle);
}

// public generated Circle() [instance] :58
void Circle::ctor_2()
{
    ctor_1();
}

// private void UpdateShapeDrawable(Java.Object handle, bool useAngle, float width, float height, float startAngle, float endAngle) [instance] :99
void Circle::UpdateShapeDrawable1(::g::Java::Object* handle, bool useAngle, float width, float height, float startAngle, float endAngle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "UpdateShapeDrawable134", "(Ljava/lang/Object;Ljava/lang/Object;ZFFFF)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uuseAngle=useAngle;
        jboolean _useAngle = (jboolean)_uuseAngle;
        float _uwidth=width;
        jfloat _width = (jfloat)_uwidth;
        float _uheight=height;
        jfloat _height = (jfloat)_uheight;
        float _ustartAngle=startAngle;
        jfloat _startAngle = (jfloat)_ustartAngle;
        float _uendAngle=endAngle;
        jfloat _endAngle = (jfloat)_uendAngle;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle,_useAngle,_width,_height,_startAngle,_endAngle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public generated Circle New() [static] :58
Circle* Circle::New1()
{
    Circle* obj1 = (Circle*)uNew(Circle_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// public sealed extern class DrawableViewGroup :120
// {
static void DrawableViewGroup_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::IDisposable_typeof();
    ::TYPES[2] = ::g::Fuse::Controls::Native::INativeViewRenderer_typeof();
    ::TYPES[3] = ::g::Fuse::Controls::Native::Android::View_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(DrawableViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(DrawableViewGroup_type, interface1),
        ::g::Fuse::Controls::Native::IViewGroup_typeof(), offsetof(DrawableViewGroup_type, interface2),
        ::g::Fuse::Controls::Native::IOffscreenRenderer_typeof(), offsetof(DrawableViewGroup_type, interface3),
        ::g::Fuse::Controls::Native::Android::IViewParent_typeof(), offsetof(DrawableViewGroup_type, interface4),
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(DrawableViewGroup_type, interface5));
    type->SetFields(6,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::DrawableViewGroup, _container), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::DrawableViewGroup, _isEnabled), 0,
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(::g::Fuse::Controls::Native::Android::DrawableViewGroup, _nativeViewRenderer), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::DrawableViewGroup, _offscreenParent), 0);
}

DrawableViewGroup_type* DrawableViewGroup_typeof()
{
    static uSStrong<DrawableViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(DrawableViewGroup);
    options.TypeSize = sizeof(DrawableViewGroup_type);
    type = (DrawableViewGroup_type*)uClassType::New("Fuse.Controls.Native.Android.DrawableViewGroup", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::View_typeof());
    type->fp_build_ = DrawableViewGroup_build;
    type->fp_ctor_ = (void*)DrawableViewGroup__New1_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))DrawableViewGroup__Dispose_fn;
    type->interface2.fp_Add = (void(*)(uObject*, uObject*))DrawableViewGroup__FuseControlsNativeIViewGroupAdd_fn;
    type->interface2.fp_Add1 = (void(*)(uObject*, uObject*, int*))DrawableViewGroup__FuseControlsNativeIViewGroupAdd1_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, uObject*))DrawableViewGroup__FuseControlsNativeIViewGroupRemove_fn;
    type->interface4.fp_SetChildSize = (void(*)(uObject*, ::g::Fuse::Controls::Native::Android::View*, ::g::Uno::Float2*))DrawableViewGroup__FuseControlsNativeAndroidIViewParentSetChildSize_fn;
    type->interface3.fp_EnableOffscreen = (void(*)(uObject*))DrawableViewGroup__FuseControlsNativeIOffscreenRendererEnableOffscreen_fn;
    type->interface3.fp_DisableOffscreen = (void(*)(uObject*))DrawableViewGroup__FuseControlsNativeIOffscreenRendererDisableOffscreen_fn;
    type->interface5.fp_Draw = (void(*)(uObject*, ::g::Uno::Float4x4*, ::g::Uno::Float2*, ::g::Uno::Float2*, float*))DrawableViewGroup__FuseControlsNativeINativeViewRendererDraw_fn;
    type->interface5.fp_Invalidate = (void(*)(uObject*))DrawableViewGroup__FuseControlsNativeINativeViewRendererInvalidate_fn;
    type->interface2.fp_set_ClipToBounds = (void(*)(uObject*, bool*))DrawableViewGroup__FuseControlsNativeIViewGroupset_ClipToBounds_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))DrawableViewGroup__Dispose_fn;
    return type;
}

// public DrawableViewGroup() :126
void DrawableViewGroup__ctor_1_fn(DrawableViewGroup* __this)
{
    __this->ctor_1();
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle) :215
void DrawableViewGroup__AddView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    DrawableViewGroup::AddView(parentHandle, childHandle);
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle, int index) :223
void DrawableViewGroup__AddView1_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int* index)
{
    DrawableViewGroup::AddView1(parentHandle, childHandle, *index);
}

// private static Java.Object Create() :248
void DrawableViewGroup__Create_fn(::g::Java::Object** __retval)
{
    *__retval = DrawableViewGroup::Create();
}

// public override sealed void Dispose() :136
void DrawableViewGroup__Dispose_fn(DrawableViewGroup* __this)
{
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[1/*Uno.IDisposable*/]));
    __this->_nativeViewRenderer = NULL;
    __this->_container = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View view, float2 size) :170
void DrawableViewGroup__FuseControlsNativeAndroidIViewParentSetChildSize_fn(DrawableViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size)
{
    ::g::Uno::Float2 size_ = *size;
    DrawableViewGroup::SetChildSize(uPtr(view)->Handle(), (int)size_.X, (int)size_.Y);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4 localToClipTransform, float2 position, float2 size, float density) :196
void DrawableViewGroup__FuseControlsNativeINativeViewRendererDraw_fn(DrawableViewGroup* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density)
{
    ::g::Uno::Float4x4 localToClipTransform_ = *localToClipTransform;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 size_ = *size;
    float density_ = *density;
    ::g::Fuse::Controls::Native::INativeViewRenderer::Draw(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[2/*Fuse.Controls.Native.INativeViewRenderer*/]), localToClipTransform_, position_, size_, density_);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Invalidate() :201
void DrawableViewGroup__FuseControlsNativeINativeViewRendererInvalidate_fn(DrawableViewGroup* __this)
{
    ::g::Fuse::Controls::Native::INativeViewRenderer::Invalidate(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[2/*Fuse.Controls.Native.INativeViewRenderer*/]));
}

// private void Fuse.Controls.Native.IOffscreenRenderer.DisableOffscreen() :186
void DrawableViewGroup__FuseControlsNativeIOffscreenRendererDisableOffscreen_fn(DrawableViewGroup* __this)
{
    if (__this->_isEnabled)
    {
        DrawableViewGroup::RemoveView(__this->_offscreenParent, __this->_container);
        DrawableViewGroup::AddView(__this->Handle(), __this->_container);
        __this->_isEnabled = false;
    }
}

// private void Fuse.Controls.Native.IOffscreenRenderer.EnableOffscreen() :176
void DrawableViewGroup__FuseControlsNativeIOffscreenRendererEnableOffscreen_fn(DrawableViewGroup* __this)
{
    if (!__this->_isEnabled)
    {
        DrawableViewGroup::RemoveView(__this->Handle(), __this->_container);
        DrawableViewGroup::AddView(__this->_offscreenParent, __this->_container);
        __this->_isEnabled = true;
    }
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child) :149
void DrawableViewGroup__FuseControlsNativeIViewGroupAdd_fn(DrawableViewGroup* __this, uObject* child)
{
    ::g::Fuse::Controls::Native::Android::View* x = uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[3/*Fuse.Controls.Native.Android.View*/]);
    uPtr(x)->Parent((uObject*)__this);
    DrawableViewGroup::AddView(__this->_container, x->Handle());
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child, int index) :156
void DrawableViewGroup__FuseControlsNativeIViewGroupAdd1_fn(DrawableViewGroup* __this, uObject* child, int* index)
{
    int index_ = *index;
    ::g::Fuse::Controls::Native::Android::View* x = uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[3/*Fuse.Controls.Native.Android.View*/]);
    uPtr(x)->Parent((uObject*)__this);
    DrawableViewGroup::AddView1(__this->_container, x->Handle(), index_);
}

// private void Fuse.Controls.Native.IViewGroup.set_ClipToBounds(bool value) :146
void DrawableViewGroup__FuseControlsNativeIViewGroupset_ClipToBounds_fn(DrawableViewGroup* __this, bool* value)
{
    bool value_ = *value;
    DrawableViewGroup::SetClipToBounds(__this->Handle(), value_);
}

// private void Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView child) :163
void DrawableViewGroup__FuseControlsNativeIViewGroupRemove_fn(DrawableViewGroup* __this, uObject* child)
{
    ::g::Fuse::Controls::Native::Android::View* x = uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[3/*Fuse.Controls.Native.Android.View*/]);
    DrawableViewGroup::RemoveView(__this->_container, uPtr(x)->Handle());
    x->Parent(NULL);
}

// private static void HideOffscreenParent(Java.Object handle) :240
void DrawableViewGroup__HideOffscreenParent_fn(::g::Java::Object* handle)
{
    DrawableViewGroup::HideOffscreenParent(handle);
}

// public DrawableViewGroup New() :126
void DrawableViewGroup__New1_fn(DrawableViewGroup** __retval)
{
    *__retval = DrawableViewGroup::New1();
}

// private static void RemoveView(Java.Object parentHandle, Java.Object childHandle) :231
void DrawableViewGroup__RemoveView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    DrawableViewGroup::RemoveView(parentHandle, childHandle);
}

// private static void SetChildSize(Java.Object handle, int w, int h) :260
void DrawableViewGroup__SetChildSize_fn(::g::Java::Object* handle, int* w, int* h)
{
    DrawableViewGroup::SetChildSize(handle, *w, *h);
}

// private static void SetClipToBounds(Java.Object handle, bool clipToBounds) :207
void DrawableViewGroup__SetClipToBounds_fn(::g::Java::Object* handle, bool* clipToBounds)
{
    DrawableViewGroup::SetClipToBounds(handle, *clipToBounds);
}

// public DrawableViewGroup() [instance] :126
void DrawableViewGroup::ctor_1()
{
    ctor_(DrawableViewGroup::Create());
    _container = DrawableViewGroup::Create();
    _offscreenParent = DrawableViewGroup::Create();
    _nativeViewRenderer = (uObject*)::g::Fuse::Controls::Native::Android::NativeViewRenderer::New1(_container);
    DrawableViewGroup::AddView(Handle(), _offscreenParent);
    DrawableViewGroup::AddView(Handle(), _container);
    DrawableViewGroup::HideOffscreenParent(_offscreenParent);
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle) [static] :215
void DrawableViewGroup::AddView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView35", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle, int index) [static] :223
void DrawableViewGroup::AddView1(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView136", "(Ljava/lang/Object;Ljava/lang/Object;I)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uindex=index;
        jint _index = (jint)_uindex;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle,_index);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object Create() [static] :248
::g::Java::Object* DrawableViewGroup::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create37", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void HideOffscreenParent(Java.Object handle) [static] :240
void DrawableViewGroup::HideOffscreenParent(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HideOffscreenParent38", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public DrawableViewGroup New() [static] :126
DrawableViewGroup* DrawableViewGroup::New1()
{
    DrawableViewGroup* obj1 = (DrawableViewGroup*)uNew(DrawableViewGroup_typeof());
    obj1->ctor_1();
    return obj1;
}

// private static void RemoveView(Java.Object parentHandle, Java.Object childHandle) [static] :231
void DrawableViewGroup::RemoveView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RemoveView39", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetChildSize(Java.Object handle, int w, int h) [static] :260
void DrawableViewGroup::SetChildSize(::g::Java::Object* handle, int w, int h)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetChildSize40", "(Ljava/lang/Object;II)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uw=w;
        jint _w = (jint)_uw;
        int _uh=h;
        jint _h = (jint)_uh;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_w,_h);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetClipToBounds(Java.Object handle, bool clipToBounds) [static] :207
void DrawableViewGroup::SetClipToBounds(::g::Java::Object* handle, bool clipToBounds)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetClipToBounds41", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uclipToBounds=clipToBounds;
        jboolean _clipToBounds = (jboolean)_uclipToBounds;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_clipToBounds);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class Ellipse :277
// {
static void Ellipse_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Shape_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Shape_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Shape_type, interface2));
    type->SetFields(9);
}

::g::Fuse::Controls::Native::Android::Shape_type* Ellipse_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Ellipse);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::Shape_type);
    type = (::g::Fuse::Controls::Native::Android::Shape_type*)uClassType::New("Fuse.Controls.Native.Android.Ellipse", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::Shape_typeof());
    type->fp_build_ = Ellipse_build;
    type->fp_UpdateShapeDrawable = (void(*)(::g::Fuse::Controls::Native::Android::Shape*, ::g::Java::Object*, float*))Ellipse__UpdateShapeDrawable_fn;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))::g::Fuse::Controls::Native::Android::Shape__FuseControlsNativeIShapeViewUpdate_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// private void UpdateShapeDrawable(Java.Object handle) :285
void Ellipse__UpdateShapeDrawable1_fn(Ellipse* __this, ::g::Java::Object* handle)
{
    __this->UpdateShapeDrawable1(handle);
}

// protected override sealed void UpdateShapeDrawable(Java.Object handle, float pixelsPerPoint) :279
void Ellipse__UpdateShapeDrawable_fn(Ellipse* __this, ::g::Java::Object* handle, float* pixelsPerPoint)
{
    __this->UpdateShapeDrawable1(handle);
}

// private void UpdateShapeDrawable(Java.Object handle) [instance] :285
void Ellipse::UpdateShapeDrawable1(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "UpdateShapeDrawable142", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class FocusChangedListener :2375
// {
static void FocusChangedListener_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(FocusChangedListener_type, interface0));
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Controls::Native::Android::FocusChangedListener, _callback), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::FocusChangedListener, _listener), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::FocusChangedListener, _view), 0);
}

FocusChangedListener_type* FocusChangedListener_typeof()
{
    static uSStrong<FocusChangedListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FocusChangedListener);
    options.TypeSize = sizeof(FocusChangedListener_type);
    type = (FocusChangedListener_type*)uClassType::New("Fuse.Controls.Native.Android.FocusChangedListener", options);
    type->fp_build_ = FocusChangedListener_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))FocusChangedListener__Dispose_fn;
    return type;
}

// private FocusChangedListener(Java.Object view, Uno.Action<Java.Object, bool> callback) :2382
void FocusChangedListener__ctor__fn(FocusChangedListener* __this, ::g::Java::Object* view, uDelegate* callback)
{
    __this->ctor_(view, callback);
}

// public static Uno.IDisposable AddHandler(Java.Object view, Uno.Action<Java.Object, bool> callback) :2397
void FocusChangedListener__AddHandler_fn(::g::Java::Object* view, uDelegate* callback, uObject** __retval)
{
    *__retval = FocusChangedListener::AddHandler(view, callback);
}

// private static void ClearListener(Java.Object viewHandle) :2427
void FocusChangedListener__ClearListener_fn(::g::Java::Object* viewHandle)
{
    FocusChangedListener::ClearListener(viewHandle);
}

// private Java.Object Create() :2410
void FocusChangedListener__Create_fn(FocusChangedListener* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Create();
}

// public void Dispose() :2404
void FocusChangedListener__Dispose_fn(FocusChangedListener* __this)
{
    __this->Dispose();
}

// private FocusChangedListener New(Java.Object view, Uno.Action<Java.Object, bool> callback) :2382
void FocusChangedListener__New1_fn(::g::Java::Object* view, uDelegate* callback, FocusChangedListener** __retval)
{
    *__retval = FocusChangedListener::New1(view, callback);
}

// private void OnFocusChange(bool hasFocus) :2392
void FocusChangedListener__OnFocusChange_fn(FocusChangedListener* __this, bool* hasFocus)
{
    __this->OnFocusChange(*hasFocus);
}

// private static void SetListener(Java.Object viewHandle, Java.Object listenerHandle) :2421
void FocusChangedListener__SetListener_fn(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    FocusChangedListener::SetListener(viewHandle, listenerHandle);
}

// private FocusChangedListener(Java.Object view, Uno.Action<Java.Object, bool> callback) [instance] :2382
void FocusChangedListener::ctor_(::g::Java::Object* view, uDelegate* callback)
{
    _view = view;
    _callback = callback;
    _listener = Create();
    FocusChangedListener::SetListener(_view, _listener);
}

// private Java.Object Create() [instance] :2410
::g::Java::Object* FocusChangedListener::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create44", "(Ljava/lang/Object;)Ljava/lang/Object;");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(_uthis);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_this_);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public void Dispose() [instance] :2404
void FocusChangedListener::Dispose()
{
    FocusChangedListener::ClearListener(_view);
}

// private void OnFocusChange(bool hasFocus) [instance] :2392
void FocusChangedListener::OnFocusChange(bool hasFocus)
{
    uPtr(_callback)->Invoke(2, (::g::Java::Object*)_view, uCRef(hasFocus));
}

// public static Uno.IDisposable AddHandler(Java.Object view, Uno.Action<Java.Object, bool> callback) [static] :2397
uObject* FocusChangedListener::AddHandler(::g::Java::Object* view, uDelegate* callback)
{
    return (uObject*)FocusChangedListener::New1(view, callback);
}

// private static void ClearListener(Java.Object viewHandle) [static] :2427
void FocusChangedListener::ClearListener(::g::Java::Object* viewHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearListener43", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private FocusChangedListener New(Java.Object view, Uno.Action<Java.Object, bool> callback) [static] :2382
FocusChangedListener* FocusChangedListener::New1(::g::Java::Object* view, uDelegate* callback)
{
    FocusChangedListener* obj1 = (FocusChangedListener*)uNew(FocusChangedListener_typeof());
    obj1->ctor_(view, callback);
    return obj1;
}

// private static void SetListener(Java.Object viewHandle, Java.Object listenerHandle) [static] :2421
void FocusChangedListener::SetListener(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetListener46", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ulistenerHandle=listenerHandle;
        jobject _listenerHandle = (_ulistenerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulistenerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle,_listenerHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        if (_listenerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_listenerHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class FocusManager :2303
// {
// static FocusManager() :2303
static void FocusManager__cctor__fn(uType* __type)
{
    FocusManager::Singleton_ = FocusManager::New1();
}

static void FocusManager_build(uType* type)
{
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::FocusManager, HideKeyboardContext), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::FocusManager, HideKeyboardWindowToken), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::FocusManager, LoseFocus), 0,
        FocusManager_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::Android::FocusManager::Singleton_, uFieldFlagsStatic);
}

uType* FocusManager_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(FocusManager);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.FocusManager", options);
    type->fp_build_ = FocusManager_build;
    type->fp_ctor_ = (void*)FocusManager__New1_fn;
    type->fp_cctor_ = FocusManager__cctor__fn;
    return type;
}

// public generated FocusManager() :2303
void FocusManager__ctor__fn(FocusManager* __this)
{
    __this->ctor_();
}

// public void CompleteFocusLoss() :2311
void FocusManager__CompleteFocusLoss_fn(FocusManager* __this)
{
    __this->CompleteFocusLoss();
}

// public static Java.Object GetContext(Java.Object viewHandle) :2340
void FocusManager__GetContext_fn(::g::Java::Object* viewHandle, ::g::Java::Object** __retval)
{
    *__retval = FocusManager::GetContext(viewHandle);
}

// public static Java.Object GetWindowToken(Java.Object viewHandle) :2346
void FocusManager__GetWindowToken_fn(::g::Java::Object* viewHandle, ::g::Java::Object** __retval)
{
    *__retval = FocusManager::GetWindowToken(viewHandle);
}

// private static bool HasFocus(Java.Object viewHandle) :2328
void FocusManager__HasFocus_fn(::g::Java::Object* viewHandle, bool* __retval)
{
    *__retval = FocusManager::HasFocus(viewHandle);
}

// public generated FocusManager New() :2303
void FocusManager__New1_fn(FocusManager** __retval)
{
    *__retval = FocusManager::New1();
}

// private static void RequestRootViewFocus(Java.Object viewHandle) :2334
void FocusManager__RequestRootViewFocus_fn(::g::Java::Object* viewHandle)
{
    FocusManager::RequestRootViewFocus(viewHandle);
}

uSStrong<FocusManager*> FocusManager::Singleton_;

// public generated FocusManager() [instance] :2303
void FocusManager::ctor_()
{
}

// public void CompleteFocusLoss() [instance] :2311
void FocusManager::CompleteFocusLoss()
{
    if (LoseFocus != NULL)
    {
        if (FocusManager::HasFocus(LoseFocus))
            FocusManager::RequestRootViewFocus(LoseFocus);

        LoseFocus = NULL;
    }

    if (HideKeyboardContext != NULL)
    {
        ::g::Fuse::Controls::Native::Android::SoftKeyboard::HideKeyboard(HideKeyboardContext, HideKeyboardWindowToken);
        HideKeyboardContext = NULL;
    }
}

// public static Java.Object GetContext(Java.Object viewHandle) [static] :2340
::g::Java::Object* FocusManager::GetContext(::g::Java::Object* viewHandle)
{
    FocusManager_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetContext47", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_viewHandle);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static Java.Object GetWindowToken(Java.Object viewHandle) [static] :2346
::g::Java::Object* FocusManager::GetWindowToken(::g::Java::Object* viewHandle)
{
    FocusManager_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetWindowToken48", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_viewHandle);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static bool HasFocus(Java.Object viewHandle) [static] :2328
bool FocusManager::HasFocus(::g::Java::Object* viewHandle)
{
    FocusManager_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HasFocus49", "(Ljava/lang/Object;)Z");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_viewHandle);
        bool __result = (bool)__jresult;
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public generated FocusManager New() [static] :2303
FocusManager* FocusManager::New1()
{
    FocusManager* obj1 = (FocusManager*)uNew(FocusManager_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void RequestRootViewFocus(Java.Object viewHandle) [static] :2334
void FocusManager::RequestRootViewFocus(::g::Java::Object* viewHandle)
{
    FocusManager_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RequestRootViewFocus50", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// public abstract extern class GraphicsView :306
// {
static void GraphicsView_build(uType* type)
{
    ::TYPES[4] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(GraphicsView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(GraphicsView_type, interface1),
        ::g::Fuse::Controls::Native::IGraphicsView_typeof(), offsetof(GraphicsView_type, interface2));
    type->SetFields(6,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView, _eglSurface), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView, _nativeWindow), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView, _surfaceHandle), 0);
}

GraphicsView_type* GraphicsView_typeof()
{
    static uSStrong<GraphicsView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(GraphicsView);
    options.TypeSize = sizeof(GraphicsView_type);
    type = (GraphicsView_type*)uClassType::New("Fuse.Controls.Native.Android.GraphicsView", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::View_typeof());
    type->fp_build_ = GraphicsView_build;
    type->interface2.fp_BeginDraw = (void(*)(uObject*, ::g::Uno::Int2*))GraphicsView__BeginDraw_fn;
    type->interface2.fp_EndDraw = (void(*)(uObject*))GraphicsView__EndDraw_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// protected GraphicsView(Java.Object handle) :308
void GraphicsView__ctor_1_fn(GraphicsView* __this, ::g::Java::Object* handle)
{
    __this->ctor_1(handle);
}

// public void BeginDraw(int2 size) :343
void GraphicsView__BeginDraw_fn(GraphicsView* __this, ::g::Uno::Int2* size)
{
    __this->BeginDraw(*size);
}

// protected void DestroySurface() :331
void GraphicsView__DestroySurface_fn(GraphicsView* __this)
{
    __this->DestroySurface();
}

// public void EndDraw() :364
void GraphicsView__EndDraw_fn(GraphicsView* __this)
{
    __this->EndDraw();
}

// protected void SetSurface(Java.Object surfaceHandle) :316
void GraphicsView__SetSurface_fn(GraphicsView* __this, ::g::Java::Object* surfaceHandle)
{
    __this->SetSurface(surfaceHandle);
}

// protected GraphicsView(Java.Object handle) [instance] :308
void GraphicsView::ctor_1(::g::Java::Object* handle)
{
    _eglSurface = ::g::Uno::IntPtr::Zero_;
    _nativeWindow = ::g::Uno::IntPtr::Zero_;
    ctor_(handle);
}

// public void BeginDraw(int2 size) [instance] :343
void GraphicsView::BeginDraw(::g::Uno::Int2 size)
{
    if (::g::Uno::IntPtr::op_Equality(_eglSurface, ::g::Uno::IntPtr::Zero_))
        return;

    double t;
    GLHelper::MakeCurrent( GLHelper::GetSurfaceContext(), (EGLSurface)_eglSurface );
    ::g::OpenGL::GL::Viewport(0, 0, size.X, size.Y);
}

// protected void DestroySurface() [instance] :331
void GraphicsView::DestroySurface()
{
    GLHelper::SwapBackToBackgroundSurface( (EGLSurface)_eglSurface );
    _eglSurface = ::g::Uno::IntPtr::Zero_;
    ANativeWindow_release( (ANativeWindow*)_nativeWindow );
    _nativeWindow = ::g::Uno::IntPtr::Zero_;
    _surfaceHandle = NULL;
}

// public void EndDraw() [instance] :364
void GraphicsView::EndDraw()
{
    double t;
    GLHelper::SwapBuffers( _eglSurface );
}

// protected void SetSurface(Java.Object surfaceHandle) [instance] :316
void GraphicsView::SetSurface(::g::Java::Object* surfaceHandle)
{
    if (_surfaceHandle != NULL)
        ;

    _surfaceHandle = surfaceHandle;
    _nativeWindow = GLHelper::GetANativeWindowFromSurface(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(_surfaceHandle, ::TYPES[4/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    EGLSurface tempSurface;
    GLHelper::CreateNewSurfaceAndMakeCurrent( (ANativeWindow*)_nativeWindow, tempSurface);
    _eglSurface = tempSurface;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// internal static class Helpers :387
// {
static void Helpers_build(uType* type)
{
}

uClassType* Helpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.Helpers", options);
    type->fp_build_ = Helpers_build;
    return type;
}

// public static int EncodeColor(float4 c) :389
void Helpers__EncodeColor_fn(::g::Uno::Float4* c, int* __retval)
{
    *__retval = Helpers::EncodeColor(*c);
}

// public static int EncodeColor(float4 c) [static] :389
int Helpers::EncodeColor(::g::Uno::Float4 c)
{
    int r = ::g::Uno::Math::Clamp8((int)(c.X * 255.0f), 0, 255);
    int g = ::g::Uno::Math::Clamp8((int)(c.Y * 255.0f), 0, 255);
    int b = ::g::Uno::Math::Clamp8((int)(c.Z * 255.0f), 0, 255);
    int a = ::g::Uno::Math::Clamp8((int)(c.W * 255.0f), 0, 255);
    return (((a << 24) | (r << 16)) | (g << 8)) | b;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class ImageView :427
// {
static void ImageView_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" not supported in native context");
    ::TYPES[5] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[6] = ::g::Java::Object_typeof();
    ::TYPES[7] = ::g::Fuse::Resources::FileImageSource_typeof();
    ::TYPES[8] = ::g::Fuse::Resources::HttpImageSource_typeof();
    ::TYPES[9] = ::g::Fuse::Resources::MultiDensityImageSource_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ImageView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ImageView_type, interface1),
        ::g::Fuse::Controls::Native::IImageView_typeof(), offsetof(ImageView_type, interface2));
    type->SetFields(6,
        ::g::Fuse::Controls::Native::ImageHandle_typeof(), offsetof(::g::Fuse::Controls::Native::Android::ImageView, _imageHandle), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::ImageView, _imageView), 0);
}

ImageView_type* ImageView_typeof()
{
    static uSStrong<ImageView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ImageView);
    options.TypeSize = sizeof(ImageView_type);
    type = (ImageView_type*)uClassType::New("Fuse.Controls.Native.Android.ImageView", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::View_typeof());
    type->fp_build_ = ImageView_build;
    type->fp_ctor_ = (void*)ImageView__New1_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))ImageView__Dispose_fn;
    type->interface2.fp_UpdateImageTransform = (void(*)(uObject*, float*, ::g::Uno::Float2*, ::g::Uno::Float2*, ::g::Uno::Float2*))ImageView__UpdateImageTransform_fn;
    type->interface2.fp_set_ImageSource = (void(*)(uObject*, ::g::Fuse::Resources::ImageSource*))ImageView__set_ImageSource_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ImageView__Dispose_fn;
    return type;
}

// public ImageView() :451
void ImageView__ctor_1_fn(ImageView* __this)
{
    __this->ctor_1();
}

// private static void ClearBitmap(Java.Object handle) :564
void ImageView__ClearBitmap_fn(::g::Java::Object* handle)
{
    ImageView::ClearBitmap(handle);
}

// private static Java.Object Create(Java.Object container) :571
void ImageView__Create_fn(::g::Java::Object* container, ::g::Java::Object** __retval)
{
    *__retval = ImageView::Create(container);
}

// private static Java.Object CreateContainer() :582
void ImageView__CreateContainer_fn(::g::Java::Object** __retval)
{
    *__retval = ImageView::CreateContainer();
}

// public override sealed void Dispose() :456
void ImageView__Dispose_fn(ImageView* __this)
{
    __this->ImageHandle(NULL);
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// private Fuse.Controls.Native.ImageHandle get_ImageHandle() :476
void ImageView__get_ImageHandle_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle** __retval)
{
    *__retval = __this->ImageHandle();
}

// private void set_ImageHandle(Fuse.Controls.Native.ImageHandle value) :477
void ImageView__set_ImageHandle_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* value)
{
    __this->ImageHandle(value);
}

// public void set_ImageSource(Fuse.Resources.ImageSource value) :432
void ImageView__set_ImageSource_fn(ImageView* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->ImageSource(value);
}

// public ImageView New() :451
void ImageView__New1_fn(ImageView** __retval)
{
    *__retval = ImageView::New1();
}

// private static void SetBitmap(Java.Object handle, Java.Object bitmapHandle) :557
void ImageView__SetBitmap_fn(::g::Java::Object* handle, ::g::Java::Object* bitmapHandle)
{
    ImageView::SetBitmap(handle, bitmapHandle);
}

// private static void SetImageMatrix(Java.Object handle, float x, float y, float scaleX, float scaleY) :542
void ImageView__SetImageMatrix_fn(::g::Java::Object* handle, float* x, float* y, float* scaleX, float* scaleY)
{
    ImageView::SetImageMatrix(handle, *x, *y, *scaleX, *scaleY);
}

// private void SetImageSize(float2 size) :528
void ImageView__SetImageSize_fn(ImageView* __this, ::g::Uno::Float2* size)
{
    __this->SetImageSize(*size);
}

// private static void SetImageSize(Java.Object handle, int[] wh) :535
void ImageView__SetImageSize1_fn(::g::Java::Object* handle, uArray* wh)
{
    ImageView::SetImageSize1(handle, wh);
}

// private void UpdateImage(Fuse.Resources.FileImageSource fileImageSource) :495
void ImageView__UpdateImage_fn(ImageView* __this, ::g::Fuse::Resources::FileImageSource* fileImageSource)
{
    __this->UpdateImage(fileImageSource);
}

// private void UpdateImage(Fuse.Resources.HttpImageSource http) :500
void ImageView__UpdateImage1_fn(ImageView* __this, ::g::Fuse::Resources::HttpImageSource* http)
{
    __this->UpdateImage1(http);
}

// private void UpdateImage(Fuse.Resources.MultiDensityImageSource multi) :505
void ImageView__UpdateImage2_fn(ImageView* __this, ::g::Fuse::Resources::MultiDensityImageSource* multi)
{
    __this->UpdateImage2(multi);
}

// public void UpdateImageTransform(float density, float2 origin, float2 scale, float2 drawSize) :462
void ImageView__UpdateImageTransform_fn(ImageView* __this, float* density, ::g::Uno::Float2* origin, ::g::Uno::Float2* scale, ::g::Uno::Float2* drawSize)
{
    __this->UpdateImageTransform(*density, *origin, *scale, *drawSize);
}

// public ImageView() [instance] :451
void ImageView::ctor_1()
{
    ctor_(ImageView::CreateContainer());
    _imageView = ImageView::Create(Handle());
}

// private Fuse.Controls.Native.ImageHandle get_ImageHandle() [instance] :476
::g::Fuse::Controls::Native::ImageHandle* ImageView::ImageHandle()
{
    return _imageHandle;
}

// private void set_ImageHandle(Fuse.Controls.Native.ImageHandle value) [instance] :477
void ImageView::ImageHandle(::g::Fuse::Controls::Native::ImageHandle* value)
{
    if (_imageHandle != NULL)
    {
        ImageView::ClearBitmap(_imageView);
        uPtr(_imageHandle)->Dispose();
        _imageHandle = NULL;
    }

    _imageHandle = value;

    if (_imageHandle != NULL)
        ImageView::SetBitmap(_imageView, uCast< ::g::Java::Object*>(uPtr(_imageHandle)->Handle(), ::TYPES[6/*Java.Object*/]));
}

// public void set_ImageSource(Fuse.Resources.ImageSource value) [instance] :432
void ImageView::ImageSource(::g::Fuse::Resources::ImageSource* value)
{
    if (value == NULL)
        ImageHandle(NULL);
    else if (uIs(value, ::TYPES[7/*Fuse.Resources.FileImageSource*/]))
        UpdateImage(uCast< ::g::Fuse::Resources::FileImageSource*>(value, ::TYPES[7/*Fuse.Resources.FileImageSource*/]));
    else if (uIs(value, ::TYPES[8/*Fuse.Resources.HttpImageSource*/]))
        UpdateImage1(uCast< ::g::Fuse::Resources::HttpImageSource*>(value, ::TYPES[8/*Fuse.Resources.HttpImageSource*/]));
    else if (uIs(value, ::TYPES[9/*Fuse.Resources.MultiDensityImageSource*/]))
        UpdateImage2(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(value, ::TYPES[9/*Fuse.Resources.MultiDensityImageSource*/]));
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(value, ::STRINGS[0/*" not suppor...*/])));
}

// private void SetImageSize(float2 size) [instance] :528
void ImageView::SetImageSize(::g::Uno::Float2 size)
{
    uArray* wh = uArray::Init<int>(::TYPES[5/*int[]*/], 2, (int)size.X, (int)size.Y);
    ImageView::SetImageSize1(_imageView, wh);
}

// private void UpdateImage(Fuse.Resources.FileImageSource fileImageSource) [instance] :495
void ImageView::UpdateImage(::g::Fuse::Resources::FileImageSource* fileImageSource)
{
    ImageHandle(::g::Fuse::Controls::Native::ImageLoader::Load2(uPtr(fileImageSource)->File()));
}

// private void UpdateImage(Fuse.Resources.HttpImageSource http) [instance] :500
void ImageView::UpdateImage1(::g::Fuse::Resources::HttpImageSource* http)
{
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// private void UpdateImage(Fuse.Resources.MultiDensityImageSource multi) [instance] :505
void ImageView::UpdateImage2(::g::Fuse::Resources::MultiDensityImageSource* multi)
{
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// public void UpdateImageTransform(float density, float2 origin, float2 scale, float2 drawSize) [instance] :462
void ImageView::UpdateImageTransform(float density, ::g::Uno::Float2 origin, ::g::Uno::Float2 scale, ::g::Uno::Float2 drawSize)
{
    SetImageSize(::g::Uno::Float2__op_Multiply1(drawSize, density));
    ImageView::SetImageMatrix(_imageView, origin.X * density, origin.Y * density, scale.X * density, scale.Y * density);
}

// private static void ClearBitmap(Java.Object handle) [static] :564
void ImageView::ClearBitmap(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearBitmap51", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object Create(Java.Object container) [static] :571
::g::Java::Object* ImageView::Create(::g::Java::Object* container)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create52", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _ucontainer=container;
        jobject _container = (_ucontainer==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucontainer, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_container);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_container!=NULL) { U_JNIVAR->DeleteLocalRef(_container); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object CreateContainer() [static] :582
::g::Java::Object* ImageView::CreateContainer()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateContainer53", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public ImageView New() [static] :451
ImageView* ImageView::New1()
{
    ImageView* obj1 = (ImageView*)uNew(ImageView_typeof());
    obj1->ctor_1();
    return obj1;
}

// private static void SetBitmap(Java.Object handle, Java.Object bitmapHandle) [static] :557
void ImageView::SetBitmap(::g::Java::Object* handle, ::g::Java::Object* bitmapHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetBitmap55", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ubitmapHandle=bitmapHandle;
        jobject _bitmapHandle = (_ubitmapHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubitmapHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_bitmapHandle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_bitmapHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_bitmapHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetImageMatrix(Java.Object handle, float x, float y, float scaleX, float scaleY) [static] :542
void ImageView::SetImageMatrix(::g::Java::Object* handle, float x, float y, float scaleX, float scaleY)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetImageMatrix56", "(Ljava/lang/Object;FFFF)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ux=x;
        jfloat _x = (jfloat)_ux;
        float _uy=y;
        jfloat _y = (jfloat)_uy;
        float _uscaleX=scaleX;
        jfloat _scaleX = (jfloat)_uscaleX;
        float _uscaleY=scaleY;
        jfloat _scaleY = (jfloat)_uscaleY;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_x,_y,_scaleX,_scaleY);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetImageSize(Java.Object handle, int[] wh) [static] :535
void ImageView::SetImageSize1(::g::Java::Object* handle, uArray* wh)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetImageSize157", "(Ljava/lang/Object;Lcom/uno/IntArray;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uArray* _uwh=wh;
        jobject _wh = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box3(_uwh);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_wh);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_wh!=NULL) { U_JNIVAR->DeleteLocalRef(_wh); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// internal static extern class InputDispatch :607
// {
// static InputDispatch() :607
static void InputDispatch__cctor__fn(uType* __type)
{
    InputDispatch::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[10/*Uno.Collections.Dictionary<Java.Object, Fuse.Visual>*/]));
    InputDispatch::_activePointers_ = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[11/*Uno.Collections.HashSet<int>*/]));
}

static void InputDispatch_build(uType* type)
{
    ::TYPES[10] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Fuse::Visual_typeof());
    ::TYPES[11] = ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[12] = ::g::Fuse::Visual_typeof();
    ::TYPES[13] = ::g::Fuse::ICommonViewport_typeof();
    ::TYPES[14] = ::g::Uno::Exception_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Int_typeof()), (uintptr_t)&::g::Fuse::Controls::Native::Android::InputDispatch::_activePointers_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Fuse::Visual_typeof()), (uintptr_t)&::g::Fuse::Controls::Native::Android::InputDispatch::_listeners_, uFieldFlagsStatic,
        ::g::Java::Object_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::Android::InputDispatch::_touchListenerHandle_, uFieldFlagsStatic,
        ::g::Fuse::Controls::Native::Android::JavaMap_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::Android::InputDispatch::_viewVisualMap_, uFieldFlagsStatic);
}

uClassType* InputDispatch_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.InputDispatch", options);
    type->fp_build_ = InputDispatch_build;
    type->fp_cctor_ = InputDispatch__cctor__fn;
    return type;
}

// public static void AddListener(Fuse.Controls.Native.Android.View view, Fuse.Visual owner) :749
void InputDispatch__AddListener_fn(::g::Fuse::Controls::Native::Android::View* view, ::g::Fuse::Visual* owner)
{
    InputDispatch::AddListener(view, owner);
}

// private static void ClearOnTouchListener(Java.Object viewHandle) :783
void InputDispatch__ClearOnTouchListener_fn(::g::Java::Object* viewHandle)
{
    InputDispatch::ClearOnTouchListener(viewHandle);
}

// private static Java.Object CreateTouchListener() :767
void InputDispatch__CreateTouchListener_fn(::g::Java::Object** __retval)
{
    *__retval = InputDispatch::CreateTouchListener();
}

// private static void DeactivatePointer(int pointerId) :680
void InputDispatch__DeactivatePointer_fn(int* pointerId)
{
    InputDispatch::DeactivatePointer(*pointerId);
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) :761
void InputDispatch__FindRoot_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = InputDispatch::FindRoot(visual);
}

// private static bool IsPointerActive(int pointerId) :670
void InputDispatch__IsPointerActive_fn(int* pointerId, bool* __retval)
{
    *__retval = InputDispatch::IsPointerActive(*pointerId);
}

// private static bool OnTouch(Java.Object view, Java.Object motionEvent) :619
void InputDispatch__OnTouch_fn(::g::Java::Object* view, ::g::Java::Object* motionEvent, bool* __retval)
{
    *__retval = InputDispatch::OnTouch(view, motionEvent);
}

// public static void RaiseEvent(Fuse.Visual visual, Java.Object viewHandle, Fuse.Controls.Native.Android.MotionEvent motionEvent) :634
void InputDispatch__RaiseEvent_fn(::g::Fuse::Visual* visual, ::g::Java::Object* viewHandle, ::g::Fuse::Controls::Native::Android::MotionEvent* motionEvent)
{
    InputDispatch::RaiseEvent(visual, viewHandle, motionEvent);
}

// private static void RaiseMoved(Fuse.Visual visual, Fuse.Input.PointerEventData data) :701
void InputDispatch__RaiseMoved_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseMoved(visual, data);
}

// private static void RaisePressed(Fuse.Visual visual, Fuse.Input.PointerEventData data) :686
void InputDispatch__RaisePressed_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaisePressed(visual, data);
}

// private static void RaiseReleased(Fuse.Visual visual, Fuse.Input.PointerEventData data) :713
void InputDispatch__RaiseReleased_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseReleased(visual, data);
}

// public static void RemoveListener(Fuse.Controls.Native.Android.View view) :755
void InputDispatch__RemoveListener_fn(::g::Fuse::Controls::Native::Android::View* view)
{
    InputDispatch::RemoveListener(view);
}

// private static void SetOnTouchListener(Java.Object viewHandle, Java.Object listenerHandle) :777
void InputDispatch__SetOnTouchListener_fn(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    InputDispatch::SetOnTouchListener(viewHandle, listenerHandle);
}

// private static Java.Object get_TouchListener() :616
void InputDispatch__get_TouchListener_fn(::g::Java::Object** __retval)
{
    *__retval = InputDispatch::TouchListener();
}

// private static Fuse.Controls.Native.Android.JavaMap get_ViewVisualMap() :746
void InputDispatch__get_ViewVisualMap_fn(::g::Fuse::Controls::Native::Android::JavaMap** __retval)
{
    *__retval = InputDispatch::ViewVisualMap();
}

uSStrong< ::g::Uno::Collections::HashSet*> InputDispatch::_activePointers_;
uSStrong< ::g::Uno::Collections::Dictionary*> InputDispatch::_listeners_;
uSStrong< ::g::Java::Object*> InputDispatch::_touchListenerHandle_;
uSStrong< ::g::Fuse::Controls::Native::Android::JavaMap*> InputDispatch::_viewVisualMap_;

// public static void AddListener(Fuse.Controls.Native.Android.View view, Fuse.Visual owner) [static] :749
void InputDispatch::AddListener(::g::Fuse::Controls::Native::Android::View* view, ::g::Fuse::Visual* owner)
{
    InputDispatch_typeof()->Init();
    uPtr(InputDispatch::ViewVisualMap())->Put1(uPtr(view)->Handle(), owner);
    InputDispatch::SetOnTouchListener(view->Handle(), InputDispatch::TouchListener());
}

// private static void ClearOnTouchListener(Java.Object viewHandle) [static] :783
void InputDispatch::ClearOnTouchListener(::g::Java::Object* viewHandle)
{
    InputDispatch_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearOnTouchListener58", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object CreateTouchListener() [static] :767
::g::Java::Object* InputDispatch::CreateTouchListener()
{
    InputDispatch_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateTouchListener59", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void DeactivatePointer(int pointerId) [static] :680
void InputDispatch::DeactivatePointer(int pointerId)
{
    InputDispatch_typeof()->Init();
    bool ret3;
    bool ret4;

    if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret3), ret3))
        ::g::Uno::Collections::HashSet__Remove_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret4);
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) [static] :761
::g::Fuse::Visual* InputDispatch::FindRoot(::g::Fuse::Visual* visual)
{
    InputDispatch_typeof()->Init();
    return (uPtr(visual)->Parent() != NULL) ? (::g::Fuse::Visual*)InputDispatch::FindRoot(uPtr(visual)->Parent()) : visual;
}

// private static bool IsPointerActive(int pointerId) [static] :670
bool InputDispatch::IsPointerActive(int pointerId)
{
    InputDispatch_typeof()->Init();
    bool ret5;
    bool ret6;

    if (!(::g::Uno::Collections::HashSet__Contains_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret5), ret5))
    {
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret6);
        return false;
    }

    return true;
}

// private static bool OnTouch(Java.Object view, Java.Object motionEvent) [static] :619
bool InputDispatch::OnTouch(::g::Java::Object* view, ::g::Java::Object* motionEvent)
{
    InputDispatch_typeof()->Init();

    if (uPtr(InputDispatch::ViewVisualMap())->ContainsKey(view))
    {
        ::g::Fuse::Controls::Native::Android::MotionEvent* me = ::g::Fuse::Controls::Native::Android::MotionEvent::New1(motionEvent);
        ::g::Fuse::Visual* visual = uCast< ::g::Fuse::Visual*>(uPtr(InputDispatch::ViewVisualMap())->Get(view), ::TYPES[12/*Fuse.Visual*/]);

        if (visual == NULL)
            return false;

        InputDispatch::RaiseEvent(visual, view, me);
    }

    return false;
}

// public static void RaiseEvent(Fuse.Visual visual, Java.Object viewHandle, Fuse.Controls.Native.Android.MotionEvent motionEvent) [static] :634
void InputDispatch::RaiseEvent(::g::Fuse::Visual* visual, ::g::Java::Object* viewHandle, ::g::Fuse::Controls::Native::Android::MotionEvent* motionEvent)
{
    InputDispatch_typeof()->Init();
    int action = uPtr(motionEvent)->ActionMasked();
    uArray* data = motionEvent->PointerEventDataForView(viewHandle, ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(visual)->Viewport()), ::TYPES[13/*Fuse.ICommonViewport*/])));

    switch (action)
    {
        case 3:
        {
            for (int i = 0; i < uPtr(data)->Length(); i++)
                InputDispatch::RaiseReleased(visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i));

            break;
        }
        case 0:
        case 5:
        {
            for (int i1 = 0; i1 < uPtr(data)->Length(); i1++)
                InputDispatch::RaisePressed(visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i1));

            break;
        }
        case 2:
        {
            for (int i2 = 0; i2 < uPtr(data)->Length(); i2++)
                InputDispatch::RaiseMoved(visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i2));

            break;
        }
        case 1:
        case 6:
        {
            int pointerMask = ::g::Fuse::Controls::Native::Android::MotionEvent::PointerIndexMask();
            int pointerShit = ::g::Fuse::Controls::Native::Android::MotionEvent::PointerIndexShift();
            int pointerIndex = (uPtr(motionEvent)->Action() & pointerMask) >> pointerShit;
            InputDispatch::RaiseReleased(visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(pointerIndex));
            break;
        }
    }
}

// private static void RaiseMoved(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :701
void InputDispatch::RaiseMoved(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();

    try
    {
        ::g::Fuse::Input::Pointer::RaiseMoved(InputDispatch::FindRoot(visual), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaisePressed(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :686
void InputDispatch::RaisePressed(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();

    if (InputDispatch::IsPointerActive(uPtr(data)->PointIndex))
        return;

    try
    {
        ::g::Fuse::Input::Pointer::RaisePressed(InputDispatch::FindRoot(visual), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaiseReleased(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :713
void InputDispatch::RaiseReleased(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();
    InputDispatch::DeactivatePointer(uPtr(data)->PointIndex);

    try
    {
        ::g::Fuse::Input::Pointer::RaiseReleased(InputDispatch::FindRoot(visual), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// public static void RemoveListener(Fuse.Controls.Native.Android.View view) [static] :755
void InputDispatch::RemoveListener(::g::Fuse::Controls::Native::Android::View* view)
{
    InputDispatch_typeof()->Init();
    uPtr(InputDispatch::ViewVisualMap())->Remove(uPtr(view)->Handle());
    InputDispatch::ClearOnTouchListener(view->Handle());
}

// private static void SetOnTouchListener(Java.Object viewHandle, Java.Object listenerHandle) [static] :777
void InputDispatch::SetOnTouchListener(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    InputDispatch_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetOnTouchListener61", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ulistenerHandle=listenerHandle;
        jobject _listenerHandle = (_ulistenerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulistenerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle,_listenerHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        if (_listenerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_listenerHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object get_TouchListener() [static] :616
::g::Java::Object* InputDispatch::TouchListener()
{
    InputDispatch_typeof()->Init();
    ::g::Java::Object* ind1 = InputDispatch::_touchListenerHandle();
    return (ind1 != NULL) ? ind1 : (::g::Java::Object*)(InputDispatch::_touchListenerHandle() = InputDispatch::CreateTouchListener());
}

// private static Fuse.Controls.Native.Android.JavaMap get_ViewVisualMap() [static] :746
::g::Fuse::Controls::Native::Android::JavaMap* InputDispatch::ViewVisualMap()
{
    InputDispatch_typeof()->Init();
    ::g::Fuse::Controls::Native::Android::JavaMap* ind2 = InputDispatch::_viewVisualMap();
    return (ind2 != NULL) ? ind2 : (::g::Fuse::Controls::Native::Android::JavaMap*)(InputDispatch::_viewVisualMap() = ::g::Fuse::Controls::Native::Android::JavaMap::New1());
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// internal abstract extern interface IViewParent :3160
// {
uInterfaceType* IViewParent_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.Android.IViewParent", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class JavaMap :792
// {
static void JavaMap_build(uType* type)
{
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::JavaMap, _handle), 0);
}

uType* JavaMap_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(JavaMap);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.JavaMap", options);
    type->fp_build_ = JavaMap_build;
    type->fp_ctor_ = (void*)JavaMap__New1_fn;
    return type;
}

// public JavaMap() :796
void JavaMap__ctor__fn(JavaMap* __this)
{
    __this->ctor_();
}

// public bool ContainsKey(Java.Object key) :811
void JavaMap__ContainsKey_fn(JavaMap* __this, ::g::Java::Object* key, bool* __retval)
{
    *__retval = __this->ContainsKey(key);
}

// private static bool ContainsKey(Java.Object handle, Java.Object key) :844
void JavaMap__ContainsKey1_fn(::g::Java::Object* handle, ::g::Java::Object* key, bool* __retval)
{
    *__retval = JavaMap::ContainsKey1(handle, key);
}

// private static Java.Object Create() :822
void JavaMap__Create_fn(::g::Java::Object** __retval)
{
    *__retval = JavaMap::Create();
}

// public object Get(Java.Object key) :816
void JavaMap__Get_fn(JavaMap* __this, ::g::Java::Object* key, uObject** __retval)
{
    *__retval = __this->Get(key);
}

// private static object Get(Java.Object handle, Java.Object key) :852
void JavaMap__Get1_fn(::g::Java::Object* handle, ::g::Java::Object* key, uObject** __retval)
{
    *__retval = JavaMap::Get1(handle, key);
}

// public JavaMap New() :796
void JavaMap__New1_fn(JavaMap** __retval)
{
    *__retval = JavaMap::New1();
}

// private static void Put(Java.Object handle, Java.Object key, object value) :828
void JavaMap__Put_fn(::g::Java::Object* handle, ::g::Java::Object* key, uObject* value)
{
    JavaMap::Put(handle, key, value);
}

// public void Put(Java.Object key, object value) :801
void JavaMap__Put1_fn(JavaMap* __this, ::g::Java::Object* key, uObject* value)
{
    __this->Put1(key, value);
}

// public void Remove(Java.Object key) :806
void JavaMap__Remove_fn(JavaMap* __this, ::g::Java::Object* key)
{
    __this->Remove(key);
}

// private static void Remove(Java.Object handle, Java.Object key) :836
void JavaMap__Remove1_fn(::g::Java::Object* handle, ::g::Java::Object* key)
{
    JavaMap::Remove1(handle, key);
}

// public JavaMap() [instance] :796
void JavaMap::ctor_()
{
    _handle = JavaMap::Create();
}

// public bool ContainsKey(Java.Object key) [instance] :811
bool JavaMap::ContainsKey(::g::Java::Object* key)
{
    return JavaMap::ContainsKey1(_handle, key);
}

// public object Get(Java.Object key) [instance] :816
uObject* JavaMap::Get(::g::Java::Object* key)
{
    return JavaMap::Get1(_handle, key);
}

// public void Put(Java.Object key, object value) [instance] :801
void JavaMap::Put1(::g::Java::Object* key, uObject* value)
{
    JavaMap::Put(_handle, key, value);
}

// public void Remove(Java.Object key) [instance] :806
void JavaMap::Remove(::g::Java::Object* key)
{
    JavaMap::Remove1(_handle, key);
}

// private static bool ContainsKey(Java.Object handle, Java.Object key) [static] :844
bool JavaMap::ContainsKey1(::g::Java::Object* handle, ::g::Java::Object* key)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ContainsKey162", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_handle,_key);
        bool __result = (bool)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object Create() [static] :822
::g::Java::Object* JavaMap::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create63", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static object Get(Java.Object handle, Java.Object key) [static] :852
uObject* JavaMap::Get1(::g::Java::Object* handle, ::g::Java::Object* key)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Get164", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_handle,_key);
        uObject* __result = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(__jresult);
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public JavaMap New() [static] :796
JavaMap* JavaMap::New1()
{
    JavaMap* obj1 = (JavaMap*)uNew(JavaMap_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void Put(Java.Object handle, Java.Object key, object value) [static] :828
void JavaMap::Put(::g::Java::Object* handle, ::g::Java::Object* key, uObject* value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Put65", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uObject* _uvalue=value;
        jobject _value = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(_uvalue);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_key,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        if (_value!=NULL) { U_JNIVAR->DeleteLocalRef(_value); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void Remove(Java.Object handle, Java.Object key) [static] :836
void JavaMap::Remove1(::g::Java::Object* handle, ::g::Java::Object* key)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Remove166", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_key);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// public abstract extern class LeafView :1051
// {
static void LeafView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(LeafView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(LeafView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(LeafView_type, interface2));
    type->SetFields(6);
}

LeafView_type* LeafView_typeof()
{
    static uSStrong<LeafView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(LeafView);
    options.TypeSize = sizeof(LeafView_type);
    type = (LeafView_type*)uClassType::New("Fuse.Controls.Native.Android.LeafView", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::View_typeof());
    type->fp_build_ = LeafView_build;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))LeafView__FuseControlsNativeILeafViewMeasure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// protected LeafView(Java.Object handle) :1053
void LeafView__ctor_1_fn(LeafView* __this, ::g::Java::Object* handle)
{
    __this->ctor_1(handle);
}

// private float2 Fuse.Controls.Native.ILeafView.Measure(Fuse.LayoutParams lp, float density) :1055
void LeafView__FuseControlsNativeILeafViewMeasure_fn(LeafView* __this, ::g::Fuse::LayoutParams* lp, float* density, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    float density_ = *density;
    LeafView::Measure(__this->Handle(), (int)(lp_.X() * density_), (int)(lp_.Y() * density_), lp_.HasX(), lp_.HasY());
    ::g::Uno::Float2 res = ::g::Uno::Float2__New2((float)LeafView::GetMeasuredWidth(__this->Handle()) / density_, (float)LeafView::GetMeasuredHeight(__this->Handle()) / density_);
    return *__retval = res, void();
}

// private static int GetMeasuredHeight(Java.Object handle) :1078
void LeafView__GetMeasuredHeight_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = LeafView::GetMeasuredHeight(handle);
}

// private static int GetMeasuredWidth(Java.Object handle) :1072
void LeafView__GetMeasuredWidth_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = LeafView::GetMeasuredWidth(handle);
}

// private static void Measure(Java.Object handle, int w, int h, bool hasX, bool hasY) :1063
void LeafView__Measure_fn(::g::Java::Object* handle, int* w, int* h, bool* hasX, bool* hasY)
{
    LeafView::Measure(handle, *w, *h, *hasX, *hasY);
}

// protected LeafView(Java.Object handle) [instance] :1053
void LeafView::ctor_1(::g::Java::Object* handle)
{
    ctor_(handle);
}

// private static int GetMeasuredHeight(Java.Object handle) [static] :1078
int LeafView::GetMeasuredHeight(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetMeasuredHeight67", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetMeasuredWidth(Java.Object handle) [static] :1072
int LeafView::GetMeasuredWidth(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetMeasuredWidth68", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void Measure(Java.Object handle, int w, int h, bool hasX, bool hasY) [static] :1063
void LeafView::Measure(::g::Java::Object* handle, int w, int h, bool hasX, bool hasY)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Measure69", "(Ljava/lang/Object;IIZZ)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uw=w;
        jint _w = (jint)_uw;
        int _uh=h;
        jint _h = (jint)_uh;
        bool _uhasX=hasX;
        jboolean _hasX = (jboolean)_uhasX;
        bool _uhasY=hasY;
        jboolean _hasY = (jboolean)_uhasY;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_w,_h,_hasX,_hasY);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// public sealed extern class MotionEvent :861
// {
static void MotionEvent_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Input::PointerEventData_typeof()->Array();
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::MotionEvent, _handle), 0);
}

uType* MotionEvent_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(MotionEvent);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.MotionEvent", options);
    type->fp_build_ = MotionEvent_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))MotionEvent__Equals_fn;
    return type;
}

// public MotionEvent(Java.Object handle) :866
void MotionEvent__ctor__fn(MotionEvent* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// public int get_Action() :883
void MotionEvent__get_Action_fn(MotionEvent* __this, int* __retval)
{
    *__retval = __this->Action();
}

// public int get_ActionMasked() :878
void MotionEvent__get_ActionMasked_fn(MotionEvent* __this, int* __retval)
{
    *__retval = __this->ActionMasked();
}

// private static bool Compare(Java.Object handle1, Java.Object handle2) :1034
void MotionEvent__Compare_fn(::g::Java::Object* handle1, ::g::Java::Object* handle2, bool* __retval)
{
    *__retval = MotionEvent::Compare(handle1, handle2);
}

// public override sealed bool Equals(object obj) :924
void MotionEvent__Equals_fn(MotionEvent* __this, uObject* obj, bool* __retval)
{
    if (uIs(obj, MotionEvent_typeof()))
        return *__retval = MotionEvent::Compare(__this->_handle, uPtr(uCast<MotionEvent*>(obj, MotionEvent_typeof()))->_handle), void();
    else
        return *__retval = false, void();
}

// public long get_EventTime() :888
void MotionEvent__get_EventTime_fn(MotionEvent* __this, int64_t* __retval)
{
    *__retval = __this->EventTime();
}

// private int GetAction(Java.Object handle) :958
void MotionEvent__GetAction_fn(MotionEvent* __this, ::g::Java::Object* handle, int* __retval)
{
    *__retval = __this->GetAction(handle);
}

// private int GetActionMasked(Java.Object handle) :970
void MotionEvent__GetActionMasked_fn(MotionEvent* __this, ::g::Java::Object* handle, int* __retval)
{
    *__retval = __this->GetActionMasked(handle);
}

// private long GetEventTime(Java.Object handle) :976
void MotionEvent__GetEventTime_fn(MotionEvent* __this, ::g::Java::Object* handle, int64_t* __retval)
{
    *__retval = __this->GetEventTime(handle);
}

// private float2 GetLocationOnScreen(Java.Object viewHandle) :936
void MotionEvent__GetLocationOnScreen_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetLocationOnScreen(viewHandle);
}

// private int GetLocationOnScreenX(Java.Object viewHandle) :942
void MotionEvent__GetLocationOnScreenX_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, int* __retval)
{
    *__retval = __this->GetLocationOnScreenX(viewHandle);
}

// private int GetLocationOnScreenY(Java.Object viewHandle) :950
void MotionEvent__GetLocationOnScreenY_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, int* __retval)
{
    *__retval = __this->GetLocationOnScreenY(viewHandle);
}

// private int GetPointerCount(Java.Object handle) :982
void MotionEvent__GetPointerCount_fn(MotionEvent* __this, ::g::Java::Object* handle, int* __retval)
{
    *__retval = __this->GetPointerCount(handle);
}

// public int GetPointerId(int pointerIndex) :871
void MotionEvent__GetPointerId_fn(MotionEvent* __this, int* pointerIndex, int* __retval)
{
    *__retval = __this->GetPointerId(*pointerIndex);
}

// private int GetPointerId(Java.Object handle, int pointerIndex) :964
void MotionEvent__GetPointerId1_fn(MotionEvent* __this, ::g::Java::Object* handle, int* pointerIndex, int* __retval)
{
    *__retval = __this->GetPointerId1(handle, *pointerIndex);
}

// private static int GetPointerIndexMask() :1022
void MotionEvent__GetPointerIndexMask_fn(int* __retval)
{
    *__retval = MotionEvent::GetPointerIndexMask();
}

// private static int GetPointerIndexShift() :1028
void MotionEvent__GetPointerIndexShift_fn(int* __retval)
{
    *__retval = MotionEvent::GetPointerIndexShift();
}

// public float2 GetPosition(int pointerIndex) :896
void MotionEvent__GetPosition_fn(MotionEvent* __this, int* pointerIndex, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetPosition(*pointerIndex);
}

// private float GetX(Java.Object handle, int pointerIndex) :988
void MotionEvent__GetX_fn(MotionEvent* __this, ::g::Java::Object* handle, int* pointerIndex, float* __retval)
{
    *__retval = __this->GetX(handle, *pointerIndex);
}

// private float GetY(Java.Object handle, int pointerIndex) :994
void MotionEvent__GetY_fn(MotionEvent* __this, ::g::Java::Object* handle, int* pointerIndex, float* __retval)
{
    *__retval = __this->GetY(handle, *pointerIndex);
}

// public MotionEvent New(Java.Object handle) :866
void MotionEvent__New1_fn(::g::Java::Object* handle, MotionEvent** __retval)
{
    *__retval = MotionEvent::New1(handle);
}

// public int get_PointerCount() :893
void MotionEvent__get_PointerCount_fn(MotionEvent* __this, int* __retval)
{
    *__retval = __this->PointerCount();
}

// public Fuse.Input.PointerEventData[] PointerEventDataForView(Java.Object view, float pointDensity) :901
void MotionEvent__PointerEventDataForView_fn(MotionEvent* __this, ::g::Java::Object* view, float* pointDensity, uArray** __retval)
{
    *__retval = __this->PointerEventDataForView(view, *pointDensity);
}

// public static int get_PointerIndexMask() :1013
void MotionEvent__get_PointerIndexMask_fn(int* __retval)
{
    *__retval = MotionEvent::PointerIndexMask();
}

// public static int get_PointerIndexShift() :1018
void MotionEvent__get_PointerIndexShift_fn(int* __retval)
{
    *__retval = MotionEvent::PointerIndexShift();
}

// public MotionEvent(Java.Object handle) [instance] :866
void MotionEvent::ctor_(::g::Java::Object* handle)
{
    _handle = handle;
}

// public int get_Action() [instance] :883
int MotionEvent::Action()
{
    return GetAction(_handle);
}

// public int get_ActionMasked() [instance] :878
int MotionEvent::ActionMasked()
{
    return GetActionMasked(_handle);
}

// public long get_EventTime() [instance] :888
int64_t MotionEvent::EventTime()
{
    return GetEventTime(_handle);
}

// private int GetAction(Java.Object handle) [instance] :958
int MotionEvent::GetAction(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetAction71", "(Ljava/lang/Object;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private int GetActionMasked(Java.Object handle) [instance] :970
int MotionEvent::GetActionMasked(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetActionMasked72", "(Ljava/lang/Object;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private long GetEventTime(Java.Object handle) [instance] :976
int64_t MotionEvent::GetEventTime(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetEventTime73", "(Ljava/lang/Object;Ljava/lang/Object;)J");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jlong __jresult = U_JNIVAR->CallStaticLongMethod(__cls,__mtd,_this_,_handle);
        int64_t __result = (int64_t)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private float2 GetLocationOnScreen(Java.Object viewHandle) [instance] :936
::g::Uno::Float2 MotionEvent::GetLocationOnScreen(::g::Java::Object* viewHandle)
{
    return ::g::Uno::Float2__New2((float)GetLocationOnScreenX(viewHandle), (float)GetLocationOnScreenY(viewHandle));
}

// private int GetLocationOnScreenX(Java.Object viewHandle) [instance] :942
int MotionEvent::GetLocationOnScreenX(::g::Java::Object* viewHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLocationOnScreenX74", "(Ljava/lang/Object;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(_uthis);
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_viewHandle);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private int GetLocationOnScreenY(Java.Object viewHandle) [instance] :950
int MotionEvent::GetLocationOnScreenY(::g::Java::Object* viewHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLocationOnScreenY75", "(Ljava/lang/Object;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(_uthis);
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_viewHandle);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private int GetPointerCount(Java.Object handle) [instance] :982
int MotionEvent::GetPointerCount(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerCount76", "(Ljava/lang/Object;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public int GetPointerId(int pointerIndex) [instance] :871
int MotionEvent::GetPointerId(int pointerIndex)
{
    return GetPointerId1(_handle, pointerIndex);
}

// private int GetPointerId(Java.Object handle, int pointerIndex) [instance] :964
int MotionEvent::GetPointerId1(::g::Java::Object* handle, int pointerIndex)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerId177", "(Ljava/lang/Object;Ljava/lang/Object;I)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _upointerIndex=pointerIndex;
        jint _pointerIndex = (jint)_upointerIndex;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle,_pointerIndex);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public float2 GetPosition(int pointerIndex) [instance] :896
::g::Uno::Float2 MotionEvent::GetPosition(int pointerIndex)
{
    return ::g::Uno::Float2__New2(GetX(_handle, pointerIndex), GetY(_handle, pointerIndex));
}

// private float GetX(Java.Object handle, int pointerIndex) [instance] :988
float MotionEvent::GetX(::g::Java::Object* handle, int pointerIndex)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetX80", "(Ljava/lang/Object;Ljava/lang/Object;I)F");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _upointerIndex=pointerIndex;
        jint _pointerIndex = (jint)_upointerIndex;
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_this_,_handle,_pointerIndex);
        float __result = (float)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private float GetY(Java.Object handle, int pointerIndex) [instance] :994
float MotionEvent::GetY(::g::Java::Object* handle, int pointerIndex)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetY82", "(Ljava/lang/Object;Ljava/lang/Object;I)F");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _upointerIndex=pointerIndex;
        jint _pointerIndex = (jint)_upointerIndex;
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_this_,_handle,_pointerIndex);
        float __result = (float)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public int get_PointerCount() [instance] :893
int MotionEvent::PointerCount()
{
    return GetPointerCount(_handle);
}

// public Fuse.Input.PointerEventData[] PointerEventDataForView(Java.Object view, float pointDensity) [instance] :901
uArray* MotionEvent::PointerEventDataForView(::g::Java::Object* view, float pointDensity)
{
    ::g::Fuse::Input::PointerEventData* collection1;
    uArray* pointerEventData = uArray::New(::TYPES[15/*Fuse.Input.PointerEventData[]*/], PointerCount());
    ::g::Uno::Float2 locationOnScreen = GetLocationOnScreen(view);

    for (int i = 0; i < pointerEventData->Length(); i++)
    {
        ::g::Uno::Float2 windowPoint = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition2(locationOnScreen, GetPosition(i)), pointDensity);
        int pointerId = GetPointerId(i);
        uPtr(pointerEventData)->Strong< ::g::Fuse::Input::PointerEventData*>(i) = (collection1 = ::g::Fuse::Input::PointerEventData::New1(), uPtr(collection1)->PointIndex = pointerId, uPtr(collection1)->WindowPoint = windowPoint, uPtr(collection1)->Timestamp = (((double)EventTime() / 1000.0) - ::g::Fuse::Time::FrameTimeBase()), uPtr(collection1)->PointerType = 2, uPtr(collection1)->IsPrimary = (pointerId == 0), collection1);
    }

    return pointerEventData;
}

// private static bool Compare(Java.Object handle1, Java.Object handle2) [static] :1034
bool MotionEvent::Compare(::g::Java::Object* handle1, ::g::Java::Object* handle2)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Compare70", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        ::g::Java::Object* _uhandle1=handle1;
        jobject _handle1 = (_uhandle1==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle1, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uhandle2=handle2;
        jobject _handle2 = (_uhandle2==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle2, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_handle1,_handle2);
        bool __result = (bool)__jresult;
        if (_handle1!=NULL) { U_JNIVAR->DeleteLocalRef(_handle1); }
        if (_handle2!=NULL) { U_JNIVAR->DeleteLocalRef(_handle2); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetPointerIndexMask() [static] :1022
int MotionEvent::GetPointerIndexMask()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerIndexMask78", "()I");
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd);
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetPointerIndexShift() [static] :1028
int MotionEvent::GetPointerIndexShift()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerIndexShift79", "()I");
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd);
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public MotionEvent New(Java.Object handle) [static] :866
MotionEvent* MotionEvent::New1(::g::Java::Object* handle)
{
    MotionEvent* obj2 = (MotionEvent*)uNew(MotionEvent_typeof());
    obj2->ctor_(handle);
    return obj2;
}

// public static int get_PointerIndexMask() [static] :1013
int MotionEvent::PointerIndexMask()
{
    return MotionEvent::GetPointerIndexMask();
}

// public static int get_PointerIndexShift() [static] :1018
int MotionEvent::PointerIndexShift()
{
    return MotionEvent::GetPointerIndexShift();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class NativeViewRenderer :1095
// {
static void NativeViewRenderer_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(NativeViewRenderer_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(NativeViewRenderer_type, interface1));
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::NativeViewRenderer, _bitmapHandle), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::Controls::Native::Android::NativeViewRenderer, _oldSize), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(::g::Fuse::Controls::Native::Android::NativeViewRenderer, _textureHandle), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::NativeViewRenderer, _viewHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::NativeViewRenderer, _visualValid), 0);
}

NativeViewRenderer_type* NativeViewRenderer_typeof()
{
    static uSStrong<NativeViewRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NativeViewRenderer);
    options.TypeSize = sizeof(NativeViewRenderer_type);
    type = (NativeViewRenderer_type*)uClassType::New("Fuse.Controls.Native.Android.NativeViewRenderer", options);
    type->fp_build_ = NativeViewRenderer_build;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Uno::Float4x4*, ::g::Uno::Float2*, ::g::Uno::Float2*, float*))NativeViewRenderer__FuseControlsNativeINativeViewRendererDraw_fn;
    type->interface0.fp_Invalidate = (void(*)(uObject*))NativeViewRenderer__FuseControlsNativeINativeViewRendererInvalidate_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))NativeViewRenderer__UnoIDisposableDispose_fn;
    return type;
}

// public NativeViewRenderer(Java.Object viewHandle) :1104
void NativeViewRenderer__ctor__fn(NativeViewRenderer* __this, ::g::Java::Object* viewHandle)
{
    __this->ctor_(viewHandle);
}

// private static Java.Object CreateBitmap(int w, int h) :1179
void NativeViewRenderer__CreateBitmap_fn(int* w, int* h, ::g::Java::Object** __retval)
{
    *__retval = NativeViewRenderer::CreateBitmap(*w, *h);
}

// private void DeleteTexture() :1194
void NativeViewRenderer__DeleteTexture_fn(NativeViewRenderer* __this)
{
    __this->DeleteTexture();
}

// private static void DisposeBitmap(Java.Object bitmap) :1173
void NativeViewRenderer__DisposeBitmap_fn(::g::Java::Object* bitmap)
{
    NativeViewRenderer::DisposeBitmap(bitmap);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4 localToClipTransform, float2 position, float2 size, float density) :1110
void NativeViewRenderer__FuseControlsNativeINativeViewRendererDraw_fn(NativeViewRenderer* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density)
{
    ::g::Uno::Float2 size_ = *size;
    float density_ = *density;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float4x4 localToClipTransform_ = *localToClipTransform;
    ::g::Uno::Int2 realSize = ::g::Uno::Int2__op_Explicit(::g::Uno::Float2__op_Multiply1(size_, density_));
    bool reuse = true;

    if (::g::Uno::Int2__op_Inequality(__this->_oldSize, realSize))
    {
        __this->DeleteTexture();
        __this->_textureHandle = ::g::OpenGL::GL::CreateTexture();
        __this->_bitmapHandle = NativeViewRenderer::CreateBitmap(realSize.X, realSize.Y);
        __this->_oldSize = realSize;
        reuse = false;
        __this->_visualValid = false;
    }

    if (!__this->_visualValid)
    {
        ::g::OpenGL::GL::BindTexture(3553, __this->_textureHandle);
        NativeViewRenderer::Upload(__this->_viewHandle, __this->_bitmapHandle, reuse, realSize.X, realSize.Y);
        ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero_);
        __this->_visualValid = true;
    }

    uPtr(::g::Fuse::Controls::Native::Android::Blitter::Singleton())->Blit(::g::Uno::Graphics::Texture2D::New2(__this->_textureHandle, realSize, 1, 3), position_, size_, localToClipTransform_);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Invalidate() :1184
void NativeViewRenderer__FuseControlsNativeINativeViewRendererInvalidate_fn(NativeViewRenderer* __this)
{
    __this->_visualValid = false;
}

// public NativeViewRenderer New(Java.Object viewHandle) :1104
void NativeViewRenderer__New1_fn(::g::Java::Object* viewHandle, NativeViewRenderer** __retval)
{
    *__retval = NativeViewRenderer::New1(viewHandle);
}

// private void Uno.IDisposable.Dispose() :1189
void NativeViewRenderer__UnoIDisposableDispose_fn(NativeViewRenderer* __this)
{
    __this->DeleteTexture();
}

// private static void Upload(Java.Object viewHandle, Java.Object bitmapHandle, bool reuse, int w, int h) :1146
void NativeViewRenderer__Upload_fn(::g::Java::Object* viewHandle, ::g::Java::Object* bitmapHandle, bool* reuse, int* w, int* h)
{
    NativeViewRenderer::Upload(viewHandle, bitmapHandle, *reuse, *w, *h);
}

// public NativeViewRenderer(Java.Object viewHandle) [instance] :1104
void NativeViewRenderer::ctor_(::g::Java::Object* viewHandle)
{
    _oldSize = ::g::Uno::Int2__New2(-1, -1);
    _viewHandle = viewHandle;
}

// private void DeleteTexture() [instance] :1194
void NativeViewRenderer::DeleteTexture()
{
    if (::g::OpenGL::GLTextureHandle::op_Inequality(_textureHandle, ::g::OpenGL::GLTextureHandle::Zero_))
    {
        ::g::OpenGL::GL::DeleteTexture(_textureHandle);
        _textureHandle = ::g::OpenGL::GLTextureHandle::Zero_;
    }

    if (_bitmapHandle != NULL)
    {
        NativeViewRenderer::DisposeBitmap(_bitmapHandle);
        _bitmapHandle = NULL;
    }
}

// private static Java.Object CreateBitmap(int w, int h) [static] :1179
::g::Java::Object* NativeViewRenderer::CreateBitmap(int w, int h)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateBitmap84", "(II)Ljava/lang/Object;");
        int _uw=w;
        jint _w = (jint)_uw;
        int _uh=h;
        jint _h = (jint)_uh;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_w,_h);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void DisposeBitmap(Java.Object bitmap) [static] :1173
void NativeViewRenderer::DisposeBitmap(::g::Java::Object* bitmap)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "DisposeBitmap85", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _ubitmap=bitmap;
        jobject _bitmap = (_ubitmap==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubitmap, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_bitmap);
        
        if (_bitmap!=NULL) { U_JNIVAR->DeleteLocalRef(_bitmap); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public NativeViewRenderer New(Java.Object viewHandle) [static] :1104
NativeViewRenderer* NativeViewRenderer::New1(::g::Java::Object* viewHandle)
{
    NativeViewRenderer* obj1 = (NativeViewRenderer*)uNew(NativeViewRenderer_typeof());
    obj1->ctor_(viewHandle);
    return obj1;
}

// private static void Upload(Java.Object viewHandle, Java.Object bitmapHandle, bool reuse, int w, int h) [static] :1146
void NativeViewRenderer::Upload(::g::Java::Object* viewHandle, ::g::Java::Object* bitmapHandle, bool reuse, int w, int h)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Upload86", "(Ljava/lang/Object;Ljava/lang/Object;ZII)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ubitmapHandle=bitmapHandle;
        jobject _bitmapHandle = (_ubitmapHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubitmapHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _ureuse=reuse;
        jboolean _reuse = (jboolean)_ureuse;
        int _uw=w;
        jint _w = (jint)_uw;
        int _uh=h;
        jint _h = (jint)_uh;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle,_bitmapHandle,_reuse,_w,_h);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        if (_bitmapHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_bitmapHandle); }
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class Rectangle :1254
// {
static void Rectangle_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Rectangle_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Rectangle_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(Rectangle_type, interface2),
        ::g::Fuse::Controls::Native::IRectangleView_typeof(), offsetof(Rectangle_type, interface3));
    type->SetFields(9,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Rectangle, _cornerRadius), 0);
}

Rectangle_type* Rectangle_typeof()
{
    static uSStrong<Rectangle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Rectangle);
    options.TypeSize = sizeof(Rectangle_type);
    type = (Rectangle_type*)uClassType::New("Fuse.Controls.Native.Android.Rectangle", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::Shape_typeof());
    type->fp_build_ = Rectangle_build;
    type->fp_ctor_ = (void*)Rectangle__New1_fn;
    type->fp_UpdateShapeDrawable = (void(*)(::g::Fuse::Controls::Native::Android::Shape*, ::g::Java::Object*, float*))Rectangle__UpdateShapeDrawable_fn;
    type->interface3.fp_set_CornerRadius = (void(*)(uObject*, ::g::Uno::Float4*))Rectangle__FuseControlsNativeIRectangleViewset_CornerRadius_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))::g::Fuse::Controls::Native::Android::Shape__FuseControlsNativeIShapeViewUpdate_fn;
    return type;
}

// public generated Rectangle() :1254
void Rectangle__ctor_2_fn(Rectangle* __this)
{
    __this->ctor_2();
}

// private void Fuse.Controls.Native.IRectangleView.set_CornerRadius(float4 value) :1259
void Rectangle__FuseControlsNativeIRectangleViewset_CornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    __this->_cornerRadius = value_;
    __this->OnShapeChanged();
}

// public generated Rectangle New() :1254
void Rectangle__New1_fn(Rectangle** __retval)
{
    *__retval = Rectangle::New1();
}

// protected override sealed void UpdateShapeDrawable(Java.Object handle, float pixelsPerPoint) :1266
void Rectangle__UpdateShapeDrawable_fn(Rectangle* __this, ::g::Java::Object* handle, float* pixelsPerPoint)
{
    float pixelsPerPoint_ = *pixelsPerPoint;
    ::g::Uno::Float4 r = ::g::Uno::Float4__op_Multiply1(__this->_cornerRadius, pixelsPerPoint_);
    __this->UpdateShapeDrawable1(handle, r.X, r.Y, r.Z, r.W);
}

// private void UpdateShapeDrawable(Java.Object handle, float x, float y, float z, float w) :1273
void Rectangle__UpdateShapeDrawable1_fn(Rectangle* __this, ::g::Java::Object* handle, float* x, float* y, float* z, float* w)
{
    __this->UpdateShapeDrawable1(handle, *x, *y, *z, *w);
}

// public generated Rectangle() [instance] :1254
void Rectangle::ctor_2()
{
    _cornerRadius = ::g::Uno::Float4__New1(0.0f);
    ctor_1();
}

// private void UpdateShapeDrawable(Java.Object handle, float x, float y, float z, float w) [instance] :1273
void Rectangle::UpdateShapeDrawable1(::g::Java::Object* handle, float x, float y, float z, float w)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "UpdateShapeDrawable187", "(Ljava/lang/Object;Ljava/lang/Object;FFFF)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ux=x;
        jfloat _x = (jfloat)_ux;
        float _uy=y;
        jfloat _y = (jfloat)_uy;
        float _uz=z;
        jfloat _z = (jfloat)_uz;
        float _uw=w;
        jfloat _w = (jfloat)_uw;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle,_x,_y,_z,_w);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public generated Rectangle New() [static] :1254
Rectangle* Rectangle::New1()
{
    Rectangle* obj1 = (Rectangle*)uNew(Rectangle_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// public sealed extern class ScrollView :1293
// {
static void ScrollView_build(uType* type)
{
    ::TYPES[3] = ::g::Fuse::Controls::Native::Android::View_typeof();
    ::TYPES[16] = ::g::Fuse::Controls::Native::IScrollViewHost_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ScrollView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ScrollView_type, interface1),
        ::g::Fuse::Controls::Native::Android::IViewParent_typeof(), offsetof(ScrollView_type, interface2),
        ::g::Fuse::Controls::Native::IScrollView_typeof(), offsetof(ScrollView_type, interface3),
        ::g::Fuse::Controls::Native::IViewGroup_typeof(), offsetof(ScrollView_type, interface4));
    type->SetFields(6,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::ScrollView, _callbackHandle), 0,
        ::g::Fuse::Controls::Native::Android::View_typeof(), offsetof(::g::Fuse::Controls::Native::Android::ScrollView, _content), 0,
        ::g::Fuse::Controls::Native::IScrollViewHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::ScrollView, _host), 0);
}

ScrollView_type* ScrollView_typeof()
{
    static uSStrong<ScrollView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(ScrollView_type);
    type = (ScrollView_type*)uClassType::New("Fuse.Controls.Native.Android.ScrollView", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::View_typeof());
    type->fp_build_ = ScrollView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))ScrollView__Dispose_fn;
    type->interface2.fp_SetChildSize = (void(*)(uObject*, ::g::Fuse::Controls::Native::Android::View*, ::g::Uno::Float2*))ScrollView__FuseControlsNativeAndroidIViewParentSetChildSize_fn;
    type->interface4.fp_Add = (void(*)(uObject*, uObject*))ScrollView__FuseControlsNativeIViewGroupAdd_fn;
    type->interface4.fp_Add1 = (void(*)(uObject*, uObject*, int*))ScrollView__FuseControlsNativeIViewGroupAdd1_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, uObject*))ScrollView__FuseControlsNativeIViewGroupRemove_fn;
    type->interface4.fp_set_ClipToBounds = (void(*)(uObject*, bool*))ScrollView__FuseControlsNativeIViewGroupset_ClipToBounds_fn;
    type->interface3.fp_set_ScrollPosition = (void(*)(uObject*, ::g::Uno::Float2*))ScrollView__set_ScrollPosition_fn;
    type->interface3.fp_set_AllowedScrollDirections = (void(*)(uObject*, int*))ScrollView__set_AllowedScrollDirections_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ScrollView__Dispose_fn;
    return type;
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) :1299
void ScrollView__ctor_1_fn(ScrollView* __this, uObject* host)
{
    __this->ctor_1(host);
}

// private Java.Object AddCallback(Java.Object handle) :1318
void ScrollView__AddCallback_fn(ScrollView* __this, ::g::Java::Object* handle, ::g::Java::Object** __retval)
{
    *__retval = __this->AddCallback(handle);
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value) :1331
void ScrollView__set_AllowedScrollDirections_fn(ScrollView* __this, int* value)
{
    __this->AllowedScrollDirections(*value);
}

// public void set_Content(Fuse.Controls.Native.Android.View value) :1377
void ScrollView__set_Content_fn(ScrollView* __this, ::g::Fuse::Controls::Native::Android::View* value)
{
    __this->Content(value);
}

// private static Java.Object Create() :1312
void ScrollView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = ScrollView::Create();
}

// public override sealed void Dispose() :1305
void ScrollView__Dispose_fn(ScrollView* __this)
{
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View view, float2 size) :1349
void ScrollView__FuseControlsNativeAndroidIViewParentSetChildSize_fn(ScrollView* __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size)
{
    ::g::Uno::Float2 size_ = *size;
    ScrollView::SetChildSize(uPtr(view)->Handle(), (int)size_.X, (int)size_.Y);
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child) :1359
void ScrollView__FuseControlsNativeIViewGroupAdd_fn(ScrollView* __this, uObject* child)
{
    __this->Content(uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[3/*Fuse.Controls.Native.Android.View*/]));
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child, int index) :1364
void ScrollView__FuseControlsNativeIViewGroupAdd1_fn(ScrollView* __this, uObject* child, int* index)
{
    __this->Content(uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[3/*Fuse.Controls.Native.Android.View*/]));
}

// private void Fuse.Controls.Native.IViewGroup.set_ClipToBounds(bool value) :1356
void ScrollView__FuseControlsNativeIViewGroupset_ClipToBounds_fn(ScrollView* __this, bool* value)
{
    bool value_ = *value;
    ScrollView::SetClipToBounds(__this->Handle(), value_);
}

// private void Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView child) :1369
void ScrollView__FuseControlsNativeIViewGroupRemove_fn(ScrollView* __this, uObject* child)
{
    __this->Content(NULL);
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) :1299
void ScrollView__New1_fn(uObject* host, ScrollView** __retval)
{
    *__retval = ScrollView::New1(host);
}

// private void OnScrollChanged(int x, int y, int oldx, int oldy) :1343
void ScrollView__OnScrollChanged_fn(ScrollView* __this, int* x, int* y, int* oldx, int* oldy)
{
    __this->OnScrollChanged(*x, *y, *oldx, *oldy);
}

// public void set_ScrollPosition(float2 value) :1336
void ScrollView__set_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value)
{
    __this->ScrollPosition(*value);
}

// private static void SetChildSize(Java.Object handle, int w, int h) :1419
void ScrollView__SetChildSize_fn(::g::Java::Object* handle, int* w, int* h)
{
    ScrollView::SetChildSize(handle, *w, *h);
}

// private static void SetClipToBounds(Java.Object handle, bool clipToBounds) :1390
void ScrollView__SetClipToBounds_fn(::g::Java::Object* handle, bool* clipToBounds)
{
    ScrollView::SetClipToBounds(handle, *clipToBounds);
}

// private static void SetContent(Java.Object parentHandle, Java.Object childHandle) :1406
void ScrollView__SetContent_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    ScrollView::SetContent(parentHandle, childHandle);
}

// private static void SetScrollPosition(Java.Object handle, int x, int y) :1398
void ScrollView__SetScrollPosition_fn(::g::Java::Object* handle, int* x, int* y)
{
    ScrollView::SetScrollPosition(handle, *x, *y);
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) [instance] :1299
void ScrollView::ctor_1(uObject* host)
{
    ctor_(ScrollView::Create());
    _host = host;
    _callbackHandle = AddCallback(Handle());
}

// private Java.Object AddCallback(Java.Object handle) [instance] :1318
::g::Java::Object* ScrollView::AddCallback(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddCallback88", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_this_,_handle);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value) [instance] :1331
void ScrollView::AllowedScrollDirections(int value)
{
}

// public void set_Content(Fuse.Controls.Native.Android.View value) [instance] :1377
void ScrollView::Content(::g::Fuse::Controls::Native::Android::View* value)
{
    if (_content != NULL)
        uPtr(_content)->Parent(NULL);

    _content = value;

    if (_content != NULL)
        uPtr(_content)->Parent((uObject*)this);

    ScrollView::SetContent(Handle(), (_content != NULL) ? (::g::Java::Object*)uPtr(_content)->Handle() : NULL);
}

// private void OnScrollChanged(int x, int y, int oldx, int oldy) [instance] :1343
void ScrollView::OnScrollChanged(int x, int y, int oldx, int oldy)
{
    float p = ::g::Fuse::Controls::Native::IScrollViewHost::PixelsPerPoint(uInterface(uPtr(_host), ::TYPES[16/*Fuse.Controls.Native.IScrollViewHost*/]));
    ::g::Fuse::Controls::Native::IScrollViewHost::OnScrollPositionChanged(uInterface(uPtr(_host), ::TYPES[16/*Fuse.Controls.Native.IScrollViewHost*/]), ::g::Uno::Float2__New2((float)x / p, (float)y / p));
}

// public void set_ScrollPosition(float2 value) [instance] :1336
void ScrollView::ScrollPosition(::g::Uno::Float2 value)
{
    ::g::Uno::Int2 x = ::g::Uno::Int2__op_Explicit(::g::Uno::Float2__op_Multiply1(value, ::g::Fuse::Controls::Native::IScrollViewHost::PixelsPerPoint(uInterface(uPtr(_host), ::TYPES[16/*Fuse.Controls.Native.IScrollViewHost*/]))));
    ScrollView::SetScrollPosition(Handle(), x.X, x.Y);
}

// private static Java.Object Create() [static] :1312
::g::Java::Object* ScrollView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create90", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) [static] :1299
ScrollView* ScrollView::New1(uObject* host)
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_1(host);
    return obj1;
}

// private static void SetChildSize(Java.Object handle, int w, int h) [static] :1419
void ScrollView::SetChildSize(::g::Java::Object* handle, int w, int h)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetChildSize91", "(Ljava/lang/Object;II)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uw=w;
        jint _w = (jint)_uw;
        int _uh=h;
        jint _h = (jint)_uh;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_w,_h);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetClipToBounds(Java.Object handle, bool clipToBounds) [static] :1390
void ScrollView::SetClipToBounds(::g::Java::Object* handle, bool clipToBounds)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetClipToBounds92", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uclipToBounds=clipToBounds;
        jboolean _clipToBounds = (jboolean)_uclipToBounds;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_clipToBounds);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetContent(Java.Object parentHandle, Java.Object childHandle) [static] :1406
void ScrollView::SetContent(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetContent93", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetScrollPosition(Java.Object handle, int x, int y) [static] :1398
void ScrollView::SetScrollPosition(::g::Java::Object* handle, int x, int y)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetScrollPosition94", "(Ljava/lang/Object;II)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ux=x;
        jint _x = (jint)_ux;
        int _uy=y;
        jint _y = (jint)_uy;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_x,_y);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// internal abstract extern class Shape :1440
// {
static void Shape_build(uType* type)
{
    ::STRINGS[1] = uString::Const("");
    ::STRINGS[2] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls.Native\\0.35.12\\Android\\$.uno");
    ::STRINGS[3] = uString::Const("SetBrush");
    ::TYPES[17] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[18] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[19] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[20] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    ::TYPES[21] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::GradientStop_typeof());
    ::TYPES[22] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::GradientStop_typeof());
    ::TYPES[23] = ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), ::g::Fuse::Drawing::GradientStop_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[5] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[24] = ::g::Uno::Float_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Shape_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Shape_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(Shape_type, interface2));
    type->SetFields(6,
        ::g::Fuse::Drawing::Brush_typeof()->Array(), offsetof(::g::Fuse::Controls::Native::Android::Shape, _fills), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Shape, _pixelsPerPoint), 0,
        ::g::Fuse::Drawing::Stroke_typeof()->Array(), offsetof(::g::Fuse::Controls::Native::Android::Shape, _strokes), 0);
}

Shape_type* Shape_typeof()
{
    static uSStrong<Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Shape);
    options.TypeSize = sizeof(Shape_type);
    type = (Shape_type*)uClassType::New("Fuse.Controls.Native.Android.Shape", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::View_typeof());
    type->fp_build_ = Shape_build;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))Shape__FuseControlsNativeIShapeViewUpdate_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// protected Shape() :1444
void Shape__ctor_1_fn(Shape* __this)
{
    __this->ctor_1();
}

// private static Java.Object Create() :1607
void Shape__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Shape::Create();
}

// private void Fuse.Controls.Native.IShapeView.Update(Fuse.Drawing.Brush[] fills, Fuse.Drawing.Stroke[] strokes, float pixelsPerPoint) :1453
void Shape__FuseControlsNativeIShapeViewUpdate_fn(Shape* __this, uArray* fills, uArray* strokes, float* pixelsPerPoint)
{
    float pixelsPerPoint_ = *pixelsPerPoint;
    __this->_fills = fills;
    __this->_strokes = strokes;
    __this->_pixelsPerPoint = pixelsPerPoint_;
    __this->OnShapeChanged();
}

// private static Java.Object GetLayer(Java.Object handle, int layer) :1619
void Shape__GetLayer_fn(::g::Java::Object* handle, int* layer, ::g::Java::Object** __retval)
{
    *__retval = Shape::GetLayer(handle, *layer);
}

// private static Java.Object MakeLayerDrawable(Java.Object handle, int layerCount) :1626
void Shape__MakeLayerDrawable_fn(::g::Java::Object* handle, int* layerCount, ::g::Java::Object** __retval)
{
    *__retval = Shape::MakeLayerDrawable(handle, *layerCount);
}

// protected void OnShapeChanged() :1463
void Shape__OnShapeChanged_fn(Shape* __this)
{
    __this->OnShapeChanged();
}

// private static int SelectOffset(Fuse.Drawing.GradientStop a, Fuse.Drawing.GradientStop b) :1531
void Shape__SelectOffset_fn(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b, int* __retval)
{
    *__retval = Shape::SelectOffset(a, b);
}

// private void SetBrush(Java.Object shapeDrawable, Fuse.Drawing.Brush brush) :1498
void Shape__SetBrush_fn(Shape* __this, ::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Brush* brush)
{
    __this->SetBrush(shapeDrawable, brush);
}

// private void SetLinearGradient(Java.Object shapeDrawable, Fuse.Drawing.LinearGradient linearGradient) :1536
void Shape__SetLinearGradient_fn(Shape* __this, ::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::LinearGradient* linearGradient)
{
    __this->SetLinearGradient(shapeDrawable, linearGradient);
}

// private static void SetShapeDrawableColor(Java.Object shapeDrawable, int r, int g, int b, int a, int opacity) :1591
void Shape__SetShapeDrawableColor_fn(::g::Java::Object* shapeDrawable, int* r, int* g, int* b, int* a, int* opacity)
{
    Shape::SetShapeDrawableColor(shapeDrawable, *r, *g, *b, *a, *opacity);
}

// private static void SetShapeDrawableLinearGradient(Java.Object shapeDrawable, float startX, float startY, float endX, float endY, int[] colors, float[] positions) :1563
void Shape__SetShapeDrawableLinearGradient_fn(::g::Java::Object* shapeDrawable, float* startX, float* startY, float* endX, float* endY, uArray* colors, uArray* positions)
{
    Shape::SetShapeDrawableLinearGradient(shapeDrawable, *startX, *startY, *endX, *endY, colors, positions);
}

// private static void SetShapeDrawableStrokeWidth(Java.Object shapeDrawable, float width) :1599
void Shape__SetShapeDrawableStrokeWidth_fn(::g::Java::Object* shapeDrawable, float* width)
{
    Shape::SetShapeDrawableStrokeWidth(shapeDrawable, *width);
}

// private void SetStroke(Java.Object shapeDrawable, Fuse.Drawing.Stroke stroke) :1490
void Shape__SetStroke_fn(Shape* __this, ::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Stroke* stroke)
{
    __this->SetStroke(shapeDrawable, stroke);
}

// protected Shape() [instance] :1444
void Shape::ctor_1()
{
    ctor_(Shape::Create());
}

// protected void OnShapeChanged() [instance] :1463
void Shape::OnShapeChanged()
{
    int layerCount = ((_fills != NULL) ? uPtr(_fills)->Length() : 0) + ((_strokes != NULL) ? uPtr(_strokes)->Length() : 0);
    ::g::Java::Object* layerDrawable = Shape::MakeLayerDrawable(Handle(), layerCount);

    for (int i = 0; i < layerCount; i++)
        UpdateShapeDrawable(Shape::GetLayer(layerDrawable, i), _pixelsPerPoint);

    int layer = 0;

    if (_fills != NULL)

        for (int i1 = uPtr(_fills)->Length(); (i1--) > 0; )
            SetBrush(Shape::GetLayer(layerDrawable, layer++), uPtr(_fills)->Strong< ::g::Fuse::Drawing::Brush*>(i1));

    if (_strokes != NULL)

        for (int i2 = uPtr(_strokes)->Length(); (i2--) > 0; )
            SetStroke(Shape::GetLayer(layerDrawable, layer++), uPtr(_strokes)->Strong< ::g::Fuse::Drawing::Stroke*>(i2));
}

// private void SetBrush(Java.Object shapeDrawable, Fuse.Drawing.Brush brush) [instance] :1498
void Shape::SetBrush(::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Brush* brush)
{
    if (uIs(brush, ::TYPES[17/*Fuse.Drawing.LinearGradient*/]))
        SetLinearGradient(shapeDrawable, uCast< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[17/*Fuse.Drawing.LinearGradient*/]));
    else
    {
        ::g::Uno::Float4 c = ::g::Uno::Float4__New1(0.0f);
        ::g::Fuse::Drawing::SolidColor* sc = uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[18/*Fuse.Drawing.SolidColor*/]);

        if (sc != NULL)
            c = uPtr(sc)->Color();

        ::g::Fuse::Drawing::StaticSolidColor* ssc = uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[19/*Fuse.Drawing.StaticSolidColor*/]);

        if (ssc != NULL)
            c = uPtr(ssc)->Color();

        if ((sc == NULL) && (ssc == NULL))
            ::g::Fuse::Diagnostics::Unsupported(::STRINGS[1/*""*/], brush, ::STRINGS[2/*"C:\\Program...*/], 1515, ::STRINGS[3/*"SetBrush"*/]);

        ::g::Fuse::Drawing::DynamicBrush* db = uAs< ::g::Fuse::Drawing::DynamicBrush*>(brush, ::TYPES[20/*Fuse.Drawing.DynamicBrush*/]);
        float opacity = (db != NULL) ? uPtr(db)->Opacity() : 1.0f;
        Shape::SetShapeDrawableColor(shapeDrawable, ::g::Uno::Math::Clamp8((int)(c.X * 255.0f), 0, 255), ::g::Uno::Math::Clamp8((int)(c.Y * 255.0f), 0, 255), ::g::Uno::Math::Clamp8((int)(c.Z * 255.0f), 0, 255), ::g::Uno::Math::Clamp8((int)(c.W * 255.0f), 0, 255), ::g::Uno::Math::Clamp8((int)(opacity * 255.0f), 0, 255));
    }
}

// private void SetLinearGradient(Java.Object shapeDrawable, Fuse.Drawing.LinearGradient linearGradient) [instance] :1536
void Shape::SetLinearGradient(::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::LinearGradient* linearGradient)
{
    uArray* stops = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[21/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Drawing.GradientStop>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::OrderBy1(::TYPES[22/*Uno.Collections.EnumerableExtensions.OrderBy<Fuse.Drawing.GradientStop>*/], uPtr(linearGradient)->Stops(), uDelegate::New(::TYPES[23/*Uno.Func<Fuse.Drawing.GradientStop, Fuse.Drawing.GradientStop, int>*/], (void*)Shape__SelectOffset_fn)));
    uArray* colors = uArray::New(::TYPES[5/*int[]*/], uPtr(stops)->Length());
    uArray* positions = uArray::New(::TYPES[24/*float[]*/], stops->Length());

    for (int i = 0; i < stops->Length(); i++)
    {
        ::g::Fuse::Drawing::GradientStop* gradientStop = uPtr(stops)->Strong< ::g::Fuse::Drawing::GradientStop*>(i);
        uPtr(colors)->Item<int>(i) = ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(uPtr(gradientStop)->Color());
        uPtr(positions)->Item<float>(i) = gradientStop->Offset();
    }

    ::g::Uno::Float2 start = linearGradient->StartPoint();
    ::g::Uno::Float2 end = linearGradient->EndPoint();
    Shape::SetShapeDrawableLinearGradient(shapeDrawable, start.X, start.Y, end.X, end.Y, colors, positions);
}

// private void SetStroke(Java.Object shapeDrawable, Fuse.Drawing.Stroke stroke) [instance] :1490
void Shape::SetStroke(::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Stroke* stroke)
{
    if (uPtr(stroke)->Brush() != NULL)
        SetBrush(shapeDrawable, uPtr(stroke)->Brush());

    Shape::SetShapeDrawableStrokeWidth(shapeDrawable, uPtr(stroke)->Width() * _pixelsPerPoint);
}

// private static Java.Object Create() [static] :1607
::g::Java::Object* Shape::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create95", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object GetLayer(Java.Object handle, int layer) [static] :1619
::g::Java::Object* Shape::GetLayer(::g::Java::Object* handle, int layer)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLayer97", "(Ljava/lang/Object;I)Ljava/lang/Object;");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ulayer=layer;
        jint _layer = (jint)_ulayer;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_handle,_layer);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object MakeLayerDrawable(Java.Object handle, int layerCount) [static] :1626
::g::Java::Object* Shape::MakeLayerDrawable(::g::Java::Object* handle, int layerCount)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "MakeLayerDrawable98", "(Ljava/lang/Object;I)Ljava/lang/Object;");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ulayerCount=layerCount;
        jint _layerCount = (jint)_ulayerCount;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_handle,_layerCount);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int SelectOffset(Fuse.Drawing.GradientStop a, Fuse.Drawing.GradientStop b) [static] :1531
int Shape::SelectOffset(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b)
{
    return (int)::g::Uno::Math::Sign1(uPtr(a)->Offset() - uPtr(b)->Offset());
}

// private static void SetShapeDrawableColor(Java.Object shapeDrawable, int r, int g, int b, int a, int opacity) [static] :1591
void Shape::SetShapeDrawableColor(::g::Java::Object* shapeDrawable, int r, int g, int b, int a, int opacity)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetShapeDrawableColor99", "(Ljava/lang/Object;IIIII)V");
        ::g::Java::Object* _ushapeDrawable=shapeDrawable;
        jobject _shapeDrawable = (_ushapeDrawable==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ushapeDrawable, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ur=r;
        jint _r = (jint)_ur;
        int _ug=g;
        jint _g = (jint)_ug;
        int _ub=b;
        jint _b = (jint)_ub;
        int _ua=a;
        jint _a = (jint)_ua;
        int _uopacity=opacity;
        jint _opacity = (jint)_uopacity;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_shapeDrawable,_r,_g,_b,_a,_opacity);
        
        if (_shapeDrawable!=NULL) { U_JNIVAR->DeleteLocalRef(_shapeDrawable); }
        
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetShapeDrawableLinearGradient(Java.Object shapeDrawable, float startX, float startY, float endX, float endY, int[] colors, float[] positions) [static] :1563
void Shape::SetShapeDrawableLinearGradient(::g::Java::Object* shapeDrawable, float startX, float startY, float endX, float endY, uArray* colors, uArray* positions)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetShapeDrawableLinearGradient100", "(Ljava/lang/Object;FFFFLcom/uno/IntArray;Lcom/uno/FloatArray;)V");
        ::g::Java::Object* _ushapeDrawable=shapeDrawable;
        jobject _shapeDrawable = (_ushapeDrawable==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ushapeDrawable, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ustartX=startX;
        jfloat _startX = (jfloat)_ustartX;
        float _ustartY=startY;
        jfloat _startY = (jfloat)_ustartY;
        float _uendX=endX;
        jfloat _endX = (jfloat)_uendX;
        float _uendY=endY;
        jfloat _endY = (jfloat)_uendY;
        uArray* _ucolors=colors;
        jobject _colors = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box3(_ucolors);
        uArray* _upositions=positions;
        jobject _positions = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box2(_upositions);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_shapeDrawable,_startX,_startY,_endX,_endY,_colors,_positions);
        
        if (_shapeDrawable!=NULL) { U_JNIVAR->DeleteLocalRef(_shapeDrawable); }
        
        
        
        
        if (_colors!=NULL) { U_JNIVAR->DeleteLocalRef(_colors); }
        if (_positions!=NULL) { U_JNIVAR->DeleteLocalRef(_positions); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetShapeDrawableStrokeWidth(Java.Object shapeDrawable, float width) [static] :1599
void Shape::SetShapeDrawableStrokeWidth(::g::Java::Object* shapeDrawable, float width)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetShapeDrawableStrokeWidth101", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _ushapeDrawable=shapeDrawable;
        jobject _shapeDrawable = (_ushapeDrawable==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ushapeDrawable, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uwidth=width;
        jfloat _width = (jfloat)_uwidth;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_shapeDrawable,_width);
        
        if (_shapeDrawable!=NULL) { U_JNIVAR->DeleteLocalRef(_shapeDrawable); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// public sealed extern class Slider :1670
// {
static void Slider_build(uType* type)
{
    ::TYPES[25] = ::g::Fuse::Controls::Native::IRangeViewHost_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::LeafView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::LeafView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::LeafView_type, interface2));
    type->SetFields(6,
        ::g::Fuse::Controls::Native::IRangeViewHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Slider, _host), 0);
}

::g::Fuse::Controls::Native::Android::LeafView_type* Slider_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::LeafView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Slider);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::LeafView_type);
    type = (::g::Fuse::Controls::Native::Android::LeafView_type*)uClassType::New("Fuse.Controls.Native.Android.Slider", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::LeafView_typeof());
    type->fp_build_ = Slider_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))Slider__Dispose_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__FuseControlsNativeILeafViewMeasure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Slider__Dispose_fn;
    return type;
}

// public override sealed void Dispose() :1718
void Slider__Dispose_fn(Slider* __this)
{
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// private void OnSeekBarChanged(double newProgress) :1713
void Slider__OnSeekBarChanged_fn(Slider* __this, double* newProgress)
{
    __this->OnSeekBarChanged(*newProgress);
}

// private void OnSeekBarChanged(double newProgress) [instance] :1713
void Slider::OnSeekBarChanged(double newProgress)
{
    ::g::Fuse::Controls::Native::IRangeViewHost::OnProgressChanged(uInterface(uPtr(_host), ::TYPES[25/*Fuse.Controls.Native.IRangeViewHost*/]), newProgress);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// internal static extern class SoftKeyboard :2353
// {
static void SoftKeyboard_build(uType* type)
{
}

uClassType* SoftKeyboard_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.SoftKeyboard", options);
    type->fp_build_ = SoftKeyboard_build;
    return type;
}

// public static void HideKeyboard(Java.Object hideKeyboardContext, Java.Object hideKeyboardWindowToken) :2357
void SoftKeyboard__HideKeyboard_fn(::g::Java::Object* hideKeyboardContext, ::g::Java::Object* hideKeyboardWindowToken)
{
    SoftKeyboard::HideKeyboard(hideKeyboardContext, hideKeyboardWindowToken);
}

// public static void ShowKeyboard(Java.Object viewHandle) :2366
void SoftKeyboard__ShowKeyboard_fn(::g::Java::Object* viewHandle)
{
    SoftKeyboard::ShowKeyboard(viewHandle);
}

// public static void HideKeyboard(Java.Object hideKeyboardContext, Java.Object hideKeyboardWindowToken) [static] :2357
void SoftKeyboard::HideKeyboard(::g::Java::Object* hideKeyboardContext, ::g::Java::Object* hideKeyboardWindowToken)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HideKeyboard106", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhideKeyboardContext=hideKeyboardContext;
        jobject _hideKeyboardContext = (_uhideKeyboardContext==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhideKeyboardContext, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uhideKeyboardWindowToken=hideKeyboardWindowToken;
        jobject _hideKeyboardWindowToken = (_uhideKeyboardWindowToken==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhideKeyboardWindowToken, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_hideKeyboardContext,_hideKeyboardWindowToken);
        
        if (_hideKeyboardContext!=NULL) { U_JNIVAR->DeleteLocalRef(_hideKeyboardContext); }
        if (_hideKeyboardWindowToken!=NULL) { U_JNIVAR->DeleteLocalRef(_hideKeyboardWindowToken); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void ShowKeyboard(Java.Object viewHandle) [static] :2366
void SoftKeyboard::ShowKeyboard(::g::Java::Object* viewHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ShowKeyboard107", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// public sealed extern class SurfaceView :1735
// {
static void SurfaceView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView_type, interface1),
        ::g::Fuse::Controls::Native::IGraphicsView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView_type, interface2));
    type->SetFields(9);
}

::g::Fuse::Controls::Native::Android::GraphicsView_type* SurfaceView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::GraphicsView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(SurfaceView);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::GraphicsView_type);
    type = (::g::Fuse::Controls::Native::Android::GraphicsView_type*)uClassType::New("Fuse.Controls.Native.Android.SurfaceView", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::GraphicsView_typeof());
    type->fp_build_ = SurfaceView_build;
    type->fp_ctor_ = (void*)SurfaceView__New1_fn;
    type->interface2.fp_BeginDraw = (void(*)(uObject*, ::g::Uno::Int2*))::g::Fuse::Controls::Native::Android::GraphicsView__BeginDraw_fn;
    type->interface2.fp_EndDraw = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::GraphicsView__EndDraw_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// public SurfaceView() :1737
void SurfaceView__ctor_2_fn(SurfaceView* __this)
{
    __this->ctor_2();
}

// private void AddCallback(Java.Object handle) :1760
void SurfaceView__AddCallback_fn(SurfaceView* __this, ::g::Java::Object* handle)
{
    __this->AddCallback(handle);
}

// private static Java.Object Create() :1779
void SurfaceView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = SurfaceView::Create();
}

// private static Java.Object GetSurface(Java.Object holder) :1754
void SurfaceView__GetSurface_fn(::g::Java::Object* holder, ::g::Java::Object** __retval)
{
    *__retval = SurfaceView::GetSurface(holder);
}

// public SurfaceView New() :1737
void SurfaceView__New1_fn(SurfaceView** __retval)
{
    *__retval = SurfaceView::New1();
}

// private void OnSurfaceChanged(Java.Object holder, int f, int w, int h) :1743
void SurfaceView__OnSurfaceChanged_fn(SurfaceView* __this, ::g::Java::Object* holder, int* f, int* w, int* h)
{
    __this->OnSurfaceChanged(holder, *f, *w, *h);
}

// private void OnSurfaceCreated(Java.Object holder) :1744
void SurfaceView__OnSurfaceCreated_fn(SurfaceView* __this, ::g::Java::Object* holder)
{
    __this->OnSurfaceCreated(holder);
}

// private void OnSurfaceDestroyed(Java.Object holder) :1748
void SurfaceView__OnSurfaceDestroyed_fn(SurfaceView* __this, ::g::Java::Object* holder)
{
    __this->OnSurfaceDestroyed(holder);
}

// private void OnSurfaceRedrawNeeded(Java.Object holder) :1742
void SurfaceView__OnSurfaceRedrawNeeded_fn(SurfaceView* __this, ::g::Java::Object* holder)
{
    __this->OnSurfaceRedrawNeeded(holder);
}

// public SurfaceView() [instance] :1737
void SurfaceView::ctor_2()
{
    ctor_1(SurfaceView::Create());
    AddCallback(Handle());
}

// private void AddCallback(Java.Object handle) [instance] :1760
void SurfaceView::AddCallback(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddCallback108", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnSurfaceChanged(Java.Object holder, int f, int w, int h) [instance] :1743
void SurfaceView::OnSurfaceChanged(::g::Java::Object* holder, int f, int w, int h)
{
}

// private void OnSurfaceCreated(Java.Object holder) [instance] :1744
void SurfaceView::OnSurfaceCreated(::g::Java::Object* holder)
{
    SetSurface(SurfaceView::GetSurface(holder));
}

// private void OnSurfaceDestroyed(Java.Object holder) [instance] :1748
void SurfaceView::OnSurfaceDestroyed(::g::Java::Object* holder)
{
    DestroySurface();
}

// private void OnSurfaceRedrawNeeded(Java.Object holder) [instance] :1742
void SurfaceView::OnSurfaceRedrawNeeded(::g::Java::Object* holder)
{
}

// private static Java.Object Create() [static] :1779
::g::Java::Object* SurfaceView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create113", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object GetSurface(Java.Object holder) [static] :1754
::g::Java::Object* SurfaceView::GetSurface(::g::Java::Object* holder)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetSurface114", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _uholder=holder;
        jobject _holder = (_uholder==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uholder, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_holder);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_holder!=NULL) { U_JNIVAR->DeleteLocalRef(_holder); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public SurfaceView New() [static] :1737
SurfaceView* SurfaceView::New1()
{
    SurfaceView* obj1 = (SurfaceView*)uNew(SurfaceView_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// public sealed extern class Switch :1804
// {
static void Switch_build(uType* type)
{
    ::TYPES[26] = ::g::Fuse::Controls::Native::IToggleViewHost_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Switch_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Switch_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Switch_type, interface2),
        ::g::Fuse::Controls::Native::IToggleView_typeof(), offsetof(Switch_type, interface3));
    type->SetFields(6,
        ::g::Fuse::Controls::Native::IToggleViewHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Switch, _host), 0);
}

Switch_type* Switch_typeof()
{
    static uSStrong<Switch_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(Switch_type);
    type = (Switch_type*)uClassType::New("Fuse.Controls.Native.Android.Switch", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::LeafView_typeof());
    type->fp_build_ = Switch_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))Switch__Dispose_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, bool*))Switch__set_Value_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__FuseControlsNativeILeafViewMeasure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Switch__Dispose_fn;
    return type;
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) :1814
void Switch__ctor_2_fn(Switch* __this, uObject* host)
{
    __this->ctor_2(host);
}

// private void AddCallback(Java.Object handle) :1827
void Switch__AddCallback_fn(Switch* __this, ::g::Java::Object* handle)
{
    __this->AddCallback(handle);
}

// private static Java.Object Create() :1821
void Switch__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Switch::Create();
}

// public override sealed void Dispose() :1847
void Switch__Dispose_fn(Switch* __this)
{
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) :1814
void Switch__New1_fn(uObject* host, Switch** __retval)
{
    *__retval = Switch::New1(host);
}

// private void OnToggleChanged(bool value) :1842
void Switch__OnToggleChanged_fn(Switch* __this, bool* value)
{
    __this->OnToggleChanged(*value);
}

// private static void SetValue(Java.Object handle, bool value) :1837
void Switch__SetValue_fn(::g::Java::Object* handle, bool* value)
{
    Switch::SetValue(handle, *value);
}

// public void set_Value(bool value) :1808
void Switch__set_Value_fn(Switch* __this, bool* value)
{
    __this->Value(*value);
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) [instance] :1814
void Switch::ctor_2(uObject* host)
{
    ctor_1(Switch::Create());
    _host = host;
    AddCallback(Handle());
}

// private void AddCallback(Java.Object handle) [instance] :1827
void Switch::AddCallback(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddCallback115", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnToggleChanged(bool value) [instance] :1842
void Switch::OnToggleChanged(bool value)
{
    ::g::Fuse::Controls::Native::IToggleViewHost::OnValueChanged(uInterface(uPtr(_host), ::TYPES[26/*Fuse.Controls.Native.IToggleViewHost*/]), value);
}

// public void set_Value(bool value) [instance] :1808
void Switch::Value(bool value)
{
    Switch::SetValue(Handle(), value);
}

// private static Java.Object Create() [static] :1821
::g::Java::Object* Switch::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create117", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) [static] :1814
Switch* Switch::New1(uObject* host)
{
    Switch* obj1 = (Switch*)uNew(Switch_typeof());
    obj1->ctor_2(host);
    return obj1;
}

// private static void SetValue(Java.Object handle, bool value) [static] :1837
void Switch::SetValue(::g::Java::Object* handle, bool value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetValue118", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uvalue=value;
        jboolean _value = (jboolean)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// public sealed extern class TextEdit :1863
// {
static void TextEdit_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface2),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface3),
        ::g::Fuse::Controls::Native::ITextEdit_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface4));
    type->SetFields(15);
}

::g::Fuse::Controls::Native::Android::TextInput_type* TextEdit_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::TextInput_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(TextEdit);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::TextInput_type);
    type = (::g::Fuse::Controls::Native::Android::TextInput_type*)uClassType::New("Fuse.Controls.Native.Android.TextEdit", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::TextInput_typeof());
    type->fp_build_ = TextEdit_build;
    type->interface4.fp_FocusGained = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::TextInput__FuseControlsNativeITextEditFocusGained_fn;
    type->interface4.fp_FocusLost = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::TextInput__FuseControlsNativeITextEditFocusLost_fn;
    type->interface4.fp_set_IsPassword = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::TextInput__set_IsPassword_fn;
    type->interface4.fp_set_IsReadOnly = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::TextInput__set_IsReadOnly_fn;
    type->interface4.fp_set_InputHint = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextInput__set_InputHint_fn;
    type->interface4.fp_set_CaretColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextInput__set_CaretColor_fn;
    type->interface4.fp_set_SelectionColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextInput__set_SelectionColor_fn;
    type->interface4.fp_set_ActionStyle = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextInput__set_ActionStyle_fn;
    type->interface4.fp_set_AutoCorrectHint = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextInput__set_AutoCorrectHint_fn;
    type->interface4.fp_set_AutoCapitalizationHint = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextInput__set_AutoCapitalizationHint_fn;
    type->interface4.fp_set_PlaceholderText = (void(*)(uObject*, uString*))::g::Fuse::Controls::Native::Android::TextInput__set_PlaceholderText_fn;
    type->interface4.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextInput__set_PlaceholderColor_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, uString*))::g::Fuse::Controls::Native::Android::TextView__set_Value_fn;
    type->interface3.fp_set_MaxLength = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_MaxLength_fn;
    type->interface3.fp_set_TextWrapping = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextWrapping_fn;
    type->interface3.fp_set_LineSpacing = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_LineSpacing_fn;
    type->interface3.fp_set_FontSize = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_FontSize_fn;
    type->interface3.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))::g::Fuse::Controls::Native::Android::TextView__set_Font_fn;
    type->interface3.fp_set_TextAlignment = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextAlignment_fn;
    type->interface3.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextView__set_TextColor_fn;
    type->interface3.fp_set_TextTruncation = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextTruncation_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::TextInput__Dispose_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__FuseControlsNativeILeafViewMeasure_fn;
    return type;
}

// public TextEdit(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) :1865
void TextEdit__ctor_5_fn(TextEdit* __this, uObject* host, bool* isMultiline)
{
    __this->ctor_5(host, *isMultiline);
}

// private static void MakeItPlain(Java.Object handle) :1871
void TextEdit__MakeItPlain_fn(::g::Java::Object* handle)
{
    TextEdit::MakeItPlain(handle);
}

// public TextEdit New(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) :1865
void TextEdit__New4_fn(uObject* host, bool* isMultiline, TextEdit** __retval)
{
    *__retval = TextEdit::New4(host, *isMultiline);
}

// public TextEdit(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [instance] :1865
void TextEdit::ctor_5(uObject* host, bool isMultiline)
{
    ctor_4(host, isMultiline);
    TextEdit::MakeItPlain(Handle());
}

// private static void MakeItPlain(Java.Object handle) [static] :1871
void TextEdit::MakeItPlain(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "MakeItPlain119", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public TextEdit New(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [static] :1865
TextEdit* TextEdit::New4(uObject* host, bool isMultiline)
{
    TextEdit* obj1 = (TextEdit*)uNew(TextEdit_typeof());
    obj1->ctor_5(host, isMultiline);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class TextEditRenderer :2446
// {
static void TextEditRenderer_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Controls::Native::INativeViewRenderer_typeof();
    ::TYPES[1] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(TextEditRenderer_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(TextEditRenderer_type, interface1));
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderer, _container), 0,
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderer, _nativeViewRenderer), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderer, _source), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderer, _target), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderer, _valid), 0);
}

TextEditRenderer_type* TextEditRenderer_typeof()
{
    static uSStrong<TextEditRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TextEditRenderer);
    options.TypeSize = sizeof(TextEditRenderer_type);
    type = (TextEditRenderer_type*)uClassType::New("Fuse.Controls.Native.Android.TextEditRenderer", options);
    type->fp_build_ = TextEditRenderer_build;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Uno::Float4x4*, ::g::Uno::Float2*, ::g::Uno::Float2*, float*))TextEditRenderer__FuseControlsNativeINativeViewRendererDraw_fn;
    type->interface0.fp_Invalidate = (void(*)(uObject*))TextEditRenderer__FuseControlsNativeINativeViewRendererInvalidate_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))TextEditRenderer__UnoIDisposableDispose_fn;
    return type;
}

// public TextEditRenderer(Java.Object soruce) :2455
void TextEditRenderer__ctor__fn(TextEditRenderer* __this, ::g::Java::Object* soruce)
{
    __this->ctor_(soruce);
}

// private static void CopyState(Java.Object container, Java.Object sourceHandle, Java.Object targetHandle) :2490
void TextEditRenderer__CopyState_fn(::g::Java::Object* container, ::g::Java::Object* sourceHandle, ::g::Java::Object* targetHandle)
{
    TextEditRenderer::CopyState(container, sourceHandle, targetHandle);
}

// private static Java.Object CreateContainer() :2556
void TextEditRenderer__CreateContainer_fn(::g::Java::Object** __retval)
{
    *__retval = TextEditRenderer::CreateContainer();
}

// private static Java.Object CreateTextEdit() :2548
void TextEditRenderer__CreateTextEdit_fn(::g::Java::Object** __retval)
{
    *__retval = TextEditRenderer::CreateTextEdit();
}

// private void Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4 localToClipTransform, float2 position, float2 size, float density) :2464
void TextEditRenderer__FuseControlsNativeINativeViewRendererDraw_fn(TextEditRenderer* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density)
{
    ::g::Uno::Float4x4 localToClipTransform_ = *localToClipTransform;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 size_ = *size;
    float density_ = *density;

    if (!__this->_valid)
    {
        TextEditRenderer::CopyState(__this->_container, __this->_source, __this->_target);
        __this->_valid = true;
    }

    ::g::Fuse::Controls::Native::INativeViewRenderer::Draw(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[2/*Fuse.Controls.Native.INativeViewRenderer*/]), localToClipTransform_, position_, size_, density_);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Invalidate() :2474
void TextEditRenderer__FuseControlsNativeINativeViewRendererInvalidate_fn(TextEditRenderer* __this)
{
    ::g::Fuse::Controls::Native::INativeViewRenderer::Invalidate(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[2/*Fuse.Controls.Native.INativeViewRenderer*/]));
    __this->_valid = false;
}

// public TextEditRenderer New(Java.Object soruce) :2455
void TextEditRenderer__New1_fn(::g::Java::Object* soruce, TextEditRenderer** __retval)
{
    *__retval = TextEditRenderer::New1(soruce);
}

// private void Uno.IDisposable.Dispose() :2480
void TextEditRenderer__UnoIDisposableDispose_fn(TextEditRenderer* __this)
{
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[1/*Uno.IDisposable*/]));
    __this->_nativeViewRenderer = NULL;
    __this->_source = NULL;
    __this->_target = NULL;
    __this->_container = NULL;
}

// public TextEditRenderer(Java.Object soruce) [instance] :2455
void TextEditRenderer::ctor_(::g::Java::Object* soruce)
{
    _source = soruce;
    _target = TextEditRenderer::CreateTextEdit();
    _container = TextEditRenderer::CreateContainer();
    _nativeViewRenderer = (uObject*)::g::Fuse::Controls::Native::Android::NativeViewRenderer::New1(_container);
}

// private static void CopyState(Java.Object container, Java.Object sourceHandle, Java.Object targetHandle) [static] :2490
void TextEditRenderer::CopyState(::g::Java::Object* container, ::g::Java::Object* sourceHandle, ::g::Java::Object* targetHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CopyState120", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _ucontainer=container;
        jobject _container = (_ucontainer==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucontainer, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _usourceHandle=sourceHandle;
        jobject _sourceHandle = (_usourceHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_usourceHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _utargetHandle=targetHandle;
        jobject _targetHandle = (_utargetHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_utargetHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_container,_sourceHandle,_targetHandle);
        
        if (_container!=NULL) { U_JNIVAR->DeleteLocalRef(_container); }
        if (_sourceHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_sourceHandle); }
        if (_targetHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_targetHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object CreateContainer() [static] :2556
::g::Java::Object* TextEditRenderer::CreateContainer()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateContainer121", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object CreateTextEdit() [static] :2548
::g::Java::Object* TextEditRenderer::CreateTextEdit()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateTextEdit122", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public TextEditRenderer New(Java.Object soruce) [static] :2455
TextEditRenderer* TextEditRenderer::New1(::g::Java::Object* soruce)
{
    TextEditRenderer* obj1 = (TextEditRenderer*)uNew(TextEditRenderer_typeof());
    obj1->ctor_(soruce);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class TextEditRenderHost :2568
// {
static void TextEditRenderHost_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::IDisposable_typeof();
    ::TYPES[2] = ::g::Fuse::Controls::Native::INativeViewRenderer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TextEditRenderHost_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(TextEditRenderHost_type, interface1),
        ::g::Fuse::Controls::Native::IViewGroup_typeof(), offsetof(TextEditRenderHost_type, interface2),
        ::g::Fuse::Controls::Native::IOffscreenRenderer_typeof(), offsetof(TextEditRenderHost_type, interface3),
        ::g::Fuse::Controls::Native::Android::IViewParent_typeof(), offsetof(TextEditRenderHost_type, interface4),
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(TextEditRenderHost_type, interface5));
    type->SetFields(6,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderHost, _container), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderHost, _isEnabled), 0,
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderHost, _nativeViewRenderer), 0,
        ::g::Fuse::Controls::Native::Android::TextEdit_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderHost, _textEdit), 0);
}

TextEditRenderHost_type* TextEditRenderHost_typeof()
{
    static uSStrong<TextEditRenderHost_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(TextEditRenderHost);
    options.TypeSize = sizeof(TextEditRenderHost_type);
    type = (TextEditRenderHost_type*)uClassType::New("Fuse.Controls.Native.Android.TextEditRenderHost", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::View_typeof());
    type->fp_build_ = TextEditRenderHost_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))TextEditRenderHost__Dispose_fn;
    type->interface2.fp_Add = (void(*)(uObject*, uObject*))TextEditRenderHost__FuseControlsNativeIViewGroupAdd_fn;
    type->interface2.fp_Add1 = (void(*)(uObject*, uObject*, int*))TextEditRenderHost__FuseControlsNativeIViewGroupAdd1_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, uObject*))TextEditRenderHost__FuseControlsNativeIViewGroupRemove_fn;
    type->interface4.fp_SetChildSize = (void(*)(uObject*, ::g::Fuse::Controls::Native::Android::View*, ::g::Uno::Float2*))TextEditRenderHost__FuseControlsNativeAndroidIViewParentSetChildSize_fn;
    type->interface3.fp_EnableOffscreen = (void(*)(uObject*))TextEditRenderHost__FuseControlsNativeIOffscreenRendererEnableOffscreen_fn;
    type->interface3.fp_DisableOffscreen = (void(*)(uObject*))TextEditRenderHost__FuseControlsNativeIOffscreenRendererDisableOffscreen_fn;
    type->interface5.fp_Draw = (void(*)(uObject*, ::g::Uno::Float4x4*, ::g::Uno::Float2*, ::g::Uno::Float2*, float*))TextEditRenderHost__FuseControlsNativeINativeViewRendererDraw_fn;
    type->interface5.fp_Invalidate = (void(*)(uObject*))TextEditRenderHost__FuseControlsNativeINativeViewRendererInvalidate_fn;
    type->interface2.fp_set_ClipToBounds = (void(*)(uObject*, bool*))TextEditRenderHost__FuseControlsNativeIViewGroupset_ClipToBounds_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))TextEditRenderHost__Dispose_fn;
    return type;
}

// public TextEditRenderHost(Fuse.Controls.Native.Android.TextEdit textEdit) :2576
void TextEditRenderHost__ctor_1_fn(TextEditRenderHost* __this, ::g::Fuse::Controls::Native::Android::TextEdit* textEdit)
{
    __this->ctor_1(textEdit);
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle) :2643
void TextEditRenderHost__AddView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    TextEditRenderHost::AddView(parentHandle, childHandle);
}

// private static Java.Object Create() :2659
void TextEditRenderHost__Create_fn(::g::Java::Object** __retval)
{
    *__retval = TextEditRenderHost::Create();
}

// public override sealed void Dispose() :2589
void TextEditRenderHost__Dispose_fn(TextEditRenderHost* __this)
{
    uPtr(__this->_textEdit)->Parent(NULL);
    TextEditRenderHost::RemoveView(__this->_container, uPtr(__this->_textEdit)->Handle());
    __this->_textEdit = NULL;
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[1/*Uno.IDisposable*/]));
    __this->_nativeViewRenderer = NULL;
    __this->_container = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View view, float2 size) :2608
void TextEditRenderHost__FuseControlsNativeAndroidIViewParentSetChildSize_fn(TextEditRenderHost* __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size)
{
    ::g::Uno::Float2 size_ = *size;
    TextEditRenderHost::SetChildSize(uPtr(view)->Handle(), (int)size_.X, (int)size_.Y);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4 localToClipTransform, float2 position, float2 size, float density) :2632
void TextEditRenderHost__FuseControlsNativeINativeViewRendererDraw_fn(TextEditRenderHost* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density)
{
    ::g::Uno::Float4x4 localToClipTransform_ = *localToClipTransform;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 size_ = *size;
    float density_ = *density;
    ::g::Fuse::Controls::Native::INativeViewRenderer::Draw(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[2/*Fuse.Controls.Native.INativeViewRenderer*/]), localToClipTransform_, position_, size_, density_);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Invalidate() :2637
void TextEditRenderHost__FuseControlsNativeINativeViewRendererInvalidate_fn(TextEditRenderHost* __this)
{
    ::g::Fuse::Controls::Native::INativeViewRenderer::Invalidate(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[2/*Fuse.Controls.Native.INativeViewRenderer*/]));
}

// private void Fuse.Controls.Native.IOffscreenRenderer.DisableOffscreen() :2623
void TextEditRenderHost__FuseControlsNativeIOffscreenRendererDisableOffscreen_fn(TextEditRenderHost* __this)
{
    if (__this->_isEnabled)
    {
        TextEditRenderHost::AddView(__this->Handle(), __this->_container);
        __this->_isEnabled = false;
    }
}

// private void Fuse.Controls.Native.IOffscreenRenderer.EnableOffscreen() :2614
void TextEditRenderHost__FuseControlsNativeIOffscreenRendererEnableOffscreen_fn(TextEditRenderHost* __this)
{
    if (!__this->_isEnabled)
    {
        TextEditRenderHost::RemoveView(__this->Handle(), __this->_container);
        __this->_isEnabled = true;
    }
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child) :2604
void TextEditRenderHost__FuseControlsNativeIViewGroupAdd_fn(TextEditRenderHost* __this, uObject* child)
{
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child, int index) :2605
void TextEditRenderHost__FuseControlsNativeIViewGroupAdd1_fn(TextEditRenderHost* __this, uObject* child, int* index)
{
}

// private void Fuse.Controls.Native.IViewGroup.set_ClipToBounds(bool value) :2603
void TextEditRenderHost__FuseControlsNativeIViewGroupset_ClipToBounds_fn(TextEditRenderHost* __this, bool* value)
{
}

// private void Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView child) :2606
void TextEditRenderHost__FuseControlsNativeIViewGroupRemove_fn(TextEditRenderHost* __this, uObject* child)
{
}

// public TextEditRenderHost New(Fuse.Controls.Native.Android.TextEdit textEdit) :2576
void TextEditRenderHost__New1_fn(::g::Fuse::Controls::Native::Android::TextEdit* textEdit, TextEditRenderHost** __retval)
{
    *__retval = TextEditRenderHost::New1(textEdit);
}

// private static void RemoveView(Java.Object parentHandle, Java.Object childHandle) :2651
void TextEditRenderHost__RemoveView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    TextEditRenderHost::RemoveView(parentHandle, childHandle);
}

// private static void SetChildSize(Java.Object handle, int w, int h) :2671
void TextEditRenderHost__SetChildSize_fn(::g::Java::Object* handle, int* w, int* h)
{
    TextEditRenderHost::SetChildSize(handle, *w, *h);
}

// public TextEditRenderHost(Fuse.Controls.Native.Android.TextEdit textEdit) [instance] :2576
void TextEditRenderHost::ctor_1(::g::Fuse::Controls::Native::Android::TextEdit* textEdit)
{
    ctor_(TextEditRenderHost::Create());
    _textEdit = textEdit;
    _container = TextEditRenderHost::Create();
    _nativeViewRenderer = (uObject*)::g::Fuse::Controls::Native::Android::TextEditRenderer::New1(uPtr(textEdit)->Handle());
    TextEditRenderHost::AddView(Handle(), _container);
    textEdit->Parent((uObject*)this);
    TextEditRenderHost::AddView(_container, textEdit->Handle());
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle) [static] :2643
void TextEditRenderHost::AddView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView123", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object Create() [static] :2659
::g::Java::Object* TextEditRenderHost::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create124", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public TextEditRenderHost New(Fuse.Controls.Native.Android.TextEdit textEdit) [static] :2576
TextEditRenderHost* TextEditRenderHost::New1(::g::Fuse::Controls::Native::Android::TextEdit* textEdit)
{
    TextEditRenderHost* obj1 = (TextEditRenderHost*)uNew(TextEditRenderHost_typeof());
    obj1->ctor_1(textEdit);
    return obj1;
}

// private static void RemoveView(Java.Object parentHandle, Java.Object childHandle) [static] :2651
void TextEditRenderHost::RemoveView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RemoveView125", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetChildSize(Java.Object handle, int w, int h) [static] :2671
void TextEditRenderHost::SetChildSize(::g::Java::Object* handle, int w, int h)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetChildSize126", "(Ljava/lang/Object;II)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uw=w;
        jint _w = (jint)_uw;
        int _uh=h;
        jint _h = (jint)_uh;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_w,_h);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// public extern class TextInput :1882
// {
static void TextInput_build(uType* type)
{
    ::TYPES[27] = ::g::Uno::Action2_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[1] = ::g::Uno::IDisposable_typeof();
    ::TYPES[28] = ::g::Fuse::Controls::Native::ITextEditHost_typeof();
    ::TYPES[29] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TextInput_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(TextInput_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(TextInput_type, interface2),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(TextInput_type, interface3),
        ::g::Fuse::Controls::Native::ITextEdit_typeof(), offsetof(TextInput_type, interface4));
    type->SetFields(6,
        ::g::Fuse::Controls::TextInputActionStyle_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _actionStyle), 0,
        ::g::Fuse::Controls::AutoCapitalizationHint_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _autoCapitalizationHint), 0,
        ::g::Fuse::Controls::AutoCorrectHint_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _autoCorrentHint), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _focusEvent), 0,
        ::g::Fuse::Controls::Native::ITextEditHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _host), 0,
        ::g::Fuse::Controls::TextInputHint_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _inputHint), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _isMultiline), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _isPassword), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _isReadOnly), 0);
}

TextInput_type* TextInput_typeof()
{
    static uSStrong<TextInput_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(TextInput);
    options.TypeSize = sizeof(TextInput_type);
    type = (TextInput_type*)uClassType::New("Fuse.Controls.Native.Android.TextInput", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::TextView_typeof());
    type->fp_build_ = TextInput_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))TextInput__Dispose_fn;
    type->interface4.fp_FocusGained = (void(*)(uObject*))TextInput__FuseControlsNativeITextEditFocusGained_fn;
    type->interface4.fp_FocusLost = (void(*)(uObject*))TextInput__FuseControlsNativeITextEditFocusLost_fn;
    type->interface4.fp_set_IsPassword = (void(*)(uObject*, bool*))TextInput__set_IsPassword_fn;
    type->interface4.fp_set_IsReadOnly = (void(*)(uObject*, bool*))TextInput__set_IsReadOnly_fn;
    type->interface4.fp_set_InputHint = (void(*)(uObject*, int*))TextInput__set_InputHint_fn;
    type->interface4.fp_set_CaretColor = (void(*)(uObject*, ::g::Uno::Float4*))TextInput__set_CaretColor_fn;
    type->interface4.fp_set_SelectionColor = (void(*)(uObject*, ::g::Uno::Float4*))TextInput__set_SelectionColor_fn;
    type->interface4.fp_set_ActionStyle = (void(*)(uObject*, int*))TextInput__set_ActionStyle_fn;
    type->interface4.fp_set_AutoCorrectHint = (void(*)(uObject*, int*))TextInput__set_AutoCorrectHint_fn;
    type->interface4.fp_set_AutoCapitalizationHint = (void(*)(uObject*, int*))TextInput__set_AutoCapitalizationHint_fn;
    type->interface4.fp_set_PlaceholderText = (void(*)(uObject*, uString*))TextInput__set_PlaceholderText_fn;
    type->interface4.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::Uno::Float4*))TextInput__set_PlaceholderColor_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, uString*))::g::Fuse::Controls::Native::Android::TextView__set_Value_fn;
    type->interface3.fp_set_MaxLength = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_MaxLength_fn;
    type->interface3.fp_set_TextWrapping = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextWrapping_fn;
    type->interface3.fp_set_LineSpacing = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_LineSpacing_fn;
    type->interface3.fp_set_FontSize = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_FontSize_fn;
    type->interface3.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))::g::Fuse::Controls::Native::Android::TextView__set_Font_fn;
    type->interface3.fp_set_TextAlignment = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextAlignment_fn;
    type->interface3.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextView__set_TextColor_fn;
    type->interface3.fp_set_TextTruncation = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextTruncation_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))TextInput__Dispose_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__FuseControlsNativeILeafViewMeasure_fn;
    return type;
}

// public TextInput(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) :1886
void TextInput__ctor_4_fn(TextInput* __this, uObject* host, bool* isMultiline)
{
    __this->ctor_4(host, *isMultiline);
}

// public void set_ActionStyle(Fuse.Controls.TextInputActionStyle value) :2021
void TextInput__set_ActionStyle_fn(TextInput* __this, int* value)
{
    __this->ActionStyle(*value);
}

// private void AddEditorActionListener(Java.Object handle) :2271
void TextInput__AddEditorActionListener_fn(TextInput* __this, ::g::Java::Object* handle)
{
    __this->AddEditorActionListener(handle);
}

// private void AddTextChangedListener(Java.Object handle) :2232
void TextInput__AddTextChangedListener_fn(TextInput* __this, ::g::Java::Object* handle)
{
    __this->AddTextChangedListener(handle);
}

// public void set_AutoCapitalizationHint(Fuse.Controls.AutoCapitalizationHint value) :2001
void TextInput__set_AutoCapitalizationHint_fn(TextInput* __this, int* value)
{
    __this->AutoCapitalizationHint(*value);
}

// public void set_AutoCorrectHint(Fuse.Controls.AutoCorrectHint value) :1991
void TextInput__set_AutoCorrectHint_fn(TextInput* __this, int* value)
{
    __this->AutoCorrectHint(*value);
}

// public void set_CaretColor(float4 value) :2116
void TextInput__set_CaretColor_fn(TextInput* __this, ::g::Uno::Float4* value)
{
    __this->CaretColor(*value);
}

// private static Java.Object Create() :2198
void TextInput__Create1_fn(::g::Java::Object** __retval)
{
    *__retval = TextInput::Create1();
}

// public override sealed void Dispose() :1920
void TextInput__Dispose_fn(TextInput* __this)
{
    __this->_host = NULL;
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_focusEvent), ::TYPES[1/*Uno.IDisposable*/]));
    __this->_focusEvent = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.ITextEdit.FocusGained() :1928
void TextInput__FuseControlsNativeITextEditFocusGained_fn(TextInput* __this)
{
    TextInput::RequestFocus(__this->Handle());
}

// private void Fuse.Controls.Native.ITextEdit.FocusLost() :1933
void TextInput__FuseControlsNativeITextEditFocusLost_fn(TextInput* __this)
{
    if (TextInput::HasFocus(__this->Handle()))
        __this->ScheduleFocusLoss();
}

// private static bool HasFocus(Java.Object viewHandle) :1940
void TextInput__HasFocus_fn(::g::Java::Object* viewHandle, bool* __retval)
{
    *__retval = TextInput::HasFocus(viewHandle);
}

// public void set_InputHint(Fuse.Controls.TextInputHint value) :2011
void TextInput__set_InputHint_fn(TextInput* __this, int* value)
{
    __this->InputHint(*value);
}

// public void set_IsMultiline(bool value) :1961
void TextInput__set_IsMultiline_fn(TextInput* __this, bool* value)
{
    __this->IsMultiline(*value);
}

// public void set_IsPassword(bool value) :1971
void TextInput__set_IsPassword_fn(TextInput* __this, bool* value)
{
    __this->IsPassword(*value);
}

// public void set_IsReadOnly(bool value) :1981
void TextInput__set_IsReadOnly_fn(TextInput* __this, bool* value)
{
    __this->IsReadOnly(*value);
}

// private bool OnEditorAction(int actionCode) :2285
void TextInput__OnEditorAction_fn(TextInput* __this, int* actionCode, bool* __retval)
{
    *__retval = __this->OnEditorAction(*actionCode);
}

// private void OnNativeFocusChanged(Java.Object view, bool hasFocus) :1895
void TextInput__OnNativeFocusChanged_fn(TextInput* __this, ::g::Java::Object* view, bool* hasFocus)
{
    __this->OnNativeFocusChanged(view, *hasFocus);
}

// private void OnTextChanged(string value) :2280
void TextInput__OnTextChanged_fn(TextInput* __this, uString* value)
{
    __this->OnTextChanged(value);
}

// public void set_PlaceholderColor(float4 value) :2131
void TextInput__set_PlaceholderColor_fn(TextInput* __this, ::g::Uno::Float4* value)
{
    __this->PlaceholderColor(*value);
}

// public void set_PlaceholderText(string value) :2126
void TextInput__set_PlaceholderText_fn(TextInput* __this, uString* value)
{
    __this->PlaceholderText(value);
}

// private static void RequestFocus(Java.Object viewHandle) :1946
void TextInput__RequestFocus_fn(::g::Java::Object* viewHandle)
{
    TextInput::RequestFocus(viewHandle);
}

// private int get_ReturnKeyType() :2148
void TextInput__get_ReturnKeyType_fn(TextInput* __this, int* __retval)
{
    *__retval = __this->ReturnKeyType();
}

// private void ScheduleFocusLoss() :1910
void TextInput__ScheduleFocusLoss_fn(TextInput* __this)
{
    __this->ScheduleFocusLoss();
}

// public void set_SelectionColor(float4 value) :2121
void TextInput__set_SelectionColor_fn(TextInput* __this, ::g::Uno::Float4* value)
{
    __this->SelectionColor(*value);
}

// private void SetCursorDrawableColor(Java.Object handle, int color) :2204
void TextInput__SetCursorDrawableColor_fn(TextInput* __this, ::g::Java::Object* handle, int* color)
{
    __this->SetCursorDrawableColor(handle, *color);
}

// private static void SetImeOptions(Java.Object handle, int value) :2192
void TextInput__SetImeOptions_fn(::g::Java::Object* handle, int* value)
{
    TextInput::SetImeOptions(handle, *value);
}

// private static void SetInputType(Java.Object handle, int value) :2169
void TextInput__SetInputType_fn(::g::Java::Object* handle, int* value)
{
    TextInput::SetInputType(handle, *value);
}

// private static void SetPlaceholderColor(Java.Object handle, int value) :2135
void TextInput__SetPlaceholderColor_fn(::g::Java::Object* handle, int* value)
{
    TextInput::SetPlaceholderColor(handle, *value);
}

// private static void SetPlaceholderText(Java.Object handle, string value) :2141
void TextInput__SetPlaceholderText_fn(::g::Java::Object* handle, uString* value)
{
    TextInput::SetPlaceholderText(handle, value);
}

// private static void SetSelectionColor(Java.Object handle, int color) :2163
void TextInput__SetSelectionColor_fn(::g::Java::Object* handle, int* color)
{
    TextInput::SetSelectionColor(handle, *color);
}

// private void UpdateFlags() :2028
void TextInput__UpdateFlags_fn(TextInput* __this)
{
    __this->UpdateFlags();
}

// public TextInput(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [instance] :1886
void TextInput::ctor_4(uObject* host, bool isMultiline)
{
    ctor_3(TextInput::Create1());
    _host = host;
    IsMultiline(isMultiline);
    AddEditorActionListener(Handle());
    _focusEvent = ::g::Fuse::Controls::Native::Android::FocusChangedListener::AddHandler(Handle(), uDelegate::New(::TYPES[27/*Uno.Action<Java.Object, bool>*/], (void*)TextInput__OnNativeFocusChanged_fn, this));
    AddTextChangedListener(Handle());
}

// public void set_ActionStyle(Fuse.Controls.TextInputActionStyle value) [instance] :2021
void TextInput::ActionStyle(int value)
{
    _actionStyle = value;
    UpdateFlags();
}

// private void AddEditorActionListener(Java.Object handle) [instance] :2271
void TextInput::AddEditorActionListener(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddEditorActionListener127", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void AddTextChangedListener(Java.Object handle) [instance] :2232
void TextInput::AddTextChangedListener(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddTextChangedListener129", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void set_AutoCapitalizationHint(Fuse.Controls.AutoCapitalizationHint value) [instance] :2001
void TextInput::AutoCapitalizationHint(int value)
{
    _autoCapitalizationHint = value;
    UpdateFlags();
}

// public void set_AutoCorrectHint(Fuse.Controls.AutoCorrectHint value) [instance] :1991
void TextInput::AutoCorrectHint(int value)
{
    _autoCorrentHint = value;
    UpdateFlags();
}

// public void set_CaretColor(float4 value) [instance] :2116
void TextInput::CaretColor(::g::Uno::Float4 value)
{
    SetCursorDrawableColor(Handle(), ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(value));
}

// public void set_InputHint(Fuse.Controls.TextInputHint value) [instance] :2011
void TextInput::InputHint(int value)
{
    _inputHint = value;
    UpdateFlags();
}

// public void set_IsMultiline(bool value) [instance] :1961
void TextInput::IsMultiline(bool value)
{
    _isMultiline = value;
    UpdateFlags();
}

// public void set_IsPassword(bool value) [instance] :1971
void TextInput::IsPassword(bool value)
{
    _isPassword = value;
    UpdateFlags();
}

// public void set_IsReadOnly(bool value) [instance] :1981
void TextInput::IsReadOnly(bool value)
{
    _isReadOnly = value;
    UpdateFlags();
}

// private bool OnEditorAction(int actionCode) [instance] :2285
bool TextInput::OnEditorAction(int actionCode)
{
    switch (actionCode)
    {
        case 6:
        case 5:
        case 2:
        case 3:
        case 4:
            return ::g::Fuse::Controls::Native::ITextEditHost::OnInputAction(uInterface(uPtr(_host), ::TYPES[28/*Fuse.Controls.Native.ITextEditHost*/]), 0);
    }

    return false;
}

// private void OnNativeFocusChanged(Java.Object view, bool hasFocus) [instance] :1895
void TextInput::OnNativeFocusChanged(::g::Java::Object* view, bool hasFocus)
{
    if (!hasFocus)
    {
        ::g::Fuse::Controls::Native::ITextEditHost::OnFocusLost(uInterface(uPtr(_host), ::TYPES[28/*Fuse.Controls.Native.ITextEditHost*/]));
        ScheduleFocusLoss();
    }
    else
    {
        ::g::Fuse::Controls::Native::ITextEditHost::OnFocusGained(uInterface(uPtr(_host), ::TYPES[28/*Fuse.Controls.Native.ITextEditHost*/]));
        uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->HideKeyboardContext = NULL;
        ::g::Fuse::Controls::Native::Android::SoftKeyboard::ShowKeyboard(Handle());
    }
}

// private void OnTextChanged(string value) [instance] :2280
void TextInput::OnTextChanged(uString* value)
{
    ::g::Fuse::Controls::Native::ITextEditHost::OnValueChanged(uInterface(uPtr(_host), ::TYPES[28/*Fuse.Controls.Native.ITextEditHost*/]), value);
}

// public void set_PlaceholderColor(float4 value) [instance] :2131
void TextInput::PlaceholderColor(::g::Uno::Float4 value)
{
    TextInput::SetPlaceholderColor(Handle(), ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(value));
}

// public void set_PlaceholderText(string value) [instance] :2126
void TextInput::PlaceholderText(uString* value)
{
    TextInput::SetPlaceholderText(Handle(), value);
}

// private int get_ReturnKeyType() [instance] :2148
int TextInput::ReturnKeyType()
{
    switch (_actionStyle)
    {
        case 1:
            return 6;
        case 2:
            return 5;
        case 3:
            return 2;
        case 4:
            return 3;
        case 5:
            return 4;
    }

    return 0;
}

// private void ScheduleFocusLoss() [instance] :1910
void TextInput::ScheduleFocusLoss()
{
    uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->LoseFocus = Handle();
    uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->HideKeyboardContext = ::g::Fuse::Controls::Native::Android::FocusManager::GetContext(Handle());
    uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->HideKeyboardWindowToken = ::g::Fuse::Controls::Native::Android::FocusManager::GetWindowToken(Handle());
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[29/*Uno.Action*/], (void*)::g::Fuse::Controls::Native::Android::FocusManager__CompleteFocusLoss_fn, uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())), -1, 0);
}

// public void set_SelectionColor(float4 value) [instance] :2121
void TextInput::SelectionColor(::g::Uno::Float4 value)
{
    TextInput::SetSelectionColor(Handle(), ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(value));
}

// private void SetCursorDrawableColor(Java.Object handle, int color) [instance] :2204
void TextInput::SetCursorDrawableColor(::g::Java::Object* handle, int color)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetCursorDrawableColor135", "(Ljava/lang/Object;Ljava/lang/Object;I)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle,_color);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void UpdateFlags() [instance] :2028
void TextInput::UpdateFlags()
{
    int flags = 0;

    switch (_inputHint)
    {
        case 1:
        {
            flags = flags | 33;
            break;
        }
        case 2:
        {
            flags = flags | 17;
            break;
        }
        case 3:
        {
            flags = flags | 3;
            break;
        }
        case 4:
        {
            flags = flags | 2;
            break;
        }
        case 5:
        {
            flags = flags | 8194;
            break;
        }
        default:
        {
            flags = flags | 1;

            switch (_autoCorrentHint)
            {
                case 0:
                {
                    flags = flags | 32768;
                    break;
                }
                case 1:
                    break;
                case 2:
                {
                    flags = flags | 32768;
                    break;
                }
            }

            switch (_autoCapitalizationHint)
            {
                case 0:
                    break;
                case 1:
                {
                    flags = flags | 4096;
                    break;
                }
                case 2:
                {
                    flags = flags | 8192;
                    break;
                }
                case 3:
                {
                    flags = flags | 16384;
                    break;
                }
            }

            break;
        }
    }

    if (_isMultiline)
        flags = flags | 131072;

    if (_isPassword)
        flags = flags | 128;

    if (_isReadOnly)
        TextInput::SetInputType(Handle(), 0);
    else
    {
        TextInput::SetInputType(Handle(), flags);
        TextInput::SetImeOptions(Handle(), ReturnKeyType());
    }
}

// private static Java.Object Create() [static] :2198
::g::Java::Object* TextInput::Create1()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create1132", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static bool HasFocus(Java.Object viewHandle) [static] :1940
bool TextInput::HasFocus(::g::Java::Object* viewHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HasFocus133", "(Ljava/lang/Object;)Z");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_viewHandle);
        bool __result = (bool)__jresult;
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void RequestFocus(Java.Object viewHandle) [static] :1946
void TextInput::RequestFocus(::g::Java::Object* viewHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RequestFocus134", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetImeOptions(Java.Object handle, int value) [static] :2192
void TextInput::SetImeOptions(::g::Java::Object* handle, int value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetImeOptions136", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uvalue=value;
        jint _value = (jint)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetInputType(Java.Object handle, int value) [static] :2169
void TextInput::SetInputType(::g::Java::Object* handle, int value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetInputType137", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uvalue=value;
        jint _value = (jint)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetPlaceholderColor(Java.Object handle, int value) [static] :2135
void TextInput::SetPlaceholderColor(::g::Java::Object* handle, int value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetPlaceholderColor138", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uvalue=value;
        jint _value = (jint)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetPlaceholderText(Java.Object handle, string value) [static] :2141
void TextInput::SetPlaceholderText(::g::Java::Object* handle, uString* value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetPlaceholderText139", "(Ljava/lang/Object;Ljava/lang/String;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _uvalue=value;
        jstring _value = JniHelper::UnoToJavaString(_uvalue);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_value!=NULL) { U_JNIVAR->DeleteLocalRef(_value); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetSelectionColor(Java.Object handle, int color) [static] :2163
void TextInput::SetSelectionColor(::g::Java::Object* handle, int color)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetSelectionColor140", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_color);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// public extern class TextView :2688
// {
static void TextView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TextView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(TextView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(TextView_type, interface2),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(TextView_type, interface3));
    type->SetFields(6);
}

TextView_type* TextView_typeof()
{
    static uSStrong<TextView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(TextView_type);
    type = (TextView_type*)uClassType::New("Fuse.Controls.Native.Android.TextView", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::LeafView_typeof());
    type->fp_build_ = TextView_build;
    type->fp_ctor_ = (void*)TextView__New1_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, uString*))TextView__set_Value_fn;
    type->interface3.fp_set_MaxLength = (void(*)(uObject*, int*))TextView__set_MaxLength_fn;
    type->interface3.fp_set_TextWrapping = (void(*)(uObject*, int*))TextView__set_TextWrapping_fn;
    type->interface3.fp_set_LineSpacing = (void(*)(uObject*, float*))TextView__set_LineSpacing_fn;
    type->interface3.fp_set_FontSize = (void(*)(uObject*, float*))TextView__set_FontSize_fn;
    type->interface3.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))TextView__set_Font_fn;
    type->interface3.fp_set_TextAlignment = (void(*)(uObject*, int*))TextView__set_TextAlignment_fn;
    type->interface3.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))TextView__set_TextColor_fn;
    type->interface3.fp_set_TextTruncation = (void(*)(uObject*, int*))TextView__set_TextTruncation_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__FuseControlsNativeILeafViewMeasure_fn;
    return type;
}

// public TextView() :2692
void TextView__ctor_2_fn(TextView* __this)
{
    __this->ctor_2();
}

// public TextView(Java.Object handle) :2690
void TextView__ctor_3_fn(TextView* __this, ::g::Java::Object* handle)
{
    __this->ctor_3(handle);
}

// private static Java.Object Create() :2758
void TextView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = TextView::Create();
}

// public void set_Font(Fuse.Font value) :2725
void TextView__set_Font_fn(TextView* __this, ::g::Fuse::Font* value)
{
    __this->Font(value);
}

// public void set_FontSize(float value) :2720
void TextView__set_FontSize_fn(TextView* __this, float* value)
{
    __this->FontSize(*value);
}

// public void set_LineSpacing(float value) :2715
void TextView__set_LineSpacing_fn(TextView* __this, float* value)
{
    __this->LineSpacing(*value);
}

// public void set_MaxLength(int value) :2701
void TextView__set_MaxLength_fn(TextView* __this, int* value)
{
    __this->MaxLength(*value);
}

// public TextView New() :2692
void TextView__New1_fn(TextView** __retval)
{
    *__retval = TextView::New1();
}

// private static void SetFont(Java.Object handle, Java.Object fontHandle) :2789
void TextView__SetFont_fn(::g::Java::Object* handle, ::g::Java::Object* fontHandle)
{
    TextView::SetFont(handle, fontHandle);
}

// private static void SetFontSize(Java.Object handle, float size) :2783
void TextView__SetFontSize_fn(::g::Java::Object* handle, float* size)
{
    TextView::SetFontSize(handle, *size);
}

// private static void SetLineSpacing(Java.Object handle, float spacing) :2777
void TextView__SetLineSpacing_fn(::g::Java::Object* handle, float* spacing)
{
    TextView::SetLineSpacing(handle, *spacing);
}

// private static void SetMaxLength(Java.Object handle, int maxLength) :2810
void TextView__SetMaxLength_fn(::g::Java::Object* handle, int* maxLength)
{
    TextView::SetMaxLength(handle, *maxLength);
}

// private static void SetText(Java.Object handle, string text) :2764
void TextView__SetText_fn(::g::Java::Object* handle, uString* text)
{
    TextView::SetText(handle, text);
}

// private static void SetTextAlignment(Java.Object handle, int alignment) :2795
void TextView__SetTextAlignment_fn(::g::Java::Object* handle, int* alignment)
{
    TextView::SetTextAlignment(handle, *alignment);
}

// private static void SetTextColor(Java.Object handle, int color) :2804
void TextView__SetTextColor_fn(::g::Java::Object* handle, int* color)
{
    TextView::SetTextColor(handle, *color);
}

// private static void SetTextWrapping(Java.Object handle, bool wrap) :2771
void TextView__SetTextWrapping_fn(::g::Java::Object* handle, bool* wrap)
{
    TextView::SetTextWrapping(handle, *wrap);
}

// public void set_TextAlignment(Fuse.Controls.TextAlignment value) :2736
void TextView__set_TextAlignment_fn(TextView* __this, int* value)
{
    __this->TextAlignment(*value);
}

// public void set_TextColor(float4 value) :2749
void TextView__set_TextColor_fn(TextView* __this, ::g::Uno::Float4* value)
{
    __this->TextColor(*value);
}

// public void set_TextTruncation(Fuse.Controls.TextTruncation value) :2754
void TextView__set_TextTruncation_fn(TextView* __this, int* value)
{
    __this->TextTruncation(*value);
}

// public void set_TextWrapping(Fuse.Controls.TextWrapping value) :2710
void TextView__set_TextWrapping_fn(TextView* __this, int* value)
{
    __this->TextWrapping(*value);
}

// public void set_Value(string value) :2696
void TextView__set_Value_fn(TextView* __this, uString* value)
{
    __this->Value(value);
}

// public TextView() [instance] :2692
void TextView::ctor_2()
{
    ctor_3(TextView::Create());
}

// public TextView(Java.Object handle) [instance] :2690
void TextView::ctor_3(::g::Java::Object* handle)
{
    ctor_1(handle);
}

// public void set_Font(Fuse.Font value) [instance] :2725
void TextView::Font(::g::Fuse::Font* value)
{
    ::g::Fuse::Controls::Native::Android::Typeface* typeface = (value != ::g::Fuse::Font::PlatformDefault()) ? (::g::Fuse::Controls::Native::Android::Typeface*)::g::Fuse::Controls::Native::Android::TypefaceCache::GetTypeface(value) : (::g::Fuse::Controls::Native::Android::Typeface*)::g::Fuse::Controls::Native::Android::Typeface::Default();
    TextView::SetFont(Handle(), uPtr(typeface)->Handle());
}

// public void set_FontSize(float value) [instance] :2720
void TextView::FontSize(float value)
{
    TextView::SetFontSize(Handle(), value);
}

// public void set_LineSpacing(float value) [instance] :2715
void TextView::LineSpacing(float value)
{
    TextView::SetLineSpacing(Handle(), value);
}

// public void set_MaxLength(int value) [instance] :2701
void TextView::MaxLength(int value)
{
    TextView::SetMaxLength(Handle(), (value == 0) ? 2147483647 : value);
}

// public void set_TextAlignment(Fuse.Controls.TextAlignment value) [instance] :2736
void TextView::TextAlignment(int value)
{
    switch (value)
    {
        case 0:
        {
            TextView::SetTextAlignment(Handle(), 3);
            break;
        }
        case 1:
        {
            TextView::SetTextAlignment(Handle(), 1);
            break;
        }
        case 2:
        {
            TextView::SetTextAlignment(Handle(), 5);
            break;
        }
    }
}

// public void set_TextColor(float4 value) [instance] :2749
void TextView::TextColor(::g::Uno::Float4 value)
{
    TextView::SetTextColor(Handle(), ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(value));
}

// public void set_TextTruncation(Fuse.Controls.TextTruncation value) [instance] :2754
void TextView::TextTruncation(int value)
{
}

// public void set_TextWrapping(Fuse.Controls.TextWrapping value) [instance] :2710
void TextView::TextWrapping(int value)
{
    TextView::SetTextWrapping(Handle(), value == 1);
}

// public void set_Value(string value) [instance] :2696
void TextView::Value(uString* value)
{
    TextView::SetText(Handle(), value);
}

// private static Java.Object Create() [static] :2758
::g::Java::Object* TextView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create141", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public TextView New() [static] :2692
TextView* TextView::New1()
{
    TextView* obj2 = (TextView*)uNew(TextView_typeof());
    obj2->ctor_2();
    return obj2;
}

// private static void SetFont(Java.Object handle, Java.Object fontHandle) [static] :2789
void TextView::SetFont(::g::Java::Object* handle, ::g::Java::Object* fontHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetFont142", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ufontHandle=fontHandle;
        jobject _fontHandle = (_ufontHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ufontHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_fontHandle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_fontHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_fontHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetFontSize(Java.Object handle, float size) [static] :2783
void TextView::SetFontSize(::g::Java::Object* handle, float size)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetFontSize143", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _usize=size;
        jfloat _size = (jfloat)_usize;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_size);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetLineSpacing(Java.Object handle, float spacing) [static] :2777
void TextView::SetLineSpacing(::g::Java::Object* handle, float spacing)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetLineSpacing144", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uspacing=spacing;
        jfloat _spacing = (jfloat)_uspacing;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_spacing);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetMaxLength(Java.Object handle, int maxLength) [static] :2810
void TextView::SetMaxLength(::g::Java::Object* handle, int maxLength)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetMaxLength145", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _umaxLength=maxLength;
        jint _maxLength = (jint)_umaxLength;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_maxLength);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetText(Java.Object handle, string text) [static] :2764
void TextView::SetText(::g::Java::Object* handle, uString* text)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetText146", "(Ljava/lang/Object;Ljava/lang/String;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_text);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextAlignment(Java.Object handle, int alignment) [static] :2795
void TextView::SetTextAlignment(::g::Java::Object* handle, int alignment)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextAlignment147", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ualignment=alignment;
        jint _alignment = (jint)_ualignment;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_alignment);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextColor(Java.Object handle, int color) [static] :2804
void TextView::SetTextColor(::g::Java::Object* handle, int color)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextColor148", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_color);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextWrapping(Java.Object handle, bool wrap) [static] :2771
void TextView::SetTextWrapping(::g::Java::Object* handle, bool wrap)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextWrapping149", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uwrap=wrap;
        jboolean _wrap = (jboolean)_uwrap;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_wrap);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class Typeface :2832
// {
static void Typeface_build(uType* type)
{
    ::TYPES[6] = ::g::Java::Object_typeof();
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Typeface, _handle), 0);
}

uType* Typeface_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Typeface);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.Typeface", options);
    type->fp_build_ = Typeface_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Typeface__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Typeface__GetHashCode_fn;
    return type;
}

// public Typeface(Java.Object handle) :2842
void Typeface__ctor__fn(Typeface* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// private static Java.Object CreateFromBundleFile(string bundlePath) :2875
void Typeface__CreateFromBundleFile_fn(uString* bundlePath, ::g::Java::Object** __retval)
{
    *__retval = Typeface::CreateFromBundleFile(bundlePath);
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromBundleFile(Uno.IO.BundleFile file) :2864
void Typeface__CreateFromBundleFile1_fn(::g::Uno::IO::BundleFile* file, Typeface** __retval)
{
    *__retval = Typeface::CreateFromBundleFile1(file);
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromFile(string path) :2869
void Typeface__CreateFromFile_fn(uString* path, Typeface** __retval)
{
    *__retval = Typeface::CreateFromFile(path);
}

// private static Java.Object CreateFromFileImpl(string path) :2883
void Typeface__CreateFromFileImpl_fn(uString* path, ::g::Java::Object** __retval)
{
    *__retval = Typeface::CreateFromFileImpl(path);
}

// public static Fuse.Controls.Native.Android.Typeface get_Default() :2849
void Typeface__get_Default_fn(Typeface** __retval)
{
    *__retval = Typeface::Default();
}

// public override sealed bool Equals(object obj) :2852
void Typeface__Equals_fn(Typeface* __this, uObject* obj, bool* __retval)
{
    return *__retval = uIs(obj, ::TYPES[6/*Java.Object*/]) ? ::g::Uno::Object::Equals(uPtr(__this->_handle), uCast< ::g::Java::Object*>(obj, ::TYPES[6/*Java.Object*/])) : false, void();
}

// private static Java.Object GetDefault() :2889
void Typeface__GetDefault_fn(::g::Java::Object** __retval)
{
    *__retval = Typeface::GetDefault();
}

// public override sealed int GetHashCode() :2859
void Typeface__GetHashCode_fn(Typeface* __this, int* __retval)
{
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_handle)), void();
}

// public Java.Object get_Handle() :2836
void Typeface__get_Handle_fn(Typeface* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public Typeface New(Java.Object handle) :2842
void Typeface__New1_fn(::g::Java::Object* handle, Typeface** __retval)
{
    *__retval = Typeface::New1(handle);
}

// public Typeface(Java.Object handle) [instance] :2842
void Typeface::ctor_(::g::Java::Object* handle)
{
    _handle = handle;
}

// public Java.Object get_Handle() [instance] :2836
::g::Java::Object* Typeface::Handle()
{
    return _handle;
}

// private static Java.Object CreateFromBundleFile(string bundlePath) [static] :2875
::g::Java::Object* Typeface::CreateFromBundleFile(uString* bundlePath)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateFromBundleFile150", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _ubundlePath=bundlePath;
        jstring _bundlePath = JniHelper::UnoToJavaString(_ubundlePath);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_bundlePath);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_bundlePath!=NULL) { U_JNIVAR->DeleteLocalRef(_bundlePath); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromBundleFile(Uno.IO.BundleFile file) [static] :2864
Typeface* Typeface::CreateFromBundleFile1(::g::Uno::IO::BundleFile* file)
{
    return Typeface::New1(Typeface::CreateFromBundleFile(uPtr(file)->BundlePath()));
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromFile(string path) [static] :2869
Typeface* Typeface::CreateFromFile(uString* path)
{
    return Typeface::New1(Typeface::CreateFromFileImpl(path));
}

// private static Java.Object CreateFromFileImpl(string path) [static] :2883
::g::Java::Object* Typeface::CreateFromFileImpl(uString* path)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateFromFileImpl151", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _upath=path;
        jstring _path = JniHelper::UnoToJavaString(_upath);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_path);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_path!=NULL) { U_JNIVAR->DeleteLocalRef(_path); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object GetDefault() [static] :2889
::g::Java::Object* Typeface::GetDefault()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDefault152", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Typeface New(Java.Object handle) [static] :2842
Typeface* Typeface::New1(::g::Java::Object* handle)
{
    Typeface* obj1 = (Typeface*)uNew(Typeface_typeof());
    obj1->ctor_(handle);
    return obj1;
}

// public static Fuse.Controls.Native.Android.Typeface get_Default() [static] :2849
Typeface* Typeface::Default()
{
    return Typeface::New1(Typeface::GetDefault());
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// internal static extern class TypefaceCache :2895
// {
// static TypefaceCache() :2895
static void TypefaceCache__cctor__fn(uType* __type)
{
    TypefaceCache::_typefaces_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[30/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.Android.Typeface>*/]));
}

static void TypefaceCache_build(uType* type)
{
    ::STRINGS[4] = uString::Const("/tempFont");
    ::TYPES[30] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Controls::Native::Android::Typeface_typeof());
    ::TYPES[31] = ::g::Uno::UX::BundleFileSource_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Controls::Native::Android::Typeface_typeof()), (uintptr_t)&::g::Fuse::Controls::Native::Android::TypefaceCache::_typefaces_, uFieldFlagsStatic);
}

uClassType* TypefaceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.TypefaceCache", options);
    type->fp_build_ = TypefaceCache_build;
    type->fp_cctor_ = TypefaceCache__cctor__fn;
    return type;
}

// public static Fuse.Controls.Native.Android.Typeface GetTypeface(Fuse.Font font) :2900
void TypefaceCache__GetTypeface_fn(::g::Fuse::Font* font, ::g::Fuse::Controls::Native::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypeface(font);
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromBundleFile(Uno.IO.BundleFile file) :2907
void TypefaceCache__GetTypefaceFromBundleFile_fn(::g::Uno::IO::BundleFile* file, ::g::Fuse::Controls::Native::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypefaceFromBundleFile(file);
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromFileSource(Uno.UX.FileSource fileSource) :2917
void TypefaceCache__GetTypefaceFromFileSource_fn(::g::Uno::UX::FileSource* fileSource, ::g::Fuse::Controls::Native::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypefaceFromFileSource(fileSource);
}

uSStrong< ::g::Uno::Collections::Dictionary*> TypefaceCache::_typefaces_;

// public static Fuse.Controls.Native.Android.Typeface GetTypeface(Fuse.Font font) [static] :2900
::g::Fuse::Controls::Native::Android::Typeface* TypefaceCache::GetTypeface(::g::Fuse::Font* font)
{
    TypefaceCache_typeof()->Init();
    return uIs((::g::Uno::UX::FileSource*)uPtr(font)->File(), ::TYPES[31/*Uno.UX.BundleFileSource*/]) ? (::g::Fuse::Controls::Native::Android::Typeface*)TypefaceCache::GetTypefaceFromBundleFile(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(uPtr(font)->File(), ::TYPES[31/*Uno.UX.BundleFileSource*/]))->BundleFile) : (::g::Fuse::Controls::Native::Android::Typeface*)TypefaceCache::GetTypefaceFromFileSource(uPtr(font)->File());
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromBundleFile(Uno.IO.BundleFile file) [static] :2907
::g::Fuse::Controls::Native::Android::Typeface* TypefaceCache::GetTypefaceFromBundleFile(::g::Uno::IO::BundleFile* file)
{
    TypefaceCache_typeof()->Init();
    bool ret1;
    ::g::Fuse::Controls::Native::Android::Typeface* ret2;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->BundlePath(), &ret1), ret1))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->BundlePath(), &ret2), ret2);

    ::g::Fuse::Controls::Native::Android::Typeface* typeface = ::g::Fuse::Controls::Native::Android::Typeface::CreateFromBundleFile1(file);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->BundlePath(), typeface);
    return typeface;
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromFileSource(Uno.UX.FileSource fileSource) [static] :2917
::g::Fuse::Controls::Native::Android::Typeface* TypefaceCache::GetTypefaceFromFileSource(::g::Uno::UX::FileSource* fileSource)
{
    TypefaceCache_typeof()->Init();
    bool ret3;
    ::g::Fuse::Controls::Native::Android::Typeface* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(TypefaceCache::_typefaces()), uPtr(fileSource)->Name, &ret3), ret3))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(TypefaceCache::_typefaces()), uPtr(fileSource)->Name, &ret4), ret4);

    uArray* data = uPtr(fileSource)->ReadAllBytes();
    uString* path = ::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[4/*"/tempFont"*/]);
    ::g::Uno::IO::File::WriteAllBytes(path, data);
    ::g::Fuse::Controls::Native::Android::Typeface* typeface = ::g::Fuse::Controls::Native::Android::Typeface::CreateFromFile(path);
    ::g::Uno::IO::File::Delete(path);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TypefaceCache::_typefaces()), fileSource->Name, typeface);
    return typeface;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// public abstract extern class View :2950
// {
static void View_build(uType* type)
{
    ::STRINGS[2] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls.Native\\0.35.12\\Android\\$.uno");
    ::STRINGS[5] = uString::Const("set_Background");
    ::STRINGS[6] = uString::Const(" is missing parent view");
    ::TYPES[18] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[19] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[32] = ::g::Fuse::Controls::Native::Android::IViewParent_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(View_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(View_type, interface1));
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _handle), 0,
        ::g::Fuse::Controls::Native::Android::IViewParent_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _parent), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _rotation), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _scale), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _size), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _translation), 0);
}

View_type* View_typeof()
{
    static uSStrong<View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(View);
    options.TypeSize = sizeof(View_type);
    type = (View_type*)uClassType::New("Fuse.Controls.Native.Android.View", options);
    type->fp_build_ = View_build;
    type->fp_Dispose = View__Dispose_fn;
    type->interface0.fp_Show = (void(*)(uObject*))View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))View__Dispose_fn;
    return type;
}

// protected View(Java.Object handle) :2968
void View__ctor__fn(View* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// public void set_Background(Fuse.Drawing.Brush value) :3007
void View__set_Background_fn(View* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->Background(value);
}

// public virtual void Dispose() :2973
void View__Dispose_fn(View* __this)
{
}

// public Java.Object get_Handle() :2952
void View__get_Handle_fn(View* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public void Hide() :2983
void View__Hide_fn(View* __this)
{
    __this->Hide();
}

// public void set_Opacity(float value) :3089
void View__set_Opacity_fn(View* __this, float* value)
{
    __this->Opacity(*value);
}

// internal Fuse.Controls.Native.Android.IViewParent get_Parent() :2957
void View__get_Parent_fn(View* __this, uObject** __retval)
{
    *__retval = __this->Parent();
}

// internal void set_Parent(Fuse.Controls.Native.Android.IViewParent value) :2958
void View__set_Parent_fn(View* __this, uObject* value)
{
    __this->Parent(value);
}

// public void set_Position(float2 value) :3072
void View__set_Position_fn(View* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// private static void SetBackground(Java.Object handle, int argb) :3152
void View__SetBackground_fn(::g::Java::Object* handle, int* argb)
{
    View::SetBackground(handle, *argb);
}

// private static void SetOpacity(Java.Object handle, float value) :3098
void View__SetOpacity_fn(::g::Java::Object* handle, float* value)
{
    View::SetOpacity(handle, *value);
}

// private static void SetPivotXY(Java.Object handle, float x, float y) :3136
void View__SetPivotXY_fn(::g::Java::Object* handle, float* x, float* y)
{
    View::SetPivotXY(handle, *x, *y);
}

// private static void SetRotation(Java.Object handle, float value) :3118
void View__SetRotation_fn(::g::Java::Object* handle, float* value)
{
    View::SetRotation(handle, *value);
}

// private static void SetRotationX(Java.Object handle, float value) :3124
void View__SetRotationX_fn(::g::Java::Object* handle, float* value)
{
    View::SetRotationX(handle, *value);
}

// private static void SetRotationY(Java.Object handle, float value) :3130
void View__SetRotationY_fn(::g::Java::Object* handle, float* value)
{
    View::SetRotationY(handle, *value);
}

// private static void SetScaleXY(Java.Object handle, float x, float y) :3144
void View__SetScaleXY_fn(::g::Java::Object* handle, float* x, float* y)
{
    View::SetScaleXY(handle, *x, *y);
}

// private static void SetTranslation(Java.Object handle, float x, float y) :3110
void View__SetTranslation_fn(::g::Java::Object* handle, float* x, float* y)
{
    View::SetTranslation(handle, *x, *y);
}

// private static void SetVisible(Java.Object handle, bool isVisible) :3000
void View__SetVisible_fn(::g::Java::Object* handle, bool* isVisible)
{
    View::SetVisible(handle, *isVisible);
}

// public void Show() :2978
void View__Show_fn(View* __this)
{
    __this->Show();
}

// public float2 get_Size() :3078
void View__get_Size_fn(View* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(float2 value) :3079
void View__set_Size_fn(View* __this, ::g::Uno::Float2* value)
{
    __this->Size(*value);
}

// public void set_Transform(float4x4 value) :3031
void View__set_Transform_fn(View* __this, ::g::Uno::Float4x4* value)
{
    __this->Transform(*value);
}

// protected View(Java.Object handle) [instance] :2968
void View::ctor_(::g::Java::Object* handle)
{
    _handle = handle;
}

// public void set_Background(Fuse.Drawing.Brush value) [instance] :3007
void View::Background(::g::Fuse::Drawing::Brush* value)
{
    ::g::Uno::Float4 c = ::g::Uno::Float4__New1(0.0f);

    if (value != NULL)
    {
        ::g::Fuse::Drawing::SolidColor* sc = uAs< ::g::Fuse::Drawing::SolidColor*>(value, ::TYPES[18/*Fuse.Drawing.SolidColor*/]);

        if (sc != NULL)
            c = uPtr(sc)->Color();

        ::g::Fuse::Drawing::StaticSolidColor* ssc = uAs< ::g::Fuse::Drawing::StaticSolidColor*>(value, ::TYPES[19/*Fuse.Drawing.StaticSolidColor*/]);

        if (ssc != NULL)
            c = uPtr(ssc)->Color();

        if ((sc == NULL) && (ssc == NULL))
            ::g::Fuse::Diagnostics::Unsupported(::g::Uno::Object::ToString(this), value, ::STRINGS[2/*"C:\\Program...*/], 3020, ::STRINGS[5/*"set_Backgro...*/]);
    }

    View::SetBackground(Handle(), ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(c));
}

// public Java.Object get_Handle() [instance] :2952
::g::Java::Object* View::Handle()
{
    return _handle;
}

// public void Hide() [instance] :2983
void View::Hide()
{
    View::SetVisible(Handle(), false);
}

// public void set_Opacity(float value) [instance] :3089
void View::Opacity(float value)
{
    View::SetOpacity(Handle(), value);
}

// internal Fuse.Controls.Native.Android.IViewParent get_Parent() [instance] :2957
uObject* View::Parent()
{
    return _parent;
}

// internal void set_Parent(Fuse.Controls.Native.Android.IViewParent value) [instance] :2958
void View::Parent(uObject* value)
{
    _parent = value;

    if (_parent != NULL)
        ::g::Fuse::Controls::Native::Android::IViewParent::SetChildSize(uInterface(uPtr(_parent), ::TYPES[32/*Fuse.Controls.Native.Android.IViewParent*/]), this, _size);
}

// public void set_Position(float2 value) [instance] :3072
void View::Position(::g::Uno::Float2 value)
{
    View::SetTranslation(Handle(), value.X, value.Y);
}

// public void Show() [instance] :2978
void View::Show()
{
    View::SetVisible(Handle(), true);
}

// public float2 get_Size() [instance] :3078
::g::Uno::Float2 View::Size()
{
    return _size;
}

// public void set_Size(float2 value) [instance] :3079
void View::Size(::g::Uno::Float2 value)
{
    _size = value;

    if (Parent() != NULL)
        ::g::Fuse::Controls::Native::Android::IViewParent::SetChildSize(uInterface(uPtr(Parent()), ::TYPES[32/*Fuse.Controls.Native.Android.IViewParent*/]), this, value);
}

// public void set_Transform(float4x4 value) [instance] :3031
void View::Transform(::g::Uno::Float4x4 value)
{
    ::g::Uno::Float4x4 t = value;
    ::g::Uno::Float3 scale;
    ::g::Uno::Float4 rotation;
    ::g::Uno::Float3 translation;
    ::g::Uno::Matrix::Decompose(t, &scale, &rotation, &translation);

    if (::g::Uno::Float2__op_Inequality(::g::Uno::Float2__New2(scale.X, scale.Y), _scale))
    {
        View::SetPivotXY(Handle(), 0.0f, 0.0f);
        View::SetScaleXY(Handle(), scale.X, scale.Y);
        _scale = ::g::Uno::Float2__New2(scale.X, scale.Y);
    }

    ::g::Uno::Float3 ind1 = ::g::Uno::Quaternion::ToEulerAngleDegrees(rotation);
    ::g::Uno::Float3 r = ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z);

    if (::g::Uno::Float3__op_Inequality(r, _rotation))
    {
        View::SetPivotXY(Handle(), 0.0f, 0.0f);
        View::SetRotation(Handle(), r.Z);
        View::SetRotationX(Handle(), r.X);
        View::SetRotationY(Handle(), r.Y);
        _rotation = r;
    }

    ::g::Uno::Float2 translationXY = ::g::Uno::Float2__New2(translation.X, translation.Y);

    if (::g::Uno::Vector::Distance(translationXY, _translation) > 0.1f)
    {
        Position(translationXY);
        _translation = translationXY;
    }

    if (Parent() == NULL)
        ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition(this, ::STRINGS[6/*" is missing...*/]), 1, ::STRINGS[2/*"C:\\Program...*/], 3065);
    else
        ::g::Fuse::Controls::Native::Android::IViewParent::SetChildSize(uInterface(uPtr(Parent()), ::TYPES[32/*Fuse.Controls.Native.Android.IViewParent*/]), this, Size());
}

// private static void SetBackground(Java.Object handle, int argb) [static] :3152
void View::SetBackground(::g::Java::Object* handle, int argb)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetBackground154", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uargb=argb;
        jint _argb = (jint)_uargb;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_argb);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetOpacity(Java.Object handle, float value) [static] :3098
void View::SetOpacity(::g::Java::Object* handle, float value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetOpacity156", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uvalue=value;
        jfloat _value = (jfloat)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetPivotXY(Java.Object handle, float x, float y) [static] :3136
void View::SetPivotXY(::g::Java::Object* handle, float x, float y)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetPivotXY157", "(Ljava/lang/Object;FF)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ux=x;
        jfloat _x = (jfloat)_ux;
        float _uy=y;
        jfloat _y = (jfloat)_uy;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_x,_y);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetRotation(Java.Object handle, float value) [static] :3118
void View::SetRotation(::g::Java::Object* handle, float value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetRotation158", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uvalue=value;
        jfloat _value = (jfloat)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetRotationX(Java.Object handle, float value) [static] :3124
void View::SetRotationX(::g::Java::Object* handle, float value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetRotationX159", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uvalue=value;
        jfloat _value = (jfloat)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetRotationY(Java.Object handle, float value) [static] :3130
void View::SetRotationY(::g::Java::Object* handle, float value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetRotationY160", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uvalue=value;
        jfloat _value = (jfloat)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetScaleXY(Java.Object handle, float x, float y) [static] :3144
void View::SetScaleXY(::g::Java::Object* handle, float x, float y)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetScaleXY161", "(Ljava/lang/Object;FF)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ux=x;
        jfloat _x = (jfloat)_ux;
        float _uy=y;
        jfloat _y = (jfloat)_uy;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_x,_y);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTranslation(Java.Object handle, float x, float y) [static] :3110
void View::SetTranslation(::g::Java::Object* handle, float x, float y)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTranslation162", "(Ljava/lang/Object;FF)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ux=x;
        jfloat _x = (jfloat)_ux;
        float _uy=y;
        jfloat _y = (jfloat)_uy;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_x,_y);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetVisible(Java.Object handle, bool isVisible) [static] :3000
void View::SetVisible(::g::Java::Object* handle, bool isVisible)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetVisible163", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uisVisible=isVisible;
        jboolean _isVisible = (jboolean)_uisVisible;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_isVisible);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\Android\$.uno
// ----------------------------------------------------------------------

// public sealed extern class ViewGroup :3175
// {
static void ViewGroup_build(uType* type)
{
    ::TYPES[3] = ::g::Fuse::Controls::Native::Android::View_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ViewGroup_type, interface1),
        ::g::Fuse::Controls::Native::Android::IViewParent_typeof(), offsetof(ViewGroup_type, interface2),
        ::g::Fuse::Controls::Native::IViewGroup_typeof(), offsetof(ViewGroup_type, interface3));
    type->SetFields(6);
}

ViewGroup_type* ViewGroup_typeof()
{
    static uSStrong<ViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(ViewGroup);
    options.TypeSize = sizeof(ViewGroup_type);
    type = (ViewGroup_type*)uClassType::New("Fuse.Controls.Native.Android.ViewGroup", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::View_typeof());
    type->fp_build_ = ViewGroup_build;
    type->fp_ctor_ = (void*)ViewGroup__New1_fn;
    type->interface3.fp_Add = (void(*)(uObject*, uObject*))ViewGroup__FuseControlsNativeIViewGroupAdd_fn;
    type->interface3.fp_Add1 = (void(*)(uObject*, uObject*, int*))ViewGroup__FuseControlsNativeIViewGroupAdd1_fn;
    type->interface3.fp_Remove = (void(*)(uObject*, uObject*))ViewGroup__FuseControlsNativeIViewGroupRemove_fn;
    type->interface2.fp_SetChildSize = (void(*)(uObject*, ::g::Fuse::Controls::Native::Android::View*, ::g::Uno::Float2*))ViewGroup__FuseControlsNativeAndroidIViewParentSetChildSize_fn;
    type->interface3.fp_set_ClipToBounds = (void(*)(uObject*, bool*))ViewGroup__FuseControlsNativeIViewGroupset_ClipToBounds_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// public ViewGroup() :3178
void ViewGroup__ctor_1_fn(ViewGroup* __this)
{
    __this->ctor_1();
}

// public void Add(Fuse.Controls.Native.Android.View child) :3210
void ViewGroup__Add_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* child)
{
    __this->Add(child);
}

// public void Add(Fuse.Controls.Native.Android.View child, int index) :3216
void ViewGroup__Add1_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* child, int* index)
{
    __this->Add1(child, *index);
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle) :3249
void ViewGroup__AddView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    ViewGroup::AddView(parentHandle, childHandle);
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle, int index) :3257
void ViewGroup__AddView1_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int* index)
{
    ViewGroup::AddView1(parentHandle, childHandle, *index);
}

// private static Java.Object Create() :3181
void ViewGroup__Create_fn(::g::Java::Object** __retval)
{
    *__retval = ViewGroup::Create();
}

// private void Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View view, float2 size) :3228
void ViewGroup__FuseControlsNativeAndroidIViewParentSetChildSize_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size)
{
    ::g::Uno::Float2 size_ = *size;
    ViewGroup::SetChildSize(uPtr(view)->Handle(), (int)size_.X, (int)size_.Y);
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child) :3195
void ViewGroup__FuseControlsNativeIViewGroupAdd_fn(ViewGroup* __this, uObject* child)
{
    __this->Add(uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[3/*Fuse.Controls.Native.Android.View*/]));
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child, int index) :3200
void ViewGroup__FuseControlsNativeIViewGroupAdd1_fn(ViewGroup* __this, uObject* child, int* index)
{
    int index_ = *index;
    __this->Add1(uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[3/*Fuse.Controls.Native.Android.View*/]), index_);
}

// private void Fuse.Controls.Native.IViewGroup.set_ClipToBounds(bool value) :3192
void ViewGroup__FuseControlsNativeIViewGroupset_ClipToBounds_fn(ViewGroup* __this, bool* value)
{
    bool value_ = *value;
    ViewGroup::SetClipToBounds(__this->Handle(), value_);
}

// private void Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView child) :3205
void ViewGroup__FuseControlsNativeIViewGroupRemove_fn(ViewGroup* __this, uObject* child)
{
    __this->Remove(uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[3/*Fuse.Controls.Native.Android.View*/]));
}

// public ViewGroup New() :3178
void ViewGroup__New1_fn(ViewGroup** __retval)
{
    *__retval = ViewGroup::New1();
}

// public void Remove(Fuse.Controls.Native.Android.View child) :3222
void ViewGroup__Remove_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* child)
{
    __this->Remove(child);
}

// private static void RemoveView(Java.Object parentHandle, Java.Object childHandle) :3265
void ViewGroup__RemoveView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    ViewGroup::RemoveView(parentHandle, childHandle);
}

// private static void SetChildSize(Java.Object handle, int w, int h) :3234
void ViewGroup__SetChildSize_fn(::g::Java::Object* handle, int* w, int* h)
{
    ViewGroup::SetChildSize(handle, *w, *h);
}

// private static void SetClipToBounds(Java.Object handle, bool clipToBounds) :3241
void ViewGroup__SetClipToBounds_fn(::g::Java::Object* handle, bool* clipToBounds)
{
    ViewGroup::SetClipToBounds(handle, *clipToBounds);
}

// public ViewGroup() [instance] :3178
void ViewGroup::ctor_1()
{
    ctor_(ViewGroup::Create());
}

// public void Add(Fuse.Controls.Native.Android.View child) [instance] :3210
void ViewGroup::Add(::g::Fuse::Controls::Native::Android::View* child)
{
    uPtr(child)->Parent((uObject*)this);
    ViewGroup::AddView(Handle(), child->Handle());
}

// public void Add(Fuse.Controls.Native.Android.View child, int index) [instance] :3216
void ViewGroup::Add1(::g::Fuse::Controls::Native::Android::View* child, int index)
{
    uPtr(child)->Parent((uObject*)this);
    ViewGroup::AddView1(Handle(), child->Handle(), index);
}

// public void Remove(Fuse.Controls.Native.Android.View child) [instance] :3222
void ViewGroup::Remove(::g::Fuse::Controls::Native::Android::View* child)
{
    uPtr(child)->Parent(NULL);
    ViewGroup::RemoveView(Handle(), child->Handle());
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle) [static] :3249
void ViewGroup::AddView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView164", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle, int index) [static] :3257
void ViewGroup::AddView1(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView1165", "(Ljava/lang/Object;Ljava/lang/Object;I)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uindex=index;
        jint _index = (jint)_uindex;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle,_index);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object Create() [static] :3181
::g::Java::Object* ViewGroup::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create166", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public ViewGroup New() [static] :3178
ViewGroup* ViewGroup::New1()
{
    ViewGroup* obj1 = (ViewGroup*)uNew(ViewGroup_typeof());
    obj1->ctor_1();
    return obj1;
}

// private static void RemoveView(Java.Object parentHandle, Java.Object childHandle) [static] :3265
void ViewGroup::RemoveView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RemoveView167", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetChildSize(Java.Object handle, int w, int h) [static] :3234
void ViewGroup::SetChildSize(::g::Java::Object* handle, int w, int h)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetChildSize168", "(Ljava/lang/Object;II)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uw=w;
        jint _w = (jint)_uw;
        int _uh=h;
        jint _h = (jint)_uh;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_w,_h);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetClipToBounds(Java.Object handle, bool clipToBounds) [static] :3241
void ViewGroup::SetClipToBounds(::g::Java::Object* handle, bool clipToBounds)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetClipToBounds169", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uclipToBounds=clipToBounds;
        jboolean _clipToBounds = (jboolean)_uclipToBounds;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_clipToBounds);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::Android
