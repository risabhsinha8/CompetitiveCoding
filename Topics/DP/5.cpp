//https://www.codechef.com/ZCOPRAC/problems/ZCO14004

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int A[n],DP[n];
	for(int i=0;i<n;i++)
		cin>>A[i];
	DP[0]=A[0];
	DP[1]=A[0]+A[1];
	DP[2]= max( {DP[1],   A[2]+A[0]  , A[1]+A[2]} );
	for(int i=3;i<n;i++)
	{
		DP[i]= max(  {DP[i-1],  A[i] + DP[i-2],  A[i] + A[i-1] + DP[i-3]} )  ;
	}
	cout<<DP[n-1];
}