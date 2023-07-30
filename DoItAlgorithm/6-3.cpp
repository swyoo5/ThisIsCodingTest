#include <iostream>

using namespace std;

int arr[10] = { 7, 5, 9, 0, 3, 1, 6, 2, 4, 8 };

int main(void)
{
	for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
		for (int j = i; j > 0; j--) {
			if (arr[j] < arr[j - 1]) {
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
			else {
				break;
			}
		}
	}

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << arr[i] << ' ';
	}
	cout << '\n';
	return 0;
}