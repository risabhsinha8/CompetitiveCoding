// Example program
#include <iostream>
#include <string>

using namespace std;

bool isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1) 
        return false; 
  
    // Check from 2 to n-1 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 

int main()
{
  bool a;
  int n,f,count=1,A[10000];
  cin>>n;
  for(int i=2;i<=n+1;i++)
  {
      if(isPrime(i)&&(i*2)>n+1)
      {
          count++;
      }
        
  }
  cout<<count;
}

