#include<iostream>
#include<algorithm>

using namespace std;

struct ite{
	float w,v,s;	
};

bool comp(ite a, ite b)
{
	return a.s>b.s;
}


int main()
{
	int n;
	float w;
	float counter=0;
	ite item[1000];
	cin>>n>>w;
	for(int i=0;i<n;i++)
	{
		cin>>item[i].v>>item[i].w;
		item[i].s=item[i].v/item[i].w;
	}
	sort(item, item+n, comp);
	for(int i=0;w!=0;i++)
	{
		if(w>=item[i].w)
		{
			w-=item[i].w;
			counter+=item[i].v;
		}
		else
		{
			counter+=((item[i].v/item[i].w)*w);
			w=0;
		}
	}
	printf("%0.10f",counter);
}
