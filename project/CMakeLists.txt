cmake_minimum_required(VERSION 3.2)

project(CRat)

set(CRat_src main.cpp Autotest.cpp CRat.cpp CRat0.cpp CRat1.cpp)
set(CRat_hdr main.h Autotest.h CRat.h CRat0.h CRat1.h Factory.h)

add_executable(${PROJECT_NAME} ${CRat_src} ${CRat_hdr})