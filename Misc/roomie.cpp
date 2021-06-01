#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,ma,mb;
	long long int n,A[100000],ans,na,nb,temp;
	long long int count=0;
	vector<long long int> v;
	cin>>n>>a>>b;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	ma=mb=0;
	count=2;
	v.push_back(count);
	na=nb=0;
	if(a<b)
		nb++;
	else
		na++;
	while(count<=INT_MAX)
	{
		if(na<nb)
		{
			ma++;
			na=pow(a,ma);
		}
		else
		{
			mb++;
			nb=pow(b,mb);
		}
		count=na+nb;
		v.push_back(count);
	}
	for(auto i:v)
		cout<<i<<" ";
	for(int i=0;i<n;i++)
	{
		auto low1=lower_bound(v.begin(), v.end(), A[i]);
		cout<<(low1-v.begin())<<endl;
	}
	
}
