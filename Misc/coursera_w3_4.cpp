#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n,A[1000],B[1000],a=0,b;
	long long int ans=0;
	cin>>n;
	b=n-1;
	for(int i=0;i<n;i++)
		cin>>A[i];
	for(int i=0;i<n;i++)
		cin>>B[i];
	sort(A,A+n);
	sort(B,B+n);
	for(int i=0;i<n;i++)
	{
		if(A[a]*B[a]>A[b]*B[b])
		{
			ans+=A[a]*B[a];
			a++;
		}
		else
		{
			ans+=B[b]*A[b];
			b--;
		}
	}
	cout<<ans;
}
