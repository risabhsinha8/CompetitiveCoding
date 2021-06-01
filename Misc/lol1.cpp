#include<iostream>

using namespace std;

int main(){
	float t,n,a[1000],b[1000],sum,c[1000],gp,d;
	cin>>t;
	for(int i=0;i<t;i++){
		sum=0;
		gp=0;
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>a[j]>>b[j];
			sum+=b[j];
			c[j]=a[j]*b[j];
			gp+=c[j];
		}
		d=gp/sum;
		 printf("%.2f", d); 	
	}
}
