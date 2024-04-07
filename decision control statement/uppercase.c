#include<stdio.h>
int main()
{
    char x;
    printf("enter the chracter");
    scanf("%c",&x);
    if(x>='a' && x<='z')
    printf("lower case");
    else
    {
        if(x>='A' && x<='Z')
        printf("upper case");
        else
        printf("not alphabet");

    }
    return 0;
    


}