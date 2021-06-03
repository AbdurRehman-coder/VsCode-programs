#include<iostream>
using namespace std;
int main()
{
	int STUDENT[7]={10,20,25,32,35,40,50};
	int n=7;
	int count=0;
	int loc =0;
while( loc<n)
	{
		if(STUDENT[loc] >= 30)
		{ 
		count++;
		}
		loc++;
	
	}
	cout<<"total nuber of students containing more than 30 sudents: "<<count;
}
