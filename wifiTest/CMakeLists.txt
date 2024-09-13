cmake_minimum_required(VERSION 3.0)

project(wifiTestProject)

# Set the SystemC include and library directories
set(SYSTEMC_INCLUDE_DIR $ENV{SYSTEMC_HOME}/include)
set(SYSTEMC_LIBRARY_DIR $ENV{SYSTEMC_HOME}/lib)

# Add the executable
add_executable(wifiTest_systemC WifiTest.cpp)

# Link against SystemC
target_include_directories(wifiTest_systemC PRIVATE ${SYSTEMC_INCLUDE_DIR})
target_link_libraries(wifiTest_systemC ${SYSTEMC_LIBRARY_DIR}/libsystemc.so)
