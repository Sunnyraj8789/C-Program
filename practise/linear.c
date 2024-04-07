#include<stdio.h>
int main()
{
int a[50],n,loc,item,i,flag=0;
printf("enter the no. of elements in an array \n");
scanf("%d",&n);
printf("enter the elements of an array: \n");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the item to be searched: \n");
scanf("%d",&item);
for(i=1;i<=n;i++)
{
if(a[i]==item)
{
flag=1;
break;
}
}
if(flag==1)
printf("element found at loc: %d",i);
else
printf("element is not found...");
return 0;
}
