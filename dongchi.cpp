#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	int x[50], y[50];

	int rank[50] = { 0, };
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &x[i], &y[i]);

	
	}

	int j = 0;
	while (1)
	{
		
		for (int k = 0; k < N; k++)
		{
	
			if (x[j] < x[k] && y[j] < y[k])
			{
				rank[j]++;
			}

		}
		j++;
		if (j == N) break;
	}

	for (int h = 0; h < N; h++)
	{
		printf("%d ", rank[h]+1);
	}

}