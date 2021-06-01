#include<iostream>
#include<string.h>
 
using namespace std;

int mod(string num, int a) 
{ 
    // Initialize result 
    int res = 0; 
  
    // One by one process all digits of 'num' 
    for (int i = 0; i < num.length(); i++) 
         res = (res*10 + (int)num[i] - '0') %a; 
  
    return res; 
} 
 
int main()
{
	int t;
	cin>>t;
	int n,a,b,f;
	string k;
	while(t--)
	{
		f=0;
		cin>>n>>k;
		if(k.length()<7)
		{
			b=stoi(k);
//			cout<<"b="<<b<<endl;
			if(n>b)
			{
				a=b;
				f=1;
//				cout<<"in nestedif \n";
			}
		}
		if(f==0)
		{
			a=mod(k,n);
//			cout<<"in elif \n";
		}
		if(n%2==0&&a==n/2)
			cout<<2*a-1<<endl;
		else if(a<=n/2)
			cout<<2*a<<endl;
		else
			cout<<(n-a)*2<<endl;	
	}	
}



