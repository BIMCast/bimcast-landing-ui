// This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.35.8\Source\Uno\Text\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Text{struct Utf8;}}}

namespace g{
namespace Uno{
namespace Text{

// public static class Utf8 :422
// {
uClassType* Utf8_typeof();
void Utf8__GetBytes_fn(uString* value, uArray** __retval);
void Utf8__GetString_fn(uArray* value, uString** __retval);

struct Utf8 : uObject
{
    static uArray* GetBytes(uString* value);
    static uString* GetString(uArray* value);
};
// }

}}} // ::g::Uno::Text