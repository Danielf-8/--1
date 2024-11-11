#include "Stack.h"
#include "Utils.h"
#include "LinkedList.h"

#include <iostream>
#include <sstream>
using namespace std;

#define SIZE_OF_A1 10

void push(Stack* s, unsigned int element)
{
	Numbers* newNode = new Numbers;
	if (s->first != NULL)
	{
		Numbers* temp = s->first;
		s->first = newNode;
		newNode->next = temp;
	}
	else
	{
		s->first = newNode;
	}
	newNode->number = element;
	s->countNode++;
}

int pop(Stack* s) // Return -1 if stack is empty
{
	int number = -1;

	if (s->first != NULL)
	{
		number = s->first->number;
		s->first = (s->first)->next;
		//(s->first) = NULL;
	}
	s->countNode--;

	return number;
}

void initStack(Stack* s)
{
	s->first = NULL;
	s->countNode = 0;
}

void cleanStack(Stack* s)
{
	Numbers* current = s->first;
	Numbers* tempCurrent = s->first;
	if (!isEmpty(s))
	{
		while (current != NULL)
		{
			tempCurrent = current;
			current = current->next;
			delete tempCurrent;
		}
	}
	else
	{
		current = NULL;
	}
}

bool isEmpty(Stack* s)
{
	return(s->countNode == 0);
}

void reverse(int* nums, unsigned int size)
{
	int index = 0;

	Stack* s1 = new Stack;

	initStack(s1);

	for (index = 0; index < size;index++)
	{
		push(s1, nums[index]);
	}
	for (index = 0;index < size;index++)
	{
		nums[index] = pop(s1);
	}

}

int* reverse10()
{
	int index = 0; 
	int* a1 = new int[SIZE_OF_A1];
	for (index = 0; index < SIZE_OF_A1;index++)
	{
		std::cout << "Enter positive number: ";
		std::cin >> a1[index];
	}

	reverse(a1, SIZE_OF_A1);

	return a1;
}