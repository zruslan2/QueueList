#include "QueueList.h"
#include "QueueList.cpp"

int main()
{
	QueueList<int> q;
	q.push(5);
	q.push(6);
	q.push(20);
	cout << q.front() << endl;
	cout << q.back() << endl;
	q.pop();
	cout << q.front() << endl;
	/*q.~QueueArray();*/
	return 0;
}