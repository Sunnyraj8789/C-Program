// #include<stdio.h>
// int main()
// {
//     int c,l,b;
//     printf("enter the length and breadth");
//     scanf("%d%d",&l,&b);
//     c=l*b;
//     printf("area of rectangle of %d and %d is %d",l,b,c);
//     return 0;

// }

#include<stdio.h>

int main()
{
    FILE *fptr;
    char str[80];
    fptr = fopen("f1.dat", "w");
    if(fptr == NULL)
        printf("Cannot open file");
    else
    {
        while(strlen(gets(str))>0)
        {
            fputs(str, fptr);
            fputs("\n", fptr);
        }
        fclose(fptr);
    }
    return 0;
}