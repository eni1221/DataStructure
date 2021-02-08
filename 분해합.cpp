#include <stdio.h>
#include <iostream>

using namespace std;

int N;

int finder(void) {

	int creator = 1;

	while (1)
	{
		int copy = creator;
		int sum = creator;

		while (copy)
		{
			sum += copy % 10;
			copy /= 10;
		}

		if (creator == N || sum == N)
			break;

		creator++;
	}
	return creator;
}

int main(void) 
{
	
	cin >> N;

	int result = finder();

	if (result == N)
		cout << result << endl;

	else
		cout << result << endl;
	
	return 0;

}		







