#include<iostream>
using namespace std;

int main(){
	
	int a,b;
	char arr[300][300];
	int pairs = 0;
	//inputs
	cin>>a>>b;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			cin>>arr[i][j];		
		}
	}
	
	for(int i=0; i<a; i++)
	{
		for(int j=0;j<b-1;j++)
		{
			if(arr[i][j]==arr[i][j+1])
				pairs++;
		}
		
	}
	
	cout<<pairs<<endl;
	
	
	
}
