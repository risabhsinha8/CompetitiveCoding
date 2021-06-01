#include<bits/stdc++.h>
#define iPair pair<long long int,int>

using namespace std;

int main()
{
	long long int V,e,u,v,w;
	cin>>V;
	list<iPair> adj[V];
	cin>>e;
	while(e--)
	{
		cin>>u>>v>>w;
		u--;
		v--;
		adj[u].push_back(make_pair(w,v));
		adj[v].push_back(make_pair(w,u));
	}
	priority_queue<iPair, vector<iPair>, greater<iPair>> q;
	q.push(make_pair(0,0));
	vector<long long int> dist(V,INT_MAX);
	vector<bool> mark(V,false);
	vector<int> parent(V,-1);
	dist[0]=0;
	while(!q.empty())
	{
		u=q.top().second;
		q.pop();
		if(mark[u])
			continue;
		mark[u]=true;
		for(auto i:adj[u])
		{
			v=i.second;
			w=i.first;
			if(dist[v]>dist[u]+w)
			{
				parent[v]=u;
				dist[v]=dist[u]+w;
				q.push(make_pair(dist[v],v));
			}	
		}	
	}
//	cout<<"Distance from source 0 is: \n";
//	for(int i=0;i<V;i++)
//	{
//		cout<<i<<" "<<dist[i]<<endl;	
//	}
	int temp=V-1;
	stack<int> s;
	if(parent[temp]==-1)
		cout<<"-1";
	else{
	while(temp!=-1)
	{
		s.push(temp);
		temp=parent[temp];
	}
	while(!s.empty())
	{
		cout<<s.top()+1<<" ";
		s.pop();
	}
}
}
