//https://codeforces.com/contest/847/problem/B

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
	int n;
	cin>>n;
	vi v[n];
	vi lb(n);
	fo(i,n)
	{
		int t;
		cin>>t;
		if(i==0)
		{
			v[0].pb(t);
			lb[0]=t;
		}
		else
		{
			auto it= lower_bound(all(lb), t, greater<int>());
			v[it-lb.begin()].pb(t);
			lb[it-lb.begin()]=t;
		}
	}
	fo(i,n)
	{
		fo(j,v[i].size())
			cout<<v[i][j]<<" ";
		cout<<endl;
	}
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}