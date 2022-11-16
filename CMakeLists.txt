cmake_minimum_required(VERSION 3.16)
project(shaburger C)

set(CMAKE_C_STANDARD 99)

add_library(shaburger shaburger.c)

set_target_properties(shaburger PROPERTIES PUBLIC_HEADER shaburger.h)

include(GNUInstallDirs)

configure_file(shaburger.pc.in shaburger.pc @ONLY)

install(TARGETS shaburger
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

install(FILES ${CMAKE_BINARY_DIR}/shaburger.pc DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig)
