#include<iostream>

using namespace std;

int main(){
	int n,s;
	while(1){
		s=0;
		cin>>n;
		if(n==0)
			break;
		else{
			for(int i=1;i<=n;i++)
				s+=(i*i);
			cout<<s<<endl;
		}
	}
}
