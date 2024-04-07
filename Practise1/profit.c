#include<stdio.h>
int main()
{
    float cp,sp,profit;
    printf("enter the cost price and selling price of 12 banana");
    scanf("%f%f",&cp,&sp);
    profit=(sp-cp)*25/12;
    printf("profit is %0.2f",profit);
    return 0;
}