//Implemenation of queue in C Language
#include<stdio.h>
#define CAPACITY 5

void printQueue(void);

int ourQueue[CAPACITY];
int front=0,rear=-1,totalItem=0;
bool isFull()
{
	if(totalItem==CAPACITY)
	return true;
	return false;
}
bool isEmpty()
{
	if(totalItem==0)
	return true;
	return false;
}
void enqueue(int item)
{
	if(isFull())
	{
		printf("Sorry! Queue is full.\n");
		return;
	}
	rear=rear+1;
	//For Circular Queue
	//rear=(rear+1)%CAPACITY;
	ourQueue[rear]=item;
	totalItem++;
	printQueue();
}

int dequeue()
{
	if(isEmpty())
	{
		printf("Sorry Queue is empty!\n");
		return -1;
	}
	int frontItem=ourQueue[front];
	ourQueue[front]=-1;
	front=front+1;
	//For Circular Queue
	//front=(front+1)%CAPACITY;
	totalItem--; 
	printQueue();
	return frontItem;
}

void printQueue()
{
	int i;
	printf("Queue:");
	for(i=0;i<CAPACITY;i++)
	{
		printf("[%02d] ",ourQueue[i]);
	}
	printf("\n");
}

int main()
{
	printf("===========Implementation Of Queue in C Language=============\n");
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	dequeue();
	dequeue();
	
	enqueue(60);
	enqueue(70);
	return 0;
}
