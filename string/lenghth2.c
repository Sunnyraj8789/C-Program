#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i;
    printf("enter your name");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++);
    //str[i-1]='\0';
    //for(i=0;str[i];i++);


    printf("length of %s is %d",str,i);
    return 0;
}