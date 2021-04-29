cmake_minimum_required(VERSION 3.5)

project(testGi LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# QtCreator supports the following variables for Android, which are identical to qmake Android variables.
# Check http://doc.qt.io/qt-5/deployment-android.html for more information.
# They need to be set before the find_package(Qt5 ...) call.

#if(ANDROID)
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
#    if (ANDROID_ABI STREQUAL "armeabi-v7a")
#        set(ANDROID_EXTRA_LIBS
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libcrypto.so
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libssl.so)
#    endif()
#endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

if(ANDROID)
  add_library(testGi SHARED
    ../Source\ Files/main.cpp
    ./Source\ Files/hFunc.cpp
    ./Source\ Files/math_lib.cpp
    ./Source\ Files/mainwindow.cpp
    ./Header\ Files/mainwindow.h
    ./Header\ Files/hfunc_lib.h
    ./Header\ Files/math_lib.h
    ./res.qrc
  )
else()
  add_executable(testGi
      ./Source\ Files/main.cpp
      ./Source\ Files/hFunc.cpp
      ./Source\ Files/math_lib.cpp
      ./Source\ Files/mainwindow.cpp
      ./Header\ Files/mainwindow.h
      ./Header\ Files/hfunc_lib.h
      ./Header\ Files/math_lib.h
      ./mainwindow.ui
      ./res.qrc
  )
endif()

target_link_libraries(testGi PRIVATE Qt5::Widgets)
