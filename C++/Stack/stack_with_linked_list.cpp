/*
 * 
 * Title:       Stack implementation with Linked Lists.
 * Author:      Viswalahiri Swamy Hejeebu
 * GitHub:      https://github.com/Viswalahiri
 * LinkedIn:    https://in.linkedin.com/in/viswalahiri
 *  
 */
 #include <bits/stdc++.h>
using namespace std;
#define SIZE 5

struct Node
{
	int data;
	struct Node* next;
};
struct Node *top=NULL;

void push(int value)
{
	int counter=1;
	struct Node *new_node;
	new_node = (struct Node* ) malloc (sizeof(struct Node));
	new_node->data=value;
	new_node->next=NULL;
	
	if(top==NULL)
	{
		top=new_node;
		return;
	}
	else
	{
		
	struct Node *temp = top;
	while(temp->next!=NULL)
	{
		temp=temp->next;		
	}
	temp->next=new_node;
	return;
	}
	
//	if(counter>SIZE)
//	{
//		cout<<"Stack Overflow."<<endl;
//	}
//	else
//	{
//	}
	return;
}


void pop()
{
	if(top==NULL)
	{
		cout<<"Stack Underflow."<<endl;
	}
	else
	{
		struct Node *temp=top,*temp1;
		while(temp->next!=NULL)
		{
			temp1=temp;
			temp=temp->next;
		}
		cout<<"The popped value is "<<temp->data;
		temp1->next=NULL;
		free(temp);
	}
	return;
}

void peek()
{
	if(top==NULL)
	{
		cout<<"The stack is empty."<<endl;
		return;
	}
	struct Node *temp=top;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	cout<<"The topmost value is "<<temp->data<<endl;
	return;
}

int main()
{
	
	while(1)
	{
	cout<<"1 - push"<<endl;
	cout<<"2 - pop"<<endl;
	cout<<"3 - peek"<<endl;
	cout<<"4 - exit"<<endl;
	int choice;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Push what?"<<endl;
			int to_push;
			cin>>to_push;
			push(to_push);
			break;
		case 2:
			pop();
			break;
		case 3:
			peek();
			break;
		case 4:
			exit(0);
		default:
			cout<<"The option you have requested isn't present."<<endl;
	}
	
	}
	return 0;
}
