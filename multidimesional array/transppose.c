#include<stdio.h>
int main()
{
    int i,j,a[3][3],k,temp;
    printf("enter the number matrix ");
    for(i=0;i<=2;i++)
       for(j=0;j<=2;j++)
      scanf("%d",&a[i][j]);
 
 for(i=0,j=1,k=1;k<=3;k++)
 {
    temp=a[i][j];
    a[i][j]=a[j][i];
    a[j][i]=temp;
    if(j-i==1)
    j++;
    else
    i++;
 }
       for(i=0;i<=2;i++)
       {
            for(j=0;j<=2;j++)
        printf("%d ",a[i][j]);
        printf("\n");
       }

      
    
      return 0;

}