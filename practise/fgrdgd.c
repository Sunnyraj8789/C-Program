#include<stdio.h>
 int sum(int n);
int main()
{
    int k;

   k=sum(5);
    
    printf("%d",k);
return 0;
}
 int sum(int n)
 {
    int s;
    
  
    if(n==1)
    return 1;
    s= n+sum(n-1);
    return (s);
 }