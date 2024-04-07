#Include<stdio.h>
int is_number_contains_digit(int num, int digit);
int main()
{
   int n;
   printf("enter the no");
   scanf("%d",&n);
   is_number_contains_digit(num,digit);
   return 0;

}



int is_number_contains_digit(int num, int digit)
{
    while(num)
    {
        if(num%10==digit)
            return 1;
        num/=10;
    }
    return 0;

}
