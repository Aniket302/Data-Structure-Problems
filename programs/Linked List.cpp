#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
		int data;		//data part
		Node* next;  	//to store address of next node
};

int main()
{
	
	//initializing and creating nodes
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	
	//allocating the nodes
	head = new Node();
	second = new Node();
	third = new Node();
	
	//initializing the data part of node
	head->data = 5;
	head->next = second;
	
	second->data = 10;
	second->next = third;
	
	third->data = 15;
	third->next = NULL;
	
	cout<<"First node:";
	cout<<"\nData: "<<head->data;
	cout<<"\nAddress: "<<head->next;
	
	cout<<"\n\nSecond node:";
	cout<<"\nData: "<<second->data;
	cout<<"\nAddress: "<<second->next;
	
	cout<<"\n\nThird node:";
	cout<<"\nData: "<<third->data;
	cout<<"\nAddress: "<<third->next;
	return 0;
}
