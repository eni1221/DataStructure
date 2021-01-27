#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main() {

	char S[21];
	char P[200];
	int R, T;
	int i, j;

	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%d %s", &R, S);

		for (j = 0; j < 21; j++) {
			for (int k = 0; k < R; k++) {
				P[R * j + k] = S[j];
			}
		}
		printf("%s\n", P);
	}
}