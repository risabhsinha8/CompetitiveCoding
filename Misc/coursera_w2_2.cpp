#include<iostream>

using namespace std;

short int A[10000000];

int Feb(int n)
{
	if(A[n]!=-1)
		return A[n];
	else
	{
		A[n]=(Feb(n-1)+Feb(n-2))%10;
		return A[n];
	}
}


int main()
{
	int n,s;
	cin>>n;
	for(int i=0;i<=n;i++)
		A[i]=-1;
	A[0]=0;
	A[1]=1;
	s=Feb(n);
	cout<<s;
}
