#include<stdio.h>
int main()
{
    int i,l=2,u=1000,x;
    //printf("enter the number");
    //scanf("%d",&n);
    for(x=l;x<=u;x++)
{

    for(i=2;i<=1000;i++)
        if(x%i==0)
        break;
        if(i==x)
        {
            printf("%d  ",x);
        }
        
}
    return 0;
}