cmake_minimum_required(VERSION 3.10.0)

project(DECODER-ENCODER)

add_executable(DecoderEncoder main.cpp ./src/AES.cpp ./src/Encrypt.cpp ./src/BinaryDecoder.cpp ./src/BinaryEncoder.cpp ./src/Decrypt.cpp)

target_include_directories(DecoderEncoder PRIVATE ${CMAKE_SOURCE_DIR}/include)