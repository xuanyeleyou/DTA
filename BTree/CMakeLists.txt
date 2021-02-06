cmake_minimum_required(VERSION 3.17)
project(BTree)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(BTree
        BTNode.h
        BTree.h
        BTree_implementation.h
        BTree_insert.h
        BTree_remove.h
        BTree_search.h
        BTree_solveOverflow.h
        BTree_solveUnderflow.h
        BTree_Test.h
        main.cpp)
