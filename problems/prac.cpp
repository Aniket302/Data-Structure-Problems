#include<iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};

class LinkedList
{
	private:
		node* head;
	public:
		LinkedList()
		{
			head = NULL;
		}
		
		bool isEmpty()
		{
			return (head == NULL);
		}
		
		void append(int x)
		{
			node* n = new node();
			n->data = x;
			n->next = NULL;
			
			if(isEmpty())
			{
				head = n;
			}
			else
			{
				node* temp = head;
				while(temp->next!= NULL)
				{
					temp = temp->next;
				}
				temp->next = n;
			}
		}
		
		void prepend(int x)
		{
			node* n = new node();
			n->data = x;
			
			if(isEmpty())
			{
				head = n;
			}
			else
			{
				n->next = head;
				head = n;
			}
		}
}

int main()
{
	return 0;
} 
