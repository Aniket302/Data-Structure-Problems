#include<bits/stdc++.h>
using namespace std;

struct stacki
{
	int data;
	stacki* next;
	
	stacki()
	{
		data = 0;
		next = NULL;
	}
};

class stackFun
{
	stacki* head;
	
	public:
		
		stackFun()
		{
			head = NULL;
		}
		
		bool isEmpty()
		{
			
		}
		
		void push(int x)
		{
			
		}
		
		void myPop()
		{
			
			
		}
		
		void display()
		{
			
		}
};

int main()
{
	stackFun S;
	for(int i = 0; i<10; i++)
	{
		S.push(i+1);
	}
	S.display();
	S.myPop();
	S.myPop();
	S.display();
	return 0;
}
