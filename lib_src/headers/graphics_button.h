#ifndef GRAPHICS_BUTTON_H_
#define GRAPHICS_BUTTON_H_

#include "graphics_widget.h"

WIDGET* create_button(char* text, int x, int y);
void destroy_button(WIDGET* w);

void set_button_text_color(WIDGET* w,int ARGB);
void set_button_text(WIDGET* w, char* message);
void set_button_enable(WIDGET* w,int enable);

int get_button_text_color(WIDGET* w);
char* get_button_text(WIDGET* w);
int get_button_enable(WIDGET* w);


void set_button_callback(WIDGET* w,void(*ucallback)(WIDGET* self, void* data),void* data);
void set_button_paint_select(WIDGET* w,void(*uselect)(GUI* g, WIDGET* w));

void remove_button_click_callback(WIDGET* l);
void remove_button_paint_select(WIDGET* l);

#endif
