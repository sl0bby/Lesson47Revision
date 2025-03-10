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
    int sum = calculate_sum_of_elements(array, size);
    cout << "sum of elements : " << sum << endl;

    int count = find_count_of_nonzero_elements(array, size);
    cout << "count of non-zero elements: " << count << endl;

    double arithmetical = calculate_arithmetic_mean(array, size);
    cout << "The arithmetic mean of the non-zero elements of the vector is " <<
        arithmetical << endl;
    delete[] array;

    return 0;
}
