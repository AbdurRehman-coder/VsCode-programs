#include<iostream>
using namespace std;
int main()
{
	int info[10] = {10,20,30,40,50,60,70}; 
	 int null =1000;
	int link[] = {1,2,3,4,5,6,1000,8,9,1000}; 

	int start = 0;
	int avail = 7;
	int newNode;
	int save;

	int item = 45;
	int loc;
	
	int ptr = start;
	 cout<<"\nlist befor insertion:    ";
	while(ptr != null)   
	{
		cout<<info[ptr]<<" ";
		ptr = link[ptr];
	}
	if(start == null || item < info[start])
	  {
	    loc = null;
       }
	   else{
	         save = start; ptr = link[start];
               
			   while (ptr != null)
		         {
		
			      if(item < info[ptr])
			        {
			          loc = save;
			           break;
			         }
			         save = ptr;
			         ptr = link[ptr];
		           }
	              loc = save; 
		     }
            
	 if(avail == null)
	  {
	 	cout<<"Overflow!";
	 	exit(0);
	   }
	    else{	
	           newNode  = avail;
	            avail = link[avail];
	             info[newNode] = item;
	   
	               if(loc == null)
	                 {
	   	                link[newNode] = start;
	   	
	                    
	   	                 start = newNode;
	                    }
	                else
	                 {
	                  link[newNode] = link[loc];
	                   link[loc] = newNode;  
	                  }
	        }
	   ptr = start;
	   
	   
	 cout<<"\n\nlist after insertion:    ";
	 	while(ptr != null)   
	{
		cout<<info[ptr]<<" ";
		ptr = link[ptr];
	}
	return 0;
	
}
