#include<bits/stdc++.h>

using namespace std;
int ma=0,last;

void search(vector<int> v,int c,int l,int t)
{
	if(l<=0||c>last)
		return;
	auto lower = lower_bound(v.begin(), v.end(), c);
    auto upper = upper_bound(v.begin(), v.end(), c);
    upper--;
	if(*lower==*upper)
		t+=upper-lower+1;
	if(ma<t)
		ma=t;
	search(v,c+l-1,l-1,t);
	search(v,c+l,l,t);
	search(v,c+l+1,l+1,t);
}

int main()
{
	int n,d,temp;
	cin>>n>>d;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		v.push_back(temp);
	}
	last=v[n-1];
	search(v,d,d,0);
	cout<<ma;
}
