#include<stdio.h>
void D_to_octal(int n);
int main()
{
    D_to_octal(25);
return 0;
}

void D_to_octal(int n)
{
    if(n>0)
    {
        D_to_octal(n/8);
        printf("%d ",n%8);

    }
}