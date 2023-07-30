#include <iostream>

using namespace std;

int arr[10] = { 5, 7, 9, 0, 3, 1, 6, 2, 4, 8 };

void quickSort(int arr[], int start, int end);
int main(void)
{
	int sizeArr = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, sizeArr - 1);
	for (int i = 0; i < sizeArr; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	return 0;
}

void quickSort(int arr[], int start, int end)
{
	if (start >= end)
		return;
	int pivot = start;
	int left = start + 1;
	int right = end;

	while (left <= right) {
		while (left <= end && arr[left] <= arr[pivot]) {
			left++;
		}

		while (right > start && arr[right] >= arr[pivot]) {
			right--;
		}

		if (left > right) {
			int temp = arr[right];
			arr[right] = arr[pivot];
			arr[pivot] = temp;
		}
		else {
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}

	quickSort(arr, start, right - 1);
	quickSort(arr, right + 1, end);
}