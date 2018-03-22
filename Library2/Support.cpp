
#include <memory>
#include "Support.h"
#include "../Library1/Hello.h"

std::string Support::get_support() {

    auto helloHandler = std::make_unique<Hello>();
    auto helloStr = helloHandler->get_hello();

    return "Support til " + helloStr;
}
