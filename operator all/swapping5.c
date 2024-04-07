//without using a single line arithematic expression
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two number");
    scanf("%d%d",&a,&b);
    b=a+b-(a=b);

     
     
     printf("%d %d",a,b);
     
     return 0;
}