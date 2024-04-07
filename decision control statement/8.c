#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the  two number");
    scanf("%d%d",&a,&b);
    //a>=b?printf("%d",a):printf("%d",b);  or,
    printf("%d",a>=b?a:b);
    return 0;
}
// use conditional operator print greater value