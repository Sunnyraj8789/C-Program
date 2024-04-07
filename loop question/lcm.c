#include<stdio.h>
int main()
{
    int a,b,l;
    printf("enter the two number");
    scanf("%d%d",&a,&b);
    for(l=a<b?a:b;l<=a*b;l++)
    if(l%a==0&&l%b==0)
    {
        printf("L.C.M. is %d",l);
         break;
    }
    return 0;
    

}