#include<stdio.h>
int main()
{
    int i,sum_even=0,sum_odd=0,a[10];
    float avg_even,avg_odd;
    printf("enter the 10 number");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
       
        sum_even=sum_even+a[i];
    
      
        
        else
        sum_odd=sum_odd+a[i];
    }
    printf("\nsum of all even is %d",sum_even);
    printf("\nsum all odd number is %d",sum_odd);
    return 0;
}