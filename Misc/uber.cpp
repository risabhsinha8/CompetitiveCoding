#include<bits/stdc++.h>

using namespace std;

int getPowerCouple2021(int friends_nodes, int friends_edges, vector<int> friends_from, vector<int> friends_to, vector<int> friends_weight)
{
	map<int, set<int> > m;

	//map fill
	for(int i=0;i<friends_edges;i++)
	{
		m[friends_weight[i]].insert(friends_to[i]);
		m[friends_weight[i]].insert(friends_from[i]);
	}


	vector<vector<int>> count(friends_nodes+1,vector<int> (friends_nodes+1,0));

	for(auto i:m)
	{
		auto it=i.second.begin();
		it++;
		for(auto itr=i.second.begin();it!=i.second.end();itr++)
		{
			// cout<<*itr<<" "<<*it<<endl;
			count[*itr][*it]++;

			it++;
		}
	}

	// for(int i=0;i<friends_nodes;i++)
	// {
	// 	for(int j=0;j<friends_nodes;j++)
	// 		cout<<count[i][j]<<" ";
	// 	cout<<endl;
	// }
	int max=0;
	int mi,n;

	for(int i=0;i<=friends_nodes;i++)
	{
		for(int j=0;j<=friends_nodes;j++)
		{
			if(count[i][j]>max)
			{
				max=count[i][j];
				mi=i;
				n=j;
				// cout<<"rider"<<mi<<" "<<n<<endl;
			}
			else if(count[i][j]==max && i*j>mi*n)
			{
				mi=i;
				n=j;
				// cout<<"provider"<<mi<<" "<<n<<endl;
			}
		}
	}


	return (mi)*(n);

}

int main()
{
	vector<int> friends_weight{1,2,1,2};
	int friends_nodes=4;
	int friends_edges=4;
	vector<int> friends_from{1,1,2,2};
	vector<int> friends_to{3,3,4,4};
	cout<<getPowerCouple2021(friends_nodes,friends_edges,friends_from,friends_to,friends_weight);
}