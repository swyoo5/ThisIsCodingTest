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
	printf("%d번째 재귀함수에서 %d번째 재귀함수를 호출합니다.\n", i, i + 1);
	recursiveFunction(i + 1);
	printf("%d번째 재귀함수를 종류합니다.\n", i);
}