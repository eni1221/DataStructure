#include <iostream>
#include <stdio.h>
using namespace std;
int main() {


	int n,a;
	int max = -100;
	int min = 1000;

	scanf("%d", &n);// cin >> n;

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);// cin >> a;
		if (a > max) {
			max = a;
		}
		if (a < min) {
			min = a;
		}
	}
	//cout << min << " " << max << endl;
	printf("%d %d", min, max);
}