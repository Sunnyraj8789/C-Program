#include<stdio.h>
int main()
{
    int p,r,t;
    float si;
    printf("enter the principle ,rate and time");
    scanf("%d%d%d",&p,&r,&t);
    si=p*r*t/100.0;
    printf("simple intrest is %f",si);
    return 0;
}