//https://www.codechef.com/ZCOPRAC/problems/ZCO14002

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n; 
	cin>>n;
	int A[n],DP[n];
	for(int i=0; i<n;i++)
	{
		cin>>A[i];
	}
	DP[0]=A[0];
	DP[1]= A[1];
	if(n<2)
		cout<<min(DP[0],DP[1]);
	else
	{

		DP[2]=A[2];

		// cout<<DP[0]<<endl<<DP[1]<<endl<<DP[2]<<endl;
		for(int i=3;i<n;i++)
		{
			DP[i]= A[i]+min({DP[i-1],DP[i-2],DP[i-3]});
			// cout<<DP[i]<<endl;
		}
		cout<<min({DP[n-1],DP[n-2],DP[n-3]});
	}
}