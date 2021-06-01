#include<bits/stdc++.h>

using namespace std;

float g=2.5;

int main()
{
	int v,x=9+4;
	int &ref =x;
	ref=20;
	g=ref+ref*4;
	cout<<x;
}
