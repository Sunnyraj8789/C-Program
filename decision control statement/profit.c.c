#include<stdio.h>
int main()
{
    int sp,cp;
    float p,l;
    printf("enter the 'CP' and 'SP' price");
    scanf("%d%d",&cp,&sp);
    if(sp-cp>=0)
    {
        p=(sp-cp)/cp*100;
        printf("%f",p);
    }
    else
    {
        l=(cp-sp)/cp*100;
        printf("%f",l);
    }
    return 0;
}