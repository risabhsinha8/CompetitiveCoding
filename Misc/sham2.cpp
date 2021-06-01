#include<bits/stdc++.h>

using namespace std;

struct node{
    char data;
    node* l;
    node* r;
}; 

void trav(node* root)
{
    if(root == NULL )
        return;
    trav(root->l);
    // cout<<root->data;
    if(root->l!=NULL || root->r!=NULL)
        cout<<root->data<<" ";
    trav(root->r);
}


int main()
{
    string s;
    cin>>s;
    node* root= new node();
    root->l = NULL;
    root->r = NULL;
    node* temp;
    queue<pair<node*,int>> q;
    q.push(make_pair(root,3));
    for(int i=0;i<s.size();i++)
    {
        pair<node*,int> t=q.front();
        temp=t.first;
        q.pop();
        if(s[i]== '-')
            continue;
        if(t.second!= 3)
        {
            if(t.second==0)
            {
                temp->l=new node();
                temp=temp->l;
            }
            else
            {
                temp->r=new node();
                temp=temp->r;
            }
            temp->l=NULL;
            temp->r=NULL;
        }
        temp->data=s[i];
        q.push(make_pair(temp,0));
        q.push(make_pair(temp,1));
    }
    trav(root);
}