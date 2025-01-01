// This file contains the implementations of any FUNCTION events
// defined in squareline and exported with the UI.
// This file is created manually, not by squareline, as the squareline
// project has been configured not to export function implementations,
// refer File -> Project Settings, "Call functions export file".
// The exported header file is ui/ui_events.h.

#include "lvgl.h"
#include <HardwareSerial.h>

#ifdef __cplusplus
// squareline UI events use C linkage
extern "C" {
#endif

void goButtonClicked(lv_event_t * e) {
    Serial.println("Go button was clicked!");
}

#ifdef __cplusplus
} /*extern "C"*/
#endif
