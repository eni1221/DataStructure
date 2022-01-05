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
	ios::sync_with_stdio(false);
	int n;
	cin >> n;

	vector<int>arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int dp[1001];
	fill_n(dp, 1001, 1);
	int sol = 1;
	for (int i = 0; i < n; ++i)
	{
		int code = arr[i];
		for (int j = 0; j < i; ++j)
		{
			int value = arr[j];
			if (code > value) {
				dp[i] = max(dp[i], dp[j] + 1);
			}

		}
		sol = max(sol, dp[i]);
	}
	cout << sol << "\n";
	return 0;
}