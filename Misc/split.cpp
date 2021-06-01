#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int n;
	char A[100],B[100],C[100];
	cin>>A;
	for(int i=0;i<strlen(A);i++)
		if(A[i]=='E')
			n=i;
	for(int i=0;i<n;i++)
		B[i]=A[i];
	for(int i=n+1,j=0;i<strlen(A);i++)
	{
		C[j]=A[i];
		j++;
	}
	cout<<B<<endl<<C;
}
