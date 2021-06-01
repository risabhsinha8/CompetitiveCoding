#include<bits/stdc++.h>

using namespace std;

int countOccurunces(string s, char K)
{
	int ans=0;
	for(char c:s)
	{
		if(c==K)
			ans++;
	}
	return ans;
}

int main()
{
	string s;
	char c;
	cin>>s>>c;
	cout<<countOccurunces(s, c);
	
}
