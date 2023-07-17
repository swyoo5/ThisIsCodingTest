#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;

	int* arr = new int[a];
	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + a);
	int max = arr[a - 1];
	int second_max = arr[a - 2];

	int result = 0;
	while (1)
	{
		for (int i = 0; i < c; i++)
		{
			if (b == 0)
			{
				break;
			}
			result += max;
			b--;
		}
		if (b == 0)
		{
			break;
		}
		result += second_max;
		b--;
	}
	cout << result << '\n';
}