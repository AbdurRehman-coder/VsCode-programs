#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5,6};
	int item = 10;  //the item which we want to insert
	int position = 3;//the position on which you want to insert element
	int n=4;          //total number of elements in array
   
   	for(int i = n; i >= position; i--)
	   {
		 arr[i+1] = arr[i];
    	}
    	
    	arr[position] = item;
		n++;
	
	for(int j = 0; j <= n; j++) //the array after the  insertion of  an element
	{
		cout<<arr[j]<<" ";
	}
}
