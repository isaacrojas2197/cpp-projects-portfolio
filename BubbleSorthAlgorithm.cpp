#include "BubbleSortAlgorithm.h"

float* CreateFloatArray(int size) {
    return new float[size];
}

void BubbleSortDescending(float* array, int size) {
    bool swap;
    float temp;

    do {
        swap = false;
        for (int count = 0; count < (size - 1); count++) {
            if (array[count] < array[count + 1]) {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}

double Median(float* array, int size) {
    if (size % 2 == 0) {
        // If even number of elements, return the average of the middle two elements
        return static_cast<double>(array[size / 2 - 1] + array[size / 2]) / 2.0;
    } else {
        // If odd number of elements, return the middle element
        return static_cast<double>(array[size / 2]);
    }
}

