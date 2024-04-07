#include<stdio.h>
#include<stdlib.h>
int main()
{
    int days;
    printf("enter month number");
    scanf("%d",&days);
    switch(days)
    {
        case 1:
                printf(" Enjoy Holiday");
                break;
        case 2:
                printf("monday is begenning ");
                break;
        case 3:
                printf("jai bajrang bali");
                break;
        case 4:
                printf("jio ji bhar ke");
                break;
        case 5:
                printf("Today is the big day");
                break;
        case 6:
                printf("jumma mubarak ho");
                break;
        case 7:
                printf("Enjoy day"); 
                break;       
        default: 
                printf("invalid choice\n");
    }
    return 0;

}