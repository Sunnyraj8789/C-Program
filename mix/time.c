#include<stdio.h>
#include<time.h>
void showTime();
int main()
{
    showTime();
}


void showTime()
{
    time_t s;
    struct tm *currenttime;
    s=time(NULL);
    currenttime=localtime(&s);
    printf("%02d:%02d:%02d",currenttime->tm_hour,currenttime->tm_min,currenttime->tm_sec);
    
}