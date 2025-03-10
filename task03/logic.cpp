
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


double get_avg_of_non_extreme_elems(int* array, int size) {
	int max = findMaxIndex(array, size);
	int min = findMinIndex(array, size);

	int extremes = 0;
	double sum = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] == max || array[i] == min) {
			extremes++;
			continue;
		}
		sum += array[i];
	}

	return sum / (size - extremes);
}