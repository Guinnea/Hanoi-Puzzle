#include "Stack.h"


Stack::Stack()
{
	top = -1;
	MAX_ITEMS = 5;
}

Stack::Stack(unsigned int Max)
{
	top = -1;
	MAX_ITEMS = Max;
}


//Stack::~Stack()
//{
//}

bool Stack::IsEmpty() const
{
	return (top == -1);
}

bool Stack::IsFull() const
{
	return (top == (MAX_ITEMS - 1));
}

void Stack::Push(int num)
{
	if (!IsFull())
	{
		top++;
		items[top] = num;
	}
	else
		cout << "STACK IS FULL\n";
}

void Stack::Pop()
{
	if (!IsEmpty())
	{
		top--;
	}
	else
		cout << "STACK IS EMPTY\n";
}

int Stack::Top() const
{
	if (!IsEmpty())
		return items[top];
	else
		cout << "STACK IS EMPTY\n";
	return -1;
}

void Stack::Print()
{
	if (!IsEmpty())
	{
		for (int i = top; i >= 0; i--)
		{
			for (int j = 0; j < (MAX_ITEMS - (items[i] - 1)); j++)
				cout << " ";

			for (int j = 1; j < items[i]; j++)
				cout << "O";

			cout << "O";
				
			for (int j = 1; j < items[i]; j++)
				cout << "O";

			for (int j = 0; j < (MAX_ITEMS - (items[i] - 1)); j++)
				cout << " ";

			cout << endl;
		}
	}
	else
	{
		for (int i = 0; i < MAX_ITEMS; i++)
		{
			for (int j = 0; j < MAX_ITEMS; j++)
			{
				cout << " ";
			}
			cout << "I\n";
		}
	}
}
