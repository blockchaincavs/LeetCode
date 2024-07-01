cmake_minimum_required(VERSION 3.5)

project(BestTimeToBuyAndSellAStock_121 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(BestTimeToBuyAndSellAStock_121 main.cpp)

install(TARGETS BestTimeToBuyAndSellAStock_121
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
