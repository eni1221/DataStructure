#include <stdio.h>
#include <iostream>

#include <string>
using namespace std;

int main(void) {
	
	string ch;
	int alpha[26] = { 0, }; //char to ok!
	
	int result = 0,dial;
	cin >> ch;

	for (char e : ch) {
		alpha[e - 'A']++;
	}

	for (int i = 0; i <= 'Z' - 'A'; i++) {
		
	
		if (i == 'V' - 'A' || i == 'S' - 'A') {
			result +=( i / 3 + 2)*alpha[i];
			continue;
		}

		if (alpha[i]) {
			dial = i / 3 + 3;
			if (dial > 9) {
				result += 10 * alpha[i];
			}
			else {
				result += dial * alpha[i];
			}
		}
		
	}
	cout << result << endl;
	return 0;

	
}