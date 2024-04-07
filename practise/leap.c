#include<stdio.h>
int main()
{
    int y;
    printf("enter the year");
    scanf("%d",&y);
    if(y%100)
    {
        //non century
        if(y%4)
        {
            printf("non leap year");
        }
        else
        printf("leap year");

    
    }
    else

    {
        //centuary year
        if(y%400)
        {
            printf("non leap year");

        }
        else
        {
            printf("leap yar");
        }

    }
    return 0;
    
}