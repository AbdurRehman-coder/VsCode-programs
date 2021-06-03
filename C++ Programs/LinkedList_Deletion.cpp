#include<iostream>
using namespace std;
int main() 
{
	int DATA[12] = {23,56,20,67,90,12,33};
	int null = 5000;
	int Link[] = {6,5,0,1,null,2,4,8,9,5000};
	
	int start = 3;
	
	int avail = 7;
	int loc = 5;
	int locp = 1;
	int ptr = start;
	
	cout<<"Before Deletion"<<endl;
	
	while(ptr != null)
	{
		cout<<DATA[ptr]<<" ";
		ptr = Link[ptr];
	}
	
	if(locp == null)
	{
		start = Link[start];
	}
	else
	{
		Link[locp] = Link[loc];
	}
	
	avail = loc;
	Link[loc] = avail;
	
	
	// print Linked List after deletion
	
	ptr = start;
	cout<<"\n\nLinked List After deletion: "<<endl;
	while(ptr != null)
	{
		cout<<DATA[ptr]<<" ";
		ptr = Link[ptr];
	}
	
}
