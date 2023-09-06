#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	bool visited;
	node* next;
	
	node()
	{
		visited = false;
	}
};

class LnLi
{
	
	
	public: 
	node* head;
	LnLi()
	{
		head = NULL;
	}
	

	void append(int x)
	{
		node* n = new node();
		n->data = x;
		n->next = NULL;
		if(head == NULL)
		{
			head = n;
		}
		else
		{
			node* temp = head;
			while(temp->next!=NULL)
			{
				temp = temp->next;
			}
			temp->next = n;
			
		}
	}
	
	void display()
	{
		node* temp = head;
		while(temp!=NULL)
		{
			cout<<" "<<temp->data<<" -> ";
			temp = temp -> next;
		}
		
	}
	
	//length using recursion
	int recursiveLength(node* Head)
	{
		if(Head == NULL)
			return 0;
		else
			return 1 + recursiveLength(Head->next);
	}
	//search using recursion
	bool recursiveSearch(node* Head, int x)
	{
		if(Head == NULL)
			return false;
		else if(Head->data == x)
			return true;
		
		return recursiveSearch(Head->next, x);
	}
	//loops/cycle in linked list by modifying
	bool isCycle1()
	{
		node* cur = head;
		while(cur->next!=NULL)
		{
			if(cur->visited)
				return true;
			else
				cur->visited = true;
			cur = cur->next;
		}
		return false;
	}
	
	//loops/cycle by flyod's cycle finding algo
	bool isCycle2()
	{
		node* slow = head;
		node* fast = head;
		while(fast!=NULL && fast->next!=NULL) //going by twice as fast thats why 2 conditions
		{
			
			slow = slow->next;
			fast = fast->next->next;
			
			if(fast == slow)
				return true;
		}
		return false;
	}
	
	//https://media.geeksforgeeks.org/wp-content/cdn-uploads/RGIF2.gif
	void reverse()
	{
		node* back = NULL;
		node* cur = head;
		node* front = NULL;
		while(cur)
		{
			front = cur->next;
			cur->next = back;
			
			back = cur;
			cur = front;
		}
		head = back;
	}
	
};

int main()
{
	LnLi LL;
	LL.append(5);
	LL.append(10);
	LL.append(15);
	LL.append(20);
	LL.display();
	cout<<"\n Size: "<<LL.recursiveLength(LL.head);
	cout<<"\n Five Present: "<<LL.recursiveSearch(LL.head, 5);
	cout<<"\n Is loop present? "<<LL.isCycle1();
	cout<<"\n Is loop present?(floyd method) "<<LL.isCycle2();
	cout<<"\n After reversing: ";
	LL.reverse();
	LL.display();
	return 0;
}
