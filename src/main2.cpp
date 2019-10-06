#include "task2.h"

template<class T>
T gen() {
	return 0;
}
int main() {
	const int n = 10;
	int* arr;
	arr = createArr<int, n>(gen);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";  
	}
	cout << endl;

	return 0;
}