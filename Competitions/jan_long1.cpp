#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t;
	string A,N;
	N="not ";
	cin>>t;
	char ch;
	scanf("%c",&ch);
	for(int i=0;i<t;i++)
	{
		getline(cin, A);
		size_t found = A.find(N);
		size_t found1 = A.find(" not");
		if(found!=string::npos)
		{
			cout<<"Real Fancy"<<endl;
		}
		else if(A=="not")
		{
			cout<<"Real Fancy"<<endl;
		}
		else if(found1==A.length()-4)
		{
			cout<<"Real Fancy"<<endl;
		}
		else 
			cout<<"regularly fancy"<<endl;
	}
}
