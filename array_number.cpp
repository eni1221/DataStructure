#include <stdio.h>
int main() {

	int a, b, c;
	int sum;
	int x;
	int n[10]{ 0, };
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	sum = a * b * c;

	for(int i=0;sum>0;i++) 
	{
		x = sum % 10;
		n[x]++;
		sum = sum / 10;

	}
	for (int i = 0; i < 10; i++) {
		printf("%d \n", n[i]);
	}
}