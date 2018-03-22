#include <Hello.h>
#include <iostream>
#include <memory>
#include "../Library2/Support.h"

int main(int argc, char* argv[])
{
    // Access Library1 - Hello
    auto helloHandler = std::make_unique<Hello>();
    auto helloStr = helloHandler->get_hello();

    std::cout << helloStr << "\n";


    // Access Library2 - Support
    auto supportHandler = std::make_unique<Support>();
    auto supportStr = supportHandler->get_support();

    std::cout << supportStr << "\n";

}