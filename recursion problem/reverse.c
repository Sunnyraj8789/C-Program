#include<stdio.h>
void reverse_n(int n);
int main()
{
    reverse_n(3572);
return 0;
}

void reverse_n(int n)
{
    if(n>0)
    {
        printf("%d ",n%10);
        reverse_n(n/10);

    }
}