#include<stdio.h>
 
int main()
{
     
char c[][3] = {"��", "��", "��", "��", "��", "��"};    //��Ϊһ������ռ�������ֽ�
   char (*p)[3];
   int i;    p=c;    //��ָ�붨λ��c[0]
    for(i=0;i<=5;i++)
    {
        printf("%s, ", *(p+i));  //���߽�*(p+i)�滻��*p++
    }
    printf("\n");    
    for(i=5;i>=0;i--)
    {
        printf("%s,",*(p+i));    //���߽�*(p+i)�滻��*p--
    }
    return 0;
}
