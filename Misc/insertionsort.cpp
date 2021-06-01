#include<iostream>

using namespace std;

int main()
{
	int A[10];
	int n,j,key;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
	for(int i=1;i<n;i++)
	{
		key=A[i];
		for(j=i-1;j>=0;j--)
		{
			if(A[j]>key)
				A[j+1]=A[j];
			else
				break;
		}
		A[j+1]=key;
	}
	for(int i=0;i<n;i++)
		cout<<A[i];
}
