//https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int A[n], DP[n];
	for(int i=0; i<n; i++)
		cin>>A[i];
	DP[0]=1;
	DP[1] = (A[0]<A[1])?2:1;
	// cout<<DP[1];
	for(int i=2;i<n;i++)
	{
		int temp = 0;

		for(int j=i-1; j>=0; j--)
		{
			if( A[j]<A[i] && DP[j]>temp )
			{
				// cout<<A[i]<<" "<<i<<" "<<A[j]<<endl;
				temp = DP[j];
			}
		}
		DP[i]= temp+1;
	}

	int temp = 0;
	for(int i=0; i<n; i++)
	{
		if(DP[i]>temp)
			temp = DP[i];
	}

	cout<<temp;
}