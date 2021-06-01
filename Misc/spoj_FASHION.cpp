#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n,a[1000],b[1000],sum;
	cin>>t;
	while(t--){
		sum=0;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		for(int i=0;i<n;i++)
			sum=sum+(a[i]*b[i]);
		cout<<sum<<endl;
	}
}
