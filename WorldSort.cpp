#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

bool compare(string a, string b) {
	if (a.size() == b.size()) {
		return a < b;//askicode
	}
	else {
		return a.size() < b.size();
	}
}

int main() {

	vector <string> a;
	string temp;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string word;
		cin >> word;
		a.push_back(word);

	}

	sort(a.begin(), a.end(), compare);

	for (int i = 0; i < N; i++) {
		if (temp == a[i])continue;
		cout << a[i] << endl;
		temp = a[i];
	}
	return 0;
}