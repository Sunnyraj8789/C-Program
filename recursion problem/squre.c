#include<stdio.h>
void print_squre_n(int n);
int main()
{
    print_squre_n(5);

}
void print_squre_n(int n)
{
    if(n>0)
    {
        print_squre_n(n-1);
        printf("%d ",n*n);
    }
}