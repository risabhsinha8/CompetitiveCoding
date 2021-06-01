#include <bits/stdc++.h>
using namespace std;

void show(priority_queue<int> p)
{
	while(!p.empty())
	{
		int u=p.top();
		p.pop();
		cout<<u<<" ";
	}
}

int flip()
{
	int u,i=0,f=0,k;
    srand(time(0)); 
    queue<int> q;
	priority_queue<int> pq[4];
    for(int i=0;i<100;i++)
    	q.push((rand()%900+100));
    while(!q.empty())
    {
    	u=q.front();
    	q.pop();
    	pq[i%4].push(u);
    	i++;
	}
	f=0;
	u=0;
	for(int i=0;i<4;i++)
	{
		if(u<pq[i].top()){
			u=pq[i].top();
			k=i;
		}
	}
	for(int i=0;i<4;i++)
	{
		if(u==pq[i].top()){
			f++;
		}
	}
	show(pq[1]);
	if(f==1)
		cout<<"Player "<<k;
	else
		cout<<"Restart"<<endl;
	return f;
}


int main(void) 
{ 
	int z=flip();
	while(z!=1)
		z=flip();
		
} 
