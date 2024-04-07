#include<stdio.h>
int circle_area(int r);
int main()
{
    int r;
    float c;
   
    printf("enter the radius");
    scanf("%d",&r);
   c=circle_area(r);
    printf("%.2f",c);
   


    return 0;
}

int circle_area(int r)
{
      float a;
    a=3.14*r*r;
    return a;

}