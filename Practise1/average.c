#include<stdio.h>
int main()
{
    int a,b,c;
    float avg;
printf("enter three numbers");
scanf("%d%d%d",&a,&b,&c);
avg=(a+b+c)/3.0; //real divide by real result is real therefore 
printf("average of %f",avg);
return 0;

}