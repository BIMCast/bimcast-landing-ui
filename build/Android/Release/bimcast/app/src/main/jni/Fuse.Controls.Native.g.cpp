// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.Controls.AutoCapitalizationHint.h>
#include <Fuse.Controls.AutoCorrectHint.h>
#include <Fuse.Controls.Native.ICircleView.h>
#include <Fuse.Controls.Native.IGraphicsView.h>
#include <Fuse.Controls.Native.IImageView.h>
#include <Fuse.Controls.Native.ILabelView.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.ImageHandle.h>
#include <Fuse.Controls.Native.ImageLoader.h>
#include <Fuse.Controls.Native.INativeViewRenderer.h>
#include <Fuse.Controls.Native.IOffscreenRenderer.h>
#include <Fuse.Controls.Native.IRangeViewHost.h>
#include <Fuse.Controls.Native.IRectangleView.h>
#include <Fuse.Controls.Native.IScrollView.h>
#include <Fuse.Controls.Native.IScrollViewHost.h>
#include <Fuse.Controls.Native.IShapeView.h>
#include <Fuse.Controls.Native.ITextEdit.h>
#include <Fuse.Controls.Native.ITextEditHost.h>
#include <Fuse.Controls.Native.ITextView.h>
#include <Fuse.Controls.Native.IToggleView.h>
#include <Fuse.Controls.Native.IToggleViewHost.h>
#include <Fuse.Controls.Native.IView.h>
#include <Fuse.Controls.Native.IViewGroup.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextInputActionStyle.h>
#include <Fuse.Controls.TextInputActionType.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Font.h>
#include <Fuse.Resources.ImageSource.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[2];
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\$.uno
// --------------------------------------------------------------

// public abstract interface ICircleView :341
// {
uInterfaceType* ICircleView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ICircleView", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\$.uno
// --------------------------------------------------------------

// public abstract interface IGraphicsView :248
// {
uInterfaceType* IGraphicsView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IGraphicsView", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\$.uno
// --------------------------------------------------------------

// public abstract interface IImageView :325
// {
uInterfaceType* IImageView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IImageView", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\$.uno
// --------------------------------------------------------------

// public abstract interface ILabelView :254
// {
uInterfaceType* ILabelView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ILabelView", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\$.uno
// --------------------------------------------------------------

// public abstract interface ILeafView :243
// {
uInterfaceType* ILeafView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ILeafView", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\$.uno
// --------------------------------------------------------------

// internal sealed extern class ImageHandle :40
// {
static void ImageHandle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("ImageHandle is disposed");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ImageHandle_type, interface0));
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Controls::Native::ImageHandle, _handle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::ImageHandle, _isDisposed), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::Native::ImageHandle, _name), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Native::ImageHandle, _pinCount), 0);
}

ImageHandle_type* ImageHandle_typeof()
{
    static uSStrong<ImageHandle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ImageHandle);
    options.TypeSize = sizeof(ImageHandle_type);
    type = (ImageHandle_type*)uClassType::New("Fuse.Controls.Native.ImageHandle", options);
    type->fp_build_ = ImageHandle_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))ImageHandle__Dispose_fn;
    return type;
}

// public ImageHandle(string name, object handle) :61
void ImageHandle__ctor__fn(ImageHandle* __this, uString* name, uObject* handle)
{
    __this->ctor_(name, handle);
}

// public void Dispose() :74
void ImageHandle__Dispose_fn(ImageHandle* __this)
{
    __this->Dispose();
}

// public object get_Handle() :44
void ImageHandle__get_Handle_fn(ImageHandle* __this, uObject** __retval)
{
    *__retval = __this->Handle();
}

// public string get_Name() :54
void ImageHandle__get_Name_fn(ImageHandle* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public ImageHandle New(string name, object handle) :61
void ImageHandle__New1_fn(uString* name, uObject* handle, ImageHandle** __retval)
{
    *__retval = ImageHandle::New1(name, handle);
}

// public void Pin() :68
void ImageHandle__Pin_fn(ImageHandle* __this)
{
    __this->Pin();
}

// public ImageHandle(string name, object handle) [instance] :61
void ImageHandle::ctor_(uString* name, uObject* handle)
{
    _handle = handle;
    _name = name;
    _pinCount = 1;
}

// public void Dispose() [instance] :74
void ImageHandle::Dispose()
{
    if (!_isDisposed)
    {
        _pinCount--;

        if (_pinCount == 0)
        {
            _isDisposed = true;
            ::g::Fuse::Controls::Native::ImageLoader::ReleaseHandle(this);
        }
    }
}

// public object get_Handle() [instance] :44
uObject* ImageHandle::Handle()
{
    if (_isDisposed)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"ImageHandle...*/]));

    return _handle;
}

// public string get_Name() [instance] :54
uString* ImageHandle::Name()
{
    return _name;
}

// public void Pin() [instance] :68
void ImageHandle::Pin()
{
    _pinCount++;
}

// public ImageHandle New(string name, object handle) [static] :61
ImageHandle* ImageHandle::New1(uString* name, uObject* handle)
{
    ImageHandle* obj1 = (ImageHandle*)uNew(ImageHandle_typeof());
    obj1->ctor_(name, handle);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\$.uno
// --------------------------------------------------------------

// internal static extern class ImageLoader :88
// {
// static ImageLoader() :88
static void ImageLoader__cctor__fn(uType* __type)
{
    ImageLoader::_imageHandleCache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.ImageHandle>*/]));
}

static void ImageLoader_build(uType* type)
{
    ::STRINGS[1] = uString::Const("/tempImage");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Controls::Native::ImageHandle_typeof());
    ::TYPES[1] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[2] = ::g::Java::Object_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Controls::Native::ImageHandle_typeof()), (uintptr_t)&::g::Fuse::Controls::Native::ImageLoader::_imageHandleCache_, uFieldFlagsStatic);
}

uClassType* ImageLoader_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.ImageLoader", options);
    type->fp_build_ = ImageLoader_build;
    type->fp_cctor_ = ImageLoader__cctor__fn;
    return type;
}

// public static Fuse.Controls.Native.ImageHandle Load(string uri) :135
void ImageLoader__Load_fn(uString* uri, ::g::Fuse::Controls::Native::ImageHandle** __retval)
{
    *__retval = ImageLoader::Load(uri);
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.IO.BundleFile bundleFile) :123
void ImageLoader__Load1_fn(::g::Uno::IO::BundleFile* bundleFile, ::g::Fuse::Controls::Native::ImageHandle** __retval)
{
    *__retval = ImageLoader::Load1(bundleFile);
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.UX.FileSource fileSource) :94
void ImageLoader__Load2_fn(::g::Uno::UX::FileSource* fileSource, ::g::Fuse::Controls::Native::ImageHandle** __retval)
{
    *__retval = ImageLoader::Load2(fileSource);
}

// private static extern Java.Object LoadFile(string filePath) :189
void ImageLoader__LoadFile_fn(uString* filePath, ::g::Java::Object** __retval)
{
    *__retval = ImageLoader::LoadFile(filePath);
}

// private static extern Java.Object LoadUri(string uri) :168
void ImageLoader__LoadUri_fn(uString* uri, ::g::Java::Object** __retval)
{
    *__retval = ImageLoader::LoadUri(uri);
}

// private static extern void Release(Java.Object bitmap) :162
void ImageLoader__Release_fn(::g::Java::Object* bitmap)
{
    ImageLoader::Release(bitmap);
}

// public static void ReleaseHandle(Fuse.Controls.Native.ImageHandle handle) :151
void ImageLoader__ReleaseHandle_fn(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    ImageLoader::ReleaseHandle(handle);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ImageLoader::_imageHandleCache_;

// public static Fuse.Controls.Native.ImageHandle Load(string uri) [static] :135
::g::Fuse::Controls::Native::ImageHandle* ImageLoader::Load(uString* uri)
{
    ImageLoader_typeof()->Init();
    bool ret1;
    ::g::Fuse::Controls::Native::ImageHandle* ret2;
    ::g::Fuse::Controls::Native::ImageHandle* handle = NULL;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ImageLoader::_imageHandleCache()), uri, &ret1), ret1))
    {
        handle = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ImageLoader::_imageHandleCache()), uri, &ret2), ret2);
        uPtr(handle)->Pin();
    }
    else
    {
        handle = ::g::Fuse::Controls::Native::ImageHandle::New1(uri, ImageLoader::LoadUri(uri));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ImageLoader::_imageHandleCache()), uri, handle);
    }

    return handle;
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.IO.BundleFile bundleFile) [static] :123
::g::Fuse::Controls::Native::ImageHandle* ImageLoader::Load1(::g::Uno::IO::BundleFile* bundleFile)
{
    ImageLoader_typeof()->Init();
    return ImageLoader::Load(uPtr(bundleFile)->BundlePath());
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.UX.FileSource fileSource) [static] :94
::g::Fuse::Controls::Native::ImageHandle* ImageLoader::Load2(::g::Uno::UX::FileSource* fileSource)
{
    ImageLoader_typeof()->Init();
    bool ret3;
    ::g::Fuse::Controls::Native::ImageHandle* ret4;
    ::g::Fuse::Controls::Native::ImageHandle* handle = NULL;

    if (uIs(fileSource, ::TYPES[1/*Uno.UX.BundleFileSource*/]))
        handle = ImageLoader::Load1(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(fileSource, ::TYPES[1/*Uno.UX.BundleFileSource*/]))->BundleFile);
    else if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ImageLoader::_imageHandleCache()), uPtr(fileSource)->Name, &ret3), ret3))
    {
        handle = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ImageLoader::_imageHandleCache()), uPtr(fileSource)->Name, &ret4), ret4);
        uPtr(handle)->Pin();
    }
    else
    {
        uArray* data = uPtr(fileSource)->ReadAllBytes();
        uString* path = ::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[1/*"/tempImage"*/]);
        ::g::Uno::IO::File::WriteAllBytes(path, data);
        handle = ::g::Fuse::Controls::Native::ImageHandle::New1(fileSource->Name, ImageLoader::LoadFile(path));
        ::g::Uno::IO::File::Delete(path);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ImageLoader::_imageHandleCache()), fileSource->Name, handle);
    }

    return handle;
}

// private static extern Java.Object LoadFile(string filePath) [static] :189
::g::Java::Object* ImageLoader::LoadFile(uString* filePath)
{
    ImageLoader_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "LoadFile170", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _ufilePath=filePath;
        jstring _filePath = JniHelper::UnoToJavaString(_ufilePath);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_filePath);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_filePath!=NULL) { U_JNIVAR->DeleteLocalRef(_filePath); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static extern Java.Object LoadUri(string uri) [static] :168
::g::Java::Object* ImageLoader::LoadUri(uString* uri)
{
    ImageLoader_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "LoadUri171", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _uuri=uri;
        jstring _uri = JniHelper::UnoToJavaString(_uuri);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_uri);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_uri!=NULL) { U_JNIVAR->DeleteLocalRef(_uri); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static extern void Release(Java.Object bitmap) [static] :162
void ImageLoader::Release(::g::Java::Object* bitmap)
{
    ImageLoader_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Release172", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _ubitmap=bitmap;
        jobject _bitmap = (_ubitmap==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubitmap, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_bitmap);
        
        if (_bitmap!=NULL) { U_JNIVAR->DeleteLocalRef(_bitmap); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void ReleaseHandle(Fuse.Controls.Native.ImageHandle handle) [static] :151
void ImageLoader::ReleaseHandle(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    ImageLoader_typeof()->Init();
    bool ret5;
    bool ret6;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ImageLoader::_imageHandleCache()), uPtr(handle)->Name(), &ret5), ret5))
    {
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(ImageLoader::_imageHandleCache()), uPtr(handle)->Name(), &ret6);
        ImageLoader::Release(uCast< ::g::Java::Object*>(handle->Handle(), ::TYPES[2/*Java.Object*/]));
    }
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\$.uno
// --------------------------------------------------------------

// public abstract interface INativeViewRenderer :361
// {
uInterfaceType* INativeViewRenderer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.INativeViewRenderer", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\$.uno
// --------------------------------------------------------------

// public abstract interface IOffscreenRenderer :367
// {
uInterfaceType* IOffscreenRenderer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IOffscreenRenderer", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\$.uno
// --------------------------------------------------------------

// public abstract interface IRangeViewHost :295
// {
uInterfaceType* IRangeViewHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IRangeViewHost", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\$.uno
// --------------------------------------------------------------

// public abstract interface IRectangleView :336
// {
uInterfaceType* IRectangleView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IRectangleView", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\$.uno
// --------------------------------------------------------------

// public abstract interface IScrollView :349
// {
uInterfaceType* IScrollView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IScrollView", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\$.uno
// --------------------------------------------------------------

// public abstract interface IScrollViewHost :355
// {
uInterfaceType* IScrollViewHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IScrollViewHost", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\$.uno
// --------------------------------------------------------------

// public abstract interface IShapeView :331
// {
uInterfaceType* IShapeView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IShapeView", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\$.uno
// --------------------------------------------------------------

// public abstract interface ITextEdit :300
// {
uInterfaceType* ITextEdit_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ITextEdit", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\$.uno
// --------------------------------------------------------------

// public abstract interface ITextEditHost :272
// {
uInterfaceType* ITextEditHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ITextEditHost", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\$.uno
// --------------------------------------------------------------

// public abstract interface ITextView :259
// {
uInterfaceType* ITextView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ITextView", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\$.uno
// --------------------------------------------------------------

// public abstract interface IToggleView :280
// {
uInterfaceType* IToggleView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IToggleView", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\$.uno
// --------------------------------------------------------------

// public abstract interface IToggleViewHost :285
// {
uInterfaceType* IToggleViewHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IToggleViewHost", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\$.uno
// --------------------------------------------------------------

// public abstract interface IView :230
// {
uInterfaceType* IView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IView", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\$.uno
// --------------------------------------------------------------

// public abstract interface IViewGroup :317
// {
uInterfaceType* IViewGroup_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IViewGroup", 0, 0);
    return type;
}
// }

}}}} // ::g::Fuse::Controls::Native
