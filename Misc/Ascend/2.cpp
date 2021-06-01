//https://codeforces.com/problemset/problem/22/A

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
	int temp1=INT_MAX,temp2=INT_MAX,n;
	cin>>n;
	fo(i,n)
	{
		int t;
		cin>>t;
		if(t<temp1)
		{
			temp2=temp1;
			temp1=t;
		}
		else if(t!=temp1 && t<temp2)
		{
			temp2 = t;
		}
	}
	if(temp2==INT_MAX)
		cout<<"NO";
	else
		cout<<temp2;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}