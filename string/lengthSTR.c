#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int len;
    printf("enter your name");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';// because fgets print together new line
    for(len=0;str[len];len++);
    printf("length of the %s is %d",str,len);
    return 0;


}