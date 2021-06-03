#include<iostream>
using namespace std;
int main()
{
	int info[10] = {30,50,80,20,40,70,10}; 
	 int null =1000;
	 
	int link[] = {4,5,1000,0,1,2,3,8,9,1000}; 
	int start = 6;
	int avail = 7;
	int ptr = start;
	
	int newNode;
	int item = 60;
	int loc = 1;
	 cout<<"\nlist befor insertion:    ";
	while(ptr != null)   
	{
		cout<<info[ptr]<<" ";
		ptr = link[ptr];
	}
	
	
	//insertion operation
	 if(avail == null)
	 {
	 	cout<<"Overflow!";
	 	exit(0);
	 }
	   newNode  = avail;
	   avail = link[avail];
	   info[newNode] = item;
	   if(loc == null)
	   {
	   	link[newNode] = start;
	   	start = newNode;
	   }
	   else
	   {
	   link[newNode] = link[loc];
	   link[loc] = newNode;  
	   }
	   ptr = start;
	   
	 cout<<"\n\nlist after insertion:    ";
	 	while(ptr != null)   
	{
		cout<<info[ptr]<<" ";
		ptr = link[ptr];
	}
	return 0;
	
}
