#include<stdio.h>

int main()
{
    char x;
   printf("enter the number\n");
    scanf("%c",&x);
    switch(x)
    {
        case 'a' ...'z':
        printf("lower case");
        break;
        case 'A' ... 'Z':
        printf("upper case");
        break;
        case 48 ...57:
        printf("digit");
        break;
        default:
        printf("special chracter");
    }
    return 0;
}

              