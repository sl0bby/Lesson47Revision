#include "logic.h"

void initialize_array(int* array, int size, int minVal, int maxVal) {
    for (int i = 0; i < size; i++) {
        int num;
        num = rand() % (maxVal - minVal + 1);

        array[i] = num;
    }
}
int calculate_sum_of_elements(int* array, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}


int find_count_of_nonzero_elements(int* array, int size) {
    int count = 1;
    for (int i = 1; i < size; i++) {
        if (array[i] > 0) {
            count++;
        }
    }
    return count;
}
double calculate_arithmetic_mean(int* array, int size) {
    double sum = calculate_sum_of_elements(array, size);
    double count = find_count_of_nonzero_elements(array, size);
    return sum / count;
}