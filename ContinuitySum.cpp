#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <math.h>
#include <utility>
#include<cstdio>
using namespace std;

int main() {
	int n, i;
	int ans = 0;

	scanf_s("%d", &n);
	int arr[n];
	int dp[n];

	for (i = 0; i < n; i++)
		scanf_s("%d", &arr[i]);

	dp[0] = arr[0];
	ans = dp[0];

	for (i = 1; i < n; i++) {
		dp[i] = max(dp[i - 1] + arr[i], arr[i]);
		ans = max(ans, dp[i]);
	}
	printf("%d", ans);
	return 0;
}