cmake_minimum_required(VERSION 3.14)
project(dummy_backend LANGUAGES CXX)

find_package(genai_interfaces REQUIRED)

add_executable(dummy_backend
    src/dummy_text2text_pipeline.cpp
    main.cpp
)

target_include_directories(dummy_backend PRIVATE include)
target_link_libraries(dummy_backend PRIVATE genai_interfaces::genai_interfaces)
