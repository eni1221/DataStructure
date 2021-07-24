#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;

void hanoi(int n, int start, int to, int bypass) {
	if (n == 1)
		printf("%d %d\n", start, to);
	else {
		hanoi(n - 1, start, bypass, to);
		printf("%d %d\n", start, to);
		hanoi(n - 1, bypass, to, start);
	}
}

int main() {
	
	int n;
	cin >> n;
	cout << (1 << n) - 1 << "\n";
	hanoi(n, 1, 3, 2);
	


	
	return 0;
}