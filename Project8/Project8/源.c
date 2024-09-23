#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	int a, b, c, d;
	a = num % 10;
	b = num / 10 % 10;
	c = num / 100 % 10;
	d = a * 100 + b * 10 + c;
	printf("%d\n", d);
	return 0;
}