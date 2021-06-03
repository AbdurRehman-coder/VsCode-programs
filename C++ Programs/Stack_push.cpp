
/* This program Push (Insert) the
Element into the Stack 
*/

#include<iostream>
using namespace std;
int main()
{
	int push[5] = {22,33,44};
	
	cout<<"Stack befor Push: "<<endl;
	for(int i = 0; i < 5; i++)
   	{
     	cout<<push[i]<<endl;
    }  
	
	int top = 2;
	int item = 55;
	top = top + 1;
	push[top] = item;
	
	cout<<"Stack after Push the new Element"<<endl;
	for(int i = 0; i < 5; i++)
	{
		cout<<push[i]<<endl;
	  } 
	  
	  
	  
	  
	 
//	  cout<<endl<<endl;
//		
//	string Push[5] = {"XXX","YYY","ZZZ"};
//	int Top = 2;
//	Top = Top + 1;
//	string Item = "VVV";
//	Push[Top] = Item;
//	cout<<"Push CHar into Stack: "<<endl;
//	for(int k = 0; k < 5; k++)
//	{
//		cout<<Push[k]<<endl;
//	}
//	
	
      
}
