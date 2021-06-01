//https://www.codechef.com/ZCOPRAC/problems/ZCO15001

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
		cin>>A[i];
	int DP[n][n];
	for(int i=0;i<n;i++)
	{
		DP[i][i]=1;
		if(i<n-1)
		{
			if(A[i]==A[i+1])
				DP[i][i+1]=1;
			else
				DP[i][i+1]=0;
		}
	}
	for(int len=3;len<=n;len++)
	{
		for(int l=0;l<n-len+1;l++)
		{
			int r=l+len-1;
			if(DP[l+1][r-1]==1 && A[l]==A[r])
				DP[l][r]=1;
			else
				DP[l][r]=0;
		}
	}


	int D[n];
	D[0]=1;
	for(int r=1;r<n;r++)
	{
		D[r]=r+1;
		for(int l=0;l<=r;l++)
		{
			if(l==0&& DP[l][r])
				D[r]=1;

			else if(DP[l][r])
				D[r]= min(D[r],1+D[l-1]);
		}
	}


	// for(int i=0;i<n;i++)
	// {
	// 	for(int j=0;j<n;j++)
	// 	{
	// 		if(j<i)
	// 			cout<<'x'<<" ";
	// 		else
	// 			cout<<DP[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }


	// for(int i=0;i<n;i++)
	// 	cout<<D[i]<<endl;
	cout<<D[n-1];
}