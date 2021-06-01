#include<bits/stdc++.h>

using namespace std;

class Node  
{  
    public: 
    int data;   
    Node* on0;
    Node* on1;
}; 

int main()  
{  	int t;
    Node* head = NULL;  
    Node* new_node = new Node(); 
    new_node->data=0;
    head=new_node;
    new_node = new Node();
    new_node->data=1;
    head->on1=new_node;
    new_node->on1=head;
	new_node = new Node();
    new_node->data=2;
    head->on1->on0=new_node;
    new_node->on0=head->on1;
    new_node = new Node();
    new_node->data=3;
    head->on1->on0->on1=new_node;
    new_node->on1=head->on1->on0;
    new_node->on0=head;
    head->on0=new_node;
    cin>>t;
    while(t--){
	string S;
	cin>>S;
	Node* temp=head;
	int f=0;
	for(int i=0;S[i]!='\0';i++)
	{
		if(S[i]=='a')
			temp=temp->on0;
		else if(S[i]=='b')
			temp=temp->on1;
		else
		{
			cout<<"ERROR : WRONG INPUT"<<endl;
			f=1;
			break;
		}
	}
	if(f==0)
	{
		if(temp->data==3)
			cout<<"ACCEPTED"<<endl;
		else
			cout<<"REJECTED"<<endl;
	}
}
}  
  
