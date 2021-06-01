//https://codeforces.com/problemset/problem/546/C

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
	int n,k1,k2;
	cin>>n;
	list<int> l1,l2;
	set<pair< list<int>, list<int> > > check;
	cin>>k1;
	fo(i,k1)
	{
		int t;
		cin>>t;
		l1.pb(t);
	}
	cin>>k2;
	fo(i,k2)
	{
		int t;
		cin>>t;
		l2.push_back(t);
	}
	int count=0;
	while(1)
	{
		if(l1.empty())
		{
			cout<<count<<" "<<2;
			break;
		}
		if(l2.empty())
		{
			cout<<count<<" "<<1;
			break;
		}
		if(check.count(mp(l1,l2)))
		{
			cout<<-1;
			break;
		}
		check.insert(mp(l1,l2));
		if(l1.front()>l2.front())
		{
			l1.pb(l2.front());
			l1.pb(l1.front());
			l1.pop_front();
			l2.pop_front();
		}
		else
		{
			l2.pb(l1.front());
			l2.pb(l2.front());
			l1.pop_front();
			l2.pop_front();
		}
		count++;
	}
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}