#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m,a,b,c,temp;
	stack<int> main,A,C;
	list<int> q;
	cin>>n>>m;
	while(n!=0)
	{
		main.push(n);
		n--;
	}
	while(m--)
	{
		cin>>a>>b>>c;
		while(a--)
		{
			temp=main.top();
			main.pop();
			A.push(temp);
		}
		while(b--)
		{
			temp=main.top();
			main.pop();
			q.push_back(temp);	
		}
		while(!A.empty())
		{
			temp=A.top();
			A.pop();
			main.push(temp);
		}
		while(c--)
		{
			temp=main.top();
			main.pop();
			C.push(temp);
		}
		while(!q.empty())
		{
			temp=q.front();
			q.pop_front();
			main.push(temp);
		}
		while(!C.empty())
		{
			temp=C.top();
			C.pop();
			main.push(temp);
		}
	}
	while(!main.empty())
	{
		cout<<main.top()<<" ";
		main.pop();
	}
}
