#include<stdio.h>

int main()
{
	// 输入一些整数，求出它们的最小值、最大值、平均值 
	int a, n = 0, min, max, s = 0;
	double average;
	while(scanf("%d", &a) == 1) {
		s += a;
		if(a < min) min = a;
		if(a > max) max = a;
		n++;
	}
	average = (double)s/n;
	printf("%d %d %.3lf", min, max, average);
	
	return 0;
} 
