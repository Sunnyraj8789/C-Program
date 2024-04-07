#include<stdio.h>
int main()
{
    int k;
    k=fact(10);
    printf("%d",k);
    return 0;

}
int fact(int n)
{
    int s;
    if(n==0)
    return 1;
    s=n*fact(n-1);
    return s;

}