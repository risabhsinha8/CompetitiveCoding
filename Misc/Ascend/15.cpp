//https://www.codechef.com/problems/FORESTGA

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


vector<pii> v;
int len;

int calc(int x)
{
	int ans=0;
	fo(i,v.size())
	{
		int height = v[i].first+ x*v[i].second;
		if(height>=len)
			ans+=height; 
	}
	// cout<<ans<<endl;
	return ans;
}

int bin_search(int l, int r, int x) //l<calc(x)<=r
{
	if(l+1>=r)
	{
		return r;
	}

	int m=l+(r-l)/2;
	if(x>calc(m))
		return bin_search(m,r,x);
	else
		return bin_search(l,m,x);

}


void solve()
{
	int n,w;
	
	vi wood;
	cin>>n>>w>>len;
	fo(i,n)
	{
		int h,r;
		cin>>h>>r;
		v.pb({h,r});
	}
	if(calc(0)>w)
		cout<<"0"<<endl;
	else
		cout<<bin_search(0,1e18,w);
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}