#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice,n,s=1,i=1,N=0;
    float a;
    while(1)
    {
    printf("1.  Factorial of the number\n");
    printf("2.  cheak even Number\n");
    printf("3.  Area of circle\n");
    printf("4.  Sum of N natural number\n");
    printf("5.  Exit\n");
    printf("\n\nenter the choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
               printf("enter the number\n");
               scanf("%d",&n);
               while(n)
               {
                s=s*n;
                n--;
               }
                printf("factorial of %d\n",s);

               break;
        case 2:
               printf("enter the number\n");
               scanf("%d",&n);
               if(n%2==0)
               {
               printf("even\n");
               break;
               }
               else
               printf("odd\n");
               break;

        case 3:
               printf("enter the radius\n");
               scanf("%d",&n);
               a=3.14*n*n;
               printf("area of circle is %f\n",a);
               break;
        case 4:
               printf("enter the number\n");
               scanf("%d",&n);
               while(i<=n)
               {
                  N=N+i;
                  i++;
               }
               printf("sum of natural number is %d\n",N);
               break;
        case 5:
               exit(0);
        default:
                printf("invalid\n");

                
    }
    }
    return 0;

}