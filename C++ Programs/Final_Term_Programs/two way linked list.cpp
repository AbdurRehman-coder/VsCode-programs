#include<iostream>
using namespace std;
int main()
{
	int info[10] = {10,20,30,40,50,60,70,80,90,100};
	int null = 1000;
	int forw[10] = {1,2,3,4,5,6,7,8,9,1000};
	int back[10] = {1000,0,1,2,3,4,5,6,7,8};
	int first = 0;
	int last =9;
	int ptr = first;
	while(ptr != null)
	{
	  cout<<info[ptr]<<" ";	
	  ptr = forw[ptr];
	}
	cout<<endl<<endl;
	ptr = last;
	while(ptr != null)
	{
		cout<<info[ptr]<<" ";
		ptr = back[ptr];
	}
}
