#include<stdio.h>
#include<string.h>
char* reverse(char str[]);
int length(char str[]);
int compare(char s1[],char s[2]);
int count_vowels(char str[]);
int main()
{
    printf("%d",count_vowels("Suniou"));
    return 0;
}


int is_alpha_numeric(char str[])
{
   int i,digit=0,numeric=0;
   for(i=0;str[i];i++)
   {
    if(str[i]>='0'&&str[i]<=9)
    digit=1;
    if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
    alpha=1;
   }
if(digit&alpha)
return 1;
else
return 0;


}





void swap_character(char str[],int index1,int index2)
{
    int l=length(str);
    char ch;
    if(index1>=0||index2<=0)
    if(index1>=l||index2<=l)
    printf("swapping not possible");
    else
    ch=str[index1];
    str[index1]=str[index2];
    str[index2]=ch;


}





int find(char str[],char ch)
{
    int i;
    for(i=0;str[i];i++)
    return i;
}
return -1;

int find(char str[], char ch,int start_index,int end_index)
{
    int l=length(str);
    int i;
    if(end_index>l)
    end_index=l;
    if(start_index>=l)
    return -1;
    for(i=start_index;i<end_index;i++)
    if(ch==str[i])
    return i;
    return -1;
}
int count_vowels(char str[])
{
    int i,count=0,j;
    char v[]="aeiouAEIOU";
    for(i=0;str[i];i++)
    for(j=0;v[j];j++)
    if(str[i]==v[j])

    {
    count++;
    break;
    }
    return count;
}

char* uppercase(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
    if(str[i]>='a'&&str[i]<='z')
    str[i]-=32;
    }
    return str;




}


char* lowercase(char str[])
{
    
    int i;
    for(i=0;str[i];i++)
    {
    if(str[i]>='A'&&str[i]<='Z')
    str[i]+=32;
    }
    return str;
    



}

int length(char str[])
{
    int l;
    for(l=0;str[l];l++);
    
    return l;

}

char* reverse(char str[])
{
    int l,i;
    char ch;
    l=length(str);
    for(i=0;i<l/2;i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }
    return str;

}

int compare(char s1[],char s2[])
{
    int i;
    for(i=0;s1[i]&&s2[i];i++)
    if(s1[i]!=s2[i])
    break;
    return s1[i]-s2[i];

}