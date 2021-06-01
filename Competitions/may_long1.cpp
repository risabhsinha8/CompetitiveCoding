#include<iostream>

using namespace std;

int main()
{
	long long int t,n,ans;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ans=n;
		for(int i=1;i<n;i++)
		 ans=(ans+i+(ans*i))%1000000007;
		cout<<ans<<endl;
	}
}
