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


    int minIndex = find_local_min(array, size);
    int maxIndex = find_local_max(array, size);
    cout << "count of min index: " << minIndex << endl << "count of max index:" << maxIndex << endl;


    delete[] array;

    return 0;
}