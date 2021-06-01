#include<iostream>

using namespace std;

int main()
{
	int m,t=0;
	cin>>m;
	while(m>0)
	{
		if(m/10>0)
		{
			m-=10;
			t++;
		}
		else if(m/5>0)
		{
			m-=5;
			t++;
		}
		else 
		{
			t+=m;
			m=0;		
		}
	}
	cout<<t;
}
