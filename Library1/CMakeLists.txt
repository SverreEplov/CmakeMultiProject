add_library (Hello SHARED Hello.cpp Hello.h)


target_include_directories (Hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})