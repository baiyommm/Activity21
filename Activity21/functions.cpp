#include "header.h"
#include <iostream>

using namespace std;

namespace ProgramFunctions {

    // Fill the array with input (using smart pointer)
    void fillArray(unique_ptr<int[]>& numbers, int size) {
        cout << "Enter " << size << " numbers:" << endl;
        for (int i = 0; i < size; i++) {
            cout << "Number " << (i+1) << ": ";
            cin >> numbers[i];
        }
    }

    // Calculate the sum of the array (using smart pointer)
    int printSum(const unique_ptr<int[]>& numbers, int size) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += numbers[i];
        }
        return sum;
    }

}
