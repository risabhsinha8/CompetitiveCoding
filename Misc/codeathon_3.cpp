#include <bits/stdc++.h>

using namespace std;

int rD(int arr[], int n) 
{ 
    if (n==0 || n==1) 
        return n; 
    int j = 0; 
    for (int i=0; i < n-1; i++) 
        if (arr[i] != arr[i+1]) 
            arr[j++] = arr[i]; 
  
    arr[j++] = arr[n-1]; 
  
    return j; 
}

int main(){
	int t,m,a,b,c,k;
	int A[100000];
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>m;
		k=0;
		for(int j=0;j<m;j++){
			cin>>A[k]>>A[k++]>>A[k++];			
		}
		k++;
		k=rD(A,k);
		sort(A,A+k);
		for(int j=0;j<k;j++){
			cout<<A[j]<<" ";
		}
		
	}
}
