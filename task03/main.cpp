#include "logic.h"
#include "util.h"

int main() {
	srand(time(0));



	int* array = new int[] {12, 4, 5, 7, 15, 4, 10, 17, 23, 7};


	for (int i = 0; i < 10; i++) {
		cout << *(array + i) << " ";
	}

	cout << "\n\n" << "Avg of non-extreme elements: " << get_avg_of_non_extreme_elems(array, /*size*/10);
	delete[] array;
	return 0;
}