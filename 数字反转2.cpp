#include<stdio.h>

int main()
{
	int n, m;
	scanf("%d", &n);
	m = (n%10)*100 + (n%100/10)*10 + (n/100);
	printf("%d\n", m);
	printf("%03d", m);//"%03d”：输出一个数值变量，不足3位在前面补0 
	
	return 0;
}
