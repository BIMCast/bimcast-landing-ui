// This file was generated based on C:\ProgramData\Uno\Packages\FuseCore\0.35.12\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface ITemplateObserver :6777
// {
uInterfaceType* ITemplateObserver_typeof();

struct ITemplateObserver
{
    void(*fp_OnTemplatesChangedWileRooted)(uObject*);
    static void OnTemplatesChangedWileRooted(const uInterface& __this) { __this.VTable<ITemplateObserver>()->fp_OnTemplatesChangedWileRooted(__this); }
};
// }

}} // ::g::Fuse