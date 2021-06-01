#include<iostream>

using namespace std;

void Merge(int A[],int  p,int q,int r)
{
	int n1=q-p+1,n2=r-q,L[10],R[10];
	for(int i=0;i<n1;i++)
		L[i]=A[p+i];
	for(int i=0;i<n2;i++)
		R[i]=A[q+1+i];
	int l=0,r1=0,a;
	for(a=p;l<n1&&r1<n2;a++)
	{	
		if(L[l]<R[r1])
		{
			A[a]=L[l];
			l++;
		}
		else
		{
			A[a]=R[r1];
			r1++;
		}
	}
	while(l<n1)
	{
		A[a]=L[l];
		l++;
		a++;
	}
	while(r1<n2)
	{
		A[a]=R[r1];
		r1++;
		a++;
	}
}
void MergeSort(int A[],int p, int r)
{
	int n=(p+r-1)/2;
	if(p<r)
	{
		MergeSort(A,p,n);
		MergeSort(A,n+1,r);
		Merge(A,p,n,r);
	}
}

int main()
{
	int n,A[10];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
	MergeSort(A,0,n-1);
	for(int i=0;i<n;i++)
		cout<<A[i];
}
