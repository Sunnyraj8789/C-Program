#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[50],s[50];
    printf("enter the string");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++)
    s[i]=str[i];
  s[i]='\0';
    printf("%s",s);
    return 0;






}