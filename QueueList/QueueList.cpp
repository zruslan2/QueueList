#include "QueueList.h"

template<typename T>
QueueList<T>::Node::Node(T date)
{
	this->date = date;
	this->nextPtr = nullptr;
}

template<typename T>
QueueList<T>::QueueList()
{
	firstPtr = nullptr;
	lastPtr = nullptr;
	count = 0;
}

template<typename T>
T & QueueList<T>::front()
{
	Node *curPtr = firstPtr;
	return curPtr->date;
}

template<typename T>
T & QueueList<T>::back()
{
	Node *curPtr = firstPtr;
	cout << curPtr->date << endl;
	while (curPtr != lastPtr)
	{
		curPtr = curPtr->nextPtr;		
	}
	return curPtr->date;
}

template<typename T>
void QueueList<T>::push(T date)
{
	if (count == 0)
	{
		firstPtr = new Node(date);
		lastPtr = firstPtr;
	}
	else
	{
		lastPtr->nextPtr = new Node(date);
		lastPtr = lastPtr->nextPtr;
	}
	count++;
}

template<typename T>
void QueueList<T>::pop()
{
	firstPtr = firstPtr->nextPtr;
	count--;
}

template<typename T>
bool QueueList<T>::empty()
{
	if (count == 0)
		return true;
	else
		return false;
}

template<typename T>
QueueList<T>::~QueueList()
{
	Node *curPtr;
	Node n = *firstPtr;

	curPtr = firstPtr;
	delete firstPtr;
	while (n.nextPtr != lastPtr)
	{
		curPtr = n.nextPtr;
		n = *curPtr;
		delete curPtr;
	}
}
