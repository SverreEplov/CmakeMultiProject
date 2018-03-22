add_executable (helloDemo HelloWorld.cpp HelloWorld.h)

target_link_libraries (helloDemo LINK_PUBLIC Hello Support)