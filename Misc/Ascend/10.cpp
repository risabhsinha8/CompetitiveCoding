//https://codeforces.com/contest/821/problem/C

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
	int n,lastnum;
	cin>>n;
	string str;
	int num,ans=0,count=1,flag=0;
	stack<int> s;
	fo(i,2*n)
	{
		cin>>str;
		if(str== "add")
		{
			cin>>num;
			s.push(num);
			flag=1;
		}
		else if(str=="remove"&&flag==1&&!s.empty())
		{
			if(count!=s.top())
			{
				flag=0;
				ans++;
				while(!s.empty())
					s.pop();
				count++;
			}
			else
			{
				s.pop();
				count++;
			}

		}
		else
		{
			count++;
			
		}
	}
	cout<<ans;

}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}