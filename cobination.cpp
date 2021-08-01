#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int solution(int k, int m) {
	int answer = -1;
	vector<int> n;

	answer = 0;
	for (int i = 1; i <= k; i++) {
		n.push_back(i);
	}
	do {
		string hi;
		for (int i = 0; i < n.size(); i++) {
			cout << n[i];
		}
		
	} while (next_permutation(n.begin(), n.end()));


	return answer;
}



int main() {

	
	int a = 5, b = 1;
	cout << solution(a, b);

	return 0;
}