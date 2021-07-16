#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {

	char ary[100];
	int i, j, sum;

	scanf("%s", ary); 
	sum = strlen(ary);



	for (j = 0; j < strlen(ary); j++) {

		
		if ((ary[j] == 'l' || ary[j] == 'n') && ary[j + 1] == 'j') {
			sum--;
		}
		if (ary[j] == 'd' && ary[j+1] == 'z' && ary[j + 2] == '=') {
			sum--;
		}
		if (ary[j] == '=' || ary[j] == '-') {
			sum--;
		}
	}
	printf("%d", sum);

	return 0;
	
}