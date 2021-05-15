#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
using namespace std;


int main() {
	string s;
	int num = 0;
	int pos;
	getline(cin, s);
	if (!s.empty()) {
		if (s.front() == ' ')
			s.erase(s.begin());
		if (!s.empty()) {
			if (s.back() == ' ')
				s.erase(s.end() - 1);
			pos = s.find(' ');
			while (pos != s.npos) {
				num++;
				pos = s.find(' ', pos + 1);
			}
			num++;
		}
	}
	cout << num << "\n";
	return 0;
}

//int main() {
//
//	char str[100001];
//	int spaceNum = 0;
//	int wordNum = 0;
//	int len;
//
//	gets_s(str);
//	len = strlen(str);
//
//	for (int i = 0; i < len; i++) {
//		if (str[i] == ' ')
//			spaceNum++;
//	}
//	wordNum = spaceNum + 1;
//	if (isspace(str[0]))
//		wordNum--;
//	if (isspace(str[len - 1]))
//		wordNum--;
//	printf("%d", wordNum);
//	
//	return 0;
//}