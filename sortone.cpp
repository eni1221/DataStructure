

#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

	int N , temp;
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];

	}

	for (int j = 0; j < N - 1; j++) {
		for (int k = j + 1; k < N; k++) {
			if (arr[j] > arr[k]) {
				temp = arr[k];
				arr[k] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int h = 0; h < N; h++) {
		if (h + 1 < N && arr[h] == arr[h + 1])
			continue;
		cout << arr[h] << endl;
	}

	return 0;
}