#include<iostream>
using namespace std;
int main(){
	int info[10]={0,71,92,39,0,15,0,27,07};
	int link[] = {4,8,3,7,6,2,2500,1,2500};
	
	int null = 2500;
	int start = 5;
	int avail = 0;
	int New;
	int item = 15;
	
	
	int ptr = start;
	//Print the linkedlist before insertion
	while (ptr != null){
		cout<<info[ptr]<<" ";
		ptr = link[ptr];
		
	}
	
	if(avail == null){
		cout<<"Overflow";
		exit(0);
	}
	New = avail;
	info[New] = item;
	avail = link[avail];
	link[New] = start;
    start = New;
    cout<<endl;
    ptr = start;
    
    while(ptr != null){
    	cout<<info[ptr]<<" ";
    	ptr = link[ptr];
	}
	
	
	
}
