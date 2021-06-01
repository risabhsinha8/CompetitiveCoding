#include<iostream>

using namespace std;

int GCD(int a,int b)
{
	int q; 
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
	int a,b,c;
	cin>>a>>b;
	c=GCD(a,b);
	cout<<c;
}
