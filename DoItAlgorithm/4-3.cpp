#include <iostream>

using namespace std;

int main(void)
{
	string position;
	cin >> position;

	int position_x, position_y;

	position_x = position[1] - '1'; // 0 ~ 7로 변환
	position_y = position[0] - 'a'; // 0 ~ 7로 변환

	int result = 0;
	if (position_y + 2 >= 0 && position_y + 2 <= 7) {
		if (position_x + 1 >= 0 && position_x + 1 <= 7) {
			result++;
		}

		if (position_x - 1 >= 0 && position_x - 1 <= 7) {
			result++;
		}
	}

	if (position_y - 2 >= 0 && position_y - 2 <= 7) {
		if (position_x + 1 >= 0 && position_x + 1 <= 7) {
			result++;
		}

		if (position_x - 1 >= 0 && position_x - 1 <= 7) {
			result++;
		}
	}

	if (position_x + 2 >= 0 && position_x + 2 <= 7) {
		if (position_y + 1 >= 0 && position_y + 1 <= 7) {
			result++;
		}

		if (position_y - 1 >= 0 && position_y - 1 <= 7) {
			result++;
		}
	}

	if (position_x - 2 >= 0 && position_x - 2 <= 7) {
		if (position_y + 1 >= 0 && position_y + 1 <= 7) {
			result++;
		}

		if (position_y - 1 >= 0 && position_y - 1 <= 7) {
			result++;
		}
	}
	cout << result << '\n';
	return 0;
}