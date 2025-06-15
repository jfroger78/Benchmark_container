#include <list>

#include "constant.h"

int main(int argc, char *argv[])
{
    std::list<int> test;
    for(int index = 0; index < NUMBER_OF_ELEMENTS; index++)
    {
        test.push_back(index);
    }
    return 0;
}