#include <iostream>

using namespace std;

int main(void)
{
	int inf = 999999999;
	int graph[3][3] = { {0, 7, 5}, {7, 0, inf}, {5, inf, 0} };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << graph[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}