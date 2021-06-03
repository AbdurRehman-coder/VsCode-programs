#include<iostream>
using namespace std;
int main()
{  int m = 2, n = 2, p = 2;
   

	int A[2][2]  = {{2,3},{3,7}};
	int B[2][2] = {{1,2},{3,4}};
	int MUL[2][2];
	
	
	   cout<<endl<<"Matrix \"A\" is:\n";
	   for(int i = 0; i < m; i++)
	   {
	   
	      for(int j = 0; j < p; j++)
	      {
	      	cout<<A[i][j]<<"\t";
		  }
		  cout<<endl<<endl;
       }
       
        cout<<endl<<"\nMatrix \"B\" is:\n\n";
	   for(int i = 0; i < p; i++)
	   {
	   
	      for(int j = 0; j < n; j++)
	      {
	      	cout<<B[i][j]<<"\t";
		  }
		  cout<<endl<<endl;
       }
       
       for(int i = 0; i < m; i++)
       {
       	for(int  j = 0; j < n; j++)
       	{
       		MUL[i][j] = 0;
       		for(int k = 0; k < p; k++)
       		{
       			MUL[i][j] = MUL[i][j] + A[i][k] * B[k][j];
			   }
		   } 
	   }
	   cout<<endl<<"\nMultiplication of A and B  is:\n\n";
	   for(int i = 0; i < m; i++)
	   {
	   
	      for(int j = 0; j < n; j++)
	      {
	      	cout<<MUL[i][j]<<"\t";
		  }
		  cout<<endl<<endl;
}
}
