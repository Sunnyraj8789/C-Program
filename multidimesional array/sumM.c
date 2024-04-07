#include<stdio.h>
void sum_of_matrices();
int main()
{
    sum_of_matrices();
    return 0;
}
void sum_of_matrices()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("enter the 1st matrix");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
        scanf("%d",&a[i][j]);

        printf("enter the 2nd matrix");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
        scanf("%d",&b[i][j]);

        for(i=0;i<=2;i++)
           for(j=0;j<=2;j++)
           c[i][j]=a[i][j]+b[i][j];



    for(i=0;i<=2;i++)
    {

        for(j=0;j<=2;j++)
        printf("%d ",c[i][j]);
        printf("\n");

    }

    



}