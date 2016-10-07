#include<stdio.h>

int main()
{
	// 如果n为奇数，n = 3n + 1;
	// 如果n不为技术 n = n / 2;
	// 到 n = 1时,求变换的次数 
	int n, count;
	scanf("%d", &n); 
	while(n > 1){
		if(n%2!=0){//奇数 
			n = 3*n + 1; 
		}else{
			n = n / 2;
		}
		count++;
	}
	printf("%d", count);
	
	return 0;
}
