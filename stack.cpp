//Implementation of stack in C Language
#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top=-1;

void push(int x)
{
	if(top<CAPACITY-1)
	{
	top=top+1;
	stack[top]=x;
	printf("Pushed:%d\n",x);
	}
	else
	{
		printf("Stack Overflow!\n");
	}
}
int pop()
{
	if(top>=0)
	{
		int val=stack[top];
		top=top-1;
		printf("Poped:%d\n",val);
		return val;
	}
	printf("Empty Stack!\n");
	return -1;
}
int peek()
{
	if(top>=0)
	{
	printf("Peek:%d\n",stack[top]);
	return stack[top];
	}
	printf("Empty Stack!\n");
	return -1;
}
void display()
{
	if(top>=0)
	{
		for(int i=0;i<=top;i++)
		{
			printf("%d ||",stack[i]);
		}
		printf("\n");
	}
	else
	{
		printf("Stack empty\n");
	}
}

int main()
{
	char choice='y';
	printf("STACK IMPLEMENTATION\n");
	do
	{
		int menu,value;
	
		printf("PUSH[1] || POP[2] || PEEK[3] || Display[4]\n");
		scanf("%d",&menu);
		switch(menu)
		{
			case 1:
				printf("Enter The Value:");
				scanf("%d",&value);
				push(value);
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
					
		}
		printf("Do you want to use again?[y/n]\n");
		scanf(" %c",&choice);
	}
	while(choice!='n');
	return 0;
}
