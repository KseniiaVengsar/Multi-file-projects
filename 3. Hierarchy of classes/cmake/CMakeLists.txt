cmake_minimum_required(VERSION 3.22.0)
project(classes)
# Добавляем пути к исходным файлам
add_executable(second_cmake
    src/main.cpp
    src/Hierarchy of classes.cpp
    src/Equilateral_triangle.cpp
    src/Figure.cpp
    src/Isosceles_triangle.cpp
    src/Parallelogram.cpp
    src/Quadrangle.cpp
    src/Rectangle.cpp
    src/Rhombus.cpp
    src/Right_triangle.cpp
    src/Square.cpp
    src/Triangle.cpp
)

# Добавляем пути к заголовочным файлам
target_include_directories(second_cmake
    PUBLIC include
)

# Добавляем путь к .h в команду add_executable
target_sources(second_cmake
    include/Equilateral_triangle.h
     include/Figure.h
     include/Isosceles_triangle.h
     include/Parallelogram.h
     include/Quadrangle.h
     include/Rectangle.h
     include/Rhombus.h
     include/Right_triangle.h
    include/Square.h
     include/Triangle.h
)
