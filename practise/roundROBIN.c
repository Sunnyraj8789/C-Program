#include<stdio.h>
 
int main()
{
      int i, n, total = 0, x, counter = 0, tq;
      int wt = 0, tat = 0, at[10], bt[10], temp[10];
      float awt, atat;
      printf("nEnter Total Number of Processes:\n");
      scanf("%d", &n);
      x=n;
      for(i=0;i<n;i++)
      
      {
            printf("nEnter Details of Process[%d]\n", i + 1);
 
            printf("Arrival Time:");
 
            scanf("%d", &at[i]);
 
            printf("Burst Time:");
 
            scanf("%d", &bt[i]);
 
            temp[i] = bt[i];
      }
 
      printf("Enter Time Quantum\n");
      scanf("%d", &tq);
      printf("nProcess ID  Burst Time Turnaround Time  Waiting Time");
      for(total = 0, i = 0; x != 0;)
      {
            if(temp[i] <= tq && temp[i] > 0)
            {
                  total = total + temp[i];
                  temp[i] = 0;
                  counter = 1;
            }
            else if(temp[i] > 0)
            {
                  temp[i] = temp[i] - tq;
                  total = total + tq;
            }
            if(temp[i] == 0 && counter == 1)
            {
                  x--;
                  printf("nProcess[%d]tt%dtt %dttt %d", i + 1, bt[i], total - at[i], total - at[i] - bt[i]);
                  wt = wt + total - at[i] - bt[i];
                  tat = tat + total - at[i];
                  counter = 0;
            }
            if(i == n - 1)
            {
                  i = 0;
            }
            else if(at[i + 1] <= n)
            {
                  i++;
            }
            else
            {
                  i = 0;
            }
      }
 
      awt = wt * 1.0 / n;
      atat = tat * 1.0 / n;
      printf("nnAverage Waiting Time:t%f", awt);
      printf("nAvg Turnaround Time:t%fn", atat);
      return 0;
}