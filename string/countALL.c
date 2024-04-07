#include<stdio.h>
#include<string.h>
int main()
{
    int i,alpha_count=0,digit_count=0,other_count=0;
    char str[50];
    printf("enter the string");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++)
    {
        switch(str[i])
        {
             case 'a' ... 'z':
             case 'A' ... 'Z':
             alpha_count++;
             break;

             case '0' ... '9':
             digit_count++;
             break;
             default:
             other_count++;

        }
    }
    printf("alphabet is %d\n",alpha_count);
    printf("digit is %d\n",digit_count);
    printf("special character is %d",other_count);
       
        
    return 0;


}