#include<bits/stdc++.h> 

using namespace std;

typedef long long int ll; 
  
ll fib(ll f[], ll n) 
{ 

    f[0] = 0; 
    f[1] = 1; 
  
    for (ll i = 2; i <= n; i++) 
        f[i] = (f[i - 1] + f[i - 2]) % 10; 
  
    return f[n]; 
} 
  

int last(int n) 
{ 
    ll f[60] = {0}; 
  
    fib(f, 60); 
  
    return f[n % 60]; 
}

int main()
{
	ll t,n,pos,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		i=1;
		if(n%2==0)
			pos=n;
		else
			pos=n-1;
		n/=2;
		while(n>1)
		{
			if(n%2==1)
				pos-=pow(2,i);
			i++;
			n/=2;
		}
		cout<<last(pos-1)<<endl;
	}
}
