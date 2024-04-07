#include<stdio.h>
int greatest(int a[],int size);
int main()
{
    greatest(a[10]={5,2,8,9,7,9,5,8,4,5},18)
    printf("print greaatest is %d",max);
    

}

int greatest(int a[10],int size)
{
    int max,i;
    max=a[0];
    for(i=1;i<=9;i++)
      if(a[i]>max)
        max=a[i];
        return max;
}