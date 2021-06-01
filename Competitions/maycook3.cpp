//Question

#include<bits/stdc++.h>
using namespace std;

#define all(x) 			x.begin(), x.end()
#define fo(i,n) 		for(int i=0;i<n;i++) 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define si 				set<int>
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

bool prime[10000001];
vi v(10000001);

void solve()
{
	int n;
	cin>>n;
	
	
 
  
    int ans=1+v[n]-v[n/2];
    if(n==2)
    	ans=1;
    else if(n==3)
    	ans=2;
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n=1e7;
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple
            // of p and are less than p^2
            // are already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    fo(i,10000001)
    {
    	if(i==1||i==0)
    	{
    		v[i]=0;
    		continue;
    	}
    	if(prime[i])
    	{
    		v[i]=v[i-1]+1;
    	}
    	else
    		v[i]=v[i-1];
    }
    w(t)
    solve();
    return 0;
}