//https://atcoder.jp/contests/dp/tasks/dp_c

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int A[n][3];
	for(int i=0;i<n;i++)
		for(int j=0; j<3;j++)
			cin>>A[i][j];

	pair<int,int> DP[n];
	if(A[0][0]>A[0][1])
	{
		if(A[0][0]>A[0][2])
		{
			DP[0].first=A[0][0];
			DP[0].second=0;
		}
		else
		{
			DP[0].first=A[0][2];
			DP[0].second=2;	
		}
	}
	else
	{
		if(A[0][1]>A[0][2])
		{
			DP[0].first=A[0][1];
			DP[0].second=1;
		}
		else
		{
			DP[0].first=A[0][2];
			DP[0].second=2;	
		}

	}


	

}