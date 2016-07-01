#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
	
}*head=NULL,*current=NULL,*temp=NULL;
void insert(int data)
{
	struct node *newnode=(node *)malloc(sizeof(node));
	newnode->data=data;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		current=newnode;
	}
	else
	{
		current->next=newnode;
		current=newnode;
	}
}
void reverse(node * ptr)
{
	
	if(ptr==NULL)
	return;
	reverse(ptr->next);
	
	cout<<ptr->data;
	cout<<temp->data;
	temp=temp->next;

}

int main(void) {
  
	insert(100);
	insert(90);
	insert(89);
	temp=head;
	struct node *ptr=head;
	reverse(ptr);
	
	return 0;
}
