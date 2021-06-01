#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,A[100];
	pair<int,int> B;
	set<pair<int,int>> s,s1;
	vector<pair<int,int>> v;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
	for(int i=0;i<n-1;i++)
	{
		B.first=A[i];
		B.second=A[i+1];
		if(s.count(B))
		{
			if(s1.count(B)==0)
				v.push_back(B);
			s1.insert(B);	
		}	
		else
			s.insert(B);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
}
