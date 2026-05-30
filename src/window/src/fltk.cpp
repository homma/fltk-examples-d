#include <FL/Fl.H>
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
//| // show
//| void fl_window_show(Fl_Window *win);
auto fl_window_show(Fl_Window *win) -> void {
  win->show();
}
}
