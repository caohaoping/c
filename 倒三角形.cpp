#include<stdio.h>
int main()
{
    int n,i,j;
    while(scanf("%d",&n) != EOF)
    for(i=1;i<=n;i++) //�е�ѭ��
    {
        for(j=1;j<=2*n-i;j++) //��i������2n-i���ַ����γɡ����Ρ�������
        {
            if(j<i) printf(" "); //�ѡ����Ρ����ÿ�е�ǰ������j���ո񣬵�һ��0�����ڶ���1��...�Դ�����
            else printf("#"); //���ಿ������"#"
        }
        printf("\n");
    }
}
