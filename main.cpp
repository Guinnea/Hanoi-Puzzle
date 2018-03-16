#include <iostream>
#include "Stack.h"

using namespace std;

void moveDisk(int MaxHeight, Stack& From, Stack& To, Stack& Extra);
void printStacks(Stack S1, Stack S2, Stack S3);

void main()
{
	int disknum;
	cout << "Welcome to the Tower of Hanoi Puzzle!!!\n\n";
	cout << "How many disks would you live to be rearranged? : ";
	
	cin >> disknum;
	
	if (disknum <= 0 || disknum > 50)
	{
		cout << "Invalid entry. Number of disks has been set to 5\n";
		disknum = 5;
	}

	Stack pole1(disknum);
	Stack pole2(disknum);
	Stack pole3(disknum);

	for (int i = disknum; i > 0; i--)
	{
		pole1.Push(i);
	}
	
	cout << "\n\nBEGINNING :\n";
	printStacks(pole1, pole2, pole3);

	moveDisk(disknum, pole1, pole2, pole3);

	cout << "\n\nRESULT :\n";
	printStacks(pole1, pole2, pole3);
}

void moveDisk(int MaxHeight, Stack &From, Stack &To, Stack &Extra)
{
	if (MaxHeight == 1)
	{
		To.Push(From.Top());
		From.Pop();
	}
	else
	{
		MaxHeight = MaxHeight - 1;
		moveDisk(MaxHeight, From, Extra, To);
		To.Push(From.Top());
		From.Pop();
		moveDisk(MaxHeight, Extra, To, From); 
	}
}

void printStacks(Stack S1, Stack S2, Stack S3)
{
	cout << "\n\nPOLE 1:\n\n";
	S1.Print();
	cout << "\n\nPOLE 2:\n\n";
	S2.Print();
	cout << "\n\nPOLE 3:\n\n";
	S3.Print();
}