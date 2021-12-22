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
#define endl "\n";
#define MAX 10010

int N;
int Arr[MAX];
int DP[MAX];

int Max(int A, int B) {
	if (A > B)return A; 
	return B;
}
void Input() {
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> Arr[i];
}
void Solution()
{
	DP[1] = Arr[1];
	DP[2] = DP[1] + Arr[2];
	for (int i = 3; i <= N; i++) {
		DP[i] = Max(DP[i - 3] + Arr[i - 1] + Arr[i], DP[i - 2] + Arr[i]);
		DP[i] = Max(DP[i - 1], DP[i]);
	}
	cout << DP[N] << endl;
}

void Solve() {
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






