#include<iostream>

using namespace std;

int main()
{
	int d,m,n,last=0,A[301],counter=0;
	cin>>d>>m>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
	A[n]=d;
	for(int i=1;;)
	{
		if(A[i]-last > m)
		{
			counter=-1;
			break;
		}
		if(A[n]-last<m)
			break;
		while(A[i]-last <= m&&i<n)
			i++;
		last=A[i-1];
		counter++;		
	}
	cout<<counter;
}
