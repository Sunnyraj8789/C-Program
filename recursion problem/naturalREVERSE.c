#include<stdio.h>
void reverse_n(int n);
int main()
{
    reverse_n(5);
}
void reverse_n(int n)
{
    if(n>0)
    {
        printf("%d\n",n);
        reverse_n(n-1);

    }
}