#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice,a,b,x,c;
    while(1)
    {
    printf("1.  L.C.M \n");
    printf("2.  digit sum\n");
    printf("3.  volume of cuboid\n");
    printf("4.  prime \n");
    printf("5.  Exit\n");
    printf("\n\nenter the choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
                printf("enter the two numbers\n");
                scanf("%d%d",&a,&b);
                for(x=a>b?a:b;x<=a*b;x++)
                if(x%a==0&&x%b==0)
                {
                    printf("l.c.m is %d\n",x);
                    break;
                }
               
        case 2:
                printf("enter the numbers\n");
                scanf("%d",&a);
                b=0;
                while(a)
                {
                    b=b+a%10;
                    a/=10;

                }
                printf("sum of %d\n",b);
                break;

                
               
        case 3:
               printf("enter the length breadth and height(L,B,H)\n");
               scanf("%d%d%d",&a,&b,&c);
               printf("volume of %d\n",a*b*c);
               break;

        case 4:
                 printf("enter the number\n");
                 scanf("%d",&a);
        for(b=2;b<a;b++)
            if(a%b==0)
            break;
            if(a==b)
                printf("%d is prime number\n",a);
            else
                printf("%d is not prime number\n",a);
                break;

              
        case 5:
               exit(0);
        default:
                printf("invalid choice\n");

                
    
    }
    }
    return 0;

}