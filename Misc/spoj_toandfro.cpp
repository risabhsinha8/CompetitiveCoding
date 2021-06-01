#include<iostream>

using namespace std;

int main(){
	int n,c,r;
	char a[200],b[200][20],temp;
	while(1){
		r=0;
		cin>>n;
		if(n==0)
			break;
		cin>>a;
		for(int i=0;a[i]!='\0';i++){
			c=i%n;
			r=i/n;
			b[r][c]=a[i];
		}
		for(int i=1;i<=r;i+=2){
			for(int j=0,k=n-1;j<n/2;j++){
				temp=b[i][j];
				b[i][j]=b[i][k];
				b[i][k]=temp;
				k--;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<=r;j++)
				cout<<b[j][i];
		}
		cout<<endl;
	}
	
}
