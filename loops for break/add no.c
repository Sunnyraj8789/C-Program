#include<stdio.h>
int main()
{
    int x,s=0;
    printf("enter the number ");
    while(1)
    {
        scanf("%d",&x);
        if(x==0)
        break;
        s=s+x;
    }
    printf("sum if %d",s);
    return 0;
}