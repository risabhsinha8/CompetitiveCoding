#include<bits/stdc++.h>

using namespace std;

int A[1000000];

int main()
{
	int t,n,k,s,f,j;
	cin>>t;
	while(t--)
	{
		f=0;
		s=0;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
		}
		for(j=0;j<n;j++)
		{
			s+=A[j];
			s-=k;
			if(s<0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO "<<j+1<<endl;
		}
	}
}
