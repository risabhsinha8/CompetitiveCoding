#include<iostream>
#include<algorithm>

using namespace std;

class line
{
	public:
		int s,e,f;
	line()
	{
		f=0;
	}
	
};

bool comp(line l1,line l2)
{
	return l1.s<l2.s;
}

int main()
{
	int n,m,max,A[100],a=0,pos,counter=0;
	line l[100];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>l[i].s>>l[i].e;
	sort(l,l+n,comp);
	for(int i=0;i<n;i++)
	{
		max=0;
		for(int j=l[i].s;j<=l[i].e;j++)
		{
			m=0;
			for(int k=i;l[k].s<=j;k++)
			{
				if(l[k].e>=j)
					m++;	
			}
			if(m>max)
			{
				max=m;
				pos=j;
			}
		}
		A[a]=pos;
		a++;
		counter++;
		for(;l[i].s<=pos;i++);
	}
	cout<<counter<<endl;
	for(int i=0;i<a;i++)
		cout<<A[i]<<" ";
	
}
