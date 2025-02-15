cmake_minimum_required(VERSION 3.16)

project(TaskManager VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets Sql Core)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

qt_add_executable(TaskManager
    MANUAL_FINALIZATION
    ${PROJECT_SOURCES}
    task.h
    task.cpp
    taskmanager.h
    taskmanager.cpp
    user.h
    user.cpp
    admin.h
    admin.cpp

)

target_link_libraries(TaskManager PRIVATE Qt6::Widgets Qt6::Sql Qt6::Core)

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
