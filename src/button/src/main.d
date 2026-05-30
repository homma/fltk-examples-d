import std;
import fltk;

auto main() {

  auto w_width = 640;
  auto w_height = 480;
  auto w_left = (fl_w - w_width) / 2;
  auto w_top = (fl_h - w_height) / 2;
  auto w_title = "My FLTK Window".toStringz;
  auto win = new_fl_window(w_left, w_top, w_width, w_height, w_title);

  win.fl_window_set_color(FL_WHITE);

  auto b_width = 300;
  auto b_height = 40;
  auto b_left = (w_width - b_width) / 2;
  auto b_top = w_height / 2 - b_height;
  auto b_title = "ボタン".toStringz;
  auto button = new_fl_button_with_label(b_left, b_top, b_width, b_height, b_title);

  button.fl_button_set_type(FL_NORMAL_BUTTON);
  button.fl_button_set_color(FL_WHITE);

  button.fl_button_set_callback((w, data) { "Button clicked.".writeln; });

  win.fl_window_end;
  win.fl_window_show;

  return fl_run();
}
