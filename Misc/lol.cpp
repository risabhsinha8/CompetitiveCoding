#include<iostream>

using namespace std;

struct cus{
	long int c,d;
	bool b=false;
};

int main(){
	int t,n,f,m;
	cus C[100000],temp;
	bool a[1000];
	cin>>t;
	for(int i=0;i<t;i++){
		f=2;
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>C[j].c>>C[j].d;
		}
		for(int j=0;j<n-1;j++){
			for(int k;k<n-j-1;k++){
				if(C[k].c>C[k+1].c){
					temp=C[j];
					C[j]=C[j+1];
					C[j+1]=temp;
				}
			}
		}
		m=C[0].d;
		for(int j=1;j<n;j++){
			if(m<C[j].c){
				f++;
				m=C[j].d;
			}
			if(C[j].d>m){
				m=C[j].d;
			}	
		}
		cout<<f<<endl;
	}
}
