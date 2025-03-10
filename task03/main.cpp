#include "logic.h"

int main() {
    int size;
    int minVal;
    int maxVal;
    cout << "input size of array: ";
    cin >> size;
    cout << "input range of elements: ";
    cin >> minVal >> maxVal;


    int* array = new int[size];


    initialize_array(array, size, minVal, maxVal);

    cout << "Array: ";
    string msg = "";
    for (int i = 0; i < size; i++)
    {
        msg += to_string(array[i]) + " ";
    }
    cout << msg;


    int minIndex = find_min_index(array, size);
    int maxIndex = find_max_index(array, size);
    cout << "min index: " << minIndex << endl << "max index:" << maxIndex << endl;

    double arithmetic_mean = calculate_arithmetic_mean(array, size);
    cout << "arithmetic mean: " << arithmetic_mean;
    delete[] array;

    return 0;
}
