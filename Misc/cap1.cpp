#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,s1;
	int H[256]={0};
	cin>>s>>s1;
	for(int i=0;i<s.size();i++)
	{
		H[s[i]]=1;
	}
	for(char c:s1)
	{
		if(!H[c])
		{
			cout<<c;
			break;
		}
	}
}
