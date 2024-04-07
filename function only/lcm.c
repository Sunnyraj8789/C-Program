#include<stdio.h>
void pascal_triangle(int n);
int lcm(int a,int b);
int main()
{
    int n;
    printf("enter two number");
    scanf("%d",&n);
    pascal_triangle(n);
    
    return 0;
}
int lcm(int a,int b)
{
    int i;
    for(i=a>b?a:b;i<=a*b;i++)
    if(i%a==0&&i%b==0)
    printf("%d",i);
    return i;

}


int hcf(int a,int b)
{
    int h;
    for(h=a<b?a:b;h>=1;h--)
    if(a%h==0&&b%h==0)
    return h;

}


int prime(int a)
{
    int i;
    for(i=2;i<=n;i++)
    if(n%i==0)
    return 1;
}

int next_prime(int n)
{
    while(!is_prime(++n));
    return n;
}
  void print_prime(int n)
  {
    int x=2;
    while(n)
    {
        if(is_prime(x))
        {
            printf("%d",x);
            n--;

        }
        x++;
    }
  }


  void print_between(int a,int b)
  {
    int x;
    for(x=a;x<=b;x++)
    if(is_prime(x))
    printf("%d",x);

  }
    void fibonacci(int n)
    {
        int a=-1,b=+1,c;
        while(n)
        {
            c=a+b;
            printf("%d",c);
            a=b;
            b=c;
            n--;

        }
    }

    void pascal_triangle(int n)
    {
        int i,j,k,r;
        for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i&&j<=n-1+i)
            {
                if(k)
                    printf("%d",combi(i-1,r++));
                else
                    printf(" ");
                k=1-k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}







