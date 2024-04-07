#include<stdio.h>
#include<stdlib.h>
int main()
{
    int month;
    printf("enter month number");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
        case 3:
        case 5:
         case 7:
        case 8:
        case 10:
                 printf("31 days\n");
                 break;
         case 4:
        case 6:
        case 9:
         case 11:
                  printf("30 days\n");
                  break;
        case 2:
                  printf("28 or 29 days\n");
                  break;
    
                
        default: 
                printf("invalid choice\n");
    }
    return 0;

}