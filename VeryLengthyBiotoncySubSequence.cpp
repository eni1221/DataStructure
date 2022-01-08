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

#define endl "\n"
#define MAX 1001

int N;
int Arr[MAX];
int dp[MAX];
int r_dp[MAX];

void Input()
{
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> Arr[i];
	}
}
void Solution()
{
	for (int i = 1; i <= N; i++)
	{
		dp[i] = 1;
		for (int j = 1; j <= i; j++)
		{
			if (Arr[j] < Arr[i] && dp[i] < dp[j] + 1)
			{
				dp[i] = dp[j] + 1;
			}
		}
	}
	for (int i = N; i >= 1; i--)
	{
		r_dp[i] = 1;
		for (int j = N; j >= i; j--)
		{
			if (Arr[i] > Arr[j] && r_dp[j] + 1 > r_dp[i])
				r_dp[i] = r_dp[j] + 1;
		}
	}
	int Answer = 0;
	for (int i = 0; i <= N; i++)
	{
		if (Answer < dp[i] + r_dp[i] - 1)Answer = dp[i] + r_dp[i] - 1;
	}
	cout << Answer << endl;
}

void Solve()
{
	Input();
	Solution();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return 0;
}