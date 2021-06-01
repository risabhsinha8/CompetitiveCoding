#include<bits/stdc++.h>

using namespace std;

class Node  
{  
    public: 
    int state;   
    Node* a;
    Node* b;
}; 

int main()  
{  
    Node* head = NULL;  
    Node* temp = new Node(); 
    temp->state=1;
    head= temp;
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
	string input;
	cin>>input;
	temp=head;
	for(int i=0;input[i]!='\0';i++)
	{
		if(input[i]=='a')
			temp=temp->a;
		else if(input[i]=='b')
			temp=temp->b;
	}
	if(temp->state==3)
		cout<<"The String is Correct";
	else
		cout<<"Wrong String";
	
}  
  
