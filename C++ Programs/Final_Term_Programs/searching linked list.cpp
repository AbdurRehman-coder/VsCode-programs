#include<iostream>
using namespace std;
int main()
{
	int  info[10]={10,30,70,20,50,40};
	int link[10]={1,2,3,4,5,-1};
	int start = 0;
	int item=70;
	int loc=0;
	int ptr=start;
	while(ptr>=0)
	{
		if(item == info[ptr])
		{
		loc = ptr;
		cout<<"The given element is located on position: "<<loc;
		exit(0);	
		}else
		     {
		     	ptr = link[ptr];
			 }
	}
	cout<<"item not found: ";
	
	}
