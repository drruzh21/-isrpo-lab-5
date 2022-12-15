add_executable(${PROJECT_NAME} main.cpp ../lib/calculator.cpp ../lib/calculator.h)

target_link_libraries(${PROJECT_NAME} PRIVATE calculator)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})