project(Main)

set(LIB_1 calculator.cpp hellomir.cpp)

add_library(lib STATIC ${LIB_1})

add_executable(task2 main.cpp)

target_link_libraries(task2 lib)
