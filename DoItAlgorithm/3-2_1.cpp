#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;

	int* num = new int[a];
	for (int i = 0; i < a; i++)
	{
		cin >> num[i];
	}

	sort(num, num + a);

	int max = num[a - 1];
	int second_max = num[a - 2];

	int max_count = (b / (c + 1)) * c + (b % (c + 1));

	int result = 0;
	result += max_count * max;
	result += (b - max_count) * second_max;
	cout << result << '\n';
	return 0;
}