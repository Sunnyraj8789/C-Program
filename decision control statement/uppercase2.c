#include<stdio.h>
int main()
{
    char x;
    printf("enter the chracter");
    scanf("%c",&x);
    if(x>='a' && x<='z')
         printf("%c is lowercase",x);
         else if(x>='A' && x<='Z')
         printf("%c is uppercase",x);
         else if(x>=48 && x<=57)           // because 48 to 57 is ascii value is 0 to 9
         printf("%c is digit",x);
         else
         printf("special chracter");
return 0;
}
