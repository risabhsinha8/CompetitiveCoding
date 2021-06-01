#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	char s1[1000];
	int j=0;
	cin>>s;
	for(int i=0; s[i]!='\0';i++)
	{
		s1[j]=s[i];
		j++;
		while(s[i]==s[i+1])
			i++;
	}
	s1[j]='\0';
	cout<<s1;
}
