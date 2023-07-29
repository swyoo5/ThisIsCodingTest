#include <iostream>

using namespace std;

int arr[10] = { 7, 5, 9, 0, 3, 1, 6, 2, 4, 8 };
int main(void)
{
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		int min_index = i;
		for (int j = i + 1; j < sizeof(arr) / sizeof(arr[0]); j++) {
			if (arr[min_index] > arr[j])
				min_index = j;
		}
		int temp = arr[min_index];
		arr[min_index] = arr[i];
		arr[i] = temp;
	}

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	return 0;
}