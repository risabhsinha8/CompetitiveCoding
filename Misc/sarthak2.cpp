#include<bits/stdc++.h>

using namespace std;

struct Node  
{  
    int state;   
    Node* a;
    Node* b;
}; 

int main()  
{  
    Node* head = NULL;  
    Node* temp = new Node(); 
    temp->state=1;
    head=temp;
    temp = new Node();
    temp->state=2;
    head->b=temp;
    temp->b=head;
	temp = new Node();
    temp->state=3;
    head->b->a=temp;
    temp->a=head->b;
    temp = new Node();
    temp->state=4;
    head->b->a->b=temp;
    temp->b=head->b->a;
    temp->a=head;
    head->a=temp;
	string S;
	cin>>S;
	temp=head;
	for(int i=0;S[i]!='\0';i++)
	{
		if(S[i]=='a')
			temp=temp->a;
		else if(S[i]=='b')
			temp=temp->b;
	
	}

	if(temp->state==1)
		cout<<"The String is Correct";
	else
		cout<<"Wrong String";

}  
  
