#include<iostream>

using namespace std;

int main()
{
	int t,n,a[100000],sum,c;
	char arr[100000];
	cin>>t;
	while(t--)
	{
		c=0;
		cin>>n;
		cin>>arr;
		for(int i=0;arr[i]!='\0';i++)
		{
			a[i]=arr[i]-'0';
			if(a[i]==1)
				c++;
		}
		sum= (c*(c-1)/2)+c;
		cout<<sum<<endl;
		
	}
}
