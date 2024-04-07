#include<stdio.h>
int main()
{
    int i,a[10],min;
    printf("enter the 10 number");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    min=a[0];
    for(i=1;i<=9;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    printf("smaller number is %d",min);
    return 0;


}