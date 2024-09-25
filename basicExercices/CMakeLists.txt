# Versión mínima de CMake requerida
cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(MiProyecto VERSION 1.0)

# Usar el estándar C++11 (puedes cambiarlo si necesitas otra versión)
set(CMAKE_CXX_STANDARD 11)

# Configuración para Windows
if (WIN32)
    message(STATUS "Configuring for Windows...")
    add_definitions(-DPLATFORM_WINDOWS)  # Define una macro para detectar la plataforma
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")  # Ajustar las flags para MSVC
endif()

# Configuración para macOS
if (APPLE)
    message(STATUS "Configuring for macOS...")
    add_definitions(-DPLATFORM_MACOS)  # Define una macro para detectar la plataforma
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")  # Flags para GCC o Clang en macOS
endif()

# Añadir el ejecutable
add_executable(programa src/main.cpp)
