#include<stdio.h>
#include<math.h>
struct time diffrence(struct time t1,struct time t2);

struct time
{
    int hr,min,sec;

};



struct time diffrence(struct time t1,struct time t2)
{
    struct time temp;
    int seconds=abs((t1.hr*3600+t1.min*60+t1.sec)-(t2.hr*3600+t2.min*60+t2.sec));
    temp.hr=seconds/3600;
    seconds=seconds%3600;
    temp.min=seconds/6;
    temp.sec=seconds%60;
    return temp;
}

int main()
{
    
}