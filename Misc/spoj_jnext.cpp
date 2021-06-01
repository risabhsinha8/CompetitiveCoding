#include<iostream>
#include<algorithm>

using namespace std;


int a[1000000];

int main(){
	int n,t,temp;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=n-1;i>=0;i--){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++){
			if(a[i]>a[i+1]){
				temp=a[i+1];
				sort(a,a+i+1);
				for(int j=0;j<=i;j++){
					if(a[j]>temp){
						a[i+1]=a[j];
						a[j]=temp;
						break;
					}
				}
				sort(a,a+i+1, greater<int>());
				break;
			}
		}
		for(int i=n-1;i>=0;i--)
			cout<<a[i];
		cout<<endl;
	}
	
}
