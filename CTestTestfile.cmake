# CMake generated Testfile for 
# Source directory: D:/dev/cpp/lyrium
# Build directory: D:/dev/cpp/lyrium
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(Lyrium "ctest")
set_tests_properties(Lyrium PROPERTIES WORKING_DIRECTORY "cmake-build-debug/test")
subdirs("src")
subdirs("test")
