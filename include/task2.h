#pragma once

template<class T, const size_t n>
T* createArr(T (*gen)()) {
	T* arr = (T*)malloc(sizeof(T*) * n);
	for (size_t i = 0; i < n; i++) {
		arr[i] = gen();
	}
	return arr;
}