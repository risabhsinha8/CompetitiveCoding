#include<iostream>

using namespace std;

int main()
{
	int t,n,f,p;
	double A[100000],sum;
	cin>>t;
	while(t--)
	{
		f=0;
		sum=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
			sum+=A[i];
		}
		sum/=n;
		for(int i=0;i<n;i++)
			if(A[i]==sum){
				f=1;
				p=i+1;	
				break;
			}
		if(f==0)
			cout<<"Impossible"<<endl;
		else
			cout<<p<<endl;
	}
}
