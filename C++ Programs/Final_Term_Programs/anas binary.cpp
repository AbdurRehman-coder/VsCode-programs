#include<iostream>
using namespace std;
int main()
{
	int N,BEG,END,MID,ITEM,LOC;
	BEG =0;
	END = 8;
	int DATA[ ] = {10,20,60,38,40,15,6,11,34};
	 
	ITEM = 40;
	 MID=(BEG+END)/2;
	 
	 while( BEG<=END && DATA[MID]!=ITEM)
	 {
	 	if(ITEM < DATA[MID])
	 	{
	 		END = MID-1;
		 }
		 else
		 {
		 	BEG = MID+1;
		 }
		 MID = (BEG+END)/2;
	 }
	 
	 if(DATA[MID]==ITEM)
	 {
	   LOC = MID;
	   cout<<"\nYour number is located on position: "<<LOC;
	 }
	 else
	 {
	 	cout<<"\nsearch unsuccessfull: ";
	 }
	return 0;
}
