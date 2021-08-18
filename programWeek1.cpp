#include<stdio.h>

int main() {
	int a, b, c;
	printf(" Enter your num : ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b && a > c)
	{
		printf("maximum value is : %d", a);
	}
	else if (b > a && b > c)
	{
		printf("maximum value is %d", b);
	}
	else if (c > b && c > a)
	{
		printf("maximum value is %d", c);
	}
	return 0;
}