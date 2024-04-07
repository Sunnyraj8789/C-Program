#include<stdio.h>
int main()
{
    int a;
    printf("enter the  number");
    scanf("%d",&a);
    a=a%10*100+a/10;
    printf("rotate number is %d",a);
     
     return 0;
}