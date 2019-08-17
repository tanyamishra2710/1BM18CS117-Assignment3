#include<stdio.h>
#include<conio.h>
#include<process.h>
#define stack_size 50

void push(int *top, int item)
{
	if(*top == stack_size)
	printf("Peter's cupboard is full\n");
	else
	{
		(*top)++;
		printf("One shirt has been added\n");
		printf("Total number of shirts are %d\n" ,item);
	}
}

int pop(int *top, int item)
{
	if(*top==0)
	{
		printf("Peter's cupboard is empty\n");
		item++;
	}
	else
	{
		printf("One shirt is removed\n");
		(*top--);
		printf("Shirts remaining %d\n" ,item);
	}
	return item;
}

void main()
{
	int stack[stack_size], top=0;
	int a, item=0;
	clrscr();
	while(1)
	{
		printf("Choose one option\n");
		printf("1. Add shirt\n");
		printf("2. Remove shirt\n");
		printf("3. Exit\n");
		scanf("%d" ,&a);
		switch(a)
		{
			case 1: {	item++;
					push(&top,item);
					break;
				}
			case 2: {
					item--;
					item=pop(&top, item);
					break;
				}
			case 3: {
					exit(0);
					break;
				}
			default:{
					printf("Wrong option");
					break;
				}
		}
	}
	getch();
}