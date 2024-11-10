#include "Queue.h"
#include <iostream>
#include <sstream>

void enqueue(Queue* q, unsigned int newValue)
{
	q->a[q->countVar] = newValue;
	q->countVar++;
}

int dequeue(Queue* q)
{
	int returnedVal = -1, index = 0;
	if (index < q->countVar)
	{
		returnedVal = q->a[index];
		q->a = &(q->a[1]);
		index++;
	}
	q->countVar--;
	return returnedVal;
}
void initQueue(Queue* q, unsigned int size)
{
	q->aSize = size;
	q->countVar = 0;
	q->a = new unsigned int[size];
}
void cleanQueue(Queue* q)
{
	int i = 0;
	for (i = 0;i < q->countVar;i++)
	{
		q->a[i] = 0;
		q->countVar--;
	}
}
bool isEmpty(Queue* s)
{
	return (s->countVar == 0);
}
bool isFull(Queue* s)
{
	return (s->countVar == s->aSize);
}