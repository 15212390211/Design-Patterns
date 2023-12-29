cmake_minimum_required(VERSION 3.5)

project(sample_factory)

############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(sample_factory client.cpp product.cpp)

