#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {

	char str[100001];
	int spaceNum = 0;
	int wordNum = 0;
	int len;

	scanf("%s", &str);
	len = strlen(str);

	for (int i = 0; i < len; i++) {
		if (str[i] == ' ')
			spaceNum++;
	}
	wordNum = spaceNum + 1;
	if (isspace(str[0]))
		wordNum--;

	
	return 0;
}