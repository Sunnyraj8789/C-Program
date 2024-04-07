#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[50],ch;
    printf("enter the string");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    fflush(stdin);
    printf("enter thhe chracter");
    scanf("%c",&ch);
    for(i=0;str[i];i++)
    if(ch==str[i])
    break;
    if(str[i]==0)
    printf("%c is not found in %s ",ch,str);
    else
    printf("%c is found in %s at %d index ",ch,str,i);
    return 0;
}
    
