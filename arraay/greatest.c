#include<stdio.h>
int main()
{
    int i,a[10],max;
    printf("enter the 10 number");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<=9;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("greatest number is %d",max);
    return 0;


}