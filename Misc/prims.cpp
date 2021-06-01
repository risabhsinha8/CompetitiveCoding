#include<bits/stdc++.h>
#define iPair pair<int,int>

using namespace std;

int main()
{
	cout<<"Prim's Algorithm\n";
	int V,e,u,v,a;
	cout<<"Enter Number of Vertices: "; 
	cin>>V;
	list<iPair> adj[V];
	cout<<"Enter Number of Edges: ";
	cin>>e;
	for(int i=0;i<e;i++)
	{
		cout<<"For edge enter V1 V2 Weight: ";
		cin>>u>>v>>a;	
		adj[u].push_back(make_pair(a,v));
		adj[v].push_back(make_pair(a,u));
	}	
	priority_queue<iPair, vector<iPair>, greater<iPair>> q;
	q.push(make_pair(0,0));
	vector<bool> vis(V,false);
	vector<int> par(V,-1);
	vector<int> key(V, INT_MAX);
	while(!q.empty())
	{
		int p=q.top().second;
		q.pop();
		vis[p]=true;
		for(auto i:adj[p])
		{
			int v=i.second;
			int w=i.first;
			if(vis[v]==false&&key[v]>w)
			{
				q.push(i);
				key[v]=w;
				par[v]=p;
			}
		}
	}
	cout<<"Edges in the MST are :\n";
	for(int i=1;i<V;i++)
	{
		cout<<par[i]<<"-"<<i<<endl;
	}
}
