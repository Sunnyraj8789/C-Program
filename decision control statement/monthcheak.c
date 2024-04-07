#include<stdio.h>
int main()
{
    int m;
    printf("enter the month number");
    scanf("%d",&m);
    if(m==1 ||m==3 ||m==5 ||m==7 ||m==8 ||m==10 ||m==12)
    printf("%d month is 31 days ",m);
    else if(m==4 ||m==6 ||m==9||m==11)
    printf("%d month is 30 days",m);
    else 
     printf("%d month is 28 and 29 days",m);
     return 0;

}