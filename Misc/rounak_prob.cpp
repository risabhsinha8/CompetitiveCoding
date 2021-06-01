#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char c[100];
	bool n=false,r=false,s=false,w=false;
	cin>>c;
	if(c[0]=='-')
		n=true;
	for(int i=0;c[i]!='\0';i++)
	{
		if(n==true)
			continue;
		if(c[i]>='0'&&c[i]<='9')
			continue;
		else if(c[i]=='.')
			r=true;
		else if(c[i]=='e'&&i!=0)
		{
			if(i<strlen(c))
				s=true;
			else
				w=true;
		}
		else
		{
			w=true;
			break;
		}
		
	}
	if(w==true)
		cout<<"not number";
	else
	{
		if(n==true)
		{
			if(s==true)
				cout<<"not number";
			else
			{
				if(r==true)
					cout<<"a negative real number";
				else
					cout<<"negative integer";
			}
		}
		else
		{
			if(s==true)
			{
				if(r==true)
					cout<<"not number";
				else
					cout<<"number in scientific notation";
			}
			else
			{
				if(r==true)
					cout<<"a positive real number";
				else
					cout<<"a positive integer";
			}
		}
	}
}
