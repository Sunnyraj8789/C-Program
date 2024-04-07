// without using arethematic operator and third variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two number");
    scanf("%d%d",&a,&b);
    (a^=b);
    (b^=a);
    (a^=b);

     
     
     printf("%d %d",a,b);
     
     return 0;
}