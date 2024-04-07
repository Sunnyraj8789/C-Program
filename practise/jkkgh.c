#include<stdio.h>
void swap(int *p,int *q);
int main()
{
    int a,b;
    printf("enter the two number");
    scanf("%d%d",&a,&b);
    swap(&a,&b);

    printf("%d%d",a,b);
    return 0;

}

void swap(int *p,int *q)
{
    int c;
    c=*p;
    *p=*q;
    *q=c;
}