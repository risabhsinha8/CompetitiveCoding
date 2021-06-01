#include<bits/stdc++.h>
using namespace std;

class Graph
{
	int V;
	vector<int> *adj;
	public: 
	Graph(int V)
	{
		this->V=V;
		adj=new vector<int>[V];
	}
	void addEdge(int v,int w)
	{
		adj[v].push_back(w);
	}
	void BFS(int s)
	{
		bool *visited= new bool[V];
		for(int i=0;i<V;i++)
			visited[i]=false;
		list<int> q;
		q.push_back(s);
		visited[s]=true;
		while(!q.empty())
		{
//			cout<<"here";
			int j = q.front();
			q.pop_front();
			for(int i:adj[j])
			{
				if(!visited[i])
				{
					visited[i]=true;
					q.push_back(i);
				}
			}
			cout<<j<<" ";
		}
	}
	void DFS(int s)
	{
		bool* visited=new bool[V];
		dfs_search(s,visited);
	}
	void dfs_search(int i, bool* v)
	{
		v[i]=true;
		cout<<i<<" ";
		for(int j: adj[i])
		{
			if(!v[j])
				dfs_search(j,v);
		}
	}
};

int main()
{
	Graph g(4);
	g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3);
    g.DFS(3);
}
