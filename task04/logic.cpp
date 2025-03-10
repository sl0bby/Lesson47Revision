#include "logic.h"

void initialize_array(int* array, int size, int minVal, int maxVal) {
    for (int i = 0; i < size; i++) {
        int num;
        num = rand() % (maxVal - minVal + 1);

        array[i] = num;
    }
}

int find_local_min(int* array, int size) {
    int count = 0;
    int minIndex = array[0];
    for (int i = 1; i < size - 1; i++) {
        if (array[i] < array[i - 1] && array[i] < array[i + 1]) {
            count++;
        }
    }
    return count;
}

int find_local_max(int* array, int size) {
    int count = 0;
    int maxIndex = array[0];
    for (int i = 1; i < size - 1; i++) {
        if (array[i] > array[i - 1] && array[i] > array[i + 1]) {
            count++;
        }
    }
    return count;
}