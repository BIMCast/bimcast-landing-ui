// This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.35.8\Source\Uno\Time\Utilities\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Time{struct Constants;}}}
namespace g{namespace Uno{namespace Time{struct Instant;}}}

namespace g{
namespace Uno{
namespace Time{

// public static class Constants :5
// {
uClassType* Constants_typeof();

struct Constants : uObject
{
    static ::g::Uno::Time::Instant BclEpoch_;
    static ::g::Uno::Time::Instant& BclEpoch() { return Constants_typeof()->Init(), BclEpoch_; }
    static ::g::Uno::Time::Instant UnixEpoch_;
    static ::g::Uno::Time::Instant& UnixEpoch() { return Constants_typeof()->Init(), UnixEpoch_; }
};
// }

}}} // ::g::Uno::Time
