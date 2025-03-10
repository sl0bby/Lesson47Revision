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
    int sum = find_sum(array, size);
    cout << "sum of elements between extreme elements: " << sum;

    cout << endl;


    delete[] array;

    return 0;
}