#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter the number ");
    scanf("%d",&n);
    while(i<=n)
    {
         printf("%d ",2*i);
         i++;
    }
    return 0;
}