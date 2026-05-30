import std;
import fltk;

auto main() {

  auto win_width = 640;
  auto win_height = 480;
  auto win_left = (fl_w - win_width) / 2;
  auto win_top = (fl_h - win_height) / 2;
  auto win_title = "My FLTK Window".toStringz;
  auto win = new_fl_window(win_left, win_top, win_width, win_height, win_title);

  win.fl_window_show;

  return fl_run();
}
