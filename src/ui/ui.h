// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: LilyGo_T-Panel_Starter

#ifndef _LILYGO_T_PANEL_STARTER_UI_H
#define _LILYGO_T_PANEL_STARTER_UI_H

#ifdef __cplusplus
extern "C" {
#endif

    #include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"

// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
void ui_event_Screen1( lv_event_t * e);
extern lv_obj_t *ui_Screen1;
void ui_event_Button1( lv_event_t * e);
extern lv_obj_t *ui_Button1;
extern lv_obj_t *ui_Label2;
extern lv_obj_t *ui_Label3;
extern lv_obj_t *ui_Image6;
void ui_event_Arc1( lv_event_t * e);
extern lv_obj_t *ui_Arc1;
extern lv_obj_t *ui_arcLabel;
void ui_event_Slider1( lv_event_t * e);
extern lv_obj_t *ui_Slider1;
extern lv_obj_t *ui_Label7;
extern lv_obj_t *ui_Spinbox1;
extern lv_obj_t *ui_Roller1;
// CUSTOM VARIABLES

// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
void ui_event_Screen2( lv_event_t * e);
extern lv_obj_t *ui_Screen2;
extern lv_obj_t *ui_Label4;
extern lv_obj_t *ui_TabView3;
extern lv_obj_t *ui_TabPage1;
extern lv_obj_t *ui_Label1;
extern lv_obj_t *ui_Calendar1;
extern lv_obj_t *ui_TabPage2;
extern lv_obj_t *ui_Label5;
extern lv_obj_t *ui_Keyboard2;
extern lv_obj_t *ui_TabPage3;
extern lv_obj_t *ui_Label6;
extern lv_obj_t *ui_Colorwheel1;
extern lv_obj_t *ui_Label8;
// CUSTOM VARIABLES

// EVENTS
extern lv_obj_t *ui____initial_actions0;

// IMAGES AND IMAGE SETS
LV_IMG_DECLARE( ui_img_squareline_logo_100px_png);   // assets/squareline_logo_100px.png

// UI INIT
void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif