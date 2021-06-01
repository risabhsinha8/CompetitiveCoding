#include <bits/stdc++.h>
using namespace std;

int n,t,x,p,k,temp,ind,a1,a2;
vector<int> v,v1,v2;

void fun()
{
	sort(v1.begin(),v1.end());
        if(v1[p]==x)
        {
            a1=0;
            return;
        }
        auto l=lower_bound(v1.begin(),v1.end(),x);
        
        
        
        
        
        ind=l-v1.begin();
        if(p<k&&v1[p]<x)
        {
            a1=-1;
            return;
        }
        if(p>k&&v1[p]>x)
        {
            a1=-1;
            return;
        }
        temp=0;
        if(v1[ind]!=x)
        {
            v1[k]=x;
            sort(v1.begin(),v1.end());
            l=lower_bound(v1.begin(),v1.end(),x);
            ind=l-v1.begin();
            temp=1;
        }
        
        
        if(ind==k&&p!=k)
        {
            a1=-1;
            return;
        }
        a1=abs(p-ind)+temp;
}


void fun2()
{
	sort(v2.begin(),v2.end());
        if(p<k&&v2[p]<x)
        {
            a2=-1;
            return;
        }
        if(p>k&&v2[p]>x)
        {
            a2=-1;
            return;
        }
        temp=0;
        while(v2[p]!=x)
        {
            v2[k]=x;
            sort(v2.begin(),v2.end());
            temp++;
        }
        a2=temp;
}

int main() {
	// your code goes here
	srand(time(0));
	cin>>t;
	while(t--)
	{
		
	    v.clear();
	    v1.clear();
	    v2.clear();
//        cin>>n>>x>>p>>k;
		n=5;
		x=0;
		p=(rand()%n)+1;
		k=(rand()%n)+1;
        for(int i=0;i<n;i++)
        {
            temp= 0;
            v.push_back(temp);
        }
		if(1)
		{
//			cout<<"ERROR"<<endl;
			cout<<n<<" "<<x<<" "<<p<<" "<<k<<endl;
			for(int i:v)
				cout<<i<<" ";
			cout<<endl;
//			cout<<"next"<<endl;	
		}   
	}
	return 0;
}



        



