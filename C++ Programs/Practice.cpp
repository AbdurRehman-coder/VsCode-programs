#include<iostream>
using namespace std;
int main()
{
int info[10] = {3,56,34,77,45,266,0,76,32};
int link[] = {4,8,7,6,2,2500,1,2500};
int null = 2500;
int start=5;
int avail= 0;
int ptr = start;
while(ptr!= null)
{
	cout<<info[ptr]<<" ";
	ptr=link[ptr];
	return 1;
	
}
}
