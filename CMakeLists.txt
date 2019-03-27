cmake_minimum_required(VERSION 2.6)
project(factory_pattern) 

# Targets 
add_executable(factory_pattern main.cpp pizzaStore.h) 

# Install 
install(TARGETS factory_pattern DESTINATION ./Install) 

