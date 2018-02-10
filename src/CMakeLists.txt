add_executable(lyrium main.cpp)
add_library(liblyrium Lyrium.cpp UserInterface.cpp)

target_link_libraries(lyrium liblyrium)