#include<bits/stdc++.h>

using namespace std;

int main()
{
	int s;
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
	bool *visited = new bool[6]; 
    for(int i = 0; i < 6; i++) 
        visited[i] = false; 
  
    // Create a queue for BFS 
    list<int> queue; 
  
    // Mark the current node as visited and enqueue it 
    visited[0] = true; 
    queue.push_back(0); 
  
    // 'i' will be used to get all adjacent 
    // vertices of a vertex 
  
    while(!queue.empty()) 
    { 
        // Dequeue a vertex from queue and print it 
        s = queue.front(); 
        cout << s+1 << " "; 
        queue.pop_front(); 
  
        // Get all adjacent vertices of the dequeued 
        // vertex s. If a adjacent has not been visited,  
        // then mark it visited and enqueue it 
        for (auto i = adj[s].begin(); i != adj[s].end(); ++i) 
        { 
            if (!visited[*i]) 
            { 
                visited[*i] = true; 
                queue.push_back(*i); 
            } 
        } 
    } 
}
