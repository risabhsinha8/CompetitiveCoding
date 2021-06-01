#include<bits/stdc++.h>

using namespace std;

int main()
{
	int V=6,u;
	char a=97;
	vector<int> adj[6];	
	adj[0].push_back(1);
	adj[0].push_back(2);
	adj[1].push_back(0);
	adj[1].push_back(2);
	adj[1].push_back(3);
	adj[1].push_back(4);
	adj[2].push_back(0);
	adj[2].push_back(1);
	adj[2].push_back(3);
	adj[2].push_back(4);
	adj[3].push_back(1);
	adj[3].push_back(3);
	adj[3].push_back(5);
	adj[4].push_back(1);
	adj[4].push_back(2);
	adj[4].push_back(3);
	adj[4].push_back(5);
	adj[5].push_back(3);
	adj[5].push_back(4);
	vector<int> p(6,-1);
	vector<int> pre;
	vector<int> next;
	p[0]=0;
	pre.push_back(0);
	while(pre.size()>0)
	{
		
		u=pre[0];
		cout<<char(a+u)<<" ";
		pre.erase(pre.begin());
		for(int v=0;v<adj[u].size();v++)
		{
			if(p[adj[u][v]]==-1)
			{
				p[adj[u][v]]=u;
				next.push_back(adj[u][v]);
			}
		}
		if(pre.size()==0)
		{
			pre=next;
			next.clear();
		}		
	}
}
