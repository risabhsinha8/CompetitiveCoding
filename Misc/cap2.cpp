#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,q,A[1000],l,r,c;
	cin>>n>>q;
	for(int i=0;i<n;i++)
		cin>>A[i];
	while(q--)
	{
		cin>>c;
		if(c==0)
		{
			cin>>l>>r;
			if(A[r-1])
				cout<<"ODD";
			else
				cout<<"Even";
		}
		else
		{
			cin>>l;
			if(A[l]==0)
				A[l]=1;
			else
				A[l]=0;
		}
	}
}
