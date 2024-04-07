#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],v[]="aeiouAEIOU";
    int i,count,j;
    printf("enter the string");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(i=0,count=0;str[i];i++)
      for(j=0;v[j];j++)

        if(str[i]==v[j])
        {
            count++;
        }
        printf("count = %d",count);
        return 0;


}