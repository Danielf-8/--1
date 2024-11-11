#include "LinkedList.h"
#include <iostream>
#include <sstream>
using namespace std;


Numbers* crateNode(unsigned int numberAdd)
{
	Numbers* topNode = new Numbers;

	topNode->number = numberAdd;

	return topNode;
}

void add_new_number(Numbers** firstNode, unsigned int numberToAdd)
{
	Numbers* newNode = crateNode(numberToAdd);
	if ((*firstNode) != NULL)
	{
		Numbers* temp = (*firstNode);
		(*firstNode) = newNode;
		newNode->next = temp;
		temp->next = NULL;
	}
	else
	{
		(*firstNode) = newNode;
		newNode->next = NULL;
	}
}
int delete_number(Numbers** list)
{
	int number = (*list)->number;

	if ((*list) != NULL)
	{
		*list = (*list)->next;
		(*list) = NULL;
	}
	else
	{
		cout << "List is empty" << endl;
	}

	return number;
}
