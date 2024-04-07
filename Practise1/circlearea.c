#include<stdio.h>
int main()
{
    float a;
    int r;
    printf("enter the radius");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("area of circle is %.2f having radius is %d",a,r);

    return 0;

}