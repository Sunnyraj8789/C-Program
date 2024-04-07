#include<stdio.h>
int main()
{
    int i,sum=0,a[10];
    printf("enter the 10 number");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum of number is %d",sum);
    return 0;
}