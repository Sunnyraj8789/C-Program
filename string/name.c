#include<stdio.h>
int main()
{
    char str[20];
    
    printf("enter your name");
    fgets(str,6,stdin);
    //gets(str);
    printf("%s",str);
    return 0;
}