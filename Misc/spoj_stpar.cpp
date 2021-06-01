#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,a[1001],f,flag;
	stack<int> s;
	while(1){
		cin>>n;
		if(n==0)
			break;
		f=1;
		flag=0;
		while(!s.empty())
			s.pop();
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;;){
			if(a[i]==f){
				f++;
				i++;
			}
			else if(!s.empty()&&s.top()==f){
				s.pop();
				f++;
			}
			else{
				s.push(a[i]);
				i++;
			}
			if(i==n+1)
				break;
		}
		while(!s.empty()){
			if(s.top()!=f){
				cout<<"no";
				flag=1;
				break;
			}
			else{
				s.pop();
				f++;
			}
		}
		if(flag==0)
			cout<<"yes";
		cout<<endl;
	}
}
