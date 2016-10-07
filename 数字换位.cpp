#include<stdio.h>

int main()
{
	int a, b, m;
	scanf("%d%d", &a, &b);
	m = a;
	a = b;
	b = m;
	printf("%d,%d\n", a, b);
	
	return 0;
}
