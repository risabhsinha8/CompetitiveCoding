//https://atcoder.jp/contests/dp/tasks/dp_b

#include<bits/stdc++.h>

using namespace std; 

int main()
{
	int n,k;
	cin>>n>>k;
	long long int A[n],DP[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	DP[0]= 0;
	DP[1]= abs(A[0]-A[1]);


	for(int i=2;i<n;i++)
	{
		long long int temp = LONG_MAX;
		int pos=0;
		for(int j=max(0, i-k);j<i;j++)
		{
			if(temp + DP[pos]>abs(A[i]-A[j])+ DP[j])
			{
				pos=j;
				temp=abs(A[i]-A[j]);
			}
		}
		DP[i] = temp+DP[pos];
	}


	// for(int i=0; i<n; i++)
	// 	cout<<DP[i]<<endl;	
	cout<<DP[n-1];
}