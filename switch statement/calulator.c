#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b;
while(1)
{
    printf("1. Addition\n");
    printf("2. substraction\n");
    printf("3. multiplication\n");
    printf("4. division\n");
    printf("5. exit\n");
    printf("enter the number");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
                printf("enter two number");
                scanf("%d%d",&a,&b);
                printf("sum is %d\n",a+b);
                break;
        case 2:
                printf("enter two number");
                scanf("%d%d",&a,&b);
                printf("substraction is %d\n",a-b);
                break;

                
        case 3:
                printf("enter two number");
                scanf("%d%d",&a,&b);
                printf("multiplication is %d\n",a*b);
                break;
                
        case 4:
                printf("enter two number");
                scanf("%d%d",&a,&b);
                printf("division  is %d\n",a/b);
                break;
        case 5:
              exit(0);
                
        default: 
                printf("invalid choice\n");

    }

}
    return 0;

}