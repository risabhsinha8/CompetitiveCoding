#include<iostream>
#include<algorithm>

using namespace std;

int partition(int A[],int s, int e)
{
	int temp;
	int a=s-1;
	for(int i=s;i<e;i++)
	{
		if(A[i]<=A[e])
		{
			a++;
			temp=A[i];
			A[i]=A[a];
			A[a]=temp;
		}
	}
	a++;
	temp=A[a];
	A[a]=A[e];
	A[e]=temp;
	return a;
}

void quicksort(int A[],int s, int e)
{
	if(s<e)
	{
		int a= partition(A,s,e);
		quicksort(A,s,a-1);
		quicksort(A,a+1,e);
	}
}

int main()
{
	int n,A[100];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
	sort(A,A+n);
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
}
