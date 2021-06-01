#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int t,length,flag;
	cin>>t;
	char A[100][1000];
	for(int i=0;i<t;i++)
	{
		flag=0;
		cin>>A[i];
		length=strlen(A[i]);
		for(int j=0;j<length;j++){
			if(A[i][j] != A[i][length-j-1]){
            flag = 1;
            break;
		}
	}
		if(flag==1)
			cout<<"Ugly"<<endl;
		else
			cout<<"Beautiful"<<endl;
	}
}

