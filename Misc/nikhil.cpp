#include<stdio.h>
#include<stdlib.h>

struct node { 
    int data; 
    struct node* next; 
}typedef Node;


Node* bhav;



void ins(int data,node* head,node* tail)
{
	if(head==NULL)
	{
		node* rip=(node*)malloc(sizeof(node));
		head=tail=rip;
		rip->data=data;
		rip->next=NULL;
	}
	else
	{
		node* rip=(node*)malloc(sizeof(node));
		tail->next=rip;
		rip->next=NULL;
		rip->data=data;
		
	}
}

int dequeue(node* tail, node* head)
{
	int i;
	i=head->data;
	head=head->next;
	return(i);
}

void printt(node* head)
{
	printf("The LL is ");
	node* temp= head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
	
int main()
{
	node *head = NULL,*tail= NULL,*head1,*tail1;
	int n,i,a;
	printf("How many numbers do you want to enter?");
	scanf("%d",&n);
	printf("Enter Numbers : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		ins(a,head,tail);
	}
	printt(head);
	for(i=0;i<n;i++){
	
	i=dequeue(head,tail);
	ins(i,head1,tail1);
	
	}
	printt(head1);
}
