
#include<iostream>
using namespace std;
int top=0;
int maxstk=15;
//Push Element into the Stack
void push(int STACK[], int item)
{
	if(top == maxstk)
	{
		cout<<"OVERFLOW!";
	}
	else
	{
		top++;
		STACK[top] = item;
	}
}
//Pop Element from the Stack
void pop(int STACK[],int* item)
{
	if(top == 0)
	{
		cout<<"UNDERFLOW!";	
	}

*item = STACK[top];
	top--;
	
}
int main()
{
	int STACK[16];
	
	//Pass Element to the Stack 
	int item;
	item =71;
	push(STACK,item);
	item =72;
	push(STACK,item);
	item = 73;	
	push(STACK,item);
	item = 74;
	push(STACK,item);
	item = 75;
	push(STACK,item);
	item = 76;
	push(STACK,item);
	item = 77;
	push(STACK,item);
	
	for(int i=top;i>0;i--)
	{
		cout<<endl<<STACK[i]<<endl;
	}
	
	pop(STACK,&item);
		pop(STACK,&item);
		//	pop(STACK);
		cout<<"\nAfter pop";
		for(int i=top;i>0;i--)
	{
		cout<<endl<<STACK[i]<<endl;
	}
		
}
