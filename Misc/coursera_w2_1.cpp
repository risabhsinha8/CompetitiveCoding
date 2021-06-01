#include<iostream>

using namespace std;

long long int A[10000000];

int Feb(int n){
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
	A[0]=0;
	A[1]=1;
	for(int i=2;i<=n;i++)
		A[i]=(A[i-1]+A[i-2])%10;
	cout<<A[n];
}
