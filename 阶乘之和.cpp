#include<stdio.h>

int main()
{
	// s = 1 + 2! + 3! + ... + n! µÄÄ©6Î» n < 10^6 
	int n, s = 0;
	scanf("%d", &n);
	for(int i =1; i <= n; i++){
		int factorial = 1;
		for(int j = 1; j <= i; j++){
			factorial *= j;
		}
		s += factorial;
		printf("%d\n", s);
	}
	printf("%d\n", s % 1000000);
	return 0;									
}
