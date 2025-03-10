#include "logic.h"


int findMinIndex(int* array, int size) {
	int minIndex = array[0];

	for (int i = 0; i < size; i++)
	{
		if (array[i] < minIndex) {
			minIndex = array[i];
		}
	}
	return minIndex;
}

int findMaxIndex(int* array, int size) {
	int maxIndex = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] > maxIndex) {
			maxIndex = array[i];
		}
	}
	return maxIndex;
}

int findSum(int* array, int size) {
	int min = findMinIndex(array, size);
	int max = findMaxIndex(array, size);

	int sum = 0;
	for (int i = min; i < max; i++)
	{
		sum += array[i];
	}
	return sum;
}

