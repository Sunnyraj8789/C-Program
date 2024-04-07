#include<stdio.h>

int main()
{
    char x;
   printf("enter the chracter\n");
    scanf("%c",&x);
    switch(x)
    {
        case 'a': case 'e': case 'i':case 'o':case 'u':
        case 'A': case 'E': case 'I':case 'O':case 'U':
       printf("vowel");
       break;
       case 'b' ...'d': case 'f' ...'h': case 'j' ...'n' : case 'p' ...'t': case 'v' ...'z':
       case 'B' ...'D': case 'F' ...'H': case 'J' ...'N' : case 'P' ...'T': case 'V' ...'Z':
       printf("consonent");
       break;
       default:
       printf("special chracter");

    }

    return 0;
}

              