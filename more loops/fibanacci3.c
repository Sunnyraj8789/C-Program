#include<stdio.h>
int main()
{
    int n,a=-1,b=1,i,c;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;;i++)
    {
        c=a+b;
        if(c==n)
        {
            printf("%d is fibonacci series",n);
            break;
        }
        if(c>n)
        {
            printf("not  a fibanacci series");
            break;
        }
        a=b;
        b=c;

    }   
    return 0;
}