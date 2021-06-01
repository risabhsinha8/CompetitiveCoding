#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	int sum=0;
	char c;
	map<char, int> m;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		c=s[i];
		if(m.find(c)==m.end())
			m[c]=1;
		else
		m[c]+=1;
	}
	for(auto i:m)
	{
		// cout<<i.second<<endl;
		sum+=(i.second/2);
	}
	cout<<sum;
}