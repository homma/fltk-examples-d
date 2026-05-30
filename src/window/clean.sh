#!/bin/sh -x

rm fltk_window_d
rm src/fltk.h
rm src/fltk.o

dub clean

rm dub.sdl
