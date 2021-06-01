#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,a[100000];
	long long int max=0,m;
	while(1){
		max=0;
		cin>>n;
		if(n==0)
			break;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if (a[j]<a[i])
				{
					m=a[i]*(j-i);
					if(m>max)
						max=m;
					break;
				}
				if(j==n-1)
				{
					m=a[i]*(n-i);
					if(m>max)
						max=m;
				}
			}
		}
		cout<<max<<endl;
	}
}
