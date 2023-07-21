#include <iostream>

#define MAX 1000

using namespace std;

char graph[MAX][MAX];
int row, col;

bool dfs(int x, int y);
int main(void)
{
	cin >> row >> col;
	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> graph[i][j];
		}
	}

	int result = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (dfs(i, j)) {
				result++;
			}
		}
	}

	cout << result << '\n';
	return 0;
}

bool dfs(int x, int y)
{
	if (x <= -1 || x >= row || y <= -1 || y >= col)
	{
		return false;
	}

	if (graph[x][y] == '0')
	{
		graph[x][y] = '1';
		dfs(x - 1, y);
		dfs(x, y - 1);
		dfs(x + 1, y);
		dfs(x, y + 1);
		return true;
	}

	return false;
}