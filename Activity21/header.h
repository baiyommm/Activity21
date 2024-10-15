#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <memory>

namespace ProgramFunctions {
    // Header function to fill array with input
    void fillArray(std::unique_ptr<int[]>& numbers, int size);

    // Header function to calculate the sum
    int printSum(const std::unique_ptr<int[]>& numbers, int size);
}

#endif
