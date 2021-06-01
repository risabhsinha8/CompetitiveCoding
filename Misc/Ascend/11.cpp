//https://www.codechef.com/problems/NBC002

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
	string a,b;
	cin>>a>>b;
	map<char,int> m;
	for(int i=0;i< a.length()-1;i++)
		m[a[i]]++;
	int max=0;
	for(auto i : m)
	{
		if(i.second>max)
			max=i.second;
	}
	cout<<max<<" ";
	switch (a.back())
	{
		case 'n': cout<<"north ";
		break;
		case 's': cout<<"south ";
		break;
		case 'e': cout<<"east ";
		break;
		default:cout<<"west ";
	}
	m=map<char,int>();
	for(int i=0;i< b.length()-1;i++)
		m[b[i]]++;
	max=0;
	for(auto i : m)
	{
		if(i.second>max)
			max=i.second;
	}
	cout<<max<<" ";
	switch (b.back())
	{
		case 'n': cout<<"north ";
		break;
		case 's': cout<<"south ";
		break;
		case 'e': cout<<"east ";
		break;
		default:cout<<"west ";
	}
	cout<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    w(t)
    solve();
    return 0;
}