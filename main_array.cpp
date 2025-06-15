#include <array>
#include <iostream>

#include "constant.h"

int main(int argc, char *argv[])
{
    std::array<int, NUMBER_OF_ELEMENTS> test;
    for(int index = 0; index < NUMBER_OF_ELEMENTS; index++)
    {
        test[index] = index;
    }
    return 0;
}