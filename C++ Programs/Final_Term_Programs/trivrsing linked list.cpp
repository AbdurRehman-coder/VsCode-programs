#include<iostream>
using namespace std;
int main()
{
	int info[10]={30,100,13,25,44,55};
	int link[10]={4,5,-1,1,2,0};
	int start =3;
	int ptr=start;
	while(ptr>=0)
	{
		cout<<info[ptr]<<" ";
		ptr = link[ptr];
	}
}
