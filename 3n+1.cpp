#include<stdio.h>

int main()
{
	// ���nΪ������n = 3n + 1;
	// ���n��Ϊ���� n = n / 2;
	// �� n = 1ʱ,��任�Ĵ��� 
	int n, count;
	scanf("%d", &n); 
	while(n > 1){
		if(n%2!=0){//���� 
			n = 3*n + 1; 
		}else{
			n = n / 2;
		}
		count++;
	}
	printf("%d", count);
	
	return 0;
}
