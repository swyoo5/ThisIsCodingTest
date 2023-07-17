#include <iostream>
#include <stack>

using namespace std;

void printStackFromBottom(stack<int> s);

int main(void)
{
	stack<int> s;

	s.push(5);
	s.push(2);
	s.push(3);
	s.push(7);
	s.pop();
	s.push(1);
	s.push(4);
	s.pop();

	printStackFromBottom(s);
	while (!s.empty())
	{
		cout << s.top() << ' ';
		s.pop();
	}
	cout << '\n';
	return 0;
}

void printStackFromBottom(stack<int> s)
{
	stack<int> tempStack;

	while (!s.empty())
	{
		tempStack.push(s.top());
		s.pop();
	}

	while (!tempStack.empty())
	{
		cout << tempStack.top() << " ";
		tempStack.pop();
	}
	cout << '\n';
}