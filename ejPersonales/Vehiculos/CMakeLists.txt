cmake_minimum_required(VERSION 3.25)
project(Vehiculos)

set(CMAKE_CXX_STANDARD 23)

add_executable(Vehiculos main.cpp lib/Person/location.h lib/Person/person.h lib/Vehicle/vehicle.h lib/Person/date.h lib/Vehicle/car.h lib/Vehicle/truck.h)
