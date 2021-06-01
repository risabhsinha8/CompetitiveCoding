#include<iostream>

using namespace std;

int bsearch(int A[],int n, int k)
{
	int l=0,r=n;
	int mid;
	while(l<=r)
	{
		mid = (l+r)/2;
		if(A[mid]==k)
			return mid;
		if(A[mid]<k)
			l=mid+1;
		else
			r=mid-1;
	}
	return -1;
}

int main()
{
	int n,A[10000],k,B[10000];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
	cin>>k;
	for(int i=0;i<k;i++)
		cin>>B[i];
	for(int i=0;i<k;i++)
		cout<<bsearch(A,n-1,B[i])<<" ";	
}
