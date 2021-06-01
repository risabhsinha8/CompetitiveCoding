#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<pthread.h>


struct proc
{
 int pid;
 float at, wt, bt, ta, st,ct;
 bool isComplete;
}typedef process;

process p[10];
process p1[10];

void sort(process p[], int i, int start)
{
 int k = 0, j;
 process temp;
 for (k = start; k<i; k++)
 {
 for (j = k+1; j<i; j++)
 {
 if(p[k].bt < p[j].bt)
 continue;
 else
 {
 temp = p[k];
 p[k] = p[j];
 p[j] = temp;
 }
 }
 }
}

void fcfs(void * a)
{
	process temp;
	int i,j,t=0,k,n=10;
	k=0;
	for(i=0;i<n-1;i++)		//sort
	{
		for(j=0;j<n-i-1;j++)
			if(p[j].at>p[j+1].at)
			{
				temp=p1[j];
				p1[j]=p1[j+1];
				p1[j+1]=temp;				
			}
	}
	for(i=0;i<n;i++)
	{
		if(p1[i].at==p1[i+1].at&&p1[i].bt>p1[i+1].bt)	
			{
				temp=p1[j];
				p1[j]=p1[j+1];
				p1[j+1]=temp;				
			}
		if(p1[i].at>t)
		{
			t=p1[i].at;
			p1[i].wt=0;
		}
		else 
			p1[i].wt=t-p1[i].at;
		t+=p1[i].bt;
		p1[i].ta = p1[i].bt + p1[i].wt;
		p1[i].ct=t;
	}
	 printf("Process Schedule Table: \n");
	 printf("\tProcess ID\tArrival Time\tBurst Time\tWait Time\tTurnaround Time\tCompletion Time\n");
	 for (i = 0; i<n; i++)
	 printf("\t%d\t\t%f\t%f\t%f\t%f\t%d\n", p1[i].pid,p1[i].at, p1[i].bt, p1[i].wt, p1[i].ta,p1[i].ct);
}

void sjf (void* a)
{
 int n=10, i, k = 0, j = 0;
 float tst = 0.0;
 for (i = 0; i<n; i++)
 {
 if (p[i].isComplete == true)
 continue;
 else
 {
 k = i;
 while (p[i].at<=tst && i<n)
 i++;
 sort (p,i,k);
 i = k;
 if(p[i].at<=tst)
 p[i].st = tst;
 else
 p[i].st = p[i].at;
 p[i].st = tst;
 p[i].isComplete = true;
 tst += p[i].bt;
 p[i].ct=tst;
 p[i].wt = p[i].st - p[i].at;
 p[i].ta = p[i].bt + p[i].wt;

 }
 }
 
 printf("Process Schedule Table: \n");
 printf("\tProcess ID\tArrival Time\tBurst Time\tWait Time\tTurnaround Time\tCompletion Time\n");
 for (i = 0; i<n; i++)
 printf("\t%d\t\t%f\t%f\t%f\t%f\t%d\n", p[i].pid,p[i].at, p[i].bt, p[i].wt, p[i].ta,p[i].ct);
}

void main()
{
 int n=10, i, k = 0, j = 0;
 process p[10];
 process p1[10];
 for (i = 0; i<n; i++)
 {
 printf("\nProcess %d's details: ",i);
 printf("Process id: %d",i+1);
 p[i].pid=i+1;
 p[i].at=rand() % 100 + 1;
 p[i].bt=rand() % 100 + 1;
 printf("Arrival Time: %d",p[i].at);
 printf("Burst Time: %d",p[i].bt);
 p[i].isComplete = false;
 }
 for(i=0;i<n;i++)
 	p[i]=p1[i];
pthread_t fcfst,sjft;
pthread_create(&fcfst,NULL,fcfs,NULL);
pthread_join(&fcfst,NULL);
pthread_create(&sjft,NULL,sjf,NULL);
pthread_join(&sjft,NULL);


}
