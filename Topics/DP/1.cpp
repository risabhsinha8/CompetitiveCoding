//https://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/

#include<bits/stdc++.h>

using namespace std;


long long FindMaxSum(long long arr[], long long n)
    {
        long long DP[n];
        DP[0]=arr[0];
        DP[1]=max(arr[0],arr[1]);
        for(int i=2; i<n;i++)
        {
            DP[i]=max(DP[i-1],DP[i-2]+arr[i]);
        }
        return DP[n-1];
    }

int main()
{
	long long a[10000],n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<FindMaxSum(a,n);

}