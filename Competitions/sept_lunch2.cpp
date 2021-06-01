// Example program
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  int t,n,m,A[1000],B[101],f;
  cin>>t;
  while(t--)
  {
        f=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
            B[i]=0;
        for(int i=0;i<m;i++)
        {
            cin>>A[i];
            B[A[i]++];
            if(min_element(B,B+n)+2==max_element(B,B+n))
            {
            	cout<<"i"<<i;
                f=1;
            }
        }
        if(f==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
  }
        
}

