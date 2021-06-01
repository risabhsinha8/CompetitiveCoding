//https://www.codechef.com/ZCOPRAC/problems/ZCO16002

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
	vi v(n);
	mii m;
	fo(i,n)
	{
		cin>>v[i];
		m[v[i]]++;
	}
	sort(all(v), greater<int>());
	int ma=0;
	for(int j=1;j<1e5;j++)
	{
		vi dp(n,0);
		int count=1;
		for(int i=0;i<n;i++)
		{
			if(dp[i]==0)
			{
				int j=i;
				while(m[v[j]-d]!=0)
				{
					dp
					count++; 
					j++;
				}
			}
		}
		ma= max(*max_element(all(dp)), ma);
	}
		
	cout<<ma;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}