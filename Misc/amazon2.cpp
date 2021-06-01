#include<bits/stdc++.h>

using namespace std;

int d=INT_MAX;



bool fun(int r, int c, int cr, int cc, vector<vector<int>> v, int dis, bool vis[][1001])
{
    if(cc>=c||cr>=r)
    {
        return false;
    }
    else if(vis[cr][cc]==true)
    {
        return false;
    }
    else if(v[cr][cc]==0)
    {
        return false;
    }
    else if(v[cr][cc]==9)
    {
        vis[r][c]=true;
        if(d>dis)
            d=dis;
        return true;
    }
    else if(v[cr][cc]==1)
    {
        
        vis[r][c]=true;
        dis++;
        return fun( r,  c, cr+1, cc, v,  dis, vis)||fun( r,  c, cr, cc+1, v,  dis, vis);
    }
}



int minimumDistance(vector<vector<int>> v)
{
    int r=v.size(),c=v[0].size();
    bool vis[1001][1001]; 

    for(auto i = 0; i < r; i++) 
        for(auto j = 0; j < c; j++)   
            vis[i][j] = false; 
    if(fun(r,c,0,0,v,0,vis))
    {
        return d;
    }
    else
        return -1;
}


int main()
{
    vector<vector<int>> v {{1,0,0},{1,0,0},{1,9,1}};
    cout<<minimumDistance(v);
}
