//https://codeforces.com/problemset/problem/1140/C

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
	int n,k;
	cin>>n>>k;
	vector<pair<int,int>> v(n);
	fo(i,n)
	{
		int x,y;
		cin>>x>>y;
		v.pb({y,x});
	}
	sort(all(v), greater<pii>());
	minpq pq;
	int sum=0,max=0;
	fo(i,n)
	{
		if(pq.empty()||pq.size()<k )
		{
			pq.push(v[i].second);
			sum+=v[i].second;
			if(max < sum*v[i].ff)
				max= sum*v[i].ff;
		}
		else
		{
			if(pq.top()<v[i].ss)
			{
				sum-=pq.top();
				pq.pop();
				sum+=v[i].ss;
				pq.push(v[i].ss);
				if(max < sum*v[i].ff)
					max= sum*v[i].ff;
			}
		}
		// cout<<v[i].ff<<" "<<max<<endl;
	}
	cout<<max;

	
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}