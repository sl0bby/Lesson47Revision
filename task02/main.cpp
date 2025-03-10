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

	randomArray(array, size, max, min);

	string msg = " ";
	for (int i = 0; i < size; i++)
	{
		msg += to_string(array[i]) + " ";
	}
	cout << msg;
	double sum = findSum(array, size);
	double count = nonZeroElements(array, size);
	double arethmetical = arethmeticMean(array, size);

	cout << "Sum of elements: " << sum << endl;
	cout << "Non zero elements: " << count << endl;
	cout << "Arethmetical Mean without zero numbers: " << arethmetical << endl;
	
	delete[] array;

	return 0;
}