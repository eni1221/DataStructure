#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	int N;
	scanf("%d",&N);
	//int sum[N] = { 0, };
	int* ary = new int[N];

	for (int i = 0; i < N; i++) {
		//cin >> ary[i];
		scanf("%d", &ary[i]);
		
	}

	
	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			if (ary[i] > ary[j]) {
				int tmp = ary[i];
				ary[i] = ary[j];
				ary[j] = tmp;
			}
		}
	}
	

	for (int j = 0; j < N; j++) {
		printf("%d", ary[j]);
		printf("\n");
	}

	delete[] ary;


	return 0;
}