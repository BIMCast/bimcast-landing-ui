// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.Switch.h>
#include <Fuse.Controls.Native.IToggleViewHost.h>
#include <Uno.Bool.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.35.12\iOS\$.uno
// ------------------------------------------------------------------

// public sealed extern class Switch :2216
// {
static void Switch_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IToggleView_typeof(), offsetof(Switch_type, interface0));
}

Switch_type* Switch_typeof()
{
    static uSStrong<Switch_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(Switch_type);
    type = (Switch_type*)uClassType::New("Fuse.Controls.Native.iOS.Switch", options);
    type->fp_build_ = Switch_build;
    type->interface0.fp_set_Value = (void(*)(uObject*, bool*))Switch__set_Value_fn;
    return type;
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) :2222
void Switch__ctor__fn(Switch* __this, uObject* host)
{
    __this->ctor_(host);
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) :2222
void Switch__New1_fn(uObject* host, Switch** __retval)
{
    *__retval = Switch::New1(host);
}

// public void set_Value(bool value) :2218
void Switch__set_Value_fn(Switch* __this, bool* value)
{
    __this->Value(*value);
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) [instance] :2222
void Switch::ctor_(uObject* host)
{
}

// public void set_Value(bool value) [instance] :2218
void Switch::Value(bool value)
{
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) [static] :2222
Switch* Switch::New1(uObject* host)
{
    Switch* obj1 = (Switch*)uNew(Switch_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
