#include<stdio.h>
int main()
{
    int i,r,a[10],s;
    printf("enter the 10 number");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(r=1;r<=9;r++)
      for(i=0;i<=9-r;i++)
      {
        if(a[i]>a[i+1])
        {
            s=a[i];
            a[i]=a[i+1];
            a[i+1]=s;

        }
      }
        printf("\n\n");
        for(i=0;i<=9;i++)
        printf("%d  ",a[i]);

      
      return 0;

}