#include "logic.h"

void initialize_array(int* array, int size, int minVal, int maxVal) {
    for (int i = 0; i < size; i++) {
        int num;
        num = rand() % (maxVal - minVal + 1);

        array[i] = num;
    }
}

int find_min_index(int* array, int size) {
    int minIndex = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < minIndex) {
            minIndex = array[i];
        }
    }
    return minIndex;
}

int find_max_index(int* array, int size) {
    int maxIndex = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > maxIndex) {
            maxIndex = array[i];
        }
    }
    return maxIndex;
}

int calculate_sum_of_nonExtremal_elements(int* array, int size) {
    int sum = 0;
    int minIndex = find_min_index(array, size);
    int maxIndex = find_max_index(array, size);
    for (int i = 0; i < size; i++)
    {
        if (array[i] != minIndex || array[i] != maxIndex)
        {
            sum += array[i];
        }

    }
    return sum;
}

double calculate_arithmetic_mean(int* array, int size) {
    double sum = calculate_sum_of_nonExtremal_elements(array, size);
    int count = size - 2;
    return sum / count;
}
