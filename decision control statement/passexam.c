#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    printf("enter the marks of the 5 subject");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    if(m1>=33 && m2>=33 && m3>=33 && m4>=33 && m5>=33 )
    {
        printf("pass");

    }
    else
       printf("fail");
       return 0;
    
}