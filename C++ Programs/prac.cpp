#include<iostream>
using namespace std;
int main()
{
   int info[10] = {30,50,80,20,40,70,10};
   int link[] = {4,5,1000,0,1,2,3,8,9,1000};
   int null = 1000;
   int start = 6;
   int avail = 7;
   int ptr = start;
   int newNode;
   int item = 60;
   int loc = 1;
   cout<<"*** List before insertion***"<<endl;
    while (ptr != null)
    {
        cout<<info[ptr]<<"  ";
        ptr = link[ptr];

    }
    if(avail == null)
    {
        cout<<" overflow";
        exit(0);
    }
    newNode = avail;
    avail = link[avail];
    newNode = avail;
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
    ptr = start;
    cout<<"\n\n list after insertion: ";
    while(ptr != null)
    {
        cout<<info[ptr]<<" ";
        ptr = link[ptr];
            }
    
}
