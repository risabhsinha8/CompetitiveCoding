#include<iostream>

using namespace std;

int main()
{
	float t,n,p,f;
	int c;
	char A[1000];
	cin>>t;
	while(t--)
	{
		f=0;
		c=0;
		p=0;
		cin>>n;
		cin>>A;
		for(int i=0;i<n;i++)
		{
			if(A[i]=='P')
				p++;
		}
		if(p/n>=0.75)
		{
			cout<<c<<endl;
			continue;
		}
		for(int i=2;i<n-2;i++)
		{
			
			if((A[i]=='A')&&(A[i-1]=='P'||A[i-2]=='P'))
			if(A[i+1]=='P'||A[i+2]=='P')
			{
				p++;
				c++;
			}	
			if(p/n>=0.75)
			{
				f=1;
				cout<<c<<endl;
				break;
			}
		}
		if(f==0)
			cout<<-1<<endl;
	}
}
