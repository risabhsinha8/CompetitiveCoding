#include<iostream>

using namespace std;

int main()
{
	int n,k,A[100000],s,j;
	long long int sum=0;
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>A[i];
	for(int i=0;i<n;i++)
	{
		s=0;			//s instead of x
		for(j=i;j<n;j++)
		{
			if(s+A[j]<=k)
				s+=A[j];
			else
				break;
		}
		A[(i+s)%n]=k^s;  //question me likha hai
//		cout<<"s= "<<s;
//		for(int l=0;l<n;l++)
//			cout<<A[l]<<" ";
//		cout<<endl;	
	}
	for(int i=0;i<n;i++)
	{
		sum+=A[i];
	}
	cout<<sum;
}
