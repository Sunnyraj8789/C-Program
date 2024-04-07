#include<stdio.h>
int main()
{
    int n,s=1;
    printf("enter the number");
    scanf("%d",&n);
    for(;n;n--)
    {
        s=s*n;
    }
    printf("factorial of %d",s);
    return 0;

}