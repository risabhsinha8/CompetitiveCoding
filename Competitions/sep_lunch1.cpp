// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
  int t,n,q,A[200001],a,c,temp,ans;
  cin>>t;
  while(t--)
  {
        cin>>n>>q;
        for(int i=1;i<n;i++)
            cin>>A[i];
        while(q--)
        {
            cin>>a>>c;
            if(c<a)
            {
                temp=a;
                a=c;
                c=temp;
            }
            if((c-a)%2==0)
            {
                cout<<"UNKNOWN"<<endl;
            }
            else
            {
                temp=(c-a+1)/2;
                ans=A[a];
                for(int i=1;i<temp;i++)
                {
                    ans+=A[a+(2*i)];
                    ans-=A[a-1+(2*i)];
                }
                cout<<ans<<endl;
            }
        }
  }
}

