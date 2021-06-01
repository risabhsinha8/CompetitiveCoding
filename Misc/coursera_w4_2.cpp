#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n,A[100000],m,c;
	cin>>n;
	for(int i=0; i<n;i++)
		cin>>A[i];
	sort(A,A+n);
	m=0;
	c=1;
	for(int i=0;i<n-1;i++)
	{
		if(A[i]==A[i+1])
			c++;
		else
		{
			if(c>m)
				m=c;
			c=1;
		}
	}
	if(m>n/2)
		cout<<"1";
	else
		cout<<"0";
		
}
