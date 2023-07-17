#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void queueFromBack(queue<int> q);

int main(void)
{
	queue<int> q;

	q.push(5);
	q.push(2);
	q.push(3);
	q.push(7);
	q.pop();
	q.push(1);
	q.push(4);
	q.pop();

	queueFromBack(q);

	while (!q.empty())
	{
		cout << q.front() << ' ';
		q.pop();
	}
	cout << '\n'; 
	return 0;
}

void queueFromBack(queue<int> q)
{
	stack<int> tempStack;

	while (!q.empty())
	{
		tempStack.push(q.front());
		q.pop();
	}

	while (!tempStack.empty())
	{
		cout << tempStack.top() << ' ';
		tempStack.pop();
	}
	cout << '\n';
}