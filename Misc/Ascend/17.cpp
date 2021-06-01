//https://codeforces.com/contest/1272/problem/C

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
	int n,m;
	cin>>n>>m;
	vector<char> s(n);
	fo(i,n)
	{
		cin>>s[i];
	}
	set<char> cset;
	fo(i,m)
	{
		char c;
		cin>>c;
		cset.insert(c);
	}
	int ans=0;
	int temp=0;
	fo(i,n)
	{
		if(cset.count(s[i]))
			temp++;
		else
		{
			ans+=(temp * (temp+1)/2);
			temp=0;
			// cout<<ans<<" ";
		}
	}
	ans+=(temp * (temp+1)/2);
	cout<<ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}