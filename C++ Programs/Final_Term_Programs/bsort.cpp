#include<iostream>
using namespace std;
int main()
{
	int arr[] = {30,10,70,50,20,60,80,40,100,90};   //unsorted array
	int num = 9;  //number of elements in array

	
	for(int i = 0; i <= num-1; i++)
	{
		for(int j = 0; j < num-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
		
	}
	cout<<"\n\nThe sorted array is following: \n\n";
	for(int i=1;i<=num;i++)
	{
		cout<<arr[i]<<" ";
	}
}
