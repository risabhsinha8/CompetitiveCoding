#include<bits/stdc++.h>

using namespace std;

vector<int> ninjaChess2021(string king, string ninja) {
    vector<int> a {0,0,0,0};
    pair<int,int> kc,qc;
    vector<vector<int>> board(8, vector<int> (8,0));
    board[king[1]-49][king[0]-97]=2;
    board[ninja[1]-49][ninja[0]-97]=2;
    kc=make_pair(king[1]-49,king[0]-97);
    qc=make_pair(ninja[1]-49,ninja[0]-97);

    for(int i=1;qc.first-i>=0;i++)
    {
        if(board[qc.first-i][qc.second]==2)
            break;
        board[qc.first-i][qc.second]=1;
    }
    for(int i=1;qc.first+i<8;i++)
    {
        if(board[qc.first+i][qc.second]==2)
            break;
        board[qc.first+i][qc.second]=1;
    }


     for(int i=1;qc.second-i>=0;i++)
    {
        if(board[qc.first][qc.second-i]==2)
            break;
        board[qc.first][qc.second-i]=1;
    }
    for(int i=1;qc.second+i<8;i++)
    {
        if(board[qc.first][qc.second+i]==2)
            break;
        board[qc.first][qc.second+i]=1;
    }

    for(int i=1;i<8;i++)
    {
        if(qc.first-i>=0&&qc.second-i>=0&&board[qc.first-i][qc.second-i]!=2)
        {
        	// cout<<qc.first-i<<" "<<qc.second-i<<endl;
        	board[qc.first-i][qc.second-i]=1;
        }
        else
        	break;
    }
    for(int i=1;i<8;i++)
    {
    	if(qc.first-i>=0&&qc.second+i<=7&&board[qc.first-i][qc.second+i]!=2)
        	board[qc.first-i][qc.second+i]=1;
        else
        	break;
    }
    for(int i=1;i<8;i++)
    {
    	if(qc.first+i<=7&&qc.second-i>=0&&board[qc.first+i][qc.second-i]!=2)
        	board[qc.first+i][qc.second-i]=1;
        else
        	break;
    }
    for(int i=1;i<8;i++)
    {
    	if(qc.first+i<=7&&qc.second+i<=7&&board[qc.first+i][qc.second+i]!=2)
        	board[qc.first+i][qc.second+i]=1;
        else
        	break;
    }
        
        

    if(qc.first+2<=7&&qc.second+1<=7&&board[qc.first+2][qc.second+1]!=2)
        board[qc.first+2][qc.second+1]=1;

    if(qc.first-2>=0&&qc.second+1<=7&&board[qc.first-2][qc.second+1]!=2)
        board[qc.first-2][qc.second+1]=1;

    if(qc.first+2<=7&&qc.second-1>=0&&board[qc.first+2][qc.second-1]!=2)
        board[qc.first+2][qc.second-1]=1;

    if(qc.first-2>=0&&qc.second-1>0&&board[qc.first-2][qc.second-1]!=2)
	{   
        board[qc.first-2][qc.second-1]=1;
        // cout<<qc.first-2<<" "<<qc.second-1<<endl;
    }

    if(qc.first+1<=7&&qc.second+2<=7&&board[qc.first+1][qc.second+2]!=2)
        board[qc.first+1][qc.second+2]=1;

    if(qc.first-1>=0&&qc.second+2<=7&&board[qc.first-1][qc.second+2]!=2)
        board[qc.first-1][qc.second+2]=1;

    if(qc.first+1<=7&&qc.second-2>=0&&board[qc.first+1][qc.second-2]!=2)
        board[qc.first+1][qc.second-2]=1;

    if(qc.first-1>=0&&qc.second-2>=0&&board[qc.first-1][qc.second-2]!=2)
        board[qc.first-1][qc.second-2]=1;


    if(kc.first+1<8)
    {
        if(kc.second+1<8)
            board[kc.first+1][kc.second+1]=2;
        if(kc.second-1>=0)
            board[kc.first+1][kc.second-1]=2;
        board[kc.first+1][kc.second]=2;
    }
    if(kc.first-1>=0)
    {
        if(kc.second+1<8)
            board[kc.first-1][kc.second+1]=2;
        if(kc.second-1>=0)
            board[kc.first-1][kc.second-1]=2;
        board[kc.first-1][kc.second]=2;
    }
    if(kc.second+1<8)
            board[kc.first][kc.second+1]=2;
        if(kc.second-1>=0)
            board[kc.first][kc.second-1]=2;



    ///checkmate
    if(kc.first==qc.first||kc.first==qc.first+1||kc.first==qc.first-1)
    {
    	if(kc.second==qc.second||kc.second==qc.second+1||kc.second==qc.second-1)
    	{


    		for(int i=-1;i<2;i++)
    		{
    			if(qc.first+i>7||qc.first+i<0)
    				continue;
    			for(int j=-1;j<2;j++)
    			{
    				if(qc.second+j>7||qc.second+j<0)
    					continue;
    				if(board[qc.first+i][qc.second+j]!=2)
    				{
    					a[0]++;
    					board[qc.first+i][qc.second+j]=2;
    				}
    			}
    		}



    	}
    }

    //check
    int f=0;
    for(int i=0;i<8;i++)
    {
    	for(int j=0;j<8;j++)
    	{
    		if(board[i][j]==1)
    		{
    			f=0;
    			for(int k=-1;k<2;k++)
	    		{
	    			if(k+i>7||k+i<0)
    					continue;
	    			for(int l=-1;l<2;l++)
	    			{
	    				if(l+j>7||l+j<0)
    						continue;
    					if(l==0&&k==0)
    						continue;
	    				if(board[k+i][l+j]==0)
	    				{
	    					f=1;
	    					break;
	    				}
	    				if(k+i==qc.first && l+j == qc.second)
	    				{
	    					f=1;
	    					break;
	    				}
	    			}
	    			if(f==1)
	    				break;
	    		}	
	    		if(f==1)
	    			a[1]++;
	    		else
	    		{
	    			// cout<<i<<" "<<j<<endl;
	    			a[0]++;
	    		}
    		}
    		//stalemate
    		else if(board[i][j]==0)
    		{
    			f=0;
    			for(int k=-1;k<2;k++)
	    		{
	    			if(k+i>7||k+i<0)
    					continue;
	    			for(int l=-1;l<2;l++)
	    			{
	    				if(l+j>7||l+j<0)
    						continue;
    					if(l==0&&k==0)
    						continue;
	    				if(board[k+i][l+j]==0)
	    				{
	    					f=1;
	    					break;
	    				}
	    			}
	    			if(f==1)
	    				break;
	    		}	
	    		if(f==1)
	    			a[3]++;
	    		else
	    		{
	    			a[2]++;
	    		}
    		}
    	}
    }

	board[king[1]-49][king[0]-97]=8;
    board[ninja[1]-49][ninja[0]-97]=9;

    for(int i=0;i<8;i++)
    {
    	for(int j=0;j<8;j++)
    		cout<<board[i][j]<<" ";
    	cout<<endl;
    }
    return a;
}

int main()
{
	std::vector<int> a=ninjaChess2021("a3","e4");
	for(int i:a)
		cout<<i<<" ";
}