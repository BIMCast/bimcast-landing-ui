// This file was generated based on C:\Users\ManailMJ\Documents\Dev\fuse\projects\bimcast\bimcast.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.bimcast_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[5];

namespace g{

// public static generated class bimcast_bundle :0
// {
// static bimcast_bundle() :0
static void bimcast_bundle__cctor__fn(uType* __type)
{
    bimcast_bundle::bglogine50430b4_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"bimcast"*/]))->GetFile(::STRINGS[1/*"bglogin-bf7...*/]);
    bimcast_bundle::mainlogo93280a11_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"bimcast"*/]))->GetFile(::STRINGS[2/*"mainlogo-ca...*/]);
    bimcast_bundle::menudf4331e2_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"bimcast"*/]))->GetFile(::STRINGS[3/*"menu-8ed475...*/]);
    bimcast_bundle::search4cd1c3e9_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"bimcast"*/]))->GetFile(::STRINGS[4/*"search-4d02...*/]);
}

static void bimcast_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("bimcast");
    ::STRINGS[1] = uString::Const("bglogin-bf748810.png");
    ::STRINGS[2] = uString::Const("mainlogo-cac5b850.png");
    ::STRINGS[3] = uString::Const("menu-8ed475e7.png");
    ::STRINGS[4] = uString::Const("search-4d0238f6.png");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::bimcast_bundle::bglogine50430b4_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::bimcast_bundle::mainlogo93280a11_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::bimcast_bundle::menudf4331e2_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::bimcast_bundle::search4cd1c3e9_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("bglogine50430b4", 0),
        new uField("mainlogo93280a11", 1),
        new uField("menudf4331e2", 2),
        new uField("search4cd1c3e9", 3));
}

uClassType* bimcast_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("bimcast_bundle", options);
    type->fp_build_ = bimcast_bundle_build;
    type->fp_cctor_ = bimcast_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> bimcast_bundle::bglogine50430b4_;
uSStrong< ::g::Uno::IO::BundleFile*> bimcast_bundle::mainlogo93280a11_;
uSStrong< ::g::Uno::IO::BundleFile*> bimcast_bundle::menudf4331e2_;
uSStrong< ::g::Uno::IO::BundleFile*> bimcast_bundle::search4cd1c3e9_;
// }

} // ::g
