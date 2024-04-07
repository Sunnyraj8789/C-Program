#include<stdio.h>
void swap(int a,int b);
int main()
{
    int a,b;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
    

}

void swap(int a,int b)
{
    int s;
    s=a;
    a=b;
    b=s;
  printf("%d%d",a,b);
    
}