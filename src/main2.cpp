#include "task2.h"
int main() {

	const int n = 10;
	int* arr;
	arr = createArr<int, n>(gen);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";  
	}
	cout << endl;
	char** arr1;
	arr1 = createArr<char*, n>(gen);
	for (int i = 0; i < n; i++) {
		cout << arr1[i] << " ";
	}

	return 0;
}