#include<iostream>

using namespace std;

int GCD(int a,int b)
{
	long long int q; 
	q=b;
	b=a%b;
	a=q;
	if(b==0)
		return a;
	else
		GCD(a,b);	
}

int main()
{
	long long int a,b,c,lcm;
	cin>>a>>b;
	c=GCD(a,b);
	lcm=(a*b)/c;
	cout<<lcm;
}
