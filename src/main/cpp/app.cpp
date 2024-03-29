/*
 * This C++ source file was generated by the Gradle 'init' task.
 */

#include <iostream>
#include <stdlib.h>
#include "app.h"

std::string mst::Greeter::greeting() {
    return std::string("Hello, World!");
}

int main () {
    mst::Greeter greeter;
    std::cout << greeter.greeting() << std::endl;

    int count = 10;
    int& countRef = count;
    auto myAuto = countRef;

    countRef = 11;
    std::cout << count << std::endl;

    myAuto = 12;
    count = 13;
    int* sCount = &count;
    std::cout << count << std::endl;
    std::cout << sCount << std::endl;
    return 0;
}
