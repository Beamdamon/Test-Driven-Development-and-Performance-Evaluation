
#include <iostream>
using namespace std;

int stack[25], top;
void push(int[], int);
void pop(int[]);
void display(int[]);

int main()
{
	int choice, item = 0;
	cout << "Stack Menu" << endl;
	cout << "1 = display" << endl;
	cout << "2 = push" << endl;
	cout << "3 = pop" << endl;
	cout << "4 = exit" << endl;
	cin >> choice;
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
	for (int i = top - 1; i >= 0; i--)
	{
		cout << stack[i];
	}
}