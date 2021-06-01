//Question

#include<bits/stdc++.h>
using namespace std;

#define all(x) 			x.begin(), x.end()
#define fo(i,n) 		for(int i=0;i<n;i++) 
#define ff              first
#define ss              second
// #define int             long long
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
	int n,q,x,vn,temp;


	cin>>n>>q;
	vi v(n);
	fo(i,n)
		cin>>v[i];


	temp=0;
	vi freq(34,0);


	fo(i,n)
	{
		temp=v[i];
		int j=0;
		while(temp>0)
		{
			if(temp%2==1)
				freq[j]++;
			temp/=2;
			j++;
		}
	}


	temp=0;
	fo(i,31)
	{
		if(freq[i]>0)
				temp+= pow(2,i);
	}


	cout<<temp<<endl;


	fo(i,q)
	{


		cin>>x>>vn;
		temp=v[x-1];
		// cout<<temp<< " ";
		int j=0;
		while(temp>0)
		{
			if(temp%2==1)
				freq[j]--;
			temp/=2;
			j++;
		}



		temp=vn;
		j=0;
		while(temp>0)
		{
			if(temp%2==1)
				freq[j]++;
			temp/=2;
			j++;
		}	

		v[x-1]=vn;
		
		temp=0;
		fo(i,31)
		{
			if(freq[i]>0)
				temp+= pow(2,i);
		}
		cout<<temp<<endl;



	}
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    w(t)
    	solve();
    return 0;
}