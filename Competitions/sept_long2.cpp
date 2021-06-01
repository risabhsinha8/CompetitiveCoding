#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
	int n, flag = 0;
	long long int a[10000], b[10000], diff;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n; i++)
		cin >> b[i];
	for(int i = 0; i < n; i++){
		diff = b[i] - a[i];
		if(abs(diff) == 1 || abs(diff) % 2 == 0)
			flag = 1;
		else{
			flag = 0;
			break;
		}
	}
	if(flag == 1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
