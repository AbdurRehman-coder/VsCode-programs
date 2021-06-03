#include<iostream>
using namespace std;
int main()
{
	//an array of size 10 containing 7 elements 
	//the remaining 3 space is for empty nodes or available
	int info[10] = {35,25,50,20,45,75,15}; 
	
	 // 1000 represent null
	 int null =1000;
	 
	int link[] = {6,5,0,1,null,2,4,8,9,1000}; 
	
	//the linked list wil start from "0th" location
	int start = 3;
	
	//the 1st availble node is on "7th" position
	int avail = 7;
	
	//the location from which we want to delet eitem
	int loc;
	//the location of precceding node or prevoius node
	int locp;
	int item =77;   
	int save;
	int ptr = start;
	//to display the list befor deletion
	 cout<<"\nlist befor deletion:    ";
	while(ptr != null)   
	{
		cout<<info[ptr]<<" ";
		ptr = link[ptr];
	}
	if(start == null)
	{
		loc = null;
		locp = null;
	} else if(info[start] == item){
		        loc = start;
		        locp = null;
		       
	          }else{
	          	 
	          	 save = start;
	          	 ptr = link[start];
	          	
	          	 
				   
	          	 while(ptr != null)
	          	    {
	          	    	if(info[ptr] == item)
	          	    	{
	          	    		loc = ptr;
	          	    		locp = save;
	          	    		break;
						  }
						  save = ptr;
						  ptr = link[ptr];
						
	          	    	
					  }
					   if(ptr == null)
					   {
					   	loc =null;
					   	
					   }
					   else{
					   	loc = ptr;
					   	locp = save;
					   }
			  }
	 
	//to check that if the deleted node is 1st one
	if(loc == null)
	{
		cout<<"\n\nyour item  "<<item<<" is not in list";
		exit(0);
	}
	 else if(locp == null)
	  {
	    start = link[start];
       }
       //if the deleted node is not to be the 1st one
	   else{
	        link[locp] = link[loc];
		     }
		     
	  //to put the deleted node in availble nodes
	  avail = loc; 
	  link[loc]= avail;
		     
		     
		     
		//end of deletion  operation
	   
	   //if you want to display the linked list after insertion
	   //update ptr back to start
	   ptr = start;
	   
	   
	 cout<<"\n\nlist after deletion:    ";
	 	while(ptr != null)   
	{
		cout<<info[ptr]<<" ";
		ptr = link[ptr];
	}
	return 0;
	
}
