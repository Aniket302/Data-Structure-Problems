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
		
		
		void append(int x)
		{
			node* n = new node();
			n->data = x;
			n->next = NULL;
			
			if(head == NULL) //list is empty so we insert at the start
			{
				head = n;
			}
			else		//list is not empty so traverse till we find a next which is null which indicates the last element 
						//we modify and attach our new node n to the next 
			{
				node* temp = head;
				while(temp->next!= NULL)
				{
					temp = temp->next;
				}
				temp->next = n;
			}
		}
		
		void prepend(int x)		//connect the next of this new node to head and make the whole node head afterwards
		{
			node* n = new node();
			n->data = x;
			n->next = head;
			
			head = n;
		}
		
		void insertAfter(int ele, int x)
		{
			node* n = new node();
			n->data = x;
			
			node* temp = head;
			while(temp->next!=NULL)  //traverse till you find the element, first connect the next of new node then connect
								//next of temp node with new node ez
			{
				if(temp->data == ele)
				{
					n->next = temp->next;
					temp->next = n;
					break;
				}
				temp = temp->next;
			}
		}
		
		void delete_(int x)
		{
			if(head->data == x)				//if element to be deleted present at the start
			{
				head = head->next;
			}
			else						//if element present in the middle
			{
				node* prev = head;
				node* current = head->next;
				bool is_last = true;
				while(current->next!=NULL)
				{
					if(current->data == x)
					{
						prev->next = current->next;
						is_last = false;
						break;
					}
					current = current->next;
					prev = prev->next;
				}
				if(is_last)				//if element present at the end
				{
					prev->next = NULL;
				}
			}
		}
		
		void update(int ele, int x)
		{
			node* temp = head;
			while(temp->next!=NULL)
			{
				if(temp->data == ele)
				{
					temp->data = x;
				}
				temp = temp->next;
			}
		}
		
		void display()
		{
			node* temp = head;
			int i = 1;
			while(temp!=NULL)
			{
				cout<<"\n"<<i<<". "<<temp->data;
				temp = temp->next;
				i++;
			}
		}
		
		int returnSize()
		{
			node* temp = head;
			int s = 0;
			while(temp!=NULL)
			{
				s++;
				temp = temp->next;
			}
			return(s);
		}
		
};

int main()
{
	LinkedList L;
	L.append(5);
	L.append(10);
	L.append(15);
	L.append(20);
	L.prepend(25);
	L.prepend(30);
	L.insertAfter(30, 0);
	L.display();
	cout<<"\n---------\n";
	L.delete_(10);
	L.display();
	cout<<"\n---------\n";
	L.delete_(30);
	L.display();
	cout<<"\n---------\n";
	L.delete_(20);
	L.display();
	cout<<"\n---------\n";
	L.update(0, 6);
	L.update(25, 7);
	L.display();
	cout<<"\n---------\n";
	cout<<L.returnSize();
	
	return 0;
}
