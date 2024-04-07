#include<stdio.h>
int main()
{
    int a,b,i;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    for(i=a<b?a:b;i>=1;i--)
    {
        if(a%i==0&&b%i==0)
       {
            if(i==1)
            {
        printf("co-prime number");
        break;
        }
        else
        {
        printf("no");
        break;
        }
       }

    
    }

    return 0;
}