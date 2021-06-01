#include<bits/stdc++.h>

using namespace std; 
  

// Driver code 
int main() { 
    int n ; 
    int height,length;
    cin>>n;
    int ans = 0; 
    for (int length = 1; length <= sqrt(n); ++length) 
    for (int height = length; height*length <= n; ++height) 
        ans++;
    cout<<ans;
} 
