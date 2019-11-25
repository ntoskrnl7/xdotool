#include <nan.h>
#include <nan_object_wrap.h>

#include "XdoTool.h"

NAN_MODULE_INIT(XDOTOOL) {
    if(XInitThreads() == 0) {
        Nan::ThrowError("Failed to init X threads");
        return;
    }
    XdoTool::Init(target);
}

NODE_MODULE(xdotool, XDOTOOL)