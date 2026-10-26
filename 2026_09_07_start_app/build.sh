MAIN=main.cpp
APP=example
BUILD_DIR=build

mkdir -p "$BUILD_DIR"

if [ -f "$BUILD_DIR/$APP" ]; then
    rm "$BUILD_DIR/$APP"
fi

g++ "$MAIN" -o "$BUILD_DIR/$APP"

"./$BUILD_DIR/$APP"
