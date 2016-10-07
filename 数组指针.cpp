#include<stdio.h>
 
int main()
{
     
char c[][3] = {"哥", "哥", "我", "岸", "上", "走"};    //因为一个汉字占用两个字节
   char (*p)[3];
   int i;    p=c;    //将指针定位于c[0]
    for(i=0;i<=5;i++)
    {
        printf("%s, ", *(p+i));  //或者将*(p+i)替换成*p++
    }
    printf("\n");    
    for(i=5;i>=0;i--)
    {
        printf("%s,",*(p+i));    //或者将*(p+i)替换成*p--
    }
    return 0;
}
