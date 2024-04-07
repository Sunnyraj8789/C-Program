//divisible by 3 and 2
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if(x%2 && x%3) // or if(x%7==0 || x%3==0) print 7 and 3 is divisible
    {
        printf(" is not divisible by 2 an 3");
    }
    else 
    {
        printf(" is divisible by 2 and 3");

    }
    return 0;


}