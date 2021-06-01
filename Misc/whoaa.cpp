#include <bits/stdc++.h> 

using namespace std;

struct node
{
    long long int right;
    long long int left;
    long long int data;
}typedef node;

node A[100000];

int main()
{
    stack<int> s;
    stack<int> s2;
   long long int n,max,t;
   long long int a,b,c,x,y,z,f;
   cin>>n;
   for(int i=0;i<n;i++){
        cin>>A[i].data;
        A[i].left=A[i].right=0;
   }
   
   s.push(0);
   
   for(int i=1;i<n;i++)
    {
        while(!s.empty()&&A[i].data>A[s.top()].data)
        {
            a=s.top();
            s.pop();
            A[a].right=i;
        }
        s.push(i);
    }
    
    s2.push(n-1);
   
   for(int i=n-2;i>=0;--i)
    {
        while(!s2.empty() && A[i].data  >  A[s2.top()].data)
        {
            a=s2.top();
            s2.pop();
            A[a].left=i;
        }
        s2.push(i);
    }
    
       
  A[0].left==-1?x=0:x=A[0].left+1;
  A[0].right==-1?y=0:y=A[0].right+1;
   
  max=x*y;
  for(int i=1;i<n;i++)
  {
      A[i].left==-1?x=0:x=A[i].left+1;
        A[i].right==-1?y=0:y=A[i].right+1;
      t=x*y;
      if(t>max)
        max=t;
  }
  cout<<max;
}   

