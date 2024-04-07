#include<stdio.h>
void print_even_reverse_n(int n);
int main()
{
      print_even_reverse_n(5);
      return 0;
}
void print_even_reverse_n(int n)
{
    if(n>0)
    {
        
        printf("%d  ",2*n);
        print_even_reverse_n(n-1);
    }
}