cmake_minimum_required(VERSION 3.10)
project(Adaptive_Huffman)

set(CMAKE_CXX_STANDARD 11)

add_executable(Adaptive_Huffman main.cpp AHuffmanCompressor.cpp AHuffmanCompressor.h AHuffmanDeCompressor.cpp AHuffmanDeCompressor.h Node.cpp Node.h)