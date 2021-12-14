
#define MOD 1000000000

#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <math.h>
#include <utility>
#include<cstdio>
using namespace std;

int a[2][12];

int main() {
	int n, ans = 9;

	scanf_s("%d", &n);

	for (int i = 2; i < 11; i++)
		a[1][i] = 1;

	for (int i = 2; i <= n; i++) {
		ans = 0;
		for (int j = 1; i < 11; j++) {
			a[i % 2][j] = (a[(i - 1) % 2][j - 1] + a[(i - 1) % 2][j + 1]) % MOD;
		}
	}
	printf("%d", ans);


	return 0;
}