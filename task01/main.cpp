#include "logic.h"

int main() {
	int size;
	int min;
	int max;

	cout << "Input size of array: ";
	cin >> size;
	cout << "Input range of elements: ";
	cin >> min >> max;

	int* array = new int[size];

	int sum = findSum(array, size);

	cout << "Sum of elements: " << sum << endl;

	delete[] array;


}