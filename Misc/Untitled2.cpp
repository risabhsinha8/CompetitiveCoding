#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n,temp,root=-1,ans=0;
	vector<int> v;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		v.push_back(temp);
	}
	for(int i=0;i<n;i++)
	{
		if(v[i]==i+1)
		{
			root=i+1;
		}
	}
	map<int,int> m;
	temp=0;
	if(root==-1)
	{
		for(int i=0;i<n;i++)
		{
			m[v[i]]++;
		}
		for(auto i:m)
		{
			if(i.second>temp)
			{
				temp=i.second;
				root=i.first;
			}
		}
		ans++;
	}
	
	for(int i=0;i<n;i++)
	{
		if(v[i]==i+1&&v[i]!=root)
		{
			ans++;
			v[i]=root;
		}
	}
	cout<<ans<<endl;
	for(int i:v)
		cout<<i<<" ";
}
