#include<iostream>

using namespace std;

int main()
{
	int n,r,a;
	cin>>n>>r;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a<r)
			cout<<"Bad boi"<<endl;
		else
			cout<<"Good boi"<<endl;
	}
}
