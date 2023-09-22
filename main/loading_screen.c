#include "lvgl.h"

static const char *TAG = "loading_display";

void loading_display()
{
    // Background Style to turn it black
    static lv_style_t style_screen;
    lv_style_init(&style_screen);
    lv_style_set_bg_color(&style_screen, LV_STATE_DEFAULT, LV_COLOR_BLACK);
    lv_obj_add_style(lv_scr_act(), LV_OBJ_PART_MAIN, &style_screen);  //turn the screen white

    lv_obj_t *load_label = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_text(load_label, "Load");  // set text

    lv_obj_set_style_local_bg_opa(load_label, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_TRANSP);
    lv_obj_set_style_local_text_color(load_label, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_WHITE);           // fg color
    lv_obj_set_style_local_text_font(load_label, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, &lv_font_montserrat_28);  // font size(template：lv_font_montserrat_xx)

    lv_obj_align(load_label, NULL, LV_ALIGN_CENTER, 0, 0);
}