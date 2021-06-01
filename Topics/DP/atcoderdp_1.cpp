//https://atcoder.jp/contests/dp/tasks/dp_a

#include<bits/stdc++.h>

using namespace std; 

int main()
{
	int n,k;
	cin>>n;
	long long int A[n],DP[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	DP[0]= 0;
	DP[1]= abs(A[0]-A[1]);


	for(int i=2;i<n;i++)
	{
		int pos=0;
		DP[i] = min(DP[i-1]+abs(A[i]-A[i-1]), DP[i-2]+abs(A[i]-A[i-2]));
	}


	// for(int i=0; i<n; i++)
	// 	cout<<DP[i]<<endl;	
	cout<<DP[n-1];
}