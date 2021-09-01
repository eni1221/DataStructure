#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {

	string str;
	cin >> str;
	sort(str.begin(), str.end(), greater<char>());
	cout << str;







	return 0;
}