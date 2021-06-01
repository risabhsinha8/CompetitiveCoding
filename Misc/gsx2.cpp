#include<bits/stdc++.h>

using namespace std;

int s[1000];


void summ(int A[],int ind)
{
	if(A[ind]==-1)
	{
		s[ind]=0;
		return;
	}
    summ(A,ind*2);
    summ(A,ind*2+1);
    s[ind]=s[ind*2]+s[ind*2+1]+A[ind];
}

int main()
{
	int n,r,sum=0;
	int A[1000];
	
	for(int i=0;i<1000;i++)
		A[i]=-1;
	list<int> q;
	string s;
	cin>>n;
	cin>>A[1];
	n--;
	for(int i=0;i<n;i++)
	{
		r=1;
		cin>>s;
		for(int j=0;j<s.size();j++)
		{
			r*=2;
			if(s[j]=='R')
			{
				r++;
			}
		}
		cin>>A[r];
	}
	summ(A,1);
	q.push_back(1);
	while(!q.empty())
	{
		r=q.front();
		q.pop_front();
		if(A[r]!=-1)
		{
			q.push_back(r*2);
			q.push_back(r*2+1);
		}
		if(A[r*2]==-1||A[r*2+1]==-1)
			continue;
		else if(s[r*2]%2==0&&s[r*2+1]%2==1)
		{
			cout<<A[r];
			sum+=A[r];
		}
		else if(s[r*2]%2==1&&s[r*2+1]%2==0)
		{
			cout<<A[r];
			sum+=A[r];
		}
	}
	cout<<sum<<endl;
}
