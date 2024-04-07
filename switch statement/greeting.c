#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
                printf("Good");
                break;
        case 2:
                printf("Better");
                break;
        case 3:
                printf("best");
                break;
            
        default: 
                printf("invalid");
    }
    return 0;

}