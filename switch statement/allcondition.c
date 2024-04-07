#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice,a,b,c;
    printf("1. cheak wheather a given set of three numbers are length of an isosceles triangle or not\n");
    printf("2. cheak wheather a given set of three numbers are length of sides of right angled triangle or not\n");
    printf("3. heak wheather a given set of three numbers are equalateral triangle or not\n");
    printf("4. exit\n");
    while(1)
    {
    printf("enter the choice");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
               printf("enter the length of the sides of the trisngle\n");
               scanf("%d%d%d",&a,&b,&c);
               if(a+b>c&&a+c>b&&b+c>a)
               {
               if(a==b||a==c||b==c)
               {
               printf("is an iscocellus triangle\n");
               break;
               }
               else
               {
               printf("not an issocellus triangle\n");
               break;
               }
               }
               else
               printf("not a valid triangle\n");
                break;
        case 2:
               printf("enter the length of the sides of the trisngle\n");
               scanf("%d%d%d",&a,&b,&c);
               if(a+b>c&&a+c>b&&b+c>a)
               {
               if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
               {
               printf("right angled triangle\n");
               break;
               }
               else
               {
                   printf("\nnot right angle triangle\n");
                   break;
               }
               }
                 else 
                 printf("not a valid triangle\n");  
                   break;



        case 3:
                printf("enter the length of the sides of the trisngle\n");
               scanf("%d%d%d",&a,&b,&c);
               if(a+b>c&&a+c>b&&b+c>a)
               {
               if(a==b&&a==c)
               {
               printf("\nequlateral triangle\n");
               break;
               }
               else
               {
               printf("\nnot equalateral\n");
               break;
               }
               }
               else
               printf("not a valid trainagle\n");
               
               break;

        case 4: 
                  exit(0);
            default:
                  printf("\nwrong choice\n");
    }
    }
    return 0;

}