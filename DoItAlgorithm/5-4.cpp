#include <iostream>

using namespace std;

void recursiveFunction(int i);

int main(void)
{
	recursiveFunction(1);
	return 0;
}

void recursiveFunction(int i)
{
	if (i == 10)
	{
		return;
	}
	printf("%d��° ����Լ����� %d��° ����Լ��� ȣ���մϴ�.\n", i, i + 1);
	recursiveFunction(i + 1);
	printf("%d��° ����Լ��� �����մϴ�.\n", i);
}