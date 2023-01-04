#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int a(int n)
{
	if (n == 1)
		return 1;
	else if (n < 5)
		return 2 * a(n - 1);
	else
		return a(n - 1) - 2;
}
int main()
{
	int input = 0;
	long int end = 0;
	int mid = 0;
	int i = 0;
	scanf("%d", &input);
	for (i = input; i > 0; i--)
	{
		mid = a(i);
		end += mid;
	}
	printf("\nS20=%ld", end);

	return 0;
}