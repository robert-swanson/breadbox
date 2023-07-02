cmake_minimum_required(VERSION 3.25)
project(Breadbox
        LANGUAGES CXX)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)

find_package(pigpio REQUIRED)

include_directories(
        ${pigpio_INCLUDE_DIR}
)

#add_dependencies(${PROJECT_NAME} pigpio)

#target_link_libraries(
#        ${PROJECT_NAME}
#        ${pigpio_LIBRARIES}
#)


add_executable(test_alu pizero/test/testALU.cpp)
add_dependencies(test_alu pigpio)

add_executable(sim vm/builder.cpp vm/unit/clock/Clock.cpp vm/unit/clock/Clock.h vm/unit/clock/clock_listener.h)