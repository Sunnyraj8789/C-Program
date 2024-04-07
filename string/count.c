#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],ch;
    int i,count;
    printf("enter the string");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    fflush(stdin);
    printf("enter the chracter");
    scanf("%c",&ch);
    for(i=0,count=0;str[i];i++)
      if(ch==str[i])
      count++;
      printf("%d",count);
      return 0;
}