//https://www.codechef.com/problems/ATTND

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
	vector<string> fnames(n),lnames(n);
	map<string, int> hash;
	fo(i,n)
	{
		cin>>fnames[i]>>lnames[i];
		if(!hash.count(fnames[i]))
		{
			hash.insert(mp(fnames[i],1));
		}
		else
		{
			hash[fnames[i]]++;
		}

	}

	fo(i,n)
	{
		if(hash[fnames[i]]>1)
		{
			cout<<fnames[i]<<" "<<lnames[i];
		}
		else
		{
			cout<<fnames[i];
		}
		cout<<endl;
	}



}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    w(t)
    solve();
    return 0;
}