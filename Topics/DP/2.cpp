/*Start from A[0] and end at A[n-1]. At each step you can jump from 
A[i] you can go to A[i+1] or A[i+2]. Maximize the sum of values you visit. */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
		cin>>A[i];
	int DP[n];
	DP[0]=A[0];
	DP[1]=A[0]+A[1];
	for(int i=2;i<n;i++)
	{
		DP[i]=A[i]+ max(DP[i-1],DP[i-2]);
	}
	cout<<DP[n-1];
}