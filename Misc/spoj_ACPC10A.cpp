#include<iostream>

using namespace std;

int main(){
	int a,b,c;
	while(1){
		cin>>a>>b>>c;
		if(a==0&&b==0&&c==0)
			break;
		else if(b-a==c-b)
			cout<<"AP "<<c+b-a<<endl;
		else if(b/a==c/b)
			cout<<"GP "<<c*(b/a)<<endl;
	}
}
