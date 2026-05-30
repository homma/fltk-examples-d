#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Window.H>

extern "C" {

// run below to generate the header file
// grep '^//| ' src/wx.cpp | sed 's/^\/\/\| //' > src/wx.h

//|
//| //// Fl

//|
//| // main loop
//| int fl_run(void);
auto fl_run() -> int {
  return Fl::run();
}

//|
//| // get screen height
//| int fl_h(void);
auto fl_h() -> int {
  return Fl::h();
}

//|
//| // get screen width
//| int fl_w(void);
auto fl_w() -> int {
  return Fl::w();
}

//|
//| //// Fl_Color
//| typedef unsigned int Fl_Color;
//|
//| // values are in the reference document
//| enum FL_COLOR {
//|   FL_BLACK = 56,
//|   FL_WHITE = 255,
//| };

//|
//| //// Fl_Widget
//| typedef struct Fl_Widget Fl_Widget;
//| typedef void Fl_Callback(Fl_Widget *, void *);
//| typedef void Fl_Callback0(Fl_Widget *);
//| typedef void Fl_Callback1(Fl_Widget *, long);
//| typedef Fl_Callback *Fl_Callback_p;

//|
//| //// Fl_Window
//| typedef struct Fl_Window Fl_Window;

//|
//| // create
//| Fl_Window *new_fl_window(int left, int top, int width, int height,
//| const char *title);
auto new_fl_window(int left, int top, int width, int height, const char *title)
    -> Fl_Window * {
  return new Fl_Window(left, top, width, height, title);
}

//|
//| // end
//| void fl_window_end(Fl_Window *win);
auto fl_window_end(Fl_Window *win) -> void {
  win->end();
}

//|
//| // show
//| void fl_window_show(Fl_Window *win);
auto fl_window_show(Fl_Window *win) -> void {
  win->show();
}

//|
//| // get color
//| Fl_Color fl_window_color(Fl_Window *win);
auto fl_window_color(Fl_Window *win) -> Fl_Color {
  return win->color();
}

//|
//| // set color
//| void fl_window_set_color(Fl_Window *win, unsigned char t);
auto fl_window_set_color(Fl_Window *win, Fl_Color bg) -> void {
  return win->color(bg);
}

//|
//| //// Fl_Button
//| typedef struct Fl_Button Fl_Button;
//|
//| // values are in the reference document
//| enum FL_BUTTON_TYPE {
//|   FL_NORMAL_BUTTON,
//|   FL_TOGGLE_BUTTON,
//|   FL_RADIO_BUTTON,
//|   FL_HIDDEN_BUTTON,
//| };

//|
//| // create
//| Fl_Button *new_fl_button(int left, int top, int width, int height);
auto new_fl_button(int left, int top, int width, int height) -> Fl_Button * {
  return new Fl_Button(left, top, width, height);
}

//|
//| // create with label
//| Fl_Button *new_fl_button_with_label(int left, int top, int width,
//| int height, const char *label);
auto new_fl_button_with_label(int left, int top, int width, int height,
                              const char *label) -> Fl_Button * {
  return new Fl_Button(left, top, width, height, label);
}

//|
//| // get callback
//| Fl_Callback_p fl_button_callback(Fl_Button *button);
auto fl_button_callback(Fl_Button *button) -> Fl_Callback_p {
  return button->callback();
}

//|
//| // set callback
//| void fl_button_set_callback(Fl_Button *button, Fl_Callback *cb);
auto fl_button_set_callback(Fl_Button *button, Fl_Callback *cb) -> void {
  return button->callback(cb);
}

//|
//| // get color
//| Fl_Color fl_button_color(Fl_Button *button);
auto fl_button_color(Fl_Button *button) -> Fl_Color {
  return button->color();
}

//|
//| // set color
//| void fl_button_set_color(Fl_Button *button, unsigned char t);
auto fl_button_set_color(Fl_Button *button, Fl_Color bg) -> void {
  return button->color(bg);
}

//|
//| // get type
//| unsigned char fl_button_type(Fl_Button *button);
auto fl_button_type(Fl_Button *button) -> unsigned char {
  return button->type();
}

//|
//| // set type
//| void fl_button_set_type(Fl_Button *button, unsigned char t);
auto fl_button_set_type(Fl_Button *button, unsigned char t) -> void {
  return button->type(t);
}
}
