#include<stdio.h>
int natural_sum(int n);
int odd_sum(int n);
int even_sum(int n);
int squre_sum(int n);
int digit_sum(int n);
int fact(int n);
int hcf(int a,int b);
void print_fib(int n);
int count_digit(int n);
float power(float x,float y);
int main()
{
    printf("%f",power(2,-3));
    return 0;

}
float power(float x,float y)
{
   if(y==0)
   return 1;
   if(y>0)
   return x*power(x,y-1);
   if(y<0)
   return power(x,y+1)/x;
}

int count_digit(int n)
{
   if(n==0)
   return 0;
   return count_digit(n/10)+1;
}
int fib(int n)
{
   if(n==1||n==0)
   return n;
   return fib(n-1)+fib(n-2);
}

void print_fib(int n)
{
   if(n==0)
   printf("%d",n);
   else
   print_fib(n-1);
   printf("%d ",fib(n));
}
int hcf(int a,int b)
{
   if(a>b)
   {
      if(a%b==0)
      return b;
      else 
      return hcf(a%b,b);
   
   }
   else
   {
      if(b%a==0)
      return a;
      else 
      return hcf(a,b%a);

   }
}  
int fact(int n)
{
   if(n==0)
   return 1;
   return n*fact(n-1);
}
int digit_sum(int n)
{
   int s;
   if(n==0)
   return 0;
   return digit_sum(n/10)+n%10;
}



int squre_sum(int n)
 {
    if(n==1)
    return 1;
    return n*n+squre_sum(n-1);

 }
int even_sum(int n)
 {
    if(n==1)
    return 2;
    return 2*n+even_sum(n-1);

 }
 int odd_sum(int n)
 {
    if(n==1)
    return 1;
    return 2*n-1+odd_sum(n-1);

 }
 int natural_sum(int n)
 {
    if(n==1)
    return 1;
    return natural_sum(n-1)+n;

 }