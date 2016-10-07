#include<stdio.h>

int main()
{
	// 总数n, 总腿数m. m = a*2 + b*4  n = a + b;
	int n , m , a, b;
	scanf("%d%d", &n, &m);
	a = (4*n - m)/2;
	b = n - a;
	if(m % 2 == 1 || a < 0 || b < 0){
		printf("No answer\n");
	}else{
		printf("%d,%d", a, b);
	}
	
	return 0;
}
