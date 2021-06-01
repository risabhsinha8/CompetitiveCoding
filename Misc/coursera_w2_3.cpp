#include<iostream>

using namespace std;

int main()
{
	int a,b,t,s;
	cin>>a>>b;
	if(b>a)
	{
		t=a;
		a=b;
		b=t;
	}
	while(1)
	{
		t=b;
		b=a%b;
		a=t;
		if(b==0)
		{
			s=a;
			break;	
		}	
	}
	cout<<s;	
}
