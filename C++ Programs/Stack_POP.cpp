#include<iostream>
using namespace std;
int main()
{
	int pop[7] = {10,20,30,40,55};
	cout<<"Stack befor POP: "<<endl;
	for(int i = 0; i < 7; i++)
	{
		cout<<pop[i]<<endl;
		
	}
	
	int top = 4;
	int item ;
	item = pop[top];
	top = top -1;

	
	cout<<"Stack after pop: "<<endl; 
	for(int i = 0; i < top+1; i++)
	{
		cout<<pop[i]<<endl;
	}
	cout<<endl<<"item = "<<item;
}
