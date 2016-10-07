#include <stdio.h>
void Div(int a, int b, int c)
{
     int k, i;
     printf("%d.",a/b);//输出整数部分跟小数点 
     k = a;
     for(i = 0; i < c-1; i++)
     {
           k = (k%b)*10;
           printf("%d", k/b);
     }
     k = (k%b)*10;
     if((k%b)*10/b >= 5)
           printf("%d", k/b + 1);
     else
           printf("%d", k/b);
}

int main()
{
      int a, b, c;
      scanf("%d%d%d", &a, &b, &c);
      Div(a, b, c);
}
