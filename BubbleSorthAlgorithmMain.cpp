#include <iostream>
#include "BubbleSortAlgorithm.h"

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    float* array = CreateFloatArray(size);

    std::cout << "Enter " << size << " float numbers: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    // Sort the array in descending order
    BubbleSortDescending(array, size);

    // Calculate the median
    double median = Median(array, size);

    std::cout << "Median: " << median << std::endl;

    delete[] array;

    return 0;
}

