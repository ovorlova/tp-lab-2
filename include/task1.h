#pragma once
#include <string.h>
#include <queue>

template<class T> 
static bool cmp(T a, T b){
	return a < b;
}
template<> 
bool cmp< char*>( char* a,  char* b)
{
	return strlen(a) < strlen(b);
}
template<class T>
void msort(T* arr, int left, int right) {
	if (left >= right)
		return;
	int middle = (left + right) / 2;
	msort(arr, left, middle);
	msort(arr, middle + 1, right);
	std::queue <T> q1;
	std::queue <T> q2;

	for (int i = left; i <= middle; i++) {
		q1.push(arr[i]);
	}
	for (int i = middle + 1; i <= right; i++) {
		q2.push(arr[i]);
	}

	int i = left;
	while (!(q1.empty() || q2.empty())) {
		if (cmp(q1.front(), q2.front())) {
			arr[i] = q1.front();
			q1.pop();
		}
		else {
			arr[i] = q2.front();
			q2.pop();
		}
		i++;
	}

	while (!q1.empty()) {
		arr[i] = q1.front();
		q1.pop();
		i++;
	}

	while (!q2.empty()) {
		arr[i] = q2.front();
		q2.pop();
		i++;
	}
}

template<class T>
void msort(T* arr, int n) {
	msort(arr, 0, n - 1);
}