#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int n= s2.size();
	for (int i = s1.find(s2);i != string::npos;i = s1.find(s2))
    	s1.erase(i, n);
    cout<<s1;
}
