#include<stdio.h>
#include<string.h>
void input(char s[][20],int n);
int vowels_count(char str[]);
void sort(char city[][20],int n);
void f3();

int main()
{
    f3();

    return 0;
}

void input(char s[][20],int n)
{
    int i;
    printf("enter the %d string",n);
    for(i=0;i<n;i++)
    {
    fgets(s[i],20,stdin);
    s[i][strlen(s[i])-1]='\0';
    }

}

int vowels_count(char str[])
{

    int i,j,count=0;
    char v[]={"aeiouAEIOU"};
    for(i=0;str[i];i++)
        for(j=0;v[j];j++)
                if(str[i]==v[j])
                {
                    count++;
                    break;
                }
                return count;
}

void f3()
{
    int i;
    char city[10][20];
    input(city,10);
    for(i=0;i<=9;i++)
    printf("%s\n",city[i]);
    sort(city,10);
    for(i=0;i<=9;i++)
    printf("\n%s",city[i]);

     
}

void sort(char city[][20],int n)
{
    int r,i;
    char temp[20];
    for(r=1;r<n;r++)
    {
        for(i=0;i<n-1-r;i++)
        {
            if(strcmp(city[i],city[i+1])>0)
            {
                strcpy(temp,city[i]);
                strcpy(city[i],city[i+1]);
                strcpy(city[i+1],temp);


            }
        }
    }

}


void f4()
{
    char str[]="mysirg education private limited";
    char w[5][20];
    
}