#include<bits/stdc++.h>

using namespace std; 

int main()
{
	int q,a,b;
	cin>>q;
	map<int,int> m;
	while(q--)
	{
		cin>>a>>b;
		if(a==1)
		{
			m[b]++;
		}
		else if(a==2)
		{
			if(m[b]==0)
				continue;
			m[b]--;
		}
		else
		{
			if(m.find(b)!=m.end())
				cout<<1<<endl;
			else
				cout<<0<<endl;
			for(auto i:m)
			{
				cout<<i.first<<" "<<i.second<<endl;
			}
		}
	}
}
