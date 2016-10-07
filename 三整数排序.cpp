#include<stdio.h>

int main()
{
	int a, b, c, x, y, z;
	scanf("%d%d%d", &a, &b, &c);
	//1.找到最小值 
	x = a; if(b < x) x = b; if(c < x) x = c;
	//2.找到最大值
	z = a; if(b > z) z = b; if(c > z) z = c;
	//3.求出中间值 
	y = a + b + c - x - z;
	printf("%d %d %d", x, y, z);
	
	return 0; 
}
