#include<iostream>

using namespace std;

int main(){
	int n,a[10000],s,avg,final;
	while(1){
		s=0;
		final=0;
		cin>>n;
		if(n==-1)
			break;
		for(int i=0;i<n;i++){
			cin>>a[i];
			s+=a[i];
		}
		if(s%n!=0){
			cout<<-1<<endl;
			continue;
		}
		avg=s/n;
		for(int i=0;i<n;i++){
			if(a[i]>avg)
				final+=(a[i]-avg);
		}
		cout<<final<<endl;
	}
}
