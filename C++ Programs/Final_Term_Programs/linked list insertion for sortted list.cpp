#include<iostream>
using namespace std;
int main()
{
	//an array of size 10 containing 7 elements 
	//the remaining 3 space is for empty nodes or available
	int info[10] = {10,20,30,40,50,60,70}; 
	
	 // 1000 represent null
	 int null =1000;
	 
	int link[] = {1,2,3,4,5,6,1000,8,9,1000}; 
	
	//the linked list wil start from "6th" location
	int start = 0;
	
	//the 1st availble node is on "7th" position
	int avail = 8;
	
	int ptr = start;
	
	int newNode;
	int save;
	
	//the item which we want to insert at begining
	int item = 80;
	
	//the location after which we want to insert item
	int loc;
	
	 //to display the list befor insertion
	 cout<<"\nlist befor insertion:    ";
	while(ptr != null)   
	{
		cout<<info[ptr]<<" ";
		ptr = link[ptr];
	}
	
	
	//insertion operation
	if(start = null || item < info[start])
	{
	loc = null;
    }
    else{
	
	save = start; ptr = link[start];
	
		while (ptr != null)
		{
		
			if(item < info[ptr])
			{
			 loc = save;
			 break;
			}
			save = ptr;
			ptr = link[ptr];
		}
	   loc = save;
		}
            
	 if(avail == null)
	 {
	 	cout<<"Overflow!";
	 	exit(0);
	 }
	   //to remove the 1st node from availble
	   //the location of the 1st availbe node will be assigne to newNode
	   newNode  = avail;
	   
	   //assigne the location of the 2nd avilble node to avail
	   avail = link[avail];
	   
	   //place the item in the newNode
	   info[newNode] = item;
	   
	   //from null we mean that if we do not specify the location
	   //then the item will be inserted as a 1st node
	   if(loc == null)
	   {
	   	//the location of the 1st node is placed in newNode
	   //or newnode wil point to 1st node of the original list
	   	link[newNode] = start;
	   	
	   	//start will point to the new node
	   	start = newNode;
	   }
	   
	   //if we specify the location for insertion
	   else
	   {
	   link[newNode] = link[loc];
	   link[loc] = newNode;  
	   }//end of insertion operation
	   
	   //if you want to display the linked list after insertion
	   //update ptr
	   ptr = start;
	   
	 cout<<"\n\nlist after insertion:    ";
	 	while(ptr != null)   
	{
		cout<<info[ptr]<<" ";
		ptr = link[ptr];
	}
	return 0;
	
}
