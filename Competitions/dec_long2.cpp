#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int a,b,c;
	a=rand()%3+1;
	cout<<a<<endl;
	cin>>b;
	for(int i=1;i<=3;i++)
		if(i!=a&&i!=b)
			cout<<i<<endl;
}
