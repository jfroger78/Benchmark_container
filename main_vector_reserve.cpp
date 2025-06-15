#include <vector>

#include "constant.h"

int main(int argc, char *argv[])
{
    std::vector<int> test;
    test.reserve(NUMBER_OF_ELEMENTS);
    for(int index = 0; index < NUMBER_OF_ELEMENTS; index++)
    {
        test.push_back(index);
    }
    return 0;
}