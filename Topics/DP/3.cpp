/*Start from A[0] and end at A[n-1]. At each step you can jump from 
A[i] you can go to A[i+1] or A[i+2] or..... A[i+k]. Maximize the sum of 
values you visit. */

#include<bits/stdc++.h>

using namespace std; 

int main()
{
	int n,k;
	cin>>n>>k;
	int A[n],DP[n];
	priority_queue<pair<int,int>> pq;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	DP[0]= A[0];
	pq.push(make_pair(DP[0],0));
	DP[1]= A[0]+A[1];
	pq.push(make_pair(DP[1],1));
	for(int i=2;i<n;i++)
	{
		int temp = pq.top().second;
		while(temp < i-k)
		{
			pq.pop();
			temp=pq.top().second;
		}
		DP[i] = pq.top().first+A[i];
	}
	cout<<DP[n-1];
}