#!/bin/sh -x

## generate fltk.h

grep '^//|' src/fltk.cpp | sed 's/^\/\/\| *//' > src/fltk.h

## compile

FLTK_INC="-I$(brew --prefix fltk)/include"
FLTK_OPT="${FLTK_INC}"

c++ -c src/fltk.cpp -o src/fltk.o -std=c++2c ${FLTK_OPT}

## generate dub.sdl

# name of the compiled file
TARGET_NAME="fltk_window_d"

# create an executable
TARGET_TYPE="executable"

# main source files
MAIN_SRC_FILE="src/main.d"

# objects to link
SRC_FILES="src/fltk.o"

# system libraries to link
LIBS='"fltk" "stdc++"'

# ldc2 linker flags
FLTK_LIB="-L$(brew --prefix fltk)/lib"
D_LFLAGS=${FLTK_LIB}

# ImportC search path
C_IMPORT_PATHS="src"

# dub.sdl
cat <<EOF >dub.sdl

name "${TARGET_NAME}"
targetType "${TARGET_TYPE}"
mainSourceFile "${MAIN_SRC_FILE}"
sourceFiles "${SRC_FILES}"
libs ${LIBS}
lflags "${D_LFLAGS}"
cImportPaths "${C_IMPORT_PATHS}"

EOF

## build

dub clean
dub build
