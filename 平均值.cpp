#include<stdio.h>

#define INF 1000000

int main()
{
	// ����һЩ������������ǵ���Сֵ�����ֵ��ƽ��ֵ 
	int a, n = 0, s = 0;
	int max = -INF;
	int min = INF;
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
