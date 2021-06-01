//https://codeforces.com/problemset/problem/799/B

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
	vector<pair<int,pair<int,int> > > deets(n);
	map<int,bool> used;
	set<int> c1,c2,c3;
	fo(i,n)
	{
		cin >>deets[i].ff;
		used[deets[i].ff]=false;
	}
	fo(i,n)
	{
	
		cin >>deets[i].ss.ff ;
		if(deets[i].ss.ff == 1 )
			c1.insert(deets[i].ff);
		else if(deets[i].ss.ff ==2 )
			c2.insert(deets[i].ff);
		else
			c3.insert(deets[i].ff);

	}
	fo(i,n) 
	{
		cin>>deets[i].ss.ss;
		if(deets[i].ss.ss == 1 )
			c1.insert(deets[i].ff);
		else if(deets[i].ss.ss ==2 )
			c2.insert(deets[i].ff);
		else
			c3.insert(deets[i].ff);
	}
	w(m)
	{
		int c;
		cin>>c;
		if(c==1)
		{
			
			while(!c1.empty())
			{
				auto it=c1.begin();
				if(used[*it]==false)
				{
					used[*it]=true;
					cout<<*it<<" ";
					break;
				}
				else
				{
					c1.erase(it);
				}
			}
			if(c1.empty())
				cout<<-1<<" ";
		}
		else if (c==2)
		{
			while(!c2.empty())
			{
				auto it=c2.begin();
				if(used[*it]==false)
				{
					used[*it]=true;
					cout<<*it<<" ";
					break;
				}
				else
				{
					c2.erase(it);
				}
			}
			if(c2.empty())
				cout<<-1<<" ";
		}
		else
		{
			while(!c3.empty())
			{
				auto it=c3.begin();
				if(used[*it]==false)
				{
					used[*it]=true;
					cout<<*it<<" ";
					break;
				}
				else
				{
					c3.erase(it);
				}
			}
			if(c3.empty())
				cout<<-1<<" ";
		}
	}
	
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}