#include <iostream>
#include <memory>
#include "header.h"

using namespace std;
using namespace ProgramFunctions;

int main() {
    
    int size;

    // Numbers to input
    cout << "Total numbers for input: ";
    cin >> size;

    // Allocate memory for array using smart pointer
    unique_ptr<int[]> numbers(new int[size]);

    // Calls the function to fill the array
    ProgramFunctions::fillArray(numbers, size);

    // Calls the function to calculate & print the sum
    int sum = ProgramFunctions::printSum(numbers, size);
    cout << "\nThe sum of the array is: " << sum << endl;

    return 0;
}

