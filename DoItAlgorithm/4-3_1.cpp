#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string input_data;
    cin >> input_data;

    int row = input_data[1] - '0';
    int column = input_data[0] - 'a' + 1;

    int steps[8][2] = { {-2, -1}, {-1, -2}, {1, -2}, {2, -1}, {2, 1}, {1, 2}, {-1, 2}, {-2, 1} };
    int result = 0;

    for (int i = 0; i < 8; i++) {
        int next_row = row + steps[i][0];
        int next_column = column + steps[i][1];

        if (next_row >= 1 && next_row <= 8 && next_column >= 1 && next_column <= 8) {
            result++;
        }
    }

    cout << result << endl;

    return 0;
}