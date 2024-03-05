#include<stdio.h>

int main()
{
	int a, b, c;
	int large = 0;
	int small = 0;
	int mid = 0;

	printf("please input three figures:");
	scanf_s("%d,%d,%d", &a, &b, &c);	
	int sum = a + b + c;
	large = ((a > b ? a : b) > c ? (a > b ? a : b) : c);
	small = ((a < b ? a : b) < c ? (a < b ? a : b) : c);
	mid = sum - large - small;
	printf("from small to large:%d<%d<%d", small, mid, large);
	return 0;
}