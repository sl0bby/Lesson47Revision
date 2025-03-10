#include "logic.h"

void initialize_array(int* array, int size, int minVal, int maxVal) {
    for (int i = 0; i < size; i++) {
        int num;
        num = rand() % (maxVal - minVal + 1);

        array[i] = num;
    }
}
int find_min_index(int* array, int size) {
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (array[i] < array[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}


int find_max_index(int* array, int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (array[i] > array[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}
int find_sum(int* array, int size) {
    int minIndex = find_min_index(array, size);
    int maxIndex = find_max_index(array, size);
    int sum = 0;
    for (int i = minIndex; i < maxIndex; i++)
    {
        sum += array[i];
    }
    return sum;
}