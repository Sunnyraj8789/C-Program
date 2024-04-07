#include<stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    a=a/10*10;
    printf("last digit of the number is %d",a);
    return 0;
}