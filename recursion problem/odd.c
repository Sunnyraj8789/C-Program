#include<stdio.h>
void print_odd_n(int n);
int main()
{
      print_odd_n(5);
}
void print_odd_n(int n)
{
    if(n>0)
    {
        print_odd_n(n-1);
        printf("%d ",2*n-1);
    }
}