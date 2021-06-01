#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int j=0,k,f=0;
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]=='+')
		{
			if(s2[j]>='a'&&s2[j]<='z')
			{
				j++;
			}
			else
			{
				f=1;
				break;
			}
		}
		else if(s1[i]=='$')
		{
			if(s2[j]>='0'&&s2[j]<='9')
			{
				j++;
			}
			else
			{
				f=1;
				break;
			}
		}
		else if(s1[i]=='*')
		{
			if(s1[i+1]=='{')
			{
				i+=2;
				k=0;
				while(s1[i]!='}')
				{
					k*=10;
					k+=s1[i]-'0';
					i++;
				}
				for(int l=0;l<k-1;l++)
				{
					if(s2[j+l]!=s2[j+l+1])
					{
						f=1;
						break;
					}
				}
				if(f==1)
					break;
				j+=k;
				
			}
			else
			{
				k=3;
				for(int l=0;l<k-1;l++)
				{
					if(s2[j+l]!=s2[j+l+1])
					{
						f=1;
						break;
					}
				}
				if(f==1)
					break;
				j+=k;
			}
		}
	}+
	if(f==1)
		cout<<"false";
	else
		cout<<"true";
}
