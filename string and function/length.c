#include<stdio.h>
#include<string.h>
char* reverse(char str[]);
int length(char str[]);
int main()
{
    printf("%s",reverse("sunny"));
    return 0;
}

int length(char str[])
{
    int l;
    for(l=0;str[l];l++);
    
    return l;

}

char* reverse(char str[])
{
    int l,i;
    char ch;
    l=length(str);
    for(i=0;str[i];i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }
    return str;

}