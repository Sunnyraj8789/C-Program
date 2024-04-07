#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter the two number");
    scanf("%d%d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("%d \n %d",x,y);

        return 0;
}