#include<iostream>
using namespace std;
int main()
{
	int n=4;
	int arr[10]={30,100,23,45,67};
	int item=30;
	int loc=0;
	arr[n+1]=item;
	while(arr[loc]!=item)
	{
		loc++;
	}
	if(loc==n+1)
	{
		cout<<"item not found: ";
	}
	else{
		cout<<"\nThe location of the given element is :"<<loc;
	}
}
