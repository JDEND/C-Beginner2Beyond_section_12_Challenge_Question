#include <iostream>


using std::cin;
using std::cout;
using std::endl;

void print(const int* list, int list_size);
int* apply_all(const int* array1, const int array1_size, const int* array2, const int array2_size);

int main() {
	const size_t array1_size{ 5 };
	const size_t array2_size{ 3 };

	int array1[]{1,2,3,4,5};
	int array2[]{ 10,20,30 };

	cout << "Array 1: ";
	print(array1, array1_size);

	cout << "Array 2: ";
	print(array2, array2_size);

	int* results = apply_all(array1, array1_size, array2, array2_size);
	int results_size = array1_size * array2_size;
	
	cout << "Result: ";
	print(results, results_size);

	return 0;
}

void print(const int *list, int list_size) {
	for (int i = 0; i < list_size; i++)
		cout << list[i] << " ";

	cout << endl;
}

int* apply_all(const int *array1,const int array1_size,const int *array2,const int array2_size) {
	int* temp{};

	temp = new int[array1_size * array2_size];

	int k = 0;

	for (int i = 0; i < array2_size; i++)
		for (int j = 0; j < array1_size; j++) {
			temp[k] = array1[j] * array2[i];
			k++;
		};
			
	return temp;
}
