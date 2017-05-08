cmake_minimum_required(VERSION 2.8.2)
project(InterfaceDtoC)

link_directories(./vendor/dlib/)
execute_process(COMMAND "cd ./vendor/dlib && dub init")

add_executable(InterfaceDtoC ./main.c)
target_link_libraries(InterfaceDtoC dlib phobos2 pthread)
