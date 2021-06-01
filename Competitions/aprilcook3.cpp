//Question

#include<bits/stdc++.h>
using namespace std;

#define all(x) 			x.begin(), x.end()
#define fo(i,n) 		for(i=0;i<n;i++) 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define maxpq             priority_queue<int>
#define minpq             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)

void solve()
{
	int x,n,r,b,temp,f=0;
	cin>>x>>n;
	if(n%2==0)
	{
		n/=2;
		for (int i=1; i<=sqrt(n); i++)
	    {
	        if (n%i == 0)
	        {
	        	temp=n/i;
	        	// cout<<i<< " "<<temp<<" "<<(i*(i-1)/2) + temp*(temp-1)/2 +i + temp<<endl;
	            if(x== (i*(i-1))+ (temp*(temp-1)) +i + temp)
	            {
	            	f=1;
	            	r=i;
	            	b=temp;
	            	break;
	            }
	        }
	    }	
	}
    if(f==0)
    	cout<<"NO"<<endl;
    else
    {
    	cout<<"YES"<<endl;
    	cout<<r+b<<endl;
    	int i=1,j=2;
    	cout<<i<<" "<<j<<endl;
    	r--;
    	b--;
    	while(b>0)
    	{
    		j++;
    		cout<<i<<" "<<j<<endl;
    		b--;
    	}
    	i=j;
    	while(r>0)
    	{
    		i++;
    		cout<<j<<" "<<i<<endl;
    		r--;
    	}
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    w(t)
    solve();
    return 0;
}