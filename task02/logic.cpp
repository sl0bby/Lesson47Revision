#include "logic.h"


void randomArray(int* array, int size, int max, int min) {
	int num = 0;
	for (int i = 0; i < size; i++)
	{
		num = rand() % (max - min + 1);
		array[i] = num;
	}

}
int findSum(int* array, int size) {

	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}
	return sum;
}

int nonZeroElements(int* array, int size) {
	int count = 0;

	for (int i = 1; i < size; i++)
	{
		if (array[i] > 0) {
			count++;
		}
	}
	return count;
}

int arethmeticMean(int* array, int size) {
	double sum = findSum(array, size);
	double count = nonZeroElements(array, size);
	return sum / count;
}