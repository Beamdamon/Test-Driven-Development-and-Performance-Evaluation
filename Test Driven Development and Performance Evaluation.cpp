#include <iostream>
using namespace std;

int stack[10], top;
void push(int[], int);
void pop(int[]);
void display(int[]);

int main()
{
	bool exit = false;
	int choice, item = 0;
	pop(stack);

	while (!exit)
	{
		cout << "Stack Menu" << endl;
		cout << "1 = display" << endl;
		cout << "2 = push" << endl;
		cout << "3 = pop" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			display(stack);
			break;
		case 2:
			cout << "Enter item to push" << endl;
			cin >> item;
			push(stack, item);
			break;
		case 3:
			pop(stack);
			break;
		default: 
			cout << "Invalid input" << endl;
		}
	}
}

void push(int stack[], int item)
{ 
	top++;
	stack[top] = item;
}

void pop(int stack[])
{
	int deletedItem;
	if (top == -1)
	{
		cout << "There is nothing in the stack" << endl;
	}
	else
	{
		deletedItem = stack[top];
		top--;
		cout << "deleted  " << deletedItem << endl;
	}
}

void display(int stack[])
{
	cout << "the stack is:  " << endl;
	for (int i = top; i >= 0; i--)
	{
		cout <<  stack[i] << endl;
	}
}