// This file was generated based on C:\ProgramData\Uno\Packages\FuseCore\0.35.12\Internal\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Internal{struct Statistics;}}}

namespace g{
namespace Fuse{
namespace Internal{

// public static class Statistics :697
// {
uClassType* Statistics_typeof();
void Statistics__ContinuousFilterAlpha_fn(double* elapsed, double* period, double* __retval);

struct Statistics : uObject
{
    static double ContinuousFilterAlpha(double elapsed, double period);
};
// }

}}} // ::g::Fuse::Internal
