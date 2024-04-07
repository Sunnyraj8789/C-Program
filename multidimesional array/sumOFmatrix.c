#include<stdio.h>
void f1();
int main()
{
    f1();
    return 0;

}
    void f1()
    {
    int a[3][3], b[3][3], c[3][3],i,j;
    printf("enter the number of first  matrix ");
     for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
    scanf("%d",&a[i][j]);

     printf("enter the number of second  matrix ");
     for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
    scanf("%d",&b[i][j]);


     for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
    c[i][j]=a[i][j]+b[i][j];

    printf("sum of two matrix is :\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        
        printf("%d ",c[i][j]);
        printf("\n");
    

    }


}
