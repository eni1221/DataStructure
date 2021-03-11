#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {
	int N, tmp;
	int num[1024] = { 0, };

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &num[i]);

	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++)
		{
			if (num[i] < num[j]) {
				tmp = num[i];

				for (int k = i; k >= j; k--) {
					num[k] = num[k - 1];

				}
				num[j] = tmp;
				break;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d\n", num[i]);

	}
	return 0;
}