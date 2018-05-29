#pragma once
#include "Library.h"
template <typename T>
class QueueList
{
private:
	class Node
	{
	public:
		T date;
		Node* nextPtr;
		Node(T date);
	}*firstPtr, *lastPtr;
	size_t count;
public:
	QueueList();
	size_t size() { return count; }
	T& front();
	T& back();
	void push(T date);
	void pop();

	bool empty();

	virtual ~QueueList();
};


