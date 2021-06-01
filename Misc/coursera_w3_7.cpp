#include<iostream>
#include<algorithm>

using namespace std;

bool comp(int a, int b)
{
	int c,d,A[3],B[3],a1=0,b1=0;
	c=a;
	d=b;
	while(c!=0)
	{
		A[a1]=c%10;
		c/=10;
		a1++;
	}
	while(d!=0)
	{
		B[b1]=d%10;
		d/=10;
		b1++;
	}
	for(;a1>0&&0<b1;)
	{
		a1--;
		b1--;
		if(A[a1]>B[b1])
			return true;
		else if(A[a1]<B[b1])
			return false;
	}
	if(a1==0)
	{
		if(A[0]>B[1]){
			return true;
		}
		else 
			return false;
	}
	else
	{
		if(B[0]>A[1])
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

int main()
{
	int n,A[100000],i;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>A[i];
	sort(A,A+n,comp);
	for(int j=0;j<n;j++)
		cout<<A[j];
}
