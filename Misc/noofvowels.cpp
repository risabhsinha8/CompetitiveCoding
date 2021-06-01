#include<bits/stdc++.h>

using namespace std;

int search(vector<int> array,int target)
{
	set<int> s;
	for(int i:array)
		s.insert(i);
	auto a= s.upper_bound(target);
	if(*a==target)
		return a-s.begin();
	else
		return -1;
}


int main()
{
	vector<int> v;
	int n,p,t;
	cin>>n>>t;
	for(int i=0;i<n;i++)
	{
		cin>>p;
		v.push_back(p)
	}
	cout<<search(v,t);
}
