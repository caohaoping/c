#include<stdio.h>

int main()
{
	// ����һЩ������������ǵ���Сֵ�����ֵ��ƽ��ֵ 
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
