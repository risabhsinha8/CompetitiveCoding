#include<bits/stdc++.h>

using namespace std;

int main()
{
	queue<int> P[4];
	queue<int> m;
	int hash[14],i,r,hash2[4][14],j,count=0;
	bool f=false;
	while(!f)
	{
	for(i=1; i<14;i++){
		hash[i]=0;
	}
	for(i=0;i<4;i++)
		for(j=1;j<14;j++)
			hash2[i][j]=0;
	srand(time(NULL));
	for( i=0;i<52;)
	{
		r=(rand() %13)+1;
		if(hash[r]<4)
		{
			hash[r]++;
			m.push(r);
			i++;
		}
	}
	for(i=0;!m.empty();i++)
	{
		r=m.front();
		P[i%4].push(r);
		m.pop();
		hash2[i%4][r]++;
		if(hash2[i%4][r] == 4){
			f=true;
			break;
		}
	}
	if(f){
		cout<<"Player"<<i%4+1<<" wins after "<<count << " restarts, GGWP.";
		
		while(!P[i%4].empty())
		{
			cout<<P[i%4].front()<<" ";
			P[i%4].pop();
		}
	}
	else{
		cout<<"Restart"<<endl;
		count++;
		cout<<"Player hands"<<endl;
		for( i=0;i<4;i++)
		{
			cout<<"Number "<<i+1<<" : ";
			while(!P[i].empty())
			{
				cout<<P[i].front()<<" ";
				P[i].pop();
			}
			cout<<endl;
		}
	}
	}
}
