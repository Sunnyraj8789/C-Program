#include<stdio.h>
int main()
{
    int l,b,h,volume;
    printf("enter the length ,breadth and hight");
    scanf("%d%d%d",&l,&b,&h);
    volume=l*b*h;
    printf("volume of a cuboid is %d",volume);
    return 0;

}