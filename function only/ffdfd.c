#include<stdio.h>
void printN(int n);
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printN(n);

}

void printN(int n)
{
    int i;
    for(i=1;i<=n;i++)
    printf("%d ",i);

}