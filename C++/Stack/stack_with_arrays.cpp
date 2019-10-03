/*
 * 
 * Title:       Stack with array implementation.
 * Author:      Viswalahiri Swamy Hejeebu
 * GitHub:      https://github.com/Viswalahiri
 * LinkedIn:    https://in.linkedin.com/in/viswalahiri
 *  
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
# define SIZE 5
int arr[SIZE];
int top = -1;

void push(int value)
{
	if(top==SIZE-1)
	{
		cout<<"Stack Overflow."<<endl;
	}
	else
	{
		top+=1;
		arr[top]=value;
	}
	return;
}

void pop()
{
	if(top==-1)
	{
		cout<<"Stack Underflow."<<endl;
	}
	else
	{
		cout<<"Deleted value is "<<arr[top]<<endl;
		top-=1;
	}
	return;
}

void peek()
{
	if(top==-1)
	{
		cout<<"Stack Empty."<<endl;
	}
	else
	{
		cout<<"Topmost element is "<<arr[top]<<endl;
	}
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
