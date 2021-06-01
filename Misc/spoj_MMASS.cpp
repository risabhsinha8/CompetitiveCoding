#include<bits/stdc++.h>

using namespace std;

int main(){
	char a[100],d;
	int e,b,c,bsum,sum;
	stack<int> s;
	cin>>a;
	sum=0;
	for(int i=0;a[i]!='\0';i++){
		if(a[i]=='(')
			s.push(-1);
		else if(a[i]==')'){
			bsum=0;
			while(s.top()!=-1){
				c=s.top();
				bsum+=c;
				s.pop();
			}
			s.pop();
			s.push(bsum);
		}
		else if(a[i]>='2'&&a[i]<='9'){
			e=a[i]-'0';
			b=s.top();
			s.pop();
			b=b*e;
			s.push(b);
		}
		else if(a[i]=='H')
			s.push(1);
		else if(a[i]=='C')
			s.push(12);
		else if(a[i]=='O')
			s.push(16);
		
	}
	while(!s.empty()){
		sum+=s.top();
		s.pop();
	}
	cout<<sum<<" "<<bsum;
}
