#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i;
    printf("enter the string");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++)
    if(str[i]>='a'&&str[i]<='z')
    str[i]=str[i]-32;
    printf("updated string is %s",str);
    return 0;

}
