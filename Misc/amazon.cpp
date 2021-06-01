#include<bits/stdc++.h>

using namespace std;


int combineParts(vector<int> v) {
	priority_queue <int, vector<int>, greater<int> > pq;
	for(int i:v)
	{
		pq.push(i);
	}
	int a,b,s=0;
	while(pq.size()>1)
	{
		a=pq.top();
		pq.pop();
		b=pq.top();
		pq.pop();
		a+=b;
		s+=a;
		pq.push(a);
	}
	return s;
}

int main()
{
	vector<int> v ={8};
	cout<<combineParts(v);
}