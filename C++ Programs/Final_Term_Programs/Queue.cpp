#include<iostream>
using namespace std;

int front = -1;
int rear = -1;
int A[5];

bool isempty(){
	if(front == -1 && rear == -1)
	true;
	else 
	false;
}

void enqueue(int value){
	if(rear == 5-1)
	cout<<"Queue is Full:\n";
	else
	if(front == -1){
		front = 0;
		rear++;
		A[rear] = value;
		
	}
	
}
void dequeue(){
	if(isempty())
	cout<<"Queue is Full:\n";
	
	else if(front == rear) //it mean it is only one element in Queue
	front = rear = -1;
	else
	front++;
	
}
void showFront()
{
	if(isempty())
	cout<<"Queue is Full:\n";
	
	else
	cout<<"Element at front is:"<<A[front];
}
void displayQueue(){
	if(isempty())
	cout<<"Queue is Full \n";
	
	for(int i = front; i <= rear; i++){
		cout<<A[i]<<" ";
	}
}
int main(){
	enqueue(2);
	enqueue(8);
	enqueue(3);
	enqueue(9);
	displayQueue();
	showFront();
	
}
