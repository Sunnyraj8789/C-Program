#include<stdio.h>
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%100)
    {
        // non centuary year
      if(year%4)
      {
        printf("non leap year");
      }
      else
      {

        printf("leap year");

      }
      

    }
    else
    {
        // centuary year
        if(year%400)
        {
        printf("non leap year");
        }
        else 
        {
            printf("leap year");
        }
    }
    return 0;
}