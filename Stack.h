#pragma once

#include <iostream>

using namespace std;

class Stack
{
public:
	Stack();
	Stack(unsigned int);
	bool IsEmpty() const;
	bool IsFull() const;
	void Push(int num);
	void Pop();
	int Top() const;
	void Print();
private:
	int MAX_ITEMS;
	int top;
	int items[64];
};