//https://www.codechef.com/problems/FENCE

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

void solve()
{
	int n,m,k;
	set<pair<int,int>> s;
	cin>>n>>m>>k;
	fo(i,k)
	{
		int x,y;
		cin>>x>>y;
		s.insert({x,y});
	}
	int ans=0;
	for(auto i: s)
	{
		if(i.first==1)
			ans++;
		else
		{
			if(!s.count({i.first-1, i.second}))
				ans++;
		}
		if(i.first==n)
			ans++;
		else
		{
			if(!s.count({i.first+1, i.second}))
				ans++;	
		}
		if(i.second==1)
			ans++;
		else
		{
			if(!s.count({i.first, i.second-1}))
				ans++;	
		}
		if(i.second==m)
			ans++;
		else
		{
			if(!s.count({i.first, i.second+1}))
				ans++;	
		}
	}
	cout<<ans<<endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);\
    w(t)
    solve();
    return 0;
}