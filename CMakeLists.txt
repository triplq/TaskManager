cmake_minimum_required(VERSION 3.16)

project(TaskManager VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_VERBOSE_MAKEFILE ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets Sql Core)
find_package(OpenSSL REQUIRED)

set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    taskmanager.h
    taskmanager.cpp
)

qt_add_executable(TaskManager
    MANUAL_FINALIZATION
    ${PROJECT_SOURCES}
    hellopage.h hellopage.cpp hellopage.ui
    signinpage.h signinpage.cpp signinpage.ui
    adminpage.h adminpage.cpp adminpage.ui
    taskworkdialog.h taskworkdialog.cpp taskworkdialog.ui
    userpage.h userpage.cpp userpage.ui
    completedtaskspage.h completedtaskspage.cpp completedtaskspage.ui
    signuppage.h signuppage.cpp signuppage.ui

)

target_link_libraries(TaskManager PRIVATE Qt6::Widgets Qt6::Sql Qt6::Core)
target_link_libraries(TaskManager PRIVATE OpenSSL::SSL OpenSSL::Crypto)

set_target_properties(TaskManager PROPERTIES
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS TaskManager
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

qt_finalize_executable(TaskManager)
