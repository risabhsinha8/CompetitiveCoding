#include<iostream>
#include<stack>

using namespace std;

int main(){
	int t;
	char c[500],temp;
	stack<char> a;
	cin>>t;
	while(t--){
		cin>>c;
		for(int i=0;c[i]!='\0';i++){
			if(c[i]=='+'||c[i]=='^'||c[i]=='-'||c[i]=='*'||c[i]=='/'||c[i]=='(')
				a.push(c[i]);
			else if(c[i]>=97&&c[i]<=123)
				cout<<c[i];
			else if(c[i]==')'){
				temp=a.top();
				cout<<temp;
				a.pop();
				a.pop();
			}
			else{
				cout<<"invalid input";
				break;
			}
		}
		cout<<endl; 
	}
}

