﻿#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <utility>
using namespace std;

const int MAX = 100000000 + 1;

int N;
int number[12], Operator[4];
int maxResult = -MAX, minResult = MAX;

void DFS(int plus, int minus, int multiply, int divide, int cnt, int sum)
{
	if (cnt == N)
	{
		maxResult = max(maxResult, sum);
		minResult = min(minResult, sum);
	}
	if (plus > 0)
		DFS(plus - 1, minus, multiply, divide, cnt + 1, sum + number[cnt]);
	if (minus > 0)
		DFS(plus, minus - 1, multiply, divide, cnt + 1, sum - number[cnt]);
	if (multiply > 0)
		DFS(plus, minus, multiply - 1, divide, cnt + 1, sum * number[cnt]);
	if (divide > 0)
		DFS(plus, minus, multiply, divide - 1, cnt + 1, sum / number[cnt]);
}


int main() {

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> number[i];
	for (int i = 0; i < 4; i++)
		cin >> Operator[i];


	DFS(Operator[0], Operator[1], Operator[2], Operator[3], 1, number[0]);
	
	cout << maxResult << endl;
	cout << minResult << endl;






	return 0;
}