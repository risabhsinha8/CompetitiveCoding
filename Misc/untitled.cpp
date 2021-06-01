#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	list<int> adj[n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]==1)
				adj[i].push_back(j);
			// cout<<arr[i][j]<<" ";
		}
		// cout<<endl;
	}
	int hash[n],max=0,fren[n];
	for(int i=0;i<n;i++)
	{
		hash[i]=adj[i].size();
		if(hash[i]>max)
			max=hash[i];
	}
	int fmax=0;
	for(int i=0;i<n;i++)
	{
		fren[i]=0;
		if(hash[i]!=max)
			continue;
		for(auto itr: adj[i])
			fren[i]+=hash[itr];
		if(fren[i]>fmax)
			fmax=fren[i];
	}
	for(int i=0;i<n;i++)
	{
		if(hash[i]==max && fren[i]==fmax)
			cout<<i<<" ";
	}
}