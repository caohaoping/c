#include <iostream>
 
using namespace std;
 
int main()
{
	int c[4]={1,2,3,4};
	int *a[4]; //ָ������
	int (*b)[4]; //����ָ��
	b=&c;
	//������c��Ԫ�ظ�������a
	for(int i=0;i<4;i++)
	{
		a[i]=&c[i];
	}
	//������½��
	cout<<*a[1]<<endl; //���2�Ͷ�
	cout<<(*b)[2]<<endl; //���3�Ͷ�
	return 0;
}
