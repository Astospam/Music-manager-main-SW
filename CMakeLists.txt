cmake_minimum_required(VERSION 3.16.3)
project(teste VERSION 0.1 LANGUAGES CXX )

include_directories( include )


add_executable( program
                src/application/TestApplication.cpp
                src/entities/Music.cpp 
                src/entities/Playlist.cpp
                src/entities/SystemMusics.cpp
                src/entities/SystemPlaylists.cpp)