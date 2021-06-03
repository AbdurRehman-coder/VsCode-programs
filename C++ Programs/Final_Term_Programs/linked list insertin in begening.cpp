#include<iostream>
using namespace std;
int main()
{
	int info[10] = {0,33,62,89,0,102,0,217,07}; 
	
	 int null =2500;
	 
	int link[] = {4,8,3,7,6,2,2500,1,2500}; 
	int start = 5;
	int avail = 0;
	int ptr = start;
	int newNode;
	int item = 40;
	
	 cout<<"\nlist befor insertion:    ";
	while(ptr != null)   
	{
		cout<<info[ptr]<<" ";
		ptr = link[ptr];
	}
	 if(avail == null)
	 {
	 	cout<<"Overflow!";
	 	exit(0);
	 }
	   newNode  = avail;
	   avail = link[avail];
	   info[newNode] = item;
	   link[newNode] = start;
	   start = newNode; 
	     ptr = start;
	 
	 cout<<"\n\nlist after insertion:    ";
	 	while(ptr != null)   
	{
		cout<<info[ptr]<<" ";
		ptr = link[ptr];
	}
	return 0;
	
}
