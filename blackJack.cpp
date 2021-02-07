#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, M;
	int sum, max = 0;
	int num[100] = { 0, };

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}

	for (int h = 0; h < N; h++)
	{
		for (int k = h + 1; k < N; k++)
		{
			for (int t = k + 1; t < N; t++)
			{
				sum = num[h] + num[k] + num[t];
				if (sum > max && sum <= M)
					max = sum;
			}
		}
	}
	printf("%d\n", max);
	return 0;
}