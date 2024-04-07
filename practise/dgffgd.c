#include<stdio.h>
int main()
{
    int a[10],s=0,i;
    float avg;
    printf("enter the 10 number");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    s=s+a[i];
    avg=s/10.0;
    printf("sum of 10 number is %d\n\n",s);
    printf("avg number is %.1f",avg);
    return 0;
}