#include<stdio.h>
void D_to_binary(int n);
int main()
{
    D_to_binary(25);
return 0;
}

void D_to_binary(int n)
{
    if(n>0)
    {
        D_to_binary(n/2);
        printf("%d ",n%2);

    }
}