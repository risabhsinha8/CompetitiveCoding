#include<bits/stdc++.h>

using namespace std; 

int V=7;
list<int> adj[7];

void DFSUtil(int v, bool visited[]) 
{ 
    // Mark the current node as visited and print it 
    visited[v] = true; 
    cout << char(65+v) << " "; 
  
    // Recur for all the vertices adjacent to this vertex 
    list<int>::iterator i; 
    for(i = adj[v].begin(); i != adj[v].end(); ++i) 
        if(!visited[*i]) 
            DFSUtil(*i, visited); 
} 
  
// The function to do DFS traversal. It uses recursive DFSUtil() 
void DFS() 
{ 
    // Mark all the vertices as not visited 
    bool *visited = new bool[V]; 
    for (int i = 0; i < V; i++) 
        visited[i] = false; 
  
    // Call the recursive helper function to print DFS traversal 
    // starting from all vertices one by one 
    for (int i = 0; i < V; i++) 
        if (visited[i] == false) 
            DFSUtil(i, visited); 
} 

int main()
{
	adj[0].push_back(1);
	adj[0].push_back(5);
	adj[1].push_back(0);
	adj[1].push_back(2);
	adj[1].push_back(6);
	adj[2].push_back(1);
	adj[2].push_back(3);
	adj[3].push_back(2);
	adj[3].push_back(6);
	adj[3].push_back(4);
	adj[4].push_back(3);
	adj[4].push_back(6);
	adj[4].push_back(5);
	adj[5].push_back(0);
	adj[5].push_back(4);
	adj[6].push_back(1);
	adj[6].push_back(3);
	adj[6].push_back(4);
	DFS();
	
}
