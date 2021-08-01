#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int solution(int k, int m) {
	int answer = -1;
	vector<int> n;
	vector<int>y;
	answer = 0;
	for (int i = 1; i <= k; i++) {
		n.push_back(i);
	}
	do {
		string hi;
		for (int i = 0; i < n.size(); i++) {
			string r = to_string(n[i]);
			hi.append(r);
		}
		y.push_back(stoi(hi));
	} while (next_permutation(n.begin(), n.end()));

	

	return answer;
}



int main() {

	
	int a = 5, b = 1;
	cout << solution(a, b);

	return 0;
}