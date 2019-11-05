#pragma once

template<class T, const size_t n>
void map(T arr[], T(*change)(T)) {
	for (size_t i = 0; i < n; i++) {
		arr[i] = change(arr[i]);
	}
}