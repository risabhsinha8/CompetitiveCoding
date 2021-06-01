#include<iostream>

using namespace std;

int main()
{
	int n,counter=1,i;
	cin>>n;
	for(i=1;n-i!=0&&i+1<=n-i;i++)
	{
		n-=i;
		counter++;	
	}
	i--;
	cout<<counter<<endl;
	cout<<n<<" ";
	for(;i>0;i--)
		cout<<i<<" ";
}
