#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int n,c,m,y,a,min=-1;
	cin>>n>>c;
	m=1000;
	y=rand()%n+1;
	cout<<"1 "<<y;
	for(;m>=0;)
	{
		cin>>a;
		if(a==0)
		{
			if(y>min)
				min=y;
			m--;
		}
		if(a==1)
		{
			if(min+1==y)
			{
				cout<<"3 "<<y;
				break;
			}
			m-=c;
			cout<<"2"<<endl;
		}
		y=rand()%(n-min)+min;
		cout<<"1 "<<y;
	}
}
