#include<iostream>
using namespace std;
int main()
	{
		int info[] = {20,80,50,30,60,40,70};
		int link[] = {-1,6,5,0,2,3,4};
		int ptr = 1,loc = 0;
		int item = 60;
		int null = -1;
		while(ptr != null)
		{
		 	if(item < info[ptr])
		 	{
		 		ptr = link[ptr];
			 }
			 else if(item == info[ptr])
			 		{
			 			loc = ptr;
			 			cout<<"your item is located on position: "<<loc;
			 			exit(0);
					 }
					 else
					 {
					 	cout<<"item not found";
					 	exit(0);
					 }
		}
		cout<<"item not foud: ";
	}
