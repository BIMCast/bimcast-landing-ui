// This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.35.8\Source\Uno\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{struct ZonedDateTime;}}}
namespace g{namespace Uno{struct DateTime;}}

namespace g{
namespace Uno{

// public sealed class DateTime :1638
// {
uType* DateTime_typeof();
void DateTime__get_Now_fn(::g::Uno::Time::ZonedDateTime** __retval);

struct DateTime : uObject
{
    static ::g::Uno::Time::ZonedDateTime* Now();
};
// }

}} // ::g::Uno
