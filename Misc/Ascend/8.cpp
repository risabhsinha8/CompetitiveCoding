//https://codeforces.com/problemset/problem/1478/C

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
	int flag=0,n;
	cin>>n;
	mii m;
	set<int, greater<int>> s;
	int max=INT_MIN;
	fo(i,2*n)
	{
		int t;
		cin>>t;
		s.insert(t);
		if(t%2==1)
		{
			flag=1;
		}
		m[t]++;
	}
	// cout<<flag<<endl;
	if(flag==0)
	{
		for(auto itr  = m.begin(); itr!=m.end();itr++)
			if(itr->second!=2)
			{
				flag=1;
				break;
			}
		int test=0;
		int i=n;
		for(int temp:s)
		{
			if(i==0)
				break;
			temp = temp/2;

			temp  -= test;
			// cout<<temp<<" "<<i<<endl;
			if(temp % i !=0 || temp <=0)
			{
				flag=1;
				break;
			}

			test += temp/i;
			i--;
		}


	}
	if(flag==0)
		cout<<"YES"<<endl;
	if(flag==1)
		cout<<"NO"<<endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    w(t)
    solve();
    return 0;
}